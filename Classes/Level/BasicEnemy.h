//
//  BasicEnemy.h
//  Touchaga
//
//  Created by Jacob O'Donnell on 2/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "ScriptedObject.h"

/**
 * A testing simple enemey.
 */
@interface BasicEnemy : ScriptedObject {
}

-(id)initWithStartTime:(int) inStartTime andPattern:(Pattern *) inPattern;

@end
