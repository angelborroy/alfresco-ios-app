//
//  SyncError.h
//  AlfrescoApp
//
//  Created by Mohamad Saeedi on 08/10/2013.
//  Copyright (c) 2013 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SyncNodeInfo;

@interface SyncError : NSManagedObject

@property (nonatomic, retain) NSString *errorId;
@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) SyncNodeInfo *nodeInfo;

@end