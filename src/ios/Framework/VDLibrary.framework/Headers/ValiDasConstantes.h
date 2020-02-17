//
//  ValiDasConstantes.h
//  ValiDasLibrary
//
//  Created by Miguel Isla Urtasun on 18/1/16.
//  Copyright © 2016 das-nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    MODE_XML,
    MODE_TM,
} detectorMode;

/**
 Definición de tipos de documento a encontrar
 @author Mikel Sánchez
 */
typedef enum {
    OBVERSE_WITHOUT_FLASH,
    OBVERSE_WITH_FLASH,
    REVERSE_WITHOUT_FLASH,
    REVERSE_WITH_FLASH,
    RECTANGLE_BOX_OBVERSE,
    RECTANGLE_BOX_REVERSE,
    PASSPORT_ANALYSIS,
} AnalysisType;

/**
 @brief Definición de tipos de documento según el estandar de ICAO
 @author Miguel Isla
 @version 2.0.0
 */
typedef enum {
    TD1,
    TD2,
    TD3,
} DocumentTravelType;

typedef enum{
    VIDEO,
    DOCUMENT
} SearchType;

typedef enum {
    PATTERN_ERROR,
    PATTERN_NOT_FOUND,
    PATTERN_FAR,
    PATTERN_MID_PROXIMITY,
    PATTERN_CLOSE,
    PATTERN_VERY_CLOSE,
    PATTERN_EXTREMELY_CLOSE,
    PATTERN_EXTREMELY_FAR,
    PATTERN_NOT_CENTERED
} PatternProximity;

/**
 Definición de tipos de error
 @author Mikel Sánchez
 */
typedef enum {
    ANALYSIS_OK,
    ANALYSIS_KO
} ResultType;


@interface ValiDasConstantes : NSObject //TODO: Used?

/**
 Constante para el acceso al campo de Primer Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasPrimerApellido;

/**
 Constante para el acceso al campo de Referencia de Primer Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaPrimerApellido;

/**
 Constante para el acceso al campo de Segundo Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasSegundoApellido;

/**
 Constante para el acceso al campo de Referencia de Segundo Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaSegundoApellido;

/**
 Constante para el acceso al campo de Apellidos
 @author Miguel Isla
 */
extern NSString *const kValiDasApellidos;

/**
 Constante para el acceso al campo de Referencia de Apellidos
 @author Miguel Isla
 */
extern NSString *const kValiDasReferenciaApellidos;

/**
 Constante para el acceso al campo de Nombre
 @author Mikel Sánchez
 */
extern NSString *const kValiDasNombre;

/**
 Constante para el acceso al campo de Referencia de Nombre
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaNombre;

/**
 Constante para el acceso al campo de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasSexo;

/**
 Constante para el acceso al campo de Referencia de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaSexo;

/**
 Constante para el acceso al campo de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasNacionalidad;

/**
 Constante para el acceso al campo de Referencia de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaNacionalidad;

/**
 Constante para el acceso al campo de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasFechaNacimiento;

/**
 Constante para el acceso al campo de Referencia de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaFechaNacimiento;

/**
 Constante para el acceso al campo de Fecha de Expedicion
 @author Miguel Isla
 */
extern NSString *const kValiDasFechaExpedicion;

/**
 Constante para el acceso al campo de Referencia de Fecha de Expedicion
 @author Miguel Isla
 */
extern NSString *const kValiDasReferenciaFechaExpedicion;

/**
 Constante para el acceso al campo de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasIDESP;

/**
 Constante para el acceso al campo de Referencia de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaIDESP;

/**
 Constante para el acceso al campo de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasFechaValidez;

/**
 Constante para el acceso al campo de Referencia de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaFechaValidez;

/**
 Constante para el acceso al campo de Número de DNI
 @author Mikel Sánchez
 */
extern NSString *const kValiDasDNINum;

/**
 Constante para el acceso al campo de Referencia de Número de DNI
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaDNINum;

/**
 Constante para el acceso al campo de Lugar de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasLugarNacimiento;

/**
 Constante para el acceso al campo de Referencia de Lugar de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaLugarNacimiento;

/**
 Constante para el acceso al campo de Provincia de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasProvinciaNacimiento;

/**
 Constante para el acceso al campo de Referencia de Provincia de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaProvinciaNacimiento;

/**
 Constante para el acceso al campo de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasDomicilio;

/**
 Constante para el acceso al campo de Referencia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaDomicilio;

/**
 Constante para el acceso al campo de Lugar de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasLugarDomicilio;

/**
 Constante para el acceso al campo de Referencia de Lugar de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaLugarDomicilio;

/**
 Constante para el acceso al campo de Provincia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasProvinciaDomicilio;

/**
 Constante para el acceso al campo de Referencia de Provincia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasReferenciaProvinciaDomicilio;

/**
 Constante para el acceso al campo de latitud.
 @author Miguel Isla.
 */
