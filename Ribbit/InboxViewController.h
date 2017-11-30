//
//  InboxViewController.h
//  Ribbit
//
//  Copyright (c) 2013 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVKit/AVKit.h>

@class Message;

@interface InboxViewController : UITableViewController

@property (nonatomic, strong) Message *selectedMessage;

//Updated deprecated media player to AV player
@property (nonatomic, strong) AVPlayerViewController *moviePlayer;

- (IBAction)logout:(id)sender;

@end
