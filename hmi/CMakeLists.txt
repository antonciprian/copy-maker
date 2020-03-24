cmake_minimum_required(VERSION 3.10.2)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/inc)
file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/inc/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} 
	${HEADERS} 
        ${SOURCES})
target_link_libraries(${PROJECT_NAME}
        ${QT5_LIBS})
install(TARGETS ${PROJECT_NAME}
	DESTINATION ${CMAKE_BINARY_DIR}/out/bin)
