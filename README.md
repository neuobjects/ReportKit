![ReportKit](https://reportbuilderx.com/reportkit-resources/ReportKitLogoWithText.png)

# Summary
[![Swift Package Manager compatible](https://img.shields.io/badge/spm-compatible-brightgreen.svg?style=flat)](https://swift.org/package-manager)
![Platform](https://img.shields.io/badge/platform-macOS%20%7C%20iOS-lightgray)

ReportKit is the framework that turns your report designs into beautiful reports for your iOS and macOS applications. ReportKit requires report design built with Report Builder for Xcode. For more informations see
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
    ],
    targets: [
      .binaryTarget(name: "ReportKit", path: "./Sources/ReportKit.xcframework")
    ]
       
)  
```

### Documentation

[API Documentation](https://reportbuilderx.com/documentation/reportkit) including tutorials and sample code.
