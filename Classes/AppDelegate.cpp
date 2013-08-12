#include "AppDelegate.h"

#include "cocos2d.h"
#include "MainLayer.h"
USING_NS_CC;


typedef struct tagResource
{
    cocos2d::CCSize size;
    char directory[100];
}Resource;

static Resource smallResource  =  { cocos2d::CCSizeMake(480, 320),   "small" };
static cocos2d::CCSize designResolutionSize = cocos2d::CCSizeMake(480, 320);


AppDelegate::AppDelegate()
{

}

AppDelegate::~AppDelegate()
{
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    CCDirector *pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();
    pDirector->setOpenGLView(pEGLView);

    // Set the design resolution
    pEGLView->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, kResolutionShowAll);
    CCSize frameSize = pEGLView->getFrameSize();
    
    // turn on display FPS
    pDirector->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    //setup search path
    vector<string> searchPath;
    searchPath.push_back("ccb");
    searchPath.push_back("ccb/ccbResrouces");
    searchPath.push_back(smallResource.directory);
    CCFileUtils::sharedFileUtils()->setSearchPaths(searchPath);
    
    pDirector->setContentScaleFactor(smallResource.size.height/designResolutionSize.height);
    
    // create a scene. it's an autorelease object
    CCScene *pScene = MainLayer::scene();
        
    // run
    pDirector->runWithScene(pScene);
    
    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->pause();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->resume();
    
    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
