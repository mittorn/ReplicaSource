project(replicasrc-dedicated)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(${PROJECT_NAME} MODULE ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "dedicated"
)

target_link_libraries(${PROJECT_NAME} srcsdk-tier1 replicasrc-tier0 replicasrc-vstdlib)