extern NSString *const kValiDasLatitud;

/**
 Constante para el acceso al campo de longitud.
 @author Miguel Isla.
 */
extern NSString *const kValiDasLongitud;

/**
 Constante para el acceso al campo de tipo de pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasTipo;

/**
 Constante para el acceso al campo de referencia del tipo de pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaTipo;

/**
 Constante para el acceso al campo de codigo del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasCodigo;

/**
 Constante para el acceso al campo de referencia del codigo del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaCodigo;

/**
 Constante para el acceso al campo de número de pasaporte del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasNumeroPasaporte;

/**
 Constante para el acceso al campo ESPAÑA del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasEspana;

/**
 Constante para el acceso al campo de referencia del número de pasaporte del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaNumeroPasaporte;

/**
 Constante para el acceso al campo de referencia del número de ID del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaNumeroID;

/**
 Constante para el acceso al campo del número de ID del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasNumeroID;

/**
 Constante para el acceso al campo de la referencia de la autoridad expendedora del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaAutoridad;

/**
 Constante para el acceso al campo de la autoridad expendedora del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasAutoridad;

/**
 Constante para el acceso al campo de referencia de la firma del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasReferenciaFirma;

/**
 Constante para el acceso al campo de firma del pasaporte.
 @author Miguel Isla.
 */
extern NSString *const kValiDasFirma;

/**
 Constante para el acceso al campo del diccionario: nota final.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaFinal;

/**
 Constante para el acceso al campo del diccionario: nota final OCR.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaValorMedioOCR;

/**
 Constante para el acceso al campo del diccionario: nota final OCR.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaValorMedioMetatexto;

/**
 Constante para el acceso al campo del diccionario: nota final recurrencia.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaValorMedioRecurrencia;

/**
 Constante para el acceso al campo del diccionario: nota final patrones.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaPatrones;

/**
 Constante para el acceso al campo del diccionario: nota final microescritura.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaMicroescritura;

/**
 Constante para el acceso al campo del diccionario: nota final kinegrama.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaKinegrama;

/**
 Constante para el acceso al campo del diccionario: nota final CLI.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaCLI;

/**
 Constante para el acceso al campo del diccionario: nota final lógica.
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreNotaLogica;

/**
 Constante para el acceso al campo de Nota de OCR del anverso
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreOCRAnverso;

/**
 Constante para el acceso al campo de Nota de OCR del reverso
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreOCRReverso;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaNacimientoRecurrencia;

/**
 Constante para el acceso al campo de Nota de Checksum de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaNacimientoChecksum;

/**
 Constante para el acceso al campo de Nota de validez de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaNacimientoValida;

/**
 Constante para el acceso al campo de Nota de Recurrencia de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreIDESPRecurrencia;

/**
 Constante para el acceso al campo de Nota de Checksum de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreIDESPChecksum;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaValidezRecurrencia;

/**
 Constante para el acceso al campo de Nota de Checksum de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaValidezChecksum;

/**
 Constante para el acceso al campo de Nota de validez de la Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreFechaValidezValida;

/**
 Constante para el acceso al campo de Nota de Recurrencia de DNI NUM
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreDNINUMRecurrencia;

/**
 Constante para el acceso al campo de Nota de Checksum de DNI NUM
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreDNINUMChecksum;

/**
 Constante para el acceso al campo de Nota de Checksum del número de ID del pasaporte.
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreNumeroIDChecksum;

/**
 Constante para el acceso al campo de Nota de Checksum del número de pasaporte.
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreNumeroPasaporteChecksum;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreSexoRecurrencia;

/**
 Constante para el acceso al campo de Nota de Valor de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreSexoValor;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreNacionalidadRecurrencia;

/**
 Constante para el acceso al campo de Nota de Valor de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreNacionalidadValor;

/**
 Constante para el acceso al campo de Nota de Checksum de MRZ
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMRZChecksum;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Primer Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScorePrimerApellidoRecurrencia;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Segundo Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreSegundoApellidoRecurrencia;

/**
 Constante para el acceso al campo de Nota de Recurrencia de Nombre
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreNombreRecurrencia;

/**
 Constante para el acceso al campo del diccionario: bandera.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreBandera;

/**
 Constante para el acceso al campo del diccionario: chip.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreChip;

/**
 Constante para el acceso al campo del diccionario: europa.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreEuropa;

/**
 Constante para el acceso al campo del diccionario: ministerio.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreMinisterio;

/**
 Constante para el acceso al campo del diccionario: título.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreTitulo;

/**
 Constante para el acceso al campo del diccionario: CaraFrontal.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreCaraFrontal;

/**
 Constante para el acceso al campo del diccionario: micro.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreMicroAnverso;
/**
 Constante para el acceso al campo del diccionario: micro reverso.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreMicroReverso;

/**
 Constante para el acceso al campo del diccionario: color.
 @author Miguel Isla
 */
