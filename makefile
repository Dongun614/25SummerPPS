# 컴파일러와 플래그 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall -O2

# 모든 cpp 파일 찾기
SRCS := $(wildcard *.cpp)

# 각 소스 파일에 대해 실행 파일 이름 지정 (확장자 제거)
EXES := $(SRCS:.cpp=)

# 기본 타겟: 모든 실행 파일 빌드
all: $(EXES)

# 각 실행 파일 빌드 규칙
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# clean: 빌드된 실행 파일 삭제
clean:
	rm -f $(EXES)
