//
//  ZoozCostumer.h
//  Zooz
//
//  Created by Michael Rozenblat on 25/09/2018.
//  Copyright © 2018 Michael Rozenblat. All rights reserved.
//

#import "ZoozObject.h"
@class ZoozAddress;
@class ZoozPaymentMethodDetails;

@interface ZoozCustomer : ZoozObject
@property (nonatomic) NSString *customerReference;
@property (nonatomic) NSString *firstName;
@property (nonatomic) NSString *lastName;
@property (nonatomic) NSString *email;
@property (nonatomic) NSString *id;
@property (nonatomic) ZoozAddress *shippingAddress;
@property (nonatomic) NSDictionary *additionalDetails;

@property (nonatomic) NSString *created;
@property (nonatomic) NSString *modified;
@property (nonatomic) NSMutableArray *paymentMethods;

- (instancetype)initWithDictioanry:(NSDictionary *)dict;
- (void)addPaymentMethodToken:(ZoozPaymentMethodDetails *)payment;


@end