extern NSString* const kValiDasScoreColor;

/**
 Constante para el acceso al campo de Nota de OCR de España
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreOCREspana;

/**
 Constante para el acceso al campo de Nota de OVI de España
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreOVIEspana;

/**
 Constante para el acceso al campo del diccionario: Letra D del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaDSinFlash;

/**
 Constante para el acceso al campo del diccionario: Letra N del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaNSinFlash;

/**
 Constante para el acceso al campo del diccionario: Signature del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaSignatureSinFlash;

/**
 Constante para el acceso al campo del diccionario: Letra D del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaDConFlash;

/**
 Constante para el acceso al campo del diccionario: Letra N del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaNConFlash;

/**
 Constante para el acceso al campo del diccionario: Signature del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreKinegramaSignatureConFlash;

/**
 Constante para el acceso al campo del diccionario: CLI sin flash
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreCLISinFlash;

/**
 Constante para el acceso al campo del diccionario: CLI con flash
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreCLIConFlash;

/**
 Constante para el acceso al campo del diccionario: Iniciales del CLI
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreCLIIniciales;

/**
 Constante para el acceso al campo del diccionario: Textura del CLI
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreCLITextura;

/**
 Constante para el acceso al campo del diccionario: Recurrencia del Primer Apellido con flash
 @author Miguel Isla
 */
extern NSString *const kValiDasScorePrimerApellidoRecurrenciaFlash;

/**
 Constante para el acceso al campo del diccionario: Recurrencia del Segundo Apellido con flash
 @author Miguel Isla
 */
extern NSString *const kValiDasScoreSegundoApellidoRecurrenciaFlash;

/**
 Constante para el acceso al campo del diccionario: Metatexto alturas principales
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMetatextoAlturasPrincipales;

/**
 Constante para el acceso al campo del diccionario: Metatexto IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMetatextoIDESP;

/**
 Constante para el acceso al campo del diccionario: Metatexto DNINUM
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMetatextoDNINUM;

/**
 Constante para el acceso al campo del diccionario: Metatexto alineación anverso
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMetatextoAlineacionAnverso;

/**
 Constante para el acceso al campo del diccionario: Metatexto MRZ
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreMetatextoMRZ;

/**
 Constante para el valor de l anota de la localización.
 @author Mikel Sánchez
 */
extern NSString *const kValiDasScoreLocalizacion;

/**
 Constante para el acceso al campo de captura del anverso sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasCapturaAnversoSinFlash;

/**
 Constante para el acceso al campo de captura del anverso con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasCapturaAnversoConFlash;

/**
 Constante para el acceso al campo de captura del reverso
 @author Mikel Sánchez
 */
extern NSString *const kValiDasCapturaReverso;

/**
 Constante para el acceso al campo de captura del selfie
 @author Mikel Sánchez
 */
extern NSString *const kValiDasCapturaSelfie;

