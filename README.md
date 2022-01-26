# SimpleWinAPI

(Before any backstory on why I did this, I have to relember that this is made for C only! It may work on C++, but it isn't and won't be tested)

Well, I've recently started developing windows apps with gtk, but to actually use that on windows, you need to have a lot of folders and icons and themes, and it is a hassle to maintain a simple project...

So, I've came to the conclusion that for doing what I wanted (creating an UI that would work on windows) I needed the Windows API (windows.h). It was and still is the best option. But, when I started diving into the subject, I noticed that it was too hard! I couldn't understand a single bit of what it was doing! And I thought to my self: "Well, if I'm having this difficulty, and I have some experience with C, a person without any experience won't understand anything!"

I couldn't think about anything to do, because all I wanted was a GUI interface app, but if I didn't have any APIs to do it, I wouldn't also create my own! So, I thought of the idea to take the Windows API, do some research, and try to make a simple library, that interacted with the Windows API, but made it so the programmer itself wouldn't struggle that much...

So, here it is! The SimpleWinAPI, which is very lightweight, and simple to use!

[Project wiki](https://github.com/hyperdregon/SimpleWinAPI/wiki) has all information needed to start using this project.

If you want to report a bug or a typo on the library code or the README or wiki, use the issues tab. For help, suggestions and announcements, check the discussions tab.

## Enable good looking elements

To do this, you have to create a manifest file, that is called (appname).exe.manifest. After that, open this file, and put this content in it.

```
<?xml version="1.0" encoding="utf-8" standalone="yes"?>

<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
  <compatibility xmlns="urn:schemas-microsoft-com:compatibility.v1">
    <application>
      <!-- Supports Windows Vista / Server 2008 -->
      <supportedOS Id="{e2011457-1546-43c5-a5fe-008deee3d3f0}"/>
      <!-- Supports Windows 7 / Server 2008 R2 -->
      <supportedOS Id="{35138b9a-5d96-4fbd-8e2d-a2440225f93a}"/>
      <!-- Supports Windows 8 / Server 2012 -->
      <supportedOS Id="{4a2f28e3-53b9-4441-ba9c-d69d4a4a6e38}"/>
      <!-- Supports Windows 8.1 / Server 2012 R2 -->
      <supportedOS Id="{1f676c76-80e1-4239-95bb-83d0f6d0da78}"/>
      <!-- Supports Windows 10 -->
      <supportedOS Id="{8e0f7a12-bfb3-4fe8-b9a5-48fd50a15a9a}"/>
    </application>
  </compatibility>
  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">
    <security>
      <requestedPrivileges>
        <requestedExecutionLevel level="asInvoker" uiAccess="false"/>
      </requestedPrivileges>
    </security>
  </trustInfo>
  <dependency>
    <dependentAssembly>
      <assemblyIdentity type="Win32" name="Microsoft.Windows.Common-Controls" version="6.0.0.0" processorArchitecture="*" publicKeyToken="6595b64144ccf1df" language="*"/>
    </dependentAssembly>
  </dependency>
</assembly>
```

After that, save the file, and run this command, to integrate the manifest file with the exe file:

```
mt -manifest (appname).exe.manifest -outputresource:(appname).exe 
```

And then, you can run the program! And the new window appearance will be visible.

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