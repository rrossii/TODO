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

add_executable(todolistPROBE main.cpp src/controller/ControllerToDo.cpp src/controller/ControllerToDo.h
        src/model/ToDoItem.cpp src/model/ToDoItem.h src/model/ToDoModel.cpp
        src/model/ToDoModel.h src/ui/mainwindow.cpp src/ui/mainwindow.h src/ui/mainwindow.ui src/ui/dialogaddingwindow.cpp src/ui/dialogaddingwindow.h src/ui/dialogaddingwindow.ui)

#add_executable(todolistPROBE main.cpp TODO/src/controller/ControllerToDo.cpp TODO/src/controller/ControllerToDo.h
#        TODO/src/model/ToDoItem.cpp TODO/src/model/ToDoItem.h TODO/src/model/ToDoModel.cpp
#        TODO/src/model/ToDoModel.h TODO/src/ui/mainwindow.cpp TODO/src/ui/mainwindow.h TODO/src/ui/mainwindow.ui)
target_link_libraries(todolistPROBE
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

