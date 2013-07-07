/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL, StockChartData;

@interface Stock : NSObject
{
    BOOL _marketIsOpen;
    StockChartData *_chartDataArray[9];
    NSString *_symbol;
    NSString *_companyName;
    NSString *_shortCompanyName;
    NSString *_exchange;
    NSString *_realtimeTimestamp;
    NSString *_realtimePrice;
    NSString *_realtimeChange;
    NSString *_nonRealtimePrice;
    NSString *_nonRealtimeChange;
    NSString *_symbolType;
    NSString *_open;
    NSString *_previousClose;
    NSString *_high;
    NSString *_low;
    NSString *_yearHigh;
    NSString *_yearLow;
    NSString *_volume;
    NSString *_averageVolume;
    NSString *_marketcap;
    NSString *_peRatio;
    NSString *_dividendYield;
    unsigned int _pricePrecision;
    NSURL *_infoURL;
    double _timeQuoteLastUpdated;
    double _timeMetadataLastUpdated;
}

+ (id)_potentiallyAbsentKeys;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int *)arg2;
+ (id)BlankValueString;
+ (void)resetLocale;
+ (BOOL)localeUsesASCIIDigits;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg5;
+ (id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)percentSymbol;
+ (id)PercentFormatter;
+ (id)urlForStock:(id)arg1;
+ (id)urlForStockSymbol:(id)arg1;
@property(nonatomic) double timeMetadataLastUpdated; // @synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated;
@property(nonatomic) double timeQuoteLastUpdated; // @synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(readonly, nonatomic) unsigned int pricePrecision; // @synthesize pricePrecision=_pricePrecision;
@property(retain, nonatomic) NSString *dividendYield; // @synthesize dividendYield=_dividendYield;
@property(retain, nonatomic) NSString *peRatio; // @synthesize peRatio=_peRatio;
@property(retain, nonatomic) NSString *marketcap; // @synthesize marketcap=_marketcap;
@property(retain, nonatomic) NSString *averageVolume; // @synthesize averageVolume=_averageVolume;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSString *yearLow; // @synthesize yearLow=_yearLow;
@property(retain, nonatomic) NSString *yearHigh; // @synthesize yearHigh=_yearHigh;
@property(retain, nonatomic) NSString *low; // @synthesize low=_low;
@property(retain, nonatomic) NSString *high; // @synthesize high=_high;
@property(retain, nonatomic) NSString *previousClose; // @synthesize previousClose=_previousClose;
@property(retain, nonatomic) NSString *open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *symbolType; // @synthesize symbolType=_symbolType;
@property(retain, nonatomic) NSString *nonRealtimeChange; // @synthesize nonRealtimeChange=_nonRealtimeChange;
@property(retain, nonatomic) NSString *nonRealtimePrice; // @synthesize nonRealtimePrice=_nonRealtimePrice;
@property(retain, nonatomic) NSString *realtimeChange; // @synthesize realtimeChange=_realtimeChange;
@property(retain, nonatomic) NSString *realtimePrice; // @synthesize realtimePrice=_realtimePrice;
@property(retain, nonatomic) NSString *realtimeTimestamp; // @synthesize realtimeTimestamp=_realtimeTimestamp;
@property(retain, nonatomic) NSString *exchange; // @synthesize exchange=_exchange;
@property(retain, nonatomic) NSString *shortCompanyName; // @synthesize shortCompanyName=_shortCompanyName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (void)_updatePricePrecision;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)clearCachedGraphImageSets;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (id)chartDataForInterval:(int)arg1;
- (id)listName;
- (BOOL)marketIsOpen;
- (id)formattedChangePercent:(BOOL)arg1 includePercentSign:(BOOL)arg2;
- (id)formattedChangePercent:(BOOL)arg1;
- (BOOL)isIndex;
- (BOOL)changeIsZero;
- (BOOL)changeIsNegative;
- (BOOL)priceIsRealtime;
- (id)formattedPrice;
@property(readonly, nonatomic) NSString *change;
@property(readonly, nonatomic) NSString *price;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)archiveDictionary;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)populateFromDictionary:(id)arg1;
- (id)description;
- (void)resetLocale;

@end
