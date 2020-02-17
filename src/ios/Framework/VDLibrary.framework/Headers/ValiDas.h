//
//  ValiDasLibrary.h
//  ValiDasLibrary
//
//  Created by Mikel Sánchez Yoldi on 21/12/15.
//  Copyright © 2015 das-nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ImageIO/ImageIO.h>
#import "ValiDasDocumento.h"
#import "ValiDasConstantes.h"
#import "FirebaseTagProtocol.h"

@protocol ProtocoloValiDas <NSObject>

@optional
/**
 @brief Método delegado invocado cuando se detecta el frontal del DNI.
 @author Miguel Isla.
 */
- (void)documentObverseDetected;

/**
 @brief Método delegado invocado cuando se detecta el reverso del DNI.
 @author Miguel Isla.
 */
- (void)documentReverseDetected;

/**
 @brief Método delegado invocado cuando se detecta el reverso del DNI.
 @author Miguel Isla.
 */
- (void)passportDetected;

/**
 @brief Método delegado invocado cuando se detecta el selfie del usuario.
 @author Miguel Isla.
 */
- (void)frontFaceDetected;

/**
 @brief Método delegado invocado cuando se desea alertar debido al brillo.
 @author Miguel Isla.
 */
- (void)brightDetected;

/**
 @brief Método delegado invocado cuando se desea quitar la alerta del brillo.
 @author Miguel Isla.
 */
- (void)deleteBright;

/**
 @brief Método delegado invocado cuando se desea notificar la distaincia a la que se encuentra el DNI.
 @param proximity Distancia a la que se encuentra el DNI.
 @author Miguel Isla.
 */
- (void)patternDistance:(PatternProximity)proximity;

/**
 @brief Método delegado invocado cuando se desea notificar la finalización de la detección de un documento
 @param result Tipo de resultado
 @author Mikel Sánchez
 */
- (void)analysisFinished:(ResultType)result;

/**
 @brief Método que devuelve un diccionario con la información de los países y documentos disponibles para su procesado en la aplicación.
 @param dictionary (NSDictionary <NSString *, ValiDasDocumento *> *) Diccionario con la información de los paíse en las claves y de los documentos en los valores.
 @author Miguel Isla.
 @version 2.0.0.
 */
- (void)getDocumentDictionary:(NSDictionary <NSString *, ValiDasDocumento *> *)dictionary;

/**
 @brief Método delegado que envía la información del pais en el que se encuentra el dispositivo.
 @param country (ValiDasPais *) Pais en el que se localiza el dispositivo.
 @author Miguel Isla.
 @version 2.0.0.
 */
- (void)countryLocalization:(ValiDasPais *)country;

/**
 @brief Método delegado que envía la información de los datos contextuales que se encuentra el dispositivo.
 @param contextualData (NSDictionary *), datos contextuales del dispositivo.
 @author Miguel Isla.
 @version 2.0.0.
 */
- (void)contextualDataFinished:(NSDictionary *)contextualData;

/**
 @brief Método delegado que envía la información del documento encontrado.
 @param docType (NSArray<NSNumber *> *), tipo de documento encontrado.
 */
- (void)documentTypeFound: (NSArray<NSString *> *) docType;

- (void)fpsCalculated:(int)fps;

@end

@interface ValiDas : NSObject

/**
 @brief Método invocado cuando se desea inicializar el sistema vali-Das
 @param delegate (id) Instancia de la clase.
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (void)initWithDelegate:(Class)delegate;

/**
 @brief Método invocado cuando se desea finalizar el sistema vali-Das
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (void)finalizeInstance;

/**
 @brief Método que permite programar un delegado al que devolver los eventos del protocolo
 @param delegate (id) Instancia de la clase.
 @author Miguel Isla Urtasun.
 @version 2.0.0
 */
+ (void)setDelegate:(id)delegate;

/**
 @brief Método invocado cuando se desea obtener los datos contextuales
 @author Iván Del Burgo
 @version 2.0.0
 */
+ (void)getContextualData;

