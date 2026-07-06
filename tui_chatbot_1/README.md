# tui_chatbot_1

 Version: 0.9.1

 Author  :

 date    : 2026/07/05

 update :

***

node.js C++ Windows , Chat Bot + OpenRouter TUI

* OpenRouter
* node 22
* LLVM CLang
* Visual studio 2026 community
* nmake
* C/C++
* windows


***
## Image

![img1](/images/tui_chatbot_1.png)

***
### related

* Ink

https://github.com/vadimdemedes/ink

***
### setup

* .env
```
OPENROUTER_API_KEY=your-key
OPENROUTER_MODEL=deepseek/deepseek-v4-flash
```

***
* vcpkg install
```
vcpkg install nlohmann-json:x64-windows
vcpkg install curl:x64-windows
```

***
* C++ build
```
nmake all
```

***
* node start
```
npm i
npm run start
```

***
* prompt
```
hello
```

***
