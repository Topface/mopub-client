//
//  SimpleAdsViewController.h
//  SimpleAds
//
//

#import <UIKit/UIKit.h>
#import "AdController.h"

@class InterstitialAdController;

@interface SimpleAdsViewController : UIViewController <UITextFieldDelegate, AdControllerDelegate> {
	IBOutlet UITextField* keyword;
	IBOutlet UIView* adView;
	IBOutlet UIView* mrectView;
	
	BOOL getAndShow;
	
	AdController* adController;
	AdController* mrectController;
	InterstitialAdController *interstitialAdController;
}
@property(nonatomic,retain) IBOutlet UITextField* keyword;
@property(nonatomic,retain) IBOutlet UIView* adView;
@property(nonatomic,retain) IBOutlet UIView* mrectView;
@property(nonatomic,retain) AdController* adController;
@property(nonatomic,retain) AdController* mrectController;
@property(nonatomic,retain) InterstitialAdController* interstitialAdController;
-(IBAction) refreshAd;
-(IBAction) showInterstitial;
-(IBAction) getInterstitial;
-(IBAction) getAndShowInterstitial;

@end
