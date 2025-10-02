//
//  JTCalendarMenuView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

@class JTCalendar;

@interface JTCalendarMenuView : UIScrollView

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (nonatomic) NSDate *currentDate;

@property (nonatomic) NSNumber *customNumberOfPages;

- (void)reloadAppearance;

@end
