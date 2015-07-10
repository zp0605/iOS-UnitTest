//
//  UIColor+RCFlatUIKitColor.h
//  RCFlatColorDemo
// The MIT License (MIT)
//  Copyright (c) 2015 Rongchang Lei
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

// The MIT License (MIT)
//
// Copyright (c) 2014 Giovanni Lodi
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


//http://www.flatuicolorpicker.com/

#import <UIKit/UIKit.h>

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]


@interface UIColor (RCFlatUIKitColor)

//Red, Total:9
+ (UIColor *)Red_ChestnutRose;
+ (UIColor *)Red_Pomegranate;
+ (UIColor *)Red_Thunderbird;
+ (UIColor *)Red_OldBrick;
+ (UIColor *)Red_Flaminggo;
+ (UIColor *)Red_Valencia;
+ (UIColor *)Red_TallPoppy;
+ (UIColor *)Red_Monza;
+ (UIColor *)Red_Cinnabar;

//Pink, Total:3
+ (UIColor *)Pink_Razzmatazz;
+ (UIColor *)Pink_SunsetOrange;
+ (UIColor *)Pink_WaxFlower;
+ (UIColor *)Pink_Cabaret;
+ (UIColor *)Pink_NewYorkPink;
+ (UIColor *)Pink_RadicalRed;
+ (UIColor *)Pink_Sunglo;

//Purple, Total:10
+ (UIColor *)Purple_Sunff;
+ (UIColor *)Purple_Rebeccapurple;
+ (UIColor *)Purple_HoneyFlower;
+ (UIColor *)Purple_Wistful;
+ (UIColor *)Purple_Plum;
+ (UIColor *)Purple_Seance;
+ (UIColor *)Purple_MediumPurple;
+ (UIColor *)Purple_LightWisteria;
+ (UIColor *)Purple_Studio;
+ (UIColor *)Purple_Wisteria;

//Blue, Total: 21
+ (UIColor *)Blue_SanMarino;
+ (UIColor *)Blue_AliceBlue;
+ (UIColor *)Blue_RoyalBlue;
+ (UIColor *)Blue_PictonBlue59ABE3;
+ (UIColor *)Blue_Spray;
+ (UIColor *)Blue_Shakespeare;
+ (UIColor *)Blue_HummingBird;
+ (UIColor *)Blue_PictonBlue22A7FO;
+ (UIColor *)Blue_CuriousBlue;
+ (UIColor *)Blue_Madison;
+ (UIColor *)Blue_DodgerBlue;
+ (UIColor *)Blue_Ming;
+ (UIColor *)Blue_EbonyClay;
+ (UIColor *)Blue_Malibu;
+ (UIColor *)Blue_SummerSky;
+ (UIColor *)Blue_Chambray;
+ (UIColor *)Blue_PickledBlueWood;
+ (UIColor *)Blue_Hoki;
+ (UIColor *)Blue_JellyBean;
+ (UIColor *)Blue_JacksonsPurple;
+ (UIColor *)Blue_JordyBlue;
+ (UIColor *)Blue_SteelBlue;
+ (UIColor *)Blue_FountainBlue;

//Green, Total: 25
+ (UIColor *)Green_MediumTurquoise4ECDC4;
+ (UIColor *)Green_AQuaIsland;
+ (UIColor *)Green_Gossip;
+ (UIColor *)Green_DarkSeaGreen;
+ (UIColor *)Green_Eucalyptus;
+ (UIColor *)Green_CaribbeanGreen;
+ (UIColor *)Green_SilverTree;
+ (UIColor *)Green_Downy;
+ (UIColor *)Green_MountainMeadow;
+ (UIColor *)Green_LightSeaGreen;
+ (UIColor *)Green_MediumTurquoise66CC99;
+ (UIColor *)Green_Turquoise;
+ (UIColor *)Green_Madang;
+ (UIColor *)Green_Riptide;
+ (UIColor *)Green_Shamrock;
+ (UIColor *)Green_Niagara16A085;
+ (UIColor *)Green_Emerald;
+ (UIColor *)Green_GreenHaze;
+ (UIColor *)Green_FreeSpeechAquamarine;
+ (UIColor *)Green_OceanGreen;
+ (UIColor *)Green_Niagara2ABB9B;
+ (UIColor *)Green_Jade;
+ (UIColor *)Green_Salem;
+ (UIColor *)Green_Observatory;
+ (UIColor *)Green_JungleGreen;

//Yellow, Total: 3
+ (UIColor *)Yellow_CreamCan;
+ (UIColor *)Yellow_RipeLemon;
+ (UIColor *)Yellow_Saffron;

//Orange, Total: 14
+ (UIColor *)Orange_CapeHoney;
+ (UIColor *)Orange_California;
+ (UIColor *)Orange_FireBush;
+ (UIColor *)Orange_TahitiGold;
+ (UIColor *)Orange_Casablanca;
+ (UIColor *)Orange_Crusta;
+ (UIColor *)Orange_SeaBuckThorn;
+ (UIColor *)Orange_LightThingYellow;
+ (UIColor *)Orange_BurntOrange;
+ (UIColor *)Orange_Buttercup;
+ (UIColor *)Orange_Ecstasy;
+ (UIColor *)Orange_Sandstorm;
+ (UIColor *)Orange_Jaffa;
+ (UIColor *)Orange_Zest;

//Gray Total: 11
+ (UIColor *)Gray_WhiteSmoke;
+ (UIColor *)Gray_Lynch;
+ (UIColor *)Gray_Pumice;
+ (UIColor *)Gray_Gallery;
+ (UIColor *)Gray_SilverSand;
+ (UIColor *)Gray_Porcelain;
+ (UIColor *)Gray_Cascade;
+ (UIColor *)Gray_Iron;
+ (UIColor *)Gray_Edward;
+ (UIColor *)Gray_Cararra;
+ (UIColor *)Gray_Silver;


@end
