#import "CDVVDDocumentCapture.h"

#import "VDWebView.h"

#import <VDDocumentCapture/VDDocumentCapture.h>

@implementation CDVVDDocumentCapture

- (void)pluginInitialize
{
  
}

- (void)start:(CDVInvokedUrlCommand*)command
{
    
    NSMutableDictionary* config = [NSMutableDictionary new];
    config = [command argumentAtIndex:0];
    NSArray<NSString *>* docTypes = [command argumentAtIndex:1];
    
    self.callbackId = command.callbackId;
    CDVPluginResult* pluginResult;
    
    if (docTypes == NULL){
         pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR
                                                   messageAsDictionary:@{@"type":@"msg",@"msg":@"missing mandatory parameters!"}];
    }else{
       
         pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK
                                            messageAsDictionary:@{@"type":@"msg",@"msg":@"ok"}];
    }
    
    [pluginResult setKeepCallback:[NSNumber numberWithBool:YES]];
    
    [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
    
    UIViewController* VView;
    VView = [[VDWebView alloc] initWithTarget:self
                                    andConfig:config
                                  andDocTypes:docTypes];
    [self.viewController presentViewController:VView animated:YES completion:nil];
   
}


- (void) VDDocumentCaptured:(NSData *) imageData withCaptureType:(VDCaptureType) captureType
      andDocument:(NSArray<VDDocument *> *) document {
  // Do with image as needed.
    NSLog(@"Document Captured");
    
    NSString* base64Img = [self base64forData:imageData];
    NSString* captureTypeStr = [self getCaptureType:captureType];
    
    CDVPluginResult* pluginResult = [CDVPluginResult
                                     resultWithStatus:CDVCommandStatus_OK
                                     messageAsDictionary:@{@"imageData":base64Img,
                                                           @"captureType":captureTypeStr,
                                                           @"document":document.description}];
    

   
    [pluginResult setKeepCallback:[NSNumber numberWithBool:YES]];
    
    [self.commandDelegate sendPluginResult:pluginResult callbackId:self.callbackId];
    
    
    
        
}

- (NSString*)getCaptureType:(VDCaptureType)captureType{
    
     NSString *result = nil;
    switch (captureType) {
            case VD_OBVERSE_WITH_FLASH:
                result = @"VD_OBVERSE_WITH_FLASH";
            break;
            
            case VD_REVERSE_WITH_FLASH:
                result = @"VD_REVERSE_WITH_FLASH";
            break;
            
            case VD_OBVERSE_WITHOUT_FLASH:
                result = @"VD_OBVERSE_WITHOUT_FLASH";
            break;
            
            case VD_REVERSE_WITHOUT_FLASH:
                result = @"VD_REVERSE_WITHOUT_FLASH";
            break;
           
            default:
                result = nil;
            break;
    }
    return result;
}

- (NSString*)base64forData:(NSData*)theData {
    const uint8_t* input = (const uint8_t*)[theData bytes];
    NSInteger length = [theData length];

    static char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";

    NSMutableData* data = [NSMutableData dataWithLength:((length + 2) / 3) * 4];
    uint8_t* output = (uint8_t*)data.mutableBytes;

    NSInteger i;
    for (i=0; i < length; i += 3) {
        NSInteger value = 0;
        NSInteger j;
        for (j = i; j < (i + 3); j++) {
            value <<= 8;

            if (j < length) {
                value |= (0xFF & input[j]);
            }
        }

        NSInteger theIndex = (i / 3) * 4;
        output[theIndex + 0] =                    table[(value >> 18) & 0x3F];
        output[theIndex + 1] =                    table[(value >> 12) & 0x3F];
        output[theIndex + 2] = (i + 1) < length ? table[(value >> 6)  & 0x3F] : '=';
        output[theIndex + 3] = (i + 2) < length ? table[(value >> 0)  & 0x3F] : '=';
    }

    return [[NSString alloc] initWithData:data encoding:NSASCIIStringEncoding] ;
}


@end


