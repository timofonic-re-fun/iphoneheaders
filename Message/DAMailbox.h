/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MailboxUid.h"

@class DAFolder;

@interface DAMailbox : MailboxUid {
	DAFolder* _DAFolder;
}
-(id)initWithName:(id)name attributes:(unsigned)attributes account:(id)account folder:(id)folder;
// inherited: -(id)description;
-(id)DAFolder;
-(void)setDAFolder:(id)folder;
-(id)folderID;
// inherited: -(id)URLStringWithAccount:(id)account;
// inherited: -(void)dealloc;
@end
