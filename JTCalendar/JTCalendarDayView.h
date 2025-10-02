//
//  JTCalendarDayView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import "JTCalendar.h"

@interface JTCalendarDayView : UIView

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, strong) UIView *circleView;

@property (nonatomic) NSDate *date;
@property (assign, nonatomic) BOOL isOtherMonth;

@property (nonatomic, assign) BOOL multiSelected;

- (void)setManualSelected:(BOOL)isInSelectedSet
             selectedDate:(NSDate *)selectedDate
               andEnabled:(BOOL)enabled;
- (void)setEnabled:(BOOL)enabled;
- (void)resetPreviousConfiguration;

- (void)reloadData;
- (void)reloadAppearance;

@end
