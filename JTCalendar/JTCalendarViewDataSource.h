//
//  JTCalendarDataSource.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <Foundation/Foundation.h>

@class JTCalendar;
@class JTCalendarDayView;

@protocol JTCalendarDataSource <NSObject>

- (BOOL)calendarHaveEvent:(JTCalendar *)calendar date:(NSDate *)date;
- (void)calendarDidDateSelected:(JTCalendar *)calendar date:(NSDate *)date;

@optional

- (BOOL)calendar:(JTCalendar *)calendar canSelectDate:(NSDate *)date;

- (void)calendar:(JTCalendar *)calendar prepareDayView:(JTCalendarDayView *)dayView;

- (NSDate *)viewModelBeginDate;
- (NSArray *)allGroupedDates;
- (BOOL)isCustomCalendar;

- (void)calendarDidLoadPreviousPage;
- (void)calendarDidLoadNextPage;

@end
