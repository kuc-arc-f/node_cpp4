# tui_rag_2

 Version: 0.9.1

 Author  :

 date    : 2026/07/06

 update :

***

node.js C++ Windows , RAG SQLite OpenRouter TUI

* OpenRouter
* embedding : Gemini-embedding-001
* node 22
* LLVM CLang
* Visual studio 2026 community
* nmake
* C/C++
* windows


***
### vector data add

https://github.com/kuc-arc-f/cpp_12ex/blob/main/rag_15sql

***
## Image

* RAG APP

![img1](/images/tui_rag_2.png)

***
### related

* sqlite

https://www.sqlite.org/download.html

sqlite-amalgamation-*.zip , download
sqlite3.h , sqlite3.c

***

* Ink

https://github.com/vadimdemedes/ink

* openrouter

https://openrouter.ai/

https://openrouter.ai/models

***
* .env

```
GEMINI_API_KEY=your-key
OPENROUTER_API_KEY=your-key
OPENROUTER_MODEL=deepseek/deepseek-v4-flash
```

***
* vcpkg install

```
vcpkg install nlohmann-json:x64-windows
vcpkg install curl:x64-windows
vcpkg install cpr:x64-windows
```
***
* example.db
* rag_15sql/example.db , file copy

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
