//
//  JTCalendarContentView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

@class JTCalendar;

@interface JTCalendarContentView : UIScrollView

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (nonatomic) NSDate *currentDate;

@property (nonatomic) NSNumber *customNumberOfPages;

- (instancetype)initWithPages:(NSNumber*)customNumberOfPages;
- (void) configureWithPages:(NSNumber*)numberOfPages;

- (void)reloadData;
- (void)reloadAppearance;

@end
