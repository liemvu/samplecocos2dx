//
//  CCParallaxNodeExtras.h
//  samplecocos2dxios
//
//  Created by Liem Vo Uy on 8/9/13.
//
//

#ifndef __samplecocos2dxios__CCParallaxNodeExtras__
#define __samplecocos2dxios__CCParallaxNodeExtras__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;

class CCParallaxNodeExtras : public CCParallaxNode {
    
public:
    CCParallaxNodeExtras();
    
    CREATE_FUNC(CCParallaxNodeExtras);
    
    void incrementOffset(CCPoint offset, CCNode * node);
};


//////// Loader
class CCParallaxNodeExtrasLoader : public cocos2d::extension::CCNodeLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCParallaxNodeExtrasLoader, loader);
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCParallaxNodeExtras);
};

#endif
