//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPResponse.h"

@class NSDictionary;

@interface SPAggregateResponse : SPResponse
{
    NSDictionary *_responses;
}

@property(retain) NSDictionary *responses; // @synthesize responses=_responses;
- (void).cxx_destruct;
- (id)responseForQuery:(id)arg1;
- (id)responseForQueryId:(unsigned long long)arg1;
- (id)initWithResponses:(id)arg1;
- (id)initWithKind:(int)arg1 responses:(id)arg2;

@end

