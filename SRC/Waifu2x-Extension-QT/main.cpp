﻿/*
    Copyright (C) 2021  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QApplication a(argc,argv);
    a.setQuitOnLastWindowClosed(false);//隐藏无窗口时保持运行
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:

v3.11.26-beta:
- New model: rife-v2.4 for rife-ncnn-vulkan.
- Update rife-ncnn-vulkan.

v3.11.25-beta:
- Add a turn off screen button.

v3.11.24-beta:
- Waiting for the main file processing thread to stop instead of force it to stop when user close the program.
- Improve "Pause".

v3.11.23-beta:
- Optimize performance.

v3.11.22-beta:
- Multithreading of frame interpolation engines will not be enabled by default.
- Update FFmpeg&FFprobe.
- Fix bug: When [Process video by segment] is enabled, if the user forcibly closes the program and then restarts the software to continue processing the video, it may cause a cache error.

v3.11.21-beta:
- Update GUI layout.
- Optimize performance.
- Update ImageMagick,FFmpeg&FFprobe.
- Fix bug: Engine settings are pre-loaded even though it's not being used.
- Fix bug: Unable to overwrite files sometime.
- Fix bug: Cannot fix the suffix of mp4 video when reading files.

--------------------------------------------------------------------------
To do:
- 在SRMD和REALSR正式加入cpu支持后, 在GPU ID tooltip上添加[★ "-1" is CPU,others are GPUs ★]
---------------------------------------------------------------------------
Integrated component:
- gifsicle version 1.92
- SoX 14.4.2-win32
- waifu2x-caffe 1.2.0.4
- Waifu2x-converter 9e0284ae23d43c990efb6320253ff0f1e3776854
- Waifu2x-NCNN-Vulkan 20210210
- SRMD-NCNN-Vulkan 20210210
- RealSR-NCNN-Vulkan 20210210
- ImageMagick 7.0.11-1-portable-Q16-x64
- Anime4KCPP v2.5.0
- FFmpeg&FFprobe 2021-02-23-git-78d5e1c653-full_build
- NirCmd v2.86
- Ghostscript 9.53.3
- GNU Wget 1.20.3
- rife-ncnn-vulkan 20210227
- cain-ncnn-vulkan 20210210
---------------------------------------------------------------------------
Icons made by :
Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
Roundicons (https://www.flaticon.com/authors/roundicons) From Flaticon : https://www.flaticon.com/
Icongeek26 (https://www.flaticon.com/authors/Icongeek26) From Flaticon : https://www.flaticon.com/
*/
