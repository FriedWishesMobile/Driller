//
//  DrillDetailViewController.h
//  Driller
//
//  Created by Philippe on 10-09-15.
//  Copyright 2010 Philippe Casgrain. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DrillDetailViewController : UIViewController {

    NSString *string;

    UILabel *theLabel;
}

@property (nonatomic, retain) NSString *string;
@property (nonatomic, retain) IBOutlet UILabel *theLabel;

@end
