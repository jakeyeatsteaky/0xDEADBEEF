# 0xDEADBEEF
Rendering Engine - VULKAN - C++ - SDL2

Dependencies:
    GLM             - https://github.com/g-truc/glm
    SDL             - https://www.libsdl.org/
    dear IMGUI      - https://github.com/ocornut/imgui
    STB Image       - https://github.com/nothings/stb
    Tiny Obj Loader - https://github.com/tinyobjloader/tinyobjloader
    Vk Bootstrap    - https://github.com/charles-lunarg/vk-bootstrap/blob/master/src/VkBootstrap.cpp
    VMA             - https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator
    {fmt}           - https://fmt.dev/latest/index.html
    fastGLTF        - https://github.com/spnda/fastgltf


Build using CMAKE (only supporting linux right now)

mkdir build
cd build
cmake ..
make
