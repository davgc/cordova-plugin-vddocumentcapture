//
//  ValiDasDocumento.h
//  ValiDasLibrary
//
//  Created by Miguel Isla Urtasun on 19/7/16.
//  Copyright © 2016 das-nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ValiDasConstantes.h"
#import "ValiDasPais.h"

/**
 @brief Clase que representa la información necesaria que debe tener un documento para su correcto procesado.
 @details Se muestra todo tipo de información, desde el nombre asociado al documento hasta la imagen asociada al mismo pasando por otros parámetros como por ejemplo el tipo de documento según el ICAO.
 @author Miguel Isla.
 @version 2.0.0.
 */
@interface ValiDasDocumento : NSObject

/**
 @brief Propiedad con el nombre del documento.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonnull, nonatomic, strong) ValiDasPais *country;

/**
 @brief Propiedad con el nombre a mostrar por pantalla del documento.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonnull, nonatomic, strong) NSString *name;

/**
 @brief Propiedad con la imagen asociada al documento.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonnull, nonatomic, strong) UIImage *image;

/**
 @brief Propiedad con el valor asociado True si has que tomar imagen del anverso sin flash y False en caso contrario.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonatomic) BOOL obverse;

/**
 @brief Propiedad con el valor asociado True si has que tomar imagen del reverso sin flash y False en caso contrario.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonatomic) BOOL reverse;

/**
 @brief Propiedad con el tipo de documento según la especificación del ICAO.
 @author Miguel Isla.
 @version 2.0.0.
 */
@property (nonatomic) NSString *type;

/**
 @brief Propiedad con el standard type del documento.
 @author Usue Napal.
 */
@property (nonatomic) NSString *standardType;

@end
