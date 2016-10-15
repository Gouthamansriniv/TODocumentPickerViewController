//
//  TODocumentPickerTheme.h
//
//  Copyright 2015-2016 Timothy Oliver. All rights reserved.¬
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
//  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TODocumentPickerTheme : NSObject

/* Main View Properties */
@property (nonatomic, strong, nullable) UIColor *backgroundColor;         /* Background color of the table view and cells */
@property (nonatomic, strong, nullable) UIColor *doneButtonTintColor;     /* Tint color of bar button items that represent commit actions */

/* Header View Properties */
@property (nonatomic, strong, nullable) UIColor *sortControlTintColor;    /* The tint color of the sorting control below the search bar */
@property (nonatomic, strong, nullable) UIColor *searchBarBackgroundColor; /* Background color of the search bar background */
@property (nonatomic, strong, nullable) UIColor *searchPlaceholderTextTintColor; /* Placeholder text tint color */
@property (nonatomic, strong, nullable) UIColor *searchClearButtonTintColor; /* Color of the clear button in the search bar */
@property (nonatomic, strong, nullable) UIColor *searchTextColor;           /* Color of any inputted search text */

/* Table Cell Properties */
@property (nonatomic, strong, nullable) UIColor *cellTintColor;           /* Tint color of the cell, used to control the 'checkmark' tint color. */
@property (nonatomic, strong, nullable) UIColor *selectedCellBackgroundColor; /* When a cell is selected, this is the color of the selection */
@property (nonatomic, strong, nullable) UIColor *cellSeparatorColor;      /* Color of the table cell divider lines */
@property (nonatomic, strong, nullable) UIColor *titleTextColor;          /* Color of the title text label in each cell */
@property (nonatomic, strong, nullable) UIColor *detailTextColor;         /* Color of the subtitle text label in each cell */
@property (nonatomic, strong, nullable) UIColor *accessoryTintColor;      /* Color of the arrow accessory icon */

/* Table Sections */
@property (nonatomic, strong, nullable) UIColor *sectionHeaderColor;      /* Background color of each section header */
@property (nonatomic, strong, nullable) UIColor *sectionTitleColor;       /* Color of the text in each section header */
@property (nonatomic, strong, nullable) UIColor *sectionIndexTintColor;   /* Tint color of the scrollable section index column */

@end
