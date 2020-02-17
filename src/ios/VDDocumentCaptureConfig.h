/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at
 http://www.apache.org/licenses/LICENSE-2.0
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */


@interface VDDocumentCaptureConfig : NSObject {}

/**/

@property (nonatomic, copy) NSString* arrowcolor1;
@property (nonatomic, copy) NSString* arrowcolor2;
@property (nonatomic, copy) NSString* arrowcolor3;
@property (nonatomic, copy) NSString* arrowcolor4;
@property (nonatomic, copy) NSString* arrowcolor5;

@property (nonatomic, assign) BOOL arrows;
@property (nonatomic, copy) NSString* backgroundcolor;
@property (nonatomic, copy) NSString* capturebackgroundcolor;
@property (nonatomic, copy) NSString* checkdocumenttext;
@property (nonatomic, copy) NSString* checkdocumenttextcolor;
@property (nonatomic, assign) BOOL closebutton;
@property (nonatomic, copy) NSString* closebuttonimage;
@property (nonatomic, copy) NSString* continuebuttonbackgroundcolor;
@property (nonatomic, copy) NSString* continuebuttonicon;
@property (nonatomic, copy) NSString* continuebuttontext;
@property (nonatomic, copy) NSString* continuebuttontextcolor;
@property (nonatomic, copy) NSString* documentdetectedoklevel1color;
@property (nonatomic, copy) NSString* documentdetectedoklevel2color;
@property (nonatomic, copy) NSString* documentdetectedoklevel3color;
@property (nonatomic, copy) NSString* documentdetectedveryclosecolor;
@property (nonatomic, copy) NSString* documentdetectedveryfarcolor;
@property (nonatomic, copy) NSString* documentveryclose;
@property (nonatomic, copy) NSString* documentveryfar;
@property (nonatomic, copy) NSString*  familyName;
@property (nonatomic, assign) BOOL fixedrectangle;
@property (nonatomic, assign) BOOL fixedtemplate;
@property (nonatomic, copy) NSString* flashwaitingalert;
@property (nonatomic, copy) NSString* flashwaitingalertbgcolor;
@property (nonatomic, copy) NSString* flashwaitingalerttextcolor;
@property (nonatomic, copy) NSString* infoalert;
@property (nonatomic, copy) NSString* infoalertpass;
@property (nonatomic, assign) BOOL infoalertshow;
@property (nonatomic, copy) NSString* infoalerttitle;
@property (nonatomic, copy) NSString* infoalerttitlepass;
@property (nonatomic, copy) NSString* informativetextcolor;
@property (nonatomic, copy) NSString* obversedetectiondelay;
@property (nonatomic, assign) BOOL obverseflash;
@property (nonatomic, copy) NSString* obversenotfoundtext;
@property (nonatomic, assign) BOOL onlyobverse;
@property (nonatomic, copy) NSString* passportbuttonbackgroundcolor;
@property (nonatomic, copy) NSString* passportnotfoundtext;
@property (nonatomic, copy) NSString* permissionrefused;
@property (nonatomic, copy) NSString* permissionrefusedbutton;
@property (nonatomic, copy) NSString* permissionrefusedtitle;
@property (nonatomic, copy) NSString* popupvalidationbackgroundcolor;
@property (nonatomic, copy) NSString* popupvalidationtextcolor;
@property (nonatomic, copy) NSString* positivebuttontitle;
@property (nonatomic, copy) NSString* ratioButtonsValidation;
@property (nonatomic, copy) NSString* repeatbuttonbackgroundcolor;
@property (nonatomic, copy) NSString* repeatbuttonicon;
@property (nonatomic, copy) NSString* repeatbuttontext;
@property (nonatomic, copy) NSString* repeatbuttontextcolor;
@property (nonatomic, copy) NSString* reversedetectiondelay;
@property (nonatomic, assign) BOOL  reverseflash;
@property (nonatomic, copy) NSString* reversenotfoundtext;
@property (nonatomic, copy) NSString* secondswithoutpicture;
@property (nonatomic, copy) NSString* secondswithoutshutterbuttonobverse;
@property (nonatomic, copy) NSString* secondswithoutshutterbuttonreverse;
@property (nonatomic, copy) NSString* secondswithshutterbuttonmessage;
@property (nonatomic, assign) BOOL showdocument;
@property (nonatomic, assign) BOOL showtutorial;
@property (nonatomic, copy) NSString* shutterbuttonbackgroundcolor;
@property (nonatomic, copy) NSString* shutterbuttonbordercolor;
@property (nonatomic, copy) NSString* shutterbuttonmessage;
@property (nonatomic, copy) NSString* shutterbuttonmessagetextcolor;
@property (nonatomic, assign) BOOL shutterbuttonshow;
@property (nonatomic, copy) NSString* tickcirclecolor;
@property (nonatomic, copy) NSString* tickcolor;
@property (nonatomic, copy) NSString* tutorialbackgroundcolor;
@property (nonatomic, copy) NSString* tutorialcontinuebuttoncolor;
@property (nonatomic, copy) NSString* tutorialcontinuebuttontext;
@property (nonatomic, copy) NSString* tutorialcontinuebuttontextcolor;
@property (nonatomic, copy) NSString* tutorialgif;
@property (nonatomic, copy) NSString* tutorialtext;
@property (nonatomic, copy) NSString* tutorialtextcolor;
@property (nonatomic, copy) NSString* tutorialtitle;
@property (nonatomic, copy) NSString* tutorialtitlecolor;
@property (nonatomic, copy) NSString* userinfo;
@property (nonatomic, copy) NSString* validationbackgroundcolor;


+ (VDDocumentCaptureConfig*)parseOptions:(NSString*)options;

@end
