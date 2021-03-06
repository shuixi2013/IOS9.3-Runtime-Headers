//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject
{
    ABFavoritesListManager *_favoritesListManager;
}

+ (id)sharedInstanceWithAddressBook:(void *)arg1;
+ (id)sharedInstance;
- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (_Bool)addEntryForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (id)entryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)entryWithIdentifier:(int)arg1 forPerson:(void *)arg2;
- (_Bool)containsEntryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)containsEntryWithIdentifier:(int)arg1 forPerson:(void *)arg2;
- (void)recacheIdentitiesSoon;
- (void)save;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)addEntry:(id)arg1;
- (id)entriesForPerson:(void *)arg1;
- (_Bool)isFull;
- (id)entries;
- (void)_applicationWillSuspend:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

@end

