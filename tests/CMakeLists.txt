find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIRS}
    ../include
)
if (UNIX)
    add_definitions(-DBOOST_TEST_DYN_LINK)
endif (UNIX)
add_executable(RbtTest rbt_test.cpp)
target_link_libraries(RbtTest
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

set_property(TARGET RbtTest PROPERTY CXX_STANDARD 11)
