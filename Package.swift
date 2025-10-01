// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "Wirefox",
    platforms: [
        .iOS(.v15),
        .macOS(.v14),
    ],
    products: [
        .library(
            name: "Wirefox",
            targets: ["Wirefox"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "Wirefox",
            path: "Sources/Wirefox.xcframework"
        ),
    ]
)
