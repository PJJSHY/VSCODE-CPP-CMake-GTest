include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)

# 현재 디렉토리에 있는 모든 파일을 SRC_FILES 변수에 추가한다.
# file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
#  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
# )

# add_executable(drawing_test ${SRC_FILES})
# target_link_libraries(drawing_test PRIVATE drawing gtest gmock gtest_main)

#drawing에 대한 test code 실행파일 생성 설정
add_executable(drawing_test ${CMAKE_CURRENT_SOURCE_DIR}/drawing_test.cpp)
target_link_libraries(drawing_test PRIVATE drawing gtest gmock gtest_main)

#test fixture에 대한 test code 실행파일 생성 설정
add_executable(test_fixture ${CMAKE_CURRENT_SOURCE_DIR}/test_fixture.cpp)
target_link_libraries(test_fixture PRIVATE gtest gmock gtest_main)