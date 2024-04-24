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
      .binaryTarget(name: "ReportKit", url: "https://localhost/Frameworks/ReportKit.xcframework.zip", checksum: "5f3ec40a27bf624567f7c7d0051bfa8f0d84a807ef48c0ad0faa059a4c4abfce")
    ]
    
    //LOOK AT DGCHARTSPACKAGE. I THINK WE'RE MESSING UP THE TARGET. IS IT REALLY A TARGET (THE OUTPUT)? WHAT IS THIS REALLY BUILDING? IS THIS SUPPLEMENTAL TO THE XCFRAMEWORK MENTIONED HERE - DO WE NEED TO DISTRIBUTE THEM TOGETHER SOMEHOW?
    // SEE THE APPCODA ARTICLE
     //WE SHOULD ALSO USE THE LOCAL XCFRAMEWORK (VS NEEDING A CHECKSUM). WE CAN COPY IT IN OUR BUILD-FRAMEWORK.SH SCRIPT.
)
