# [Silver V] 숫자 카드 - 10815 

[문제 링크](https://www.acmicpc.net/problem/10815) 

### 성능 요약

메모리: 5892 KB, 시간: 552 ms

### 분류

이분 탐색, 자료 구조, 해시를 사용한 집합과 맵, 정렬

### 제출 일자

2024년 12월 9일 17:17:42

### 문제 설명

<p>숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다. 두 숫자 카드에 같은 수가 적혀있는 경우는 없다.</p>

<p>셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다</p>

### 출력 

 <p>첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.</p>


#코드
```cpp
#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int n,m;
    std::cin >> n;

    std::vector<int> cards(n);
    for(int i = 0; i < n; ++i)  {
        std::cin >> cards[i];
    }
    // 정렬
    std::sort(cards.begin(),cards.end());
	
    std::cin >> m;
    std::vector<int> queries(m);
    for(int i = 0;i < m;++i) {
        std::cin >> queries[i]; 
    }

    for(int i = 0; i < m; ++i) {
        if(std::binary_search(cards.begin(),cards.end(),queries[i])) {
            std::cout << 1 << " ";
        }
        else {
            std::cout << 0 << " ";
        }
    }
    std::cout << "\n";
    return 0;
}
```

##설명

정렬 + 이진 탐색을 이용한 풀이 방법으로 입력받은 cards 배열(vector)를 sort함수로 정렬을 시키고 이후 binary_search함수로 비교할 배열을 조건으로 값이 있으면 1 없으면 0 을 출력하도록 작성


#다른 방법
```cpp
#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int n, m;
    std::cin >> n;

    // 상근이가 가진 숫자 카드
    std::unordered_set<int> cards;
    for (int i = 0; i < n; ++i) {
        int card;
        std::cin >> card;
        cards.insert(card);
    }

    // 확인할 숫자 카드
    std::cin >> m;
    std::vector<int> queries(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> queries[i];
    }

    // 결과 출력
    for (int i = 0; i < m; ++i) {
        if (cards.find(queries[i]) != cards.end()) {
            std::cout << 1 << " ";
        } else {
            std::cout << 0 << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
```

## 설명

unordered_set 는 해쉬 구조로 정렬을 필요로 하지 않으며 중복 제외하고 저장하는 형태로 처음 입력값으로 가지며 이후 find 함수를 이용하여 찾는 풀이방법임. 


