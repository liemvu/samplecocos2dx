#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CCParallaxNodeExtras.h"
#include "SimpleAudioEngine.h"


USING_NS_CC;
using namespace CocosDenshion;

typedef enum {
    KEndReasonWin,
    KEndReasonLose
} EndReason;

class HelloWorld : public cocos2d::CCLayer
{
    
private:
	CCParallaxNodeExtras *_backgroundNode;
    CCSprite *_spacedust1;
    CCSprite *_spacedust2;
    CCSprite *_planetsunrise;
    CCSprite *_galaxy;
    CCSprite *_spacialanomaly;
    CCSprite *_spacialanomaly2;
    
    CCSpriteBatchNode * _batchNode;
	CCSprite * _ship;
    
    float _shipTargetPosY;
    
    CCArray* _shipLasers;
    int _nextShipLaser;
    float _timeSinceLastShoot;
    
    //asteroids
    CCArray* _asteroids;
    int _nextAsteroid;
    float _nextAsteroidSpawn;
    
    
    int _lives;
    double _gameOverTime;
    bool _gameOver;
    
    
    void shoot();
    
    void endScene(EndReason endReason);
    void restartTapped();
    
    // scheduled Update
    void update(float dt);
    void setShipTargetPos(CCPoint location);
    
    //utils
    float randomValueBetween(float low, float high);
    void setInvisible(CCNode * node);
    float getTimeTick();
    CCSize getScreenSize();
public:
    virtual ~HelloWorld();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    virtual void onEnter();

    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static CCScene* scene();
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
