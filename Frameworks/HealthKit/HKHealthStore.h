//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKClientInterface-Protocol.h>
#import <HealthKit/HKQueryDelegate-Protocol.h>
#import <HealthKit/_HKActiveWorkoutLifecycleDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCConnection, _HKHealthStoreProxy;
@protocol OS_dispatch_queue, _HKAuthorizationPresentationController;

@interface HKHealthStore : NSObject <HKClientInterface, HKQueryDelegate, _HKActiveWorkoutLifecycleDelegate>
{
    NSXPCConnection *_connection;
    _HKHealthStoreProxy *_connectionProxy;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableDictionary *_discoveries;
    NSMutableSet *_discoveriesEnded;
    NSMutableDictionary *_sessions;
    NSMutableSet *_sessionsEnded;
    id <_HKAuthorizationPresentationController> _authorizationPresentationController;
    CDUnknownBlockType _authorizationDelegateTransactionErrorHandler;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableSet *_queries;
    NSMutableSet *_workouts;
    NSMutableDictionary *_workoutSessionsByUUID;
    CDUnknownBlockType _bluetoothStatusHandler;
}

+ (_Bool)isHealthDataAvailable;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStatusHandler; // @synthesize bluetoothStatusHandler=_bluetoothStatusHandler;
@property(readonly, nonatomic, getter=_queries) NSSet *queries; // @synthesize queries=_queries;
- (void).cxx_destruct;
- (void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMedicalIDData;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMedicalIDData:(id)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithSelectCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithObjectCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithActionCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_selectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)diagnosticsForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopFakingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitMetricsIgnoringAnchor:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDatabaseUsageInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
- (void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
- (void)unitPreferencesDidUpdate;
- (void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
- (void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned long long)arg2 withError:(id)arg3;
- (void)deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
- (void)_addEndedSession:(id)arg1;
- (void)_addEndedDiscovery:(id)arg1;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getHealthServicePropertyNamesWithHandler:(CDUnknownBlockType)arg1;
- (void)setEnabledStatus:(_Bool)arg1 forPeripheral:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (id)activeHealthServiceSessions;
- (void)endHealthServiceSession:(id)arg1;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)activeHealthServiceDiscoveries;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)startAllHealthServicesDiscoveryWithHandler:(CDUnknownBlockType)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)endBluetoothStatusUpdates;
- (void)startBluetoothStatusUpdates:(CDUnknownBlockType)arg1;
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forceLastChanceNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceNanoSyncWithPullRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getDefaultValueForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)_handleInterruption;
- (id)_serverProxyForSelector:(SEL)arg1 sanitizedErrorHandler:(CDUnknownBlockType)arg2;
- (void)_weeklySummaryInfoForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_currentValueForQuantityTypeCode:(long long)arg1 characteristicTypeCode:(long long)arg2 beforeDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)disableAllBackgroundDeliveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)workoutDidComplete:(id)arg1;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)_endWorkoutSession:(id)arg1;
- (void)endWorkoutSession:(id)arg1;
- (void)_startWorkoutSession:(id)arg1;
- (void)startWorkoutSession:(id)arg1;
- (void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveActiveWorkout:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reattachWorkout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginWorkoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 metadata:(id)arg5 shouldUseDeviceData:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hasAnyActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id *)arg3;
- (id)_characteristicForDataType:(id)arg1 error:(id *)arg2;
- (_Bool)_setHeightCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_heightCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_bodyMassCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setFitzpatrickSkinType:(long long)arg1 error:(id *)arg2;
- (id)fitzpatrickSkinTypeWithError:(id *)arg1;
- (_Bool)_setBloodType:(long long)arg1 error:(id *)arg2;
- (id)bloodTypeWithError:(id *)arg1;
- (_Bool)_setBiologicalSex:(long long)arg1 error:(id *)arg2;
- (id)biologicalSexWithError:(id *)arg1;
- (_Bool)_setDateOfBirth:(id)arg1 error:(id *)arg2;
- (id)dateOfBirthWithError:(id *)arg1;
- (void)stopQuery:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)fetchAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deleteObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_sendNextObjectBatch:(id)arg1 lastRange:(struct _NSRange)arg2 proxy:(id)arg3 transaction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_saveObjects:(id)arg1 atomically:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)saveObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)earliestPermittedSampleDate;
- (void)presentAuthorizationWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (void)endAuthorizationDelegateTransactionWithError:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_throwIfAuthorizationDisallowedForSharing:(_Bool)arg1 types:(id)arg2;
- (void)handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)deleteObjectsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDataTypesForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDataTypesForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentlyPairedWatchIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithListenerEndpoint:(id)arg1 identifier:(id)arg2;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
