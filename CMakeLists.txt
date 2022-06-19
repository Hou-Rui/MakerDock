cmake_minimum_required(VERSION 3.23)
project(MakerDock)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Instruct CMake to create code from Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)
find_package(KF5WindowSystem CONFIG REQUIRED)

set(makerdock_SRC
  src/main.cpp
  src/MakerDock.cpp
  src/MakerDockItem.cpp
  src/MakerDockWinItem.cpp
  src/MakerDockRootItem.cpp
)

# Tell CMake to create the helloworld executable
add_executable(makerdock ${makerdock_SRC})

# Use the Widgets module from Qt 5.
target_link_libraries(makerdock Qt5::Widgets)
target_link_libraries(makerdock KF5::WindowSystem)

# Install the executable
install(TARGETS makerdock DESTINATION bin)
