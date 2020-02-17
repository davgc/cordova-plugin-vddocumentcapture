//
//  ValiDasPais.h
//  ValiDasLibrary
//
//  Created by Miguel Isla Urtasun on 20/7/16.
//  Copyright © 2016 das-nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ValiDasConstantes.h"

/**
 @brief Clase que representa un país.
 @details Consta de tres propiedades. La primera representa la enumeración del país. La segunda el nombre con el que se conoce ese país (en un futuro se localizará este strin). La tercera almacena el códgigo ISO del país. Todas son sólo de lectura para evitar que se pueda meter de forma errónea valores. Cada constructor rellena todas las pripiedades.
 @author Miguel Isla.
 @version 2.0.0.
 */
@interface ValiDasPais : NSObject

/**
 @brief Propiedad de sólo lectura que representa el código ISO internacional del país.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property(nonnull, nonatomic, strong, readonly) NSString *isoCode;

/**
 @brief Constructor de la clase que recibe un NSString con el código ISO del país a iniciar.
 @param isoCode (NSString *) Código ISO del país con el que iniciar la clase.
 @author Miguel Isla.
 @version 2.0.0.
 */
- (instancetype)initWithIsoCode:(NSString*)isoCode;

@end
