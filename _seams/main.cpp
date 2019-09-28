/* KabukiPress Website @version 0.x
@link    https://github.com/kabuki-starship/kabuki.press.website.git
@file    /_seams/main.cpp
@author  Cale McCollough <https://calemccollough.github.io>
@license Copyright 2019 (C) Cale McCollough; all rights reserved (R). This
source code form is covered under the Kabuki Strong Source-available License.
A copy of the license that YOU MUST READ can be found in the readme.md file
in this folder. */

#include "../../kabuki.press/website.inl"

int main(const char** args, int arg_count) {
  return kabuki::press::Website(args, arg_count).Run();
}
