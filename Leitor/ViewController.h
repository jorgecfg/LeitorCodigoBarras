//
//  ViewController.h
//  Leitor
//
//  Created by Jorge Flor on 11/19/13.
//  Copyright (c) 2013 Jorge Flor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <ZBarReaderDelegate>
- (IBAction)doScan:(id)sender;

@end
