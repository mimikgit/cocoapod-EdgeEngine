# ``EdgeEngine``

mimik Client Library provides a programmatic way to work with the edgeEngine Runtime to access information about the mobile device on which the application is running.

@Metadata {
    @CallToAction(purpose: link, url: "https://github.com/mimikgit/cocoapod-EdgeEngine")
    @PageKind(article)
    @PageColor(orange)
}


## Overview

The purpose of the mimik Client Library is to provide a programmatic way to work with the edgeEngine Runtime to access information about the mobile device on which the application is running, as well as mobile devices running within a cluster of mobile devices that are hosting the edgeEngine Runtime. Also, to allow developers to use edge microservices running within a particular cluster.

By leveraging the Core component of the mimik Client Library, developers can build applications compatible with the edgeEngine Runtime. This not only harnesses the strength of edge computing but also provides an inherent flexibility in its paradigm.

Additionally, this component provides utility APIs that help developers with core operations such as Authentication, edgeEngine Runtime Setup, deployment of edge microservices and handling of Network calls.

Furthermore, the mimik Client Library Engine component provides additional edgeEngine Runtime utility APIs, as well as vendoring the actual edgeEngine Runtime binary into the iOS project.


## Supported Platforms, Targets
* `iOS Devices running iOS 15+`
* `iOS Simulators running iOS 15+`
* `iOS Mac Catalyst running macOS 12.0`


## Requirements
```
iOS 15.0+
```


## Installation

To install it, simply add the following lines to your Podfile:


```swift
platform :ios, '15.0'
source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/mimikgit/cocoapod-edge-specs.git'

use_frameworks!
inhibit_all_warnings!

def mimik
  pod 'EdgeCore'
  pod 'EdgeEngine'
end

target '{target}' do
  mimik()
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
      config.build_settings['VALID_ARCHS'] = '$(ARCHS_STANDARD_64_BIT)'
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
      config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
    end
  end
end
```


## Tutorials

After installation, try the following tutorials:

- [Integrating the mimik Client Library into an iOS project](https://devdocs.mimik.com/tutorials/11-index)
- [Working with edgeEngine in an iOS project](https://devdocs.mimik.com/tutorials/12-index)
- [Working with edge microservices in an iOS project](https://devdocs.mimik.com/tutorials/13-index)
- [Creating a Simple iOS Application that Uses an edge microservice](https://devdocs.mimik.com/tutorials/10-index)


## Online API Reference Documentation

The full API reference documentation can be found at [GitHub Pages](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore). 

Alternatively the Xcode docc archive file can be downloaded as a [zip](https://github.com/mimikgit/cocoapod-EdgeCore/tree/main/EdgeCore.doccarchive.zip) and opened locally.

## mimik client libraries

Don't forget to checkout all mimik client libraries [available on Github](https://github.com/search?q=cocoapod-Edge)

Umbrella cocoapods:

 * [EdgeClientLibrary (Core + Engine)](https://github.com/mimikgit/cocoapod-EdgeClientLibrary)
 * [EdgeClientLibraryTrial (Core + EngineTrial)](https://github.com/mimikgit/cocoapod-EdgeClientLibraryTrial)
 
Individual cocoapods:
 
 * [EdgeCore](https://github.com/mimikgit/cocoapod-EdgeCore)
 * [EdgeEngine](https://github.com/mimikgit/cocoapod-EdgeEngine)
 * [EdgeEngineTrial](https://github.com/mimikgit/cocoapod-EdgeEngineTrial)
 * [EdgeUser](https://github.com/mimikgit/cocoapod-EdgeUser)

## Author

mimik

```
https://github.com/mimikgit/cocoapod-EdgeCore
```

## License

The aforementioned mimik client and service libraries are available under the MIT license. See the LICENSE file for more information.
