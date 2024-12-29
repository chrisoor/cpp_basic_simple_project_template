# Basic, simple project template for C++ projects

## Introduction

This repository is a simple C++ project template. It includes:

- CMake: building and managing the project.
- Conan: dependency management.
- Google Test (gtest): unit testing.

This repository provides template for one executable and two example libraries.

Make sure the following tools are installed on your system:

- CMake
- C++ compiler (GCC, Clang, or MSVC)
- make
- python3 or Conan

This template uses out-of-source build concept, so no build files are stored inside repository:

```text
dev/
└───cpp_basic_simple_project_template/
│   │   src/
│   │   tests/
│   │   README.md
└───build/
```

Be aware that above directory structure shows only example files.

## Getting started

Following examples assume, that bash on linux is used.

If Conan is not installed, python virtual environment can be created
`python3 create_venv.py`

This script creates `build` directory and creates venv. In order to activate this venv run
`source build/venv/bin/activate` (make sure You cd out of folder with repo)

After venv is activated, install Conan as pip package
`pip install conan`

Conan needs to detect Your compiler etc. and store it as `profile`
`conan profile detect`

Keep in mind, that it will probably create `Release` profile. It can be changed by editing file with profile, stored inside `~/conan2/profiles/default`.

Next install conan packages
`conan install -of build/ cpp_basic_simple_project_template/`

If any packages are missing for Your profile, they can be built during installation with
`conan install -of build/ --build=missing cpp_basic_simple_project_template/`

Run CMake to generate build files
`cmake -DCMAKE_BUILD_TYPE=Debug -S cpp_basic_simple_project_template/ -B build/`

`-DCMAKE_BUILD_TYPE=Debug` = assigns value to cache variable `CMAKE_BUILD_TYPE` value `Debug`, can also be `Release`, make sure it matches value with setting in Conan profile used.

From inside `build` directory, `make` can be run to build every target.

Built binaries will be stored inside `build/ProjectTemplate/`.

`ctest` will run all tests detected.
