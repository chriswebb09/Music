//
//  MusicTableViewController.h
//  Music
//
//  Created by Christopher Webb-Orenstein on 11/10/16.
//  Copyright © 2016 Christopher Webb-Orenstein. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "MusicTableViewCell.h"

@interface MusicTableViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UIBarButtonItem *playButton;

@property (strong, nonatomic) AVAudioPlayer *audioPlayer;

@property (strong, nonatomic) NSMutableArray *songs; 

-(void)setupAVAudioPlayerWithFileName:(NSString *)fileName;



@end
