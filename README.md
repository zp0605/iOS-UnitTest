[![Build Status](https://travis-ci.org/RongchangLei/iOS-UnitTest.svg?branch=master)](https://travis-ci.org/RongchangLei/iOS-UnitTest)

# iOS-UnitTest
Integrate Travis Cl for Xcode Project (beta)
![](http://i.picasion.com/resize80/158e926cddb5486dbf4e2b45b7947cb6.png)

Build Fail reason is for iOS SDK CI incompatable! 

```
language: objective-c
osx_image: beta-xcode6.3
script: 
- xctool -workspace TDD.xcworkspace -scheme TDDTests -sdk iphonesimulator 
- xctool test -workspace TDD.xcworkspace -scheme TDDTests -sdk iphonesimulator 
```

