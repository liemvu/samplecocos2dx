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
USING_NS_CC;

class CCParallaxNodeExtras : public CCParallaxNode {
    
public:
    CCParallaxNodeExtras();
    
    static CCParallaxNodeExtras * node();
    
    void incrementOffset(CCPoint offset, CCNode * node);
};

#endif
