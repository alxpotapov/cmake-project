find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIRS}
    ../include
)

add_executable(RbtTest rbt_test.cpp)
target_link_libraries(RbtTest
    ${Boost_LIBRARIES}
)

set_property(TARGET RbtTest PROPERTY CXX_STANDARD 11)
