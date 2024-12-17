![ReportKit](https://reportbuilderx.com/reportkit-resources/ReportKitLogoWithText.png)

# Summary
[![Swift Package Manager compatible](https://img.shields.io/badge/spm-compatible-brightgreen.svg?style=flat)](https://swift.org/package-manager)
![Platform](https://img.shields.io/badge/platform-macOS%20%7C%20iOS-lightgray)

ReportKit is the framework that turns your report designs into beautiful reports for your iOS and macOS applications. ReportKit requires report design built with Report Builder for Xcode. For more information see
[www.reportbuilderx.com](https://www.reportbuilderx.com).

# Installation

### Swift Package Manager

To use [Swift Package Manager](https://swift.org/package-manager/) add ReportKit to your `Package.swift` file:

```swift
let package = Package(
    name: "ReportKit",
    products: [
        .library(
            name: "ReportKit",
            targets: ["ReportKit"]),        
        .library(
            name: "ReportKitCustomCharts",
            targets: ["ReportKitCustomCharts"]),
    ],
    targets: [
      .binaryTarget(name: "ReportKit", path: "./Sources/ReportKit.xcframework"),
      .binaryTarget(name: "ReportKitCustomCharts", path: "./Sources/ReportKitCustomCharts.xcframework")
    ]
       
)  
```
The package includes 2 frameworks. ReportKit.xcframework embeds the DGCharts.framework. In most cases, you should add this framework to the target of your project. If you would like to [add the DGCharts framework to your project separately](https://support.reportbuilderx.com/portal/en/kb/articles/using-reportkit-with-the-dgcharts-framework), use ReportKitCustomCharts.  

### Documentation

[API Documentation](https://reportbuilderx.com/documentation/reportkit) including tutorials and sample code.
