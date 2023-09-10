#why use custom?
1: solved function lookup failed for android
2: add bitcoin testnet support for test purpose

#for the included libs, what code changed compare to official repo?
check [https://github.com/Bitverse-Pte/wallet-core](https://github.com/Bitverse-Pte/wallet-core) fork from official repo and change some code.

If you want to replace your own build, follow official build step then replace android .aar file and ios .xcframework into following folder

create "libs" folder in path ./android then put trustwalletcore.aar into libs folder

create "Frameworks" folder in path ./ios then put  SwiftProtobuf.xcframework and WalletCore.xcframework into Frameworks folder

your project file structs will look like this

<img width="348" alt="截屏2021-09-15 下午4 10 52" src="https://user-images.githubusercontent.com/54241621/133395756-8541e0eb-a5f8-44f5-8c3c-0ed8379377cd.png">

then you are ready to run.



## ====================
编译说明：
https://developer.trustwallet.com/developer/wallet-core/developing-the-library/building

命令：
## MacOS
./tools/install-sys-dependencies-mac

arch -arm64 brew install emscripten
arch -arm64 brew install jq
gem install fastlane


修改CMakeLists.txt: 
set(BOOST_ROOT "/opt/homebrew/Cellar/boost/1.82.0_1")

## 执行命令
./bootstrap.sh 
./tools/generate-files


## android
#### sh tools/generate-files android
sh tools/android-build


## ios
#### (arch -arm64) sh tools/generate-files ios
#### 生成 build/ios-frameworks/wallet_core_common-1.1.0.tar.xz
sh tools/ios-build 

#### 生成 swift/build/SwiftProtobuf.xcframework 和 WalletCore.xcframework
sh tools/ios-xcframework


## ios 版本生成压缩文件进行依赖，避免工程太大
打包 -> podspec 先发布新版本 -> (arch -arm64) pod repo update  ->  (arch -arm64) pod update TCWalletCoreCommon --repo-update
打包：执行命令：
sh tools/ios-release

podspec发布:
http://bitvers-manager-tools.bitverse.green/bitbase/app/ios/specs/-/blob/master/TCWalletCoreCommon/1.0.0/TCWalletCoreCommon.podspec


