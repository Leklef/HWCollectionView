//
//  UserViewController.h
//  HWCollectionView
//
//  Created by Ленар on 07.11.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserViewController : UIViewController <UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UICollectionView *galleryCollectionView;
@property (weak, nonatomic) IBOutlet UILabel *userNameLabel;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *tutorialShowButton;
@property (weak, nonatomic) IBOutlet UIButton *editInformationAboutUserButton;
@property (weak, nonatomic) IBOutlet UILabel *webpageLabel;
@end
