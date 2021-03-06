/**
 *
 * TLMainController.h
 * Timelab
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 Paul Saumets
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 **/

#import "TLPrefWindowController.h"
#import "TLTimeEntryController.h"
#import "AFNetworking.h"

@class TLClient;

@interface TLMainController : NSObject <TLTimeEntryControllerDelegate> {

@private
    
    NSMutableArray *clientsArray;
    
    NSStatusItem *projectsActiveStatusItem;
    
    NSMenuItem *activeMenuItem;
    NSMenuItem *noTimeEntry;
    
@public
    
    NSMenu *rootMenu;
    NSMenu *clientSelectMenu;
    
    TLPrefWindowController *preferencesWindowController;
    TLTimeEntryController *timeEntryController;
    
}

@property (nonatomic, assign) BOOL validConnection;
@property (nonatomic, strong) TLPrefWindowController *preferencesWindowController;
@property (nonatomic, strong) TLTimeEntryController *timeEntryController;
@property (nonatomic, strong) NSMutableArray *clientsArray;

@property (nonatomic, strong) NSMutableSet *clientsWithActiveTimers;
@property (nonatomic, strong) NSMenuItem *activeMenuItem;
@property (nonatomic, strong) NSMenuItem *noTimeEntry;


- (id) initWithMenu:(NSMenu *)menu withClientIndex:(CGFloat)index;
- (void) newTimeEntry:(id)sender;
- (void) refreshTimelab;

@end