/**
 Constante para el acceso al campo de Región de imagen del anverso sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenAnversoSinFlash;

/**
 Constante para el acceso al campo de Región de imagen del anverso con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenAnversoConFlash;

/**
 Constante para el acceso al campo de Región de imagen del reverso
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReverso;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Primer Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaPrimerApellido;

/**
 Constante para el acceso al campo de Región de imagen de Primer Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenPrimerApellido;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Segundo Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaSegundoApellido;

/**
 Constante para el acceso al campo de Región de imagen de Segundo Apellido
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenSegundoApellido;

/**
 Constante para el acceso al campo de Región de imagen de referencia de apellidos
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaApellidos;

/**
 Constante para el acceso al campo de Región de imagen de apellidos
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenApellidos;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Nombre
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaNombre;

/**
 Constante para el acceso al campo de Región de imagen de Nombre
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenNombre;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaSexo;

/**
 Constante para el acceso al campo de Región de imagen de Sexo
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenSexo;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaNacionalidad;

/**
 Constante para el acceso al campo de Región de imagen de Nacionalidad
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenNacionalidad;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaFechaNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de Fecha de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenFechaNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de referencia de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaIDESP;

/**
 Constante para el acceso al campo de Región de imagen de IDESP
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenIDESP;

/**
 Constante para el acceso al campo de Región de imagen de España
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenEspana;

/**
 Constante para el acceso al campo de Región de imagen de PASAPORTE/PASSPORT
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenPasaporte;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaFechaValidez;

/**
 Constante para el acceso al campo de Región de imagen de Fecha de Validez
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenFechaValidez;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Fecha de Expedicion
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaFechaExpedicion;

/**
 Constante para el acceso al campo de Región de imagen de Fecha de Expedicion
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenFechaExpedicion;

/**
 Constante para el acceso al campo de región de imagen de la firma.
 @author Miguel Isla
 */
extern NSString *const kValiDasImagenFirma;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Número de DNI
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaDNINum;

/**
 Constante para el acceso al campo de Región de imagen de Número de DNI
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenDNINum;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Número de pasaporte
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaNumeroPasaporte;

/**
 Constante para el acceso al campo de Región de imagen de Número de pasaporte
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenNumeroPasaporte;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Número de ID
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaNumeroID;

/**
 Constante para el acceso al campo de Región de imagen de Número de ID
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenNumeroID;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Lugar de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaLugarNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de Lugar de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenLugarNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Lugar de domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaLugarDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de Lugar de domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenLugarDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Provincia de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaProvinciaNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de Provincia de Nacimiento
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenProvinciaNacimiento;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Hijo De
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaHijoDe;

/**
 Constante para el acceso al campo de Región de imagen de Hijo De
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenHijoDe;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Lugar de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaLugarDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de Lugar de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenLugarDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de referencia de Provincia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenReferenciaProvinciaDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de Provincia de Domicilio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenProvinciaDomicilio;

/**
 Constante para el acceso al campo de Región de imagen de MRZ1
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMRZ1;

/**
 Constante para el acceso al campo de Región de imagen de MRZ2
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMRZ2;

/**
 Constante para el acceso al campo de Región de imagen de MRZ3
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMRZ3;

/**
 Constante para el acceso al campo de Región de imagen de España sin Flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenEspanaSinFlash;

/**
 Constante para el acceso al campo de Región de imagen de España con Flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenEspanaConFlash;

/**
 Constante para el acceso al campo de Región de imagen de la bandera
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenBandera;

/**
 Constante para el acceso al campo de Región de imagen del chip
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenChip;

/**
 Constante para el acceso al campo de Región de imagen de Europa
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenEuropa;

/**
 Constante para el acceso al campo de Región de imagen del ministerio
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMinisterio;

/**
 Constante para el acceso al campo de Región de imagen del título
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenTitulo;

/**
 Constante para el acceso al campo de Región de imagen de la cara frontal
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenCaraFrontal;

/**
 Constante para el acceso al campo de Región de imagen de la microescritura
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMicro;

/**
 Constante para el acceso al campo de Región de imagen de la microescritura del reverso.
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenMicroReverso;

/**
 Constante para el acceso al campo de Región de imagen del CLI sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenCLISinFlash;

/**
 Constante para el acceso al campo de Región de imagen del CLI con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenCLIConFlash;

/**
 Constante para el acceso al campo de Región de imagen del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaSinFlash;

/**
 Constante para el acceso al campo de Región de imagen del caracter D del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaDSinFlash;

/**
 Constante para el acceso al campo de Región de imagen del caracter N del kinegrama sin flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaNSinFlash;

/**
 Constante para el acceso al campo de Región de imagen del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaConFlash;

/**
 Constante para el acceso al campo de Región de imagen del caracter D del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaDConFlash;

/**
 Constante para el acceso al campo de Región de imagen del caracter N del kinegrama con flash
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenKinegramaNConFlash;

/**
 Constante para el acceso al campo de Región de imagen del selfie
 @author Mikel Sánchez
 */
extern NSString *const kValiDasImagenSelfie;

@end

