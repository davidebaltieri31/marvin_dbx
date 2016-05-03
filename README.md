# Marvin, modified for Win&VS2013

Marvin is a GPU-only neural network framework made with simplicity, hackability, speed, memory consumption, and high dimensional data in mind.

This fork was modified to be compilable on Windows + Visual Studio 2013, and enable integration inside other projects (latter still WIP)

## Dependences

Download [CUDA 7.5](https://developer.nvidia.com/cuda-downloads) and [cuDNN 5](https://developer.nvidia.com/cudnn). 

To enable CUDA:

1. Open VS2013 Express
2. Click on New Project...
3. Select Visual C++, then General, then Empty Project
4. At this point you should have a new project open. Right click on the project (name) and select Build Dependencies... Build Customizations...
5. A new dialog opens, select the CUDA 7.5 (.targets,.props) checkbox, and click OK
6. In your project explorer window, right click on marvin.cu file, and select CUDA C++, then make any changes (for example, you may want to change the build target from sm_20 to something else...)
7. Change project properties C++/Additional Include Directories and add cuDNN include dir
8. Change project properties Linker/Additional Library Directories and add cuDNN lib dir and CUDA 7.5 lib dir
9. Change project properties Linker/Input/Additional Dependencies and add cudart_static.lib;cudnn.lib;cublas.lib;curand.lib;
10. Add appropriate source code to your Source.cu file
11. Build...


Refer to the original base repo at https://github.com/PrincetonVision/marvin for everything else :D
