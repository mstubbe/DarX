/*
Copyright (2012) Maik Stubbe

This file is part of DarX.

DarX is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Foobar is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/


#import <Cocoa/Cocoa.h>
#import "XPlayer.h"
#import "CheckOut.h"
#import "WinPane.h"
#import "Stats.h"

#import "ManagingViewController.h"

@interface x011 : ManagingViewController {
	
	IBOutlet NSTextField *fieldScored;
	IBOutlet NSTableView *tabP1;
	IBOutlet CheckOut *cOut;
	IBOutlet XPlayer *p1;
	IBOutlet NSButton *saveButton;
	IBOutlet NSButton *discardButton;
	IBOutlet NSButton *restartButton;
	IBOutlet NSButton *submitButton;
    IBOutlet NSTableView *tabStats;
    IBOutlet NSManagedObject *stats;

    int player;
	WinPane *winPane;
}

-(int)showWinPane;
-(IBAction)submit:(id)sender;
-(IBAction)restartGame:(id)sender;
-(void)restartG;
-(IBAction)discard:(id)sender;
-(IBAction)revertLast:(id)sender;
-(int)calcAve;
-(IBAction)calcAveButton:(id)sender;


@end
