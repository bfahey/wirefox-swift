# Wirefox Console for iOS / macOS

**Stop burning engineering hours on debugging code.**

Wirefox Console automatically captures network traffic, notifications, and more, so your team can focus on delivering features your customers actually care about.

## Features

- 🚀 **One-Line-Setup** – start capturing network traffic, and more, with just one line of code
- 🌐 **Network Logging** – display all outgoing network requests and responses in real-time
- 📣 **Notification Tracking** – automatically capture any `NSNotification` without extra setup
- 📱💻 **Cross-Platform** – works seamlessly on iOS 15+ and macOS 14+

## Installation

### Swift Package Manager

1. Open your project in Xcode
2. Select **File** → **Add Package Dependencies...**
3. Enter the repository URL: `https://github.com/bfahey/wirefox-swift`
4. Select the version you'd like to use
5. Click **Add Package** to finish

## Requirements

- **iOS 15.0+** or **macOS 14.0+**

## Usage

### Starting the Console

Initialize Wirefox Console in your app as early as possible:

```swift
import SwiftUI
import Wirefox

@main
struct YourApp: App {

    let console: WirefoxConsole

    init() {
        self.console = WirefoxConsole()

        do {
            try self.console.start()
        } catch {
            // handle any error
        }
    }

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
```

### Viewing the Console

When you run your app, the console will start and you'll be able to view it by opening `http://localhost:3000` in your web browser.
