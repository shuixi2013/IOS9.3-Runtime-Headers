//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PCPersistentTimer, SBFPasscodeLockAssertionManager, SBFPasscodeLockDisableAssertion;
@protocol SBFDeviceLockModel;

@interface SBFDeviceLockController : NSObject
{
    int _lockState;
    _Bool _isBlockedForThermalCondition;
    double _lastLockDate;
    id <SBFDeviceLockModel> _lockoutModel;
    PCPersistentTimer *_deviceLockUnblockTimer;
    _Bool _cachedPasscodeLockedOrBlocked;
    _Bool _hasBeenUnlockedOnceSinceBoot;
    SBFPasscodeLockAssertionManager *_assertionManager;
    SBFPasscodeLockDisableAssertion *_transientPasscodeCheckingAssertion;
    _Bool _okToSendNotifications;
    NSString *_lastIncorrectPasscodeAttempt;
    _Bool _shouldFetchPasscodeLockState;
    _Bool _lastPasscodeLockStateWasLocked;
    struct __CFRunLoopObserver *_runLoopObserver;
    _Bool _deviceHasPasscodeSet;
}

+ (id)_selectDeviceLockModel;
+ (_Bool)_isInBioUnlockState;
+ (int)_extendedKeybagState;
+ (_Bool)_shouldTreatExtendedKeybagStateAsLocked:(int)arg1;
- (void).cxx_destruct;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (void)_updateDeviceHasPasscodeSetForLockState:(int)arg1;
- (_Bool)_isAssertionValid:(id)arg1;
- (void)_removeDeviceLockDisableAssertion:(id)arg1;
- (void)_addDeviceLockDisableAssertion:(id)arg1;
- (void)setupUnblockTimerIfNeeded;
- (void)synchronize;
- (_Bool)_unlockWithPasscode:(id)arg1 outError:(id *)arg2;
- (void)_notifyOfFirstUnlock;
- (void)_updateDeviceLockedStateLockingImmediatelyIfNecessary:(_Bool)arg1;
- (_Bool)_shouldSuppressLockOnInit;
- (void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(_Bool)arg1;
- (void)_setLockState:(int)arg1;
- (void)_invalidateCachedPasscodeLockState;
- (void)_setupRunLoopObserverIfNecessary;
- (_Bool)_shouldLockDeviceNow;
- (void)_keybagLockStateChangedTo:(int)arg1;
- (void)_uncachePasscodeIfNecessary;
- (void)_cachePassword:(id)arg1;
- (void)_lockStateChangedFrom:(int)arg1 to:(int)arg2;
- (void)_wipeDevice;
- (_Bool)_shouldVetoPasscodeLock;
- (void)_enablePasscodeLockImmediately:(_Bool)arg1;
- (_Bool)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(_Bool)arg2;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)enablePasscodeLockImmediately;
- (void)enablePasscodeLockImmediatelyIfNecessary;
- (_Bool)deviceHasBeenPasscodeUnlockedOnceSinceBoot;
- (_Bool)isPasscodeLockedOrBlocked;
- (_Bool)isPasscodeLockedCached;
- (_Bool)isPasscodeLocked;
- (_Bool)deviceHasPasscodeSet;
- (id)lastLockDate;
- (void)_unblockTimerFired;
- (void)_scheduleUnblockTimer;
- (void)_clearUnblockTimer;
- (void)_noteBlockedReasonsMayHaveChanged;
- (_Bool)_temporarilyBlocked;
- (_Bool)_permanentlyBlocked;
- (void)_clearBlockedState;
- (void)setBlockedForThermalCondition:(_Bool)arg1;
- (_Bool)isBlockedForThermalCondition;
- (_Bool)isPermanentlyBlocked:(double *)arg1;
- (_Bool)isBlocked;
- (id)description;
- (void)dealloc;
- (id)init;

@end

