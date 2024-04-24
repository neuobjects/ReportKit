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
      .binaryTarget(name: "ReportKit", url: "https://localhost/Frameworks/ReportKit.xcframework.zip", checksum: "30989aabb7d3e1c897daababd4f47b64a176c346f2d82ff59c9037db2edb61db")
    ]
    
    //LOOK AT DGCHARTSPACKAGE. I THINK WE'RE MESSING UP THE TARGET. IS IT REALLY A TARGET (THE OUTPUT)? WHAT IS THIS REALLY BUILDING? IS THIS SUPPLEMENTAL TO THE XCFRAMEWORK MENTIONED HERE - DO WE NEED TO DISTRIBUTE THEM TOGETHER SOMEHOW?
    // SEE THE APPCODA ARTICLE
     //WE SHOULD ALSO USE THE LOCAL XCFRAMEWORK (VS NEEDING A CHECKSUM). WE CAN COPY IT IN OUR BUILD-FRAMEWORK.SH SCRIPT.
)
