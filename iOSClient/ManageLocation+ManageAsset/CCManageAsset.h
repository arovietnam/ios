//
//  CCManageAsset.h
//  Crypto Cloud Technology Nextcloud
//
//  Created by Marino Faggiana on 23/07/15.
//  Copyright (c) 2017 TWS. All rights reserved.
//
//  Author Marino Faggiana <m.faggiana@twsweb.it>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/Photos.h>

#import "CCUtility.h"
#import "CCCoreData.h"

@interface CCManageAsset : NSObject

@property (nonatomic, retain) NSMutableArray *assetGroups;
@property (nonatomic, retain) NSMutableArray *allAssetsCameraRoll;
@property (nonatomic, retain) NSMutableArray *assetsNewToUpload;

- (NSMutableArray *)getCameraRollNewItemsWithDatePhoto:(NSDate *)datePhoto dateVideo:(NSDate *)dateVideo;

@end
