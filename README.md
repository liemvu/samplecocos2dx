==============
Cocos2dx project template for ios/android and wp game development
==============

Project Structure
==============

Project Root
	|---- CCB 					# Cocos builder project, open with cocos builder 3.0
	|---- Classes				# Shared C++ source code
	|---- libs					# cocos2dx and other library here
	|---- proj.android 			# the android project, open with eclipse
	|---- proj.ios  			# the ios project, open with xcode
	|---- proj.ws 				# the windows phone project, added later
	|---- README.md  			# me
	|---- Resources 			# Shared resources



Cocos Builder Project
==============

- Since the project use cocos2dx version 2.1.4,  Cocos Builder 3.0 should be used
- Publish path is Resources/ccb

https://raw.github.com/liemvu/samplecocos2dx/master/cocosbuilder.png

Shared Resources
==============

- The resources used for all sub projects store here. 
- For support multi resolution, the project use strategy just like android. We design the game based on a resolution. Then for other resolution, we scale up or down and provide appropriate resource files. You can read more here: http://www.cocos2d-x.org/projects/cocos2d-x/wiki/Multi_resolution_support


Shared C++ Source code
==============

- The actual game code reside here. The ios/android/wp projects will use these codes to run the game.


iOS Project
==============

- Xcode project, make by cocos2d-x project template
- It imports the Shared C++ source code directly
- Sub folder in the resource folder should be added as reference type

https://raw.github.com/liemvu/samplecocos2dx/master/xcode.png

Android Project
==============

- Eclipse project.
- C/C++ Development tools plugin must be installed
- The Android NDK is required. You can reference here for how to setup it: http://www.raywenderlich.com/33750/cocos2d-x-tutorial-for-ios-and-android-getting-started
- The Android NDK and cocos2dx must be included in C++ build path
- The Classes folder must be added as C++ source folder
- Every time you added new C++ source code, you have to  add it in the Android.mk file in jni folder.

https://raw.github.com/liemvu/samplecocos2dx/master/android.png