//
//  Message.h
//  Ribbit
//
//  Created by Amit Bijlani on 8/25/16.
//  Copyright © 2016 Treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@class File;

@interface Message : NSObject


// bug #5. changed the file proprety to weak. I might have just gotten lucky, but it made sense after I tried that. The file that is being sent via message does not need to stick around. once it's sent, it should be gone from memory, so changing this to weak allows it to be deallocated after it's made. I hope i'm understanding that correctly... all I know is that the memory stopped going up after I changed this lol!


@property (weak, nonatomic) File *file;
@property (strong, nonatomic) NSArray *recipients;

@property (copy, nonatomic) NSString *fileType;
@property (copy, nonatomic) NSString *senderId;
@property (copy, nonatomic) NSString *senderName;

- (void)saveInBackgroundWithBlock:(BooleanResultBlock)block;

@end
