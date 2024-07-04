cmake_minimum_required(VERSION 2.8)

project(WotanUi)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
if(Qt5Core_FOUND)
	message("lib Qt5 found.")
	include_directories(${Qt5Core_INCLUDE_DIRS})
	include_directories(${Qt5Widgets_INCLUDE_DIRS})
	set(CMAKE_AUTOMOC ON)
	set(CMAKE_AUTORCC ON)
	set(CMAKE_AUTOUIC ON)
else(Qt5Core_FOUND)
	message(FATAL_ERROR "lib Qt5 not found.")
endif(Qt5Core_FOUND)

include_directories(.)

aux_source_directory(. WOTANUI_ROOT_DIR)


add_executable(
	${PROJECT_NAME}
	${WOTANUI_ROOT_DIR}
)

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)