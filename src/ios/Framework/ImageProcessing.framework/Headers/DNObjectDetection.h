//
//  DNObjectDetection.h
//  ImageProcessing
//
//  Created by Mikel Sánchez Yoldi on 11/1/16.
//  Copyright © 2016 das-nano. All rights reserved.
//

#import "DNObjectDetectionConfig.h"

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OpenCVObjectDetectionWrapper;

@interface DNObjectDetection : NSObject {
    
    /**
     Instancia de pasarela entre código Objetive-C y C++
     @author Mikel Sánchez
     */
    OpenCVObjectDetectionWrapper *_wrapper;
    
}

/**
 Método constructor que devuelve una instancia para buscar objetos
 @param aConfig Configuración de la búsqueda de objetos
 @returns Instancia para buscar objetos
 @author Mikel Sánchez
 */
- (instancetype)init:(DNObjectDetectionConfig *)aConfig;

/**
 Método que devuelve una lista de candidatos a objetos
 @param image Imagen a analizar
 @returns Lista de CGRect
 @author Mikel Sánchez
 */
- (NSArray *)findObjects:(UIImage *)image;

/**
 Método para finalizar la instancia de búsqueda de objetos
 @author Mikel Sánchez
 */
- (void)finish;

/**
 Configuración de la búsqueda de objetos
 @author Mikel Sánchez
 */
@property (nonatomic, readonly) DNObjectDetectionConfig *configuration;

@end
