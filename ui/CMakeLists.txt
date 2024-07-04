cmake_minimum_required(VERSION 2.8)

project(WotanUi)



find_package(Qt5 COMPONENTS Widgets REQUIRED)
if(Qt5_FOUND)
else(Qt5_FOUND)
	message(FATAL_ERROR "lib Qt5 not found")
endif(Qt5_FOUND)

aux_source_directory(. WOTANUI_ROOT_DIR)


add_executable(
	${PROJECT_NAME}
	${WOTANUI_ROOT_DIR}
)

