# [Silver IV] 듣보잡 - 1764 

[문제 링크](https://www.acmicpc.net/problem/1764) 

### 성능 요약

메모리: 7396 KB, 시간: 88 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 정렬, 문자열

### 제출 일자

2024년 12월 12일 18:31:39

### 문제 설명

<p>김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다. 이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과, N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다. 이름은 띄어쓰기 없이 알파벳 소문자로만 이루어지며, 그 길이는 20 이하이다. N, M은 500,000 이하의 자연수이다.</p>

<p>듣도 못한 사람의 명단에는 중복되는 이름이 없으며, 보도 못한 사람의 명단도 마찬가지이다.</p>

### 출력 

 <p>듣보잡의 수와 그 명단을 사전순으로 출력한다.</p>

# 코드
```cpp
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

int main() {
	int n, m;
	std::unordered_set<std::string> names;
	std::vector<std::string> result;
	std::cin >> n >> m;

	// 듣지 못한 사람
	for (int i = 0; i < n; ++i) {
		std::string name;
		std::cin >> name;
		names.insert(name);
	}

	// 보지 못한 사람
	for (int i = 0; i < m; ++i) {
		std::string name;
		std::cin >> name;
		// 듣지 못한 사람의 명단에 있으면 교집합 추가
		if (names.find(name) != names.end()) {
			result.push_back(name);
		}
	}

	std::sort(result.begin(), result.end());

	std::cout << result.size() << "\n";
	for (const auto& name : result) {
		std::cout << name << "\n";
	}
	return 0;
}
```

# 설명
unordered_set 듣지못한 사람저장후 보지못한 사람을 입력할때 듣지못한 사람의 명단이 있다면 result 배열에 이름을 추가
정렬후 출력
