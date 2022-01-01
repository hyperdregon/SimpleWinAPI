# SimpleWinAPI

(Before any backstory on why I did this, I have to relember that this is made for C only! It may work on C++, but it isn't and won't be tested)

Well, I've recently started developing windows apps with gtk, but to actually use that on windows, you need to have a lot of folders and icons and themes, and it is a hassle to maintain a simple project...

So, I've came to the conclusion that for doing what I wanted (creating an UI that would work on windows) I needed the Windows API (windows.h). It was and still is the best option. But, when I started diving into the subject, I noticed that it was too hard! I couldn't understand a single bit of what it was doing! And I thought to my self: "Well, if I'm having this difficulty, and I have some experience with C, a person without any experience won't understand anything!"

I couldn't think about anything to do, because all I wanted was a GUI interface app, but if I didn't have any APIs to do it, I wouldn't also create my own! So, I thought of the idea to take the Windows API, do some research, and try to make a simple "library", that interacted with the Windows API, but made it so the programmer itself wouldn't struggle that much...

So, here it is! The SimpleWinAPI, which is very lightweight, and simple to use!


## Using/Installing the extension

First, you need to clone the project, and extract it, after that, just copy the swapi.h and the swapi.dll files onto your project. After that, to start using it just include it, like this:

```
#include <swapi.h>
```

And that's it! Than you can start using in your project this library!
    
## API Docs

#### Initializing the API

```
void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
```

| Parameter   | Type       |
| :---------- | :--------- |
| `hInstance` | `HINSTANCE` |
| `hPrevInstance` | `HINSTANCE` |
| `lpCmdLine` | `LPSTR` |
| `nCmdShow` | `int` |

You need to use the start function of the typical Windows API, and pass all the parameters the function receives. Like this:

Example:

```
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    swapi_init(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
```


#### Setting some window properties

```
void swapi_createwindow(LPCWSTR classname, LPCWSTR windowname, int positionx, int positiony, int width, int height);
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `classname`      | `LPCWSTR` | The class name |
| `windowname`      | `LPCWSTR` | The window name |
| `positionx`      | `int` | The position of the window, in the x axis |
| `positiony`      | `int` | The position of the window, in the y axis |
| `width`      | `int` | The width of the window |
| `height`      | `int` | The height of the window |

Example:

```
swapi_createwindow(L"window", L"window", 0, 0, 600, 600);
```

#### Changing the style of the window 

```
void swapi_changestyle(DWORD newstyle);
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `newstyle`      | `DWORD` | Here you put the styles you want |

The styles are the same as in the Windows API. You can read here the Microsoft documentation:

https://docs.microsoft.com/en-us/windows/win32/winmsg/window-styles

Example (1 style):

```
swapi_changestyle(WS_DISABLED);
```

Example (2+ styles) (You have to put a | after every style you decide to use):

```
swapi_changestyle(WS_DISABLED | WS_MAXIMIZE);
```

#### Changing the cursor

```
void swapi_changecursor(char *name);
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `name`      | `char *` | Put here the name of the corresponding cursor name |

Names of the cursors:

- appstarting
- arrow
- ibeam
- wait
- cross
- uparrow
- sizenwse
- sizenesw
- sizewe
- sizens
- sizeall
- no
- hand
- help

Example:

```
swapi_changecursor("wait");
```

#### Changing the icon

```
void swapi_changeicon(char *name);
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `name`      | `char *` | Put here the name of the corresponding icon name |

Names of the icons:

- application
- hand
- question
- exclamation
- asterisk
- winlogo
- shield
- warning
- error
- information

Example:

```
swapi_changeicon("error");
```

#### Adding quit events to the window

```
void swapi_addwindowevent(char *windowevent, void (*func)(), char *windname);
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `windowevent`      | `char *` | Put here the name of the corresponding window event you want to add |
| `func`      | `void (*)()` | Put here the address of the function that is going to run when the event added is fired |
| `windname`      | `char *` | Put here the name of the name where the events are added |

Names of the window events that exist:

- null
- create
- move
- size
- activate
- setfocus
- killfocus
- enable
- setredraw
- settext
- gettext
- gettextlength
- paint
- close
- queryendsession
- queryopen
- endsession
- quit
- erasebkgnd
- syscolorchange
- showwindow
- wininitchange
- settingchange
- devmodechange
- activateapp
- fontchange
- timechange
- cancelmode
- setcursor
- mouseactivate
- childactivate
- queuesync
- getminmaxinfo

Example:

```
swapi_addwindowevent("null", &event, "mainwindow");
```

#### Showing the window

```
void swapi_showwindow(void (*func)());
```

| Parameter   | Type       | Description                                   |
| :---------- | :--------- | :------------------------------------------ |
| `func`      | `void (*)()` | Put here the address of the function that is going to run after the window is shown. If you don't have anymore code further, set it to NULL |

Example:

```
swapi_showwindow(&afterwindowshown);
```

#### Note:

Right now you can only display 1 window at a time. Maybe this will be fixed in future updates. 

## Compiling your project

After your project is ready to be tested/published, you have to compile it (on obj format). To do that, just compile your project the way you want, adding the (-c) option and (-I.), so it includes the swapi.h file. After that you run this command:

```
gcc -o (exec file) -s (obj file) -L. -lswapi
```

exec file - The file that the final user is going to execute
obj file - The file that you compiled earlier

Example:

```
gcc -I. -c .\main.c -o main.o
gcc -o main.exe -s main.o -L. -lswapi
```

## Contributors

- [@hyperdregon](https://github.com/hyperdregon)

## Contribute

All contributions are welcome!

Just clone the project, and make a pull request if you have any modifications you want to do to this project.

If you do contribute, your name is going to appear in the contributors page!


## FAQ

#### Is this project going to be updated regularly?

Yes, it will.

#### Are you planning to port this extension to another language? (Ex. Python, Java)

At the moment, no.

#### Does this extension support other OSes except Windows?

It isn't the extension that isn't supported. DLLs are only supported on Windows, but the project can be easily compiled to Linux or MacOS. The problem is that the Windows API only supports Windows, so you would need to use Wine or a Windows VM.