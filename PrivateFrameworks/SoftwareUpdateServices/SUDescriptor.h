//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, SUDocumentation;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    SUDocumentation *_documentation;
    NSString *_publisher;
    NSString *_humanReadableUpdateName;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_releaseType;
    unsigned long long _downloadSize;
    unsigned long long _unarchiveSize;
    unsigned long long _msuPrepareSize;
    unsigned long long _installationSize;
    unsigned long long _minimumSystemPartitionSize;
    int _updateType;
    _Bool _autoDownloadAllowableForCellular;
    _Bool _downloadAllowableForCellular;
    _Bool _downloadable;
    _Bool _disableSiriVoiceDeletion;
    _Bool _disableCDLevel4;
    _Bool _disableAppDemotion;
    _Bool _disableIntallTonight;
    NSDictionary *_systemPartitionPadding;
    _Bool _downloadableOverCellular;
    _Bool _streamingZipCapable;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *systemPartitionPadding; // @synthesize systemPartitionPadding=_systemPartitionPadding;
@property(nonatomic, getter=installTonightDisabled, setter=_setDisableInstallTonight:) _Bool disableInstallTonight; // @synthesize disableInstallTonight=_disableIntallTonight;
@property(nonatomic, getter=appDemotionDisabled, setter=_setDisableAppDemotion:) _Bool disableAppDemotion; // @synthesize disableAppDemotion=_disableAppDemotion;
@property(nonatomic, getter=cdLevel4Disabled, setter=_setDisableCDLevel4:) _Bool disableCDLevel4; // @synthesize disableCDLevel4=_disableCDLevel4;
@property(nonatomic, getter=siriVoiceDeletionDisabled, setter=_setDisableSiriVoiceDeletion:) _Bool disableSiriVoiceDeletion; // @synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion;
@property(nonatomic, getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:) _Bool streamingZipCapable; // @synthesize streamingZipCapable=_streamingZipCapable;
@property(nonatomic, getter=isDownloadableOverCellular) _Bool downloadableOverCellular; // @synthesize downloadableOverCellular=_downloadableOverCellular;
@property(nonatomic, getter=isDownloadable) _Bool downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) _Bool autoDownloadAllowableForCellular; // @synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular;
@property(retain, nonatomic) SUDocumentation *documentation; // @synthesize documentation=_documentation;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(nonatomic, getter=_msuPrepareSize, setter=_setMsuPrepareSize:) unsigned long long msuPrepareSize; // @synthesize msuPrepareSize=_msuPrepareSize;
@property(nonatomic) unsigned long long minimumSystemPartitionSize; // @synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize;
@property(nonatomic, getter=_unarchiveSize, setter=_setUnarchiveSize:) unsigned long long unarchiveSize; // @synthesize unarchiveSize=_unarchiveSize;
@property(nonatomic) unsigned long long installationSize; // @synthesize installationSize=_installationSize;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSString *releaseType; // @synthesize releaseType=_releaseType;
@property(retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productSystemName; // @synthesize productSystemName=_productSystemName;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_buildCompareKey;
- (_Bool)_hasValue:(id)arg1;
- (_Bool)isValidDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)totalRequiredFreeSpace;
- (unsigned long long)preparationSize;
- (id)humanReadableUpdateName;
- (void)dealloc;
- (id)init;

@end

