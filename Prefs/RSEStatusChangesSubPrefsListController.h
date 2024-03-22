#import <Preferences/PSListController.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/CepheiPrefs.h>
#import <Cephei/HBPreferences.h>
#import <Preferences/PSControlTableCell.h>
#import <Preferences/PSEditableTableCell.h>

@interface RSEStatusChangesSubPrefsListController : HBListController
@property(nonatomic, retain)UISwitch* enableSwitch;
@property(nonatomic, retain)UILabel* titleLabel;
- (void)toggleState;
- (void)setEnableSwitchState;
- (void)setCellForRowAtIndexPath:(NSIndexPath *)indexPath enabled:(BOOL)enabled;
@end

@interface PSEditableTableCell (Interface)
- (id)textField;
@end