/**
 @brief Método que busca un documento en una imagen
 @param documentArray (NSArray<ValiDasDocumento*>*) Array de documentos a buscar
 @param type (AnalysisType) Tipo de análisis a realizar
 @param image (UIImage *) Imagen original
 @returns GRect Región que contiene las regiones del documento
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (CGRect)searchDocumentsWithDocs:(NSArray<ValiDasDocumento*>*)documentArray analysisType:(AnalysisType)type image:(UIImage*)image andSearchType: (SearchType) searchType;

/**
 @brief Método que busca una cara frontal en una imagen
 @param image (UIImage *) Imagen original
 @param tightness (NSString *)
 @returns GRect Región que contiene la región de la cara
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (CGRect)searchFrontalFace:(UIImage*)image withTightness:(NSString *)tightness;

/**
 @brief Método que busca una cara frontal en una imagen
 @param image (UIImage *) Imagen original
 @returns GRect Región que contiene la región de la cara
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (CGRect)searchFrontalFaceVideo:(UIImage*)image;

/**
 @brief Método que analiza una imagen que contiene una cara frontal
 @param image (UIImage *) Imagen original
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (void)analizeFrontalFace:(UIImage *)image;

/**
 @brief Método que analiza un vídeo en busca de pruebas de vida.
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (void)analizeProofOfLife;

/**
 @brief Método que indica fin de captura de datos.
 @author Mikel Sánchez
 @version 2.2.0
 */
+ (void)stopCaptureData;

/**
 @brief Método que demanda la imagen selfie
 @returns UIImage Imagen selfie
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (UIImage *)getSelfieImage;

/**
 @brief Método que cancela el proceso de validación.
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (void)cancel;

/**
 @brief Método que devuelve la versión de la librería
 @returns NSString Versión de la librería
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (NSString *)version;

+ (UIImage *)getStoredImage:(int)analysisType;

/**
 @brief Método que devuelve el valor de enfoque a utilizar
 @param standardType (NSString*) Standard_type del documento
 @returns double Valor de enfoque
 @author Mikel Sánchez
 @version 2.0.0
 */
+ (double)getFocusValue:(NSString*)standardType;

/**
 Sets the screen size for tests (device not available)
 @param size size of the screen.
 */
+ (void) setScreenSizeForTest: (CGSize) size;

/**
 @brief Get the reference region where to locate the document.
 @returns (CGRect) Rect with the region.
 */
+ (CGRect)getReferenceRegion;
+ (CGRect)getReferenceRegion:(NSString*)standardType;

/**
 @brief Get the reference region where to locate the passport.
 @returns (CGRect) Rect with the region.
 */
+ (CGRect)getReferenceRegionPassport;

/**
 @brief Gets the device model string.
 @returns (NSString *) String with the device model.
 */
+ (NSString *)getDeviceModel;
+ (void)restartSearch;
+ (CGRect)getReferenceRegionOpenCV:(CGSize)sizeImage;

/**
 @brief Returns all the available default configuration.
 @returns (NSDictionary*) Default configuration.
 */
+(NSDictionary*)getDefaultConfig;

/**
 @brief Returns all the available documents info ordered by group.
 @returns (NSDictionary *) Available Documents by Group.
 */
+ (NSDictionary*)getAvailableDocumentsByGroup;

/**
 @brief Returns all the available documents.
 @returns (NSArray *) Available Documents.
 */
+ (NSArray*)getAvailableDocuments;

/**
 @brief Returns the standard type for document.
 @param doc (NSString*) Document Id
 @returns (NSString *) standard type
 */
+ (NSString*)getStandardTypeForDocument:(NSString*)doc;

/**
 @brief Returns the image template name for document.
 @param doc (NSString*) Document Id
 @param forReverse (BOOL) If search for reverse or not
 @returns (NSString *) standard type
 */
+ (NSString*)getTemplateNameForDocument:(NSString*)doc forReverse:(BOOL)forReverse;

/**
 @brief Returns the document id for a document legacy id.
 @param legacyId (NSString*) legacy id
 @returns (NSString *) Document id
 */
+ (NSString*)getDocumentForLegacyId:(NSString*)legacyId;
+ (NSString*)getLegacyIdForDocument:(NSString*)document;


/**
 @brief Returns the ValiDasDocument for a document legacy id.
 @param legacyId (NSString*) id
 @returns (NSString *) ValiDasDocumento or nil
 */
+ (ValiDasDocumento*)getValiDasDocumentForLegacyId:(NSString*)legacyId;

/**
 @brief Returns if document is type Passport.
 @param docType (NSString*) Document Id
 @returns (BOOL) true if it's type Passport
 */
+ (BOOL)isDocumentTypePassport:(NSString*)docType;

/**
 @brief Returns if document is type At Driving License 2004.
 @param doc (NSString*) Document Id
 @returns (BOOL) true if it's type At Driving License 2004
 */
+ (BOOL)isDocumentTypeAtDrivingLicense2004:(NSString*)doc;

+ (BOOL) isDocumentSmart:(ValiDasDocumento*) document;

@end
