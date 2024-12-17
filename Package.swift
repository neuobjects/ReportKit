// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ReportKit",
    products: [
        .library(
            name: "ReportKit",
            targets: ["ReportKit"]),        
    ],
    targets: [
      .binaryTarget(name: "ReportKit", path: "./Sources/ReportKit.xcframework"),
      .binaryTarget(name: "ReportKitCustomCharts", path: "./Sources/ReportKitCustomCharts.xcframework")
    ]
       
)  
