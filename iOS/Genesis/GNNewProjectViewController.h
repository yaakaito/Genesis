//
//  GNNewProjectViewController.h
//  Genesis
//
//  Created by Peter Hajas on 1/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GNNewProjectViewController : UIViewController <UITextFieldDelegate>
{
    IBOutlet UITextField* projectNameField;
}

-(IBAction)cancelPushed:(id)sender;

@end
