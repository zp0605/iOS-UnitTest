[![Build Status](https://travis-ci.org/RongchangLei/iOS-UnitTest.svg?branch=master)](https://travis-ci.org/RongchangLei/iOS-UnitTest)

# iOS-UnitTest
Integrate Travis Cl for Xcode Project (beta)

```
language: objective-c
osx_image: beta-xcode6.3
script: 
- xctool -workspace TDD.xcworkspace -scheme TDDTests -sdk iphonesimulator 
- xctool test -workspace TDD.xcworkspace -scheme TDDTests -sdk iphonesimulator 
```

