# [Silver IV] 문자열 집합 - 14425 

[문제 링크](https://www.acmicpc.net/problem/14425) 

### 성능 요약

메모리: 7664 KB, 시간: 320 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 문자열, 트리를 사용한 집합과 맵

### 제출 일자

2024년 12월 9일 17:47:52

### 문제 설명

<p>총 N개의 문자열로 이루어진 집합 S가 주어진다.</p>

<p>입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 문자열의 개수 N과 M (1 ≤ N ≤ 10,000, 1 ≤ M ≤ 10,000)이 주어진다. </p>

<p>다음 N개의 줄에는 집합 S에 포함되어 있는 문자열들이 주어진다.</p>

<p>다음 M개의 줄에는 검사해야 하는 문자열들이 주어진다.</p>

<p>입력으로 주어지는 문자열은 알파벳 소문자로만 이루어져 있으며, 길이는 500을 넘지 않는다. 집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다.</p>

### 출력 

 <p>첫째 줄에 M개의 문자열 중에 총 몇 개가 집합 S에 포함되어 있는지 출력한다.</p>


#코드
```cpp
#include<iostream>
#include<unordered_set>
#include<string>

int main() {
    int n,m;
    std::cin >> n >> m;

    std::unordered_set<std::string> s;

    // 집합 S에 문자열 입력
    for(int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        s.insert(str);
    }

    // 검색할 문자열
    int count = 0;
    for(int i = 0; i < m; ++i) {
        std::string str;
        std::cin >> str;
        if(s.find(str) != s.end()) {
            ++count;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
```

## 설명

탐색에 필요한 값만 unordered_set 해시구조의 set 자료구조에 저장하고 겸색할 문자는 입력과 동시에 저장되어있던 set과 비교하여 카운트를 증가시키는 방법
