# Code Content

1.The  folder cyber includes the Cyber RT sources from Apollo.

2.The folder 3rdpart includes the third part libraries needed by Cyber RT.

3.Folder examples contain the  publisher and subscriber source examples.

## Build Cyber RT Lib

The build environment system is Ubuntu 22.04.

```
mkdir build && cd build
cmake ../cyber
```

## Build Publisher and Subscriber Executable

### 1.Build Publisher

```
cd examples/pub && mkdir build
cd build
cmake ..
```

### 2.Build Subscriber

```
cd examples/sub && mkdir build
cd build
cmake ..
```

