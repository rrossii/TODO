cmake_minimum_required(VERSION 3.22)
project(todolistPROBE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
include_directories(src)

add_executable(todolistPROBE main.cpp
        src/controller/ControllerToDo.cpp
        src/controller/ControllerToDo.h
        src/model/ToDoItem.cpp
        src/model/ToDoItem.h
        src/model/ToDoModel.cpp
        src/model/ToDoModel.h
        src/ui/mainwindow.cpp
        src/ui/mainwindow.h
        src/ui/mainwindow.ui
        src/ui/dialogaddingwindow.cpp
        src/ui/dialogaddingwindow.h
        src/ui/dialogaddingwindow.ui
#        src/ui/viewitem.cpp
#        src/ui/viewitem.h
#        src/ui/viewitem.ui
        src/ui/infodialogwindow.cpp src/ui/infodialogwindow.h src/ui/infodialogwindow.ui)

target_link_libraries(todolistPROBE
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

