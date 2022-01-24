# SimpleWinAPI

(Before any backstory on why I did this, I have to relember that this is made for C only! It may work on C++, but it isn't and won't be tested)

Well, I've recently started developing windows apps with gtk, but to actually use that on windows, you need to have a lot of folders and icons and themes, and it is a hassle to maintain a simple project...

So, I've came to the conclusion that for doing what I wanted (creating an UI that would work on windows) I needed the Windows API (windows.h). It was and still is the best option. But, when I started diving into the subject, I noticed that it was too hard! I couldn't understand a single bit of what it was doing! And I thought to my self: "Well, if I'm having this difficulty, and I have some experience with C, a person without any experience won't understand anything!"

I couldn't think about anything to do, because all I wanted was a GUI interface app, but if I didn't have any APIs to do it, I wouldn't also create my own! So, I thought of the idea to take the Windows API, do some research, and try to make a simple library, that interacted with the Windows API, but made it so the programmer itself wouldn't struggle that much...

So, here it is! The SimpleWinAPI, which is very lightweight, and simple to use!

[Project wiki](https://github.com/hyperdregon/SimpleWinAPI/wiki) has all information needed to start using this project.


## Contribute

All contributions are welcome!

Just clone the project, and make a pull request if you have any modifications you want to do to this project.

If you do contribute, your name is going to appear in the contributors page!


## FAQ

#### Is this project going to be updated regularly?

Yes, it will.

#### Are you planning to port this library to another language? (Ex. Python, Java)

At the moment, no.

#### Does this library support other OSes except Windows?

It isn't the library that isn't supported. DLLs are only supported on Windows, but the project can be easily compiled to Linux or MacOS. The problem is that the Windows API only supports Windows, so you would need to use Wine or a Windows VM.