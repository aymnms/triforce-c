<a name="readme-top"></a>

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<br />
<div align="center">

  <h3 align="center">triforce-c</h3>

  <p align="center">
    Make a triforce in a console in clang
    <br />
    <br />
    <a href="https://github.com/aymnms/triforce-c/issues/new?labels=bug&template=bug-report---.md">Report Bug</a>
    ·
    <a href="https://github.com/aymnms/triforce-c/issues/new?labels=enhancement&template=feature-request---.md">Request Feature</a>
  </p>
</div>

<br />

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#installation">Installation</a></li>
    <li><a href="#usage">Usage</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This is a small personal project designed to train me to develop in C.

I started by making a triangle in console, then the same thing but using a matrix (and therefore pointers).
And now I've just got to do the triforce!

<p align="right">(<a href="#readme-top">back to top</a>)</p>


## Installation

### macOS

#### Avec Homebrew

1. Install Homebrew :
   ```sh
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
2. Install GCC :
   ```sh
   brew install gcc
   ```

#### Avec Xcode

1. Install Xcode from l'App Store.
2. Install command line tools :
```sh
xcode-select --install
```

### Windows

#### Avec MinGW

1. Download MinGW from [mingw.org](http://www.mingw.org/).
2. Follow installation instruction.
3. Add `C:\MinGW\bin` to the environment variable `PATH`.

#### Avec MSYS2

1. Download MSYS2 from [msys2.org](https://www.msys2.org/).
2. Follow installation instruction.
3. Open the console MSYS2 and install GCC :
```sh
pacman -Syu
pacman -S mingw-w64-x86_64-gcc
```
1. Add `C:\msys64\mingw64\bin` to the environment variable `PATH`.

### Linux

#### Debian/Ubuntu

1. Open Terminal and install development tools :
```sh
sudo apt update
sudo apt install build-essential
```

#### Fedora

1. Open Terminal and install development tools :
```sh
sudo dnf groupinstall "Development Tools"
```

#### Arch Linux

1. Open Terminal and install development tools :
```sh
sudo pacman -S base-devel
```


<!-- USAGE EXAMPLES -->
## Usage

To execute a c file, you must first compile it, then execute it.

There are 3 files you can run: triangle.c, matrice.c and triforce.c

### Compilation

To compile a file, run the following command in the project directory :
```sh
gcc -o output_name source_file.c
```

Replace `output_name` with the desired name for the executable and `source_file.c` with the name of your source file.


### Exécution

To run the compiled program, use the following command:
```sh
./output_name triangle-width
```

Replace `output_name` with the name of the executable generated during compilation and `triangle-width` with the desired triangle size. For the triforce, this is the width of the entire triforce.



<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/aymnms/triforce-c.svg?style=for-the-badge
[contributors-url]: https://github.com/aymnms/triforce-c/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/aymnms/triforce-c.svg?style=for-the-badge
[forks-url]: https://github.com/aymnms/triforce-c/network/members
[stars-shield]: https://img.shields.io/github/stars/aymnms/triforce-c.svg?style=for-the-badge
[stars-url]: https://github.com/aymnms/triforce-c/stargazers
[issues-shield]: https://img.shields.io/github/issues/aymnms/triforce-c.svg?style=for-the-badge
[issues-url]: https://github.com/aymnms/triforce-c/issues
[license-shield]: https://img.shields.io/github/license/aymnms/triforce-c.svg?style=for-the-badge
[license-url]: https://github.com/aymnms/triforce-c/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
