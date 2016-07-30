//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MusicEntityViewDescriptor, NSArray, NSString;

@interface MusicLibraryViewConfiguration : NSObject
{
    MusicEntityViewDescriptor *_entityViewDescriptor;
    _Bool _supportsSplitView;
    _Bool _wantsImmediateHandlingOfEditingChangeRecords;
    NSString *_iconName;
    NSString *_identifier;
    NSString *_title;
    NSArray *_userActivityItemTypes;
    Class _viewControllerClass;
}

@property(nonatomic) _Bool wantsImmediateHandlingOfEditingChangeRecords; // @synthesize wantsImmediateHandlingOfEditingChangeRecords=_wantsImmediateHandlingOfEditingChangeRecords;
@property(nonatomic) _Bool supportsSplitView; // @synthesize supportsSplitView=_supportsSplitView;
@property(retain, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(copy, nonatomic) NSArray *userActivityItemTypes; // @synthesize userActivityItemTypes=_userActivityItemTypes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsVisualIndicationOfSelection;
- (id)newViewController;
- (id)newSelectionSectionEntityValueContext;
- (id)newSelectionEntityValueContext;
- (id)newSectionEntityValueContext;
- (id)newEntityValueContext;
- (id)newContextualActionsSectionEntityValueContext;
- (id)newContextualActionsEntityValueContext;
- (id)loadEntityViewDescriptor;
- (_Bool)isEntityViewDescriptorLoaded;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfUnplayableEntityValueContext:(id)arg1 withPlayabilityResult:(unsigned long long)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)enumerateContentViewConfigurationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)configureContentDescriptorForSearchResults:(id)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (_Bool)canMoveEntityValueContext:(id)arg1;
- (_Bool)canDeleteEntityValueContext:(id)arg1;
- (void)applyEntityProviderChangeRecords:(id)arg1;
@property(readonly, nonatomic) MusicEntityViewDescriptor *entityViewDescriptor;

@end
