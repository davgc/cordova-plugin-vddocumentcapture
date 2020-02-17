//
//  VDEnums.h
//  VDDocumentCapture
//
//  Copyright © 2017 das-Nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 @brief Enumeration that defines the different capturing situations available.
 */
typedef enum {
    VD_OBVERSE_WITHOUT_FLASH,   ///< Obverse without flash.
    VD_OBVERSE_WITH_FLASH,      ///< Obverse with flash.
    VD_REVERSE_WITHOUT_FLASH,   ///< Reverse without flash.
    VD_REVERSE_WITH_FLASH,      ///< Reverse with flash.
} VDCaptureType;

/**
 @brief (DEPRECATED) Enumeration that defines the documents available.
 */
typedef enum {
    VD_OTHERS = 0,
    VD_DNI_20_ESPANA = 1,                ///< Spanish 2.0 document                // 1
    VD_DNI_30_ESPANA = 2,                ///< Spanish 3.0 document                // 2
    VD_NIE_ESPANA_2011 = 3,              ///< Spanish NIE 2011                    // 3
    VD_IFE_MEXICO_C = 5,                 ///< Mexican IFE C                       // 5
    VD_IFE_MEXICO_D = 6,                 ///< Mexican IFE D                       // 6
    VD_IFE_MEXICO_E = 7,                 ///< Mexican IFE E                       // 7
    VD_NIE_ESPANA_2010 = 10,             ///< Spanish NIE 2010                    // 10
    VD_PASSPORT = 11,                    ///< Passport                            // 11
    VD_KAD_MALASIA_2001 = 12,            ///< Malaysian KAD 2001                  // 12
    VD_DNI_ARGENTINA_2009 = 13,          ///< Argentinian 2009 document           // 13
    VD_DNI_ARGENTINA_2012 =14,           ///< Argentinian 2012 document           // 14
    VD_DNI_PERU_2013 = 20,               ///< Peruan 2013 document                // 20
    VD_PE_IDCARD_2007 = 21,              ///< Peru 2007
    VD_CO_IDCARD_2000 = 22,              ///< Colombia 2000
    VD_CL_IDCARD_2002 = 30,              ///< Chile 2002 ID card
    VD_CL_IDCARD_2013 = 31,              ///< Chile 2013 ID card
    VD_VE_IDCARD_2011 = 40,              ///< Venezuela 2011 ID card
    VD_PY_IDCARD_2007 = 50,              ///< Paraguay 2007 ID card
    VD_PY_IDCARD_2009 = 51,              ///< Paraguay 2009 ID card
    VD_PT_IDCARD_2015 = 60,              ///< Portugal 2015 ID card
    VD_DE_IDCARD_2007 = 70,              ///< Germany 2007 ID card
    VD_DE_IDCARD_2010 = 71,              ///< Germany 2010 ID card
    VD_BE_IDCARD_2008 = 80,              ///< Belgium 2010 ID card
    VD_BE_IDCARD_2010 = 81,              ///< Belgium 2010 ID card
    VD_FI_IDCARD_2011 = 90,              ///< Finland 2011 ID card
    VD_FI_IDCARD_2017 = 91,              ///< Finland 2017 ID card
    VD_FR_IDCARD_1994 = 100,             ///< France 1994 ID card
    VD_NL_IDCARD_2011 = 110,             ///< Netherlands 2011 ID card
    VD_NL_IDCARD_2014 = 111,             ///< Netherlands 2014 ID card
    VD_IT_IDCARD_2004 = 120,             ///< Italy 2004 ID card
    VD_IT_IDCARD_2016 = 121,             ///< Italy 2016 ID card
    VD_CH_IDCARD_2003 = 130,             ///< Switzerland 2003-2005 ID card
    VD_AT_IDCARD_2002 = 140,             ///< Austria 2002 ID card
    VD_AT_IDCARD_2010 = 143,             ///< Austria 2010 ID card
    VD_AT_DRIVINGLICENSE_2004 = 144,     ///< Austria 2004 Driving license
    VD_AT_DRIVINGLICENSE_2006 = 141,     ///< Austria 2006 Driving license
    VD_AT_DRIVINGLICENSE_2014 = 142,     ///< Austria 20014 Driving license
    VD_PL_IDCARD_2001 = 150,             ///< Poland 2001-2013 ID card
    VD_PL_IDCARD_2015 = 151,             ///< Poland 2015 ID card
    VD_RO_IDCARD_2009 = 160,             ///< Romania 2009-2017 ID card
    VD_SE_IDCARD_2012 = 170,             ///< Sweden 2012 ID card
    VD_BG_IDCARD_2006 = 180,             ///< Bulgaria 2000-2006 ID card
    VD_BG_IDCARD_2010 = 181,             ///< Bulgaria 2010 ID card
    VD_HR_IDCARD_2003 = 190,             ///< Croatia 2003 ID card
    VD_HR_IDCARD_2015 = 191,             ///< Croatia 2015 ID card
    VD_HU_IDCARD_2000 = 200,             ///< Hungary 2000 ID card
    VD_HU_IDCARD_2015 = 201,             ///< Hungary 2015 ID card
    VD_GB_DRIVINGLICENSE_2015 = 210,     ///< United Kingdom 2015 Driving license
    VD_IE_PASSPORT_2015 = 220,           ///< Ireland 2015 Passport
    VD_DK_DRIVINGLICENSE_1997 = 230,     ///< Denmark 1997 Driving license
    VD_DK_DRIVINGLICENSE_2013 = 231,     ///< Denmark 2013 Driving license
    VD_IS_DRIVINGLICENSE_2001 = 240,     ///< Iceland 2001 Driving license
    VD_IS_DRIVINGLICENSE_2013 = 241,     ///< Iceland 2013 Driving license
    VD_NO_DRIVINGLICENSE_1998 = 250,     ///< Norway 1998 Driving license
    VD_NO_DRIVINGLICENSE_2007 = 251,     ///< Norway 2004-2007 Driving license
    VD_NO_DRIVINGLICENSE_2013 = 252,     ///< Norway 2013 Driving license
    VD_CZ_IDCARD_2003 = 260,             ///< Czechia 2003 ID card
    VD_CZ_IDCARD_2014 = 261,             ///< Czechia 2012-2014 ID card
    VD_SK_IDCARD_2015 = 270,             ///< Slovakia 2008-2013-2015 ID card
    VD_UA_IDCARD_2016 = 280,             ///< Ukraine 2016 ID card
    VD_CY_IDCARD_2008 = 290,             ///< Cyprus 2000-2008 ID card
    VD_CY_IDCARD_2015 = 291,             ///< Cyprus 2015 ID card
    VD_SI_IDCARD_1998 = 300,             ///< Slovenia 1998 ID card
    VD_ES_DRIVINGLICENSE_2013 = 320,     ///< Spain 2013 Driving license
    VD_CY_DrivingLicense_2015 = 292,     ///< Cyprus DrivingLicense 2015
    VD_HU_DrivingLicense_2013 = 202,     ///< Hungary DrivingLicense 2013
    VD_ME_IDCard_2008 = 370,             ///< Montenegrin IDCard 2008
    VD_RO_DrivingLicense_2013 = 161,     ///< Romania DrivingLicense 2013
    VD_MD_IDCard_2015 = 400,             ///< Moldavian IDCard 2015
    VD_US_DrivingLicense_2016_NM = 620,  ///< United States New Mexico DrivingLicense 2016
    VD_DE_DrivingLicense_2013 = 73,      ///< Germany DrivingLicense 2013
    VD_DE_DrivingLicense_2004 = 72,      ///< Germany DrivingLicense 2004
    VD_US_DrivingLicense_2016_AZ = 560,  ///< United States Arizona DrivingLicense 2016
    VD_BA_IDCard_2013 = 361,             ///< Bosnian IDCard 2013
    VD_BA_IDCard_2003 = 360,             ///< Bosnian IDCard 2003
    VD_FR_DrivingLicense_2013 = 101,     ///< France DrivingLicense 2013
    VD_BG_DrivingLicense_2002 = 183,     ///< Bulgaria DrivingLicense 2002
    VD_BG_DrivingLicense_2013 = 182,     ///< Bulgaria DrivingLicense 2013
    VD_US_DrivingLicense_2018_CA = 630,  ///< US-CA DrivingLicense 2018
    VD_FI_DrivingLicense_2013 = 94,      ///< Finland DrivingLicense 2013
    VD_FI_DrivingLicense_1992 = 93,      ///< Finland DrivingLicense 1992
    VD_FI_DrivingLicense_2010 = 92,      ///< Finland DrivingLicense 2010
    VD_RS_IDCard_2008 = 420,             ///< Serbian IDCard 2008
    VD_US_DrivingLicense_2012_GA = 530,  ///< United States Georgia DrivingLicense 2012
    VD_SK_DrivingLicense_2013 = 272,     ///< Slovakia DrivingLicense 2013
    VD_SK_DrivingLicense_2008 = 271,     ///< Slovakia DrivingLicense 2008
    VD_US_DrivingLicense_2016_AR = 520,  ///< United States Arkansas DrivingLicense 2016
    VD_CH_DrivingLicense_2003 = 131,     ///< Switzerland DrivingLicense 2003
    VD_MC_IDCard_2009 = 430,             ///< Monegasque IDCard 2009
    VD_GR_DrivingLicense_2013 = 311,     ///< GreeCroatia DrivingLicense 2013ce DrivingLicense 2013
    VD_HR_DrivingLicense_2013 = 192,     ///< Croatia DrivingLicense 2013
    VD_US_DrivingLicense_2017_KS = 590,  ///< United States Kansas DrivingLicense 2017
    VD_AL_IDCard_2009 = 390,             ///< Albanian IDCard 2009
    VD_LI_DrivingLicense_2003 = 382,     ///< Liechtenstein DrivingLicense 2003
    VD_US_DrivingLicense_2010_DE = 660,  ///< United States Delaware DrivingLicense 2010
    VD_PT_DrivingLicense_2013 = 61,      ///< Portugal DrivingLicense 2013
    VD_SE_DrivingLicense_2016 = 171,     ///< Sweden DrivingLicense 2016
    VD_GB_DrivingLicense_2007 = 211,     ///< United Kingdom DrivingLicense 2007
    VD_GB_DrivingLicense_1998 = 212,     ///< United Kingdom DrivingLicense 1998
    VD_CZ_DrivingLicense_2013 = 262,     ///< Czechia DrivingLicense 2013
    VD_NL_DrivingLicense_2013 = 112,     ///< Netherlands DrivingLicense 2013
    VD_NL_DrivingLicense_2014 = 113,     ///< Netherlands DrivingLicense 2014
    VD_NL_DrivingLicense_2006 = 114,     ///< Netherlands DrivingLicense 2006
    VD_US_DrivingLicense_2011_CT = 670,  ///< United States Connecticut DrivingLicense 2010
    VD_AD_DrivingLicense_1990 = 490,     ///< Andorra DrivingLicense 1990
    VD_US_DrivingLicense_2014_NV = 640,  ///< United States Nevada DrivingLicense 2014
    VD_US_DrivingLicense_2016_CO = 550,  ///< United States Colorado DrivingLicense 2016
    VD_US_DrivingLicense_2018_SC = 500,  ///< United States South Carolina DrivingLicense 2018
    VD_US_DrivingLicense_2016_LA = 510,  ///< United States Louisiana DrivingLicense 2016
    VD_PL_DrivingLicense_1999 = 152,     ///< Poland DrivingLicense 1999
    VD_PL_DrivingLicense_2013 = 153,     ///< Poland DrivingLicense 2013
    VD_PL_DrivingLicense_2004 = 154,     ///< Poland DrivingLicense 2004
    VD_US_DrivingLicense_2017_MS = 570,  ///< United States Mississippi DrivingLicense 2017
    VD_LV_IDCard_2012 = 340,             ///< Latvian IDCard 2012
    VD_LV_DrivingLicense_2004 = 460,     ///< Latvia DrivingLicense 2004
    VD_LV_DrivingLicense_2013 = 461,     ///< Latvia DrivingLicense 2013
    VD_LU_IDCard_2014 = 440,             ///< Luxembourg IDCard 2014
    VD_LU_DrivingLicense_2013 = 441,     ///< Luxembourg DrivingLicense 2013
    VD_IE_DrivingLicense_2013 = 221,     ///< Ireland DrivingLicense 2013
    VD_US_DrivingLicense_2017_NC = 540,  ///< United States North Carolina DrivingLicense 2017
    VD_US_DrivingLicense_2016_TX = 610,  ///< United States Texas DrivingLicense 2016
    VD_US_DrivingLicense_2017_FL = 650,  ///< United States Florida DrivingLicense 2017
    VD_MT_IDCard_2002 = 450,             ///< Maltese IDCard 2002
    VD_MT_IDCard_2014 = 451,             ///< Maltese IDCard 2014
    VD_MT_DrivingLicense_2003 = 452,     ///< Malta DrivingLicense 2003
    VD_MT_DrivingLicense_2013 = 453,     ///< Malta DrivingLicense 2013
    VD_MK_IDCard_2007 = 410,             ///< Macedonian IDCard 2007
    VD_BY_DrivingLicense_2010 = 480,     ///< Belarus DrivingLicense 2010
    VD_BE_DrivingLicense_2010 = 82,      ///< Belgium DrivingLicense 2010
    VD_BE_DrivingLicense_2013 = 83,      ///< Belgium DrivingLicense 2013
    VD_LT_IDCard_2002 = 350,             ///< Lithuanian IDCard 2002
    VD_LT_IDCard_2009 = 351,             ///< Lithuanian IDCard 2009 and 2012
    VD_LT_DrivingLicense_2016 = 470,     ///< Lithuania DrivingLicense 2016
    VD_LT_DrivingLicense_2007 = 471,     ///< Lithuania DrivingLicense 2007
    VD_US_DrivingLicense_2018_OK = 600,  ///< United States Oklahoma DrivingLicense 2018
    VD_SI_DrivingLicense_2013 = 301,     ///< Slovenia DrivingLicense 2013
    VD_SI_DrivingLicense_2009 = 302,     ///< Slovenia DrivingLicense 2009
    VD_IT_DrivingLicense_2000 = 122,     ///< Italy DrivingLicense 2000
    VD_IT_DrivingLicense_2013 = 123,     ///< Italy DrivingLicense 2013
    VD_EE_IDCard_2011 = 330,             ///< Estonian IDCard 2011
    VD_EE_DrivingLicense_2004 = 331,     ///< Estonia DrivingLicense 2004
    VD_EE_DrivingLicense_2013 = 332,     ///< Estonia DrivingLicense 2013
    VD_US_DrivingLicense_2013_AL = 580,  ///< United States Alabama DrivingLicense 2013
    VD_LI_IDCard_1995 = 380,             ///< Liechtensteinian IDCard 1995
    VD_LI_IDCard_2009 = 381,             ///< Liechtensteinian IDCard 2009
    VD_XX_XX_XXXX = 9000,                ///< Undefined documents
    
} VDDocumentEnum;

