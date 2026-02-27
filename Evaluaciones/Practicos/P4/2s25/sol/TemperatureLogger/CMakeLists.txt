cmake_minimum_required(VERSION 3.19)
project(TemperatureLogger LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Charts)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(TemperatureLogger
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    tempconverter.h tempconverter.cpp
    temphistory.h temphistory.cpp
)

target_link_libraries(TemperatureLogger
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::Charts
)
target_link_libraries(TemperatureLogger PRIVATE Qt6::Core)
target_link_libraries(TemperatureLogger PRIVATE Qt6::Core)

include(GNUInstallDirs)

install(TARGETS TemperatureLogger
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET TemperatureLogger
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
