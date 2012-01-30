//
//  BMDDocument.h
//  BMD-X
//
//  Created by Steven Fuchs on 1/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LockableText.h"

@interface BMDDocument : NSDocument {

    IBOutlet	NSTextField*            msSurnameFld;
    IBOutlet	NSTextField*            msFirstnameFld;
    IBOutlet	NSTextField*            msDistrictFld;
    IBOutlet	NSTextField*            msVolumeFld;
    IBOutlet	NSTextField*            msPageFld;
    
    IBOutlet	NSButton*               msLockedBtn;
    IBOutlet	NSButton*               msCapsBtn;

    IBOutlet	NSTextField*            pageFieldSolo;
    IBOutlet	NSTextField*            yearField;
    IBOutlet	NSTextField*			pageField;
    IBOutlet	NSTextField*			commentField;
    IBOutlet	NSPopUpButton*          formatMenu;
    IBOutlet	NSPopUpButton*          quarterMenu;
    IBOutlet	NSTextField*            rangeField;
    IBOutlet	NSTextField*			freeBMDRefField;
    IBOutlet	NSTextField*			locationField;
    IBOutlet	NSDatePicker*			dateField;
    
    
    IBOutlet	NSTextField*            emailField;
    IBOutlet	NSTextField*			passwordField;
    IBOutlet	NSPopUpButton*          orderMenu;
    IBOutlet	NSPopUpButton*          typeMenu;
    
    IBOutlet	NSPanel*				mPageWindow;
    IBOutlet	NSPanel*				mCommentWindow;
    IBOutlet	NSPanel*				mEntryWindow;
    IBOutlet	NSPanel*				mSourceWindow;
    IBOutlet    NSTextView*             textView;
    
    NSAttributedString *mString;
@private
}
- (NSAttributedString *) string;

- (void) setString: (NSAttributedString *) value;
- (void)textFieldClosing:(id)fieldOb;


- (IBAction)setSurNameLock:(id)sender;

- (IBAction)sendBreak:(id)sender;
- (IBAction)startPage:(id)sender;
- (IBAction)okPageDLOG:(id)sender;
- (IBAction)cancelPage:(id)sender;

- (IBAction)startComment:(id)sender;
- (IBAction)okCommentDLOG:(id)sender;
- (IBAction)cancelComment:(id)sender;


    - (IBAction)startEntry:(id)sender;
    - (IBAction)okEntryDLOG:(id)sender;
    - (IBAction)cancelEntry:(id)sender;

    - (IBAction)startSource:(id)sender;
    - (IBAction)okSourceDLOG:(id)sender;
    - (IBAction)cancelSource:(id)sender;

    - (IBAction)cancelAction:(NSWindow *)sheet returnCode:(int)returnCode contextInfo:(void *)contextInfo;


@end
