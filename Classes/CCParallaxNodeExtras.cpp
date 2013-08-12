//
//  CCParallaxNodeExtras.cpp
//  samplecocos2dxios
//
//  Created by Liem Vo Uy on 8/9/13.
//
//

#include "CCParallaxNodeExtras.h"

class CCPointObject : CCObject {
    CC_SYNTHESIZE(CCPoint, m_tRatio, Ratio)
    CC_SYNTHESIZE(CCPoint, m_tOffset, Offset)
    CC_SYNTHESIZE(CCNode *, m_pChild, Child)
};

CCParallaxNodeExtras::CCParallaxNodeExtras() {
    CCParallaxNode();
}

CCParallaxNodeExtras * CCParallaxNodeExtras::node() {
    return new CCParallaxNodeExtras;
}

void CCParallaxNodeExtras::incrementOffset(CCPoint offset, CCNode *node) {
    for(unsigned int i=0; i<m_pParallaxArray->num; i++) {
        CCPointObject *point = (CCPointObject *) m_pParallaxArray->arr[i];
        CCNode *currNode = point->getChild();
        if(currNode == node) {
            point->setOffset(ccpAdd(point->getOffset(), offset));
            break;
        }
    }
}
