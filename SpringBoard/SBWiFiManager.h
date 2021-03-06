/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSMutableDictionary, NSTimer;

@interface SBWiFiManager : NSObject {
	WiFiManagerClient* _manager;
	WiFiDeviceClient* _device;
	WiFiNetwork* _currentNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	BOOL _joining;
	int _signalStrengthBars;
	BOOL _signalStrengthHasBeenSet;
	NSTimer* _signalStrengthTimer;
	int _shouldPollSignalStrength;
	BOOL _canPollSignalStrength;
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
	NSMutableDictionary* _securityDict;
#endif
	id _delegate;
	unsigned _notificationID;
	double _lastSignalStrengthUpdateTime;
}
+(SBWiFiManager *)sharedInstance;
+(BOOL)hasWiFi;
// inherited: -(void)dealloc;
-(WiFiManagerClient*)_manager;
-(void)setDevice:(WiFiDeviceClient*)device __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
// inherited: -(id)init;
-(void)setDelegate:(id)delegate;
-(void)scan;
-(BOOL)joining;
-(void)dismissAlerts;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)_updateCurrentNetwork;
-(BOOL)isAssociated;
-(BOOL)_cachedIsAssociated;
-(NSString *)currentNetworkName;
-(BOOL)powered;
-(BOOL)wiFiEnabled;
-(void)setWiFiEnabled:(BOOL)enabled;
-(int)signalStrengthBars;
-(void)updateSignalStrength;
-(void)_updateSignalStrengthTimer;
-(void)beginPollingForSignalStrength;
-(void)endPollingForSignalStrength;
-(void)cancelTrust:(BOOL)trust;
-(void)acceptTrust:(id)trust;
-(void)cancelPicker:(BOOL)picker;
-(void)userChoseNetwork:(id)network;
-(id)knownNetworks;
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(BOOL)networkRequiresPassword:(id)password;
#endif
-(void)resetSettings;
-(void)_scanComplete:(CFArrayRef)complete;
-(void)_joinComplete:(int)complete network:(WiFiNetwork*)network;
-(void)joinNetwork:(id)network password:(id)password;
-(void)_askToJoinWithID:(unsigned)anId;
-(void)_trustCallbackWithID:(unsigned)anId type:(int)type network:(WiFiNetwork*)network data:(id)data;
@end

