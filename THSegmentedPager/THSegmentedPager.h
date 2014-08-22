//
//  THSegmentedPager.h
//  THSegmentedPagerExample
//
//  Created by Hannes Tribus on 25/07/14.
//  Copyright (c) 2014 3Bus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HMSegmentedControl@hons82/HMSegmentedControl.h>

@interface THSegmentedPager : UIViewController<UIPageViewControllerDataSource,UIPageViewControllerDelegate>

@property (weak, nonatomic) IBOutlet HMSegmentedControl *pageControl;
@property (weak, nonatomic) IBOutlet UIView *contentContainer;

@property (strong, nonatomic)NSMutableArray *pages;

- (void)setPageControlHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setSelectedPageIndex:(NSUInteger)index animated:(BOOL)animated;

- (UIViewController *)selectedController;

- (void)updateTitleLabels;

@end
