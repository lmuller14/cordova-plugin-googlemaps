//
//  MyPluginLayer.h
//  cordova-googlemaps-plugin v2
//
//  Created by masashi.
//
//

#import <UIKit/UIKit.h>
#import "GoogleMapsViewController.h"
#import "MyPluginScrollView.h"

@interface MyPluginLayer : UIView<UIScrollViewDelegate>

@property (nonatomic) UIView *webView;
@property (nonatomic) MyPluginScrollView *pluginScrollView;
@property (nonatomic) NSTimer *redrawTimer;

- (id)initWithWebView:(UIView *)webView;
- (void)resizeTask:(NSTimer *)timer;
- (void)clearHTMLElements;
- (void)putHTMLElements:(NSDictionary *)elementsDic;
- (void)addMapView:(GoogleMapsViewController *)mapCtrl;
- (void)removeMapView:(GoogleMapsViewController *)mapCtrl;
@end
