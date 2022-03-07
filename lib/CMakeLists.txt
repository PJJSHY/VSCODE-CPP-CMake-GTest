# OpenCV 참조 설정(OpenCV 설치 위치 기술)
set(OpenCV_DIR C:/OpenCV-MinGW-Build-OpenCV-4.5.5-x64/)
find_package( OpenCV REQUIRED )

# 현재 디렉토리에 있는 모든 파일을 SRC_FILES 변수에 추가
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(drawing STATIC ${SRC_FILES})

# drawing 의 include 경로 지정
target_include_directories(drawing PUBLIC ${CMAKE_SOURCE_DIR}/include ${OpenCV_INCLUDE_DIRS})

# drawing 의 컴파일 옵션 지정
target_compile_options(drawing PRIVATE -Wall -Werror)

# drawing 를 C++ 11 로 컴파일
target_compile_features(drawing PRIVATE cxx_std_11)

# drawing 에 링크
target_link_libraries(drawing PUBLIC ${OpenCV_LIBS})


