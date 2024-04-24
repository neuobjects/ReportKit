// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ReportKit",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "ReportKit",
            targets: ["ReportKit"]),
        
    ],
    targets: [
      //.binaryTarget(name: "ReportKit", path: "./Sources/ReportKit.xcframework")
      .binaryTarget(name: "ReportKit", url: "https://localhost/Frameworks/ReportKit.xcframework.zip", checksum: "2d13c51a338d3312ac34dfdc89452b6d35604a11e4bbc34f7824583c691b4595")
    ]
    
)
