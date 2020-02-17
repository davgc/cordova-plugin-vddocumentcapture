OnSpot@ SDK for iOS (Version 1.0.2)
========================================

# Information
OnSpot@ SDK for iOS is a client to the OnSpota server scanning the device sensors and responding with events about surrounding spots. 
The library is distributed as an iOS framework.

# iOS SDK requirements

The minimum iOS version for the SDK is 11.0.

## Capabilities

Background modes - Location updates, Background fetch.

## Application Setup

For geo-location and beacon scanning you need to add the location description tags to the info.plist file:  
Privacy - Location Always Usage Description  
Privacy - Motion Usage Description  
Privacy - Location Always and When In Use Usage Description  
  
Add the following Required background modes:  
App downloads content from the network  
App registers for location updates  


# Installation

## Cocoapods

Add the following line to your podfile:

pod 'OnSpotSdk'


# Usage Instructions

1. Request your AppID by support@onspota.com

2. Initialize the tracker on your application delegate :

		OnSpotaCore.sharedInstance.initTracker("474a93a9-d543-4d52-9ca5-4b431905dcd1")

3. Add background fetch support:

		func application(_ application: UIApplication, performFetchWithCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void) {
		OnSpotaCore.sharedInstance.resumeTracker();
		completionHandler(UIBackgroundFetchResult.newData);
		}


# Behaviour

The service for objects scanning starts when you call the 'initTracker' method of the SDK.
The service will be automatically restarted when device is rebooted.
The periods the service performs scans and execute requests to OnSpot server are smartly controlled by server based on multiple parameters including proximity to the surrounding objects, device movement, user behavior and others. 

Application can always stop the SDK by invoking the 'suspendTracker' method of the OnSpotaCore class.


Copyright (c) 2018 OnSpot@ AG. All rights reserved.