/**
 @brief (DEPRECATED) Enumeration that defines the different contries available.
 */
typedef enum {
    VD_OTHER = 0,
    VD_SPAIN = 1,           ///< Spain
    VD_MEXICO,              ///< Mexico
    VD_MALAYSIA,            ///< Malaysia
    VD_ARGENTINA,           ///< Argentina
    VD_PASSPORT_COUNTRY,    ///< Passport
    VD_PERU,                ///< Peru
    VD_COLOMBIA,
    VD_CHILE,
    VD_PORTUGAL,
    VD_PARAGUAY,
    VD_VENEZUELA,
    VD_GERMANY,
    VD_BELGIUM,
    VD_FINLAND,
    VD_FRANCE,
    VD_NETHERLAND,
    VD_ITALY,
    VD_SWITCHERLAND,
    VD_AUSTRIA,
    VD_POLAND,
    VD_ROMANIA,
    VD_SWEDEN,
    VD_BULGARIA,
    VD_CROATIA,
    VD_HUNGARY,
    VD_GREATBRITAIN,
    VD_IRELAND,
    VD_DENMARK,
    VD_ICELAND,
    VD_NORWAY,
    VD_CZECHREPUBLIC,
    VD_SLOVAKIA,
    VD_UKRAINE,
    VD_CYPRUS,
    VD_SLOVENIA,
    VD_GREECE

} VDCountryEnum;
