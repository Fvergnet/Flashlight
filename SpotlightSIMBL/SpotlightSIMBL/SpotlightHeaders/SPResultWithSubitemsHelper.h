//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPPreviewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSImage, NSImageView, NSMutableArray, NSScrollView, NSString, NSTableColumn, NSTableView, NSTextField;

@interface SPResultWithSubitemsHelper : SPPreviewController <NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _awoke;
    long long _gen;
    NSMutableArray *_thumbnails;
    NSArray *_subItems;
    NSString *_secondaryString;
    NSString *_filePath;
    NSString *_displayName;
    NSImage *_icon;
    NSScrollView *_scrollView;
    NSTextField *_appName;
    NSTextField *_appVersion;
    NSImageView *_iconView;
    NSTableView *_tableView;
    NSTableColumn *_mainColumn;
}

+ (id)sharedPreviewController;
@property __weak NSTableColumn *mainColumn; // @synthesize mainColumn=_mainColumn;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property __weak NSTextField *appVersion; // @synthesize appVersion=_appVersion;
@property __weak NSTextField *appName; // @synthesize appName=_appName;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain) NSArray *subItems; // @synthesize subItems=_subItems;
- (void).cxx_destruct;
- (void)openItem:(BOOL)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)setupResultCell:(id)arg1 forRow:(long long)arg2;
- (id)groupHeading;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)keyDown:(id)arg1;
- (void)resetSubView;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)awakeFromNib;
- (void)doubleClick:(id)arg1;
- (void)setupForObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

