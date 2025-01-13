# [level 3] 베스트앨범 - 42579 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/42579) 

### 성능 요약

메모리: 3.69 MB, 시간: 0.05 ms

### 구분

코딩테스트 연습 > 해시

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 01월 13일 20:03:16

### 문제 설명

<p>스트리밍 사이트에서 장르 별로 가장 많이 재생된 노래를 두 개씩 모아 베스트 앨범을 출시하려 합니다. 노래는 고유 번호로 구분하며, 노래를 수록하는 기준은 다음과 같습니다.</p>

<ol>
<li>속한 노래가 많이 재생된 장르를 먼저 수록합니다.</li>
<li>장르 내에서 많이 재생된 노래를 먼저 수록합니다.</li>
<li>장르 내에서 재생 횟수가 같은 노래 중에서는 고유 번호가 낮은 노래를 먼저 수록합니다.</li>
</ol>

<p>노래의 장르를 나타내는 문자열 배열 genres와 노래별 재생 횟수를 나타내는 정수 배열 plays가 주어질 때, 베스트 앨범에 들어갈 노래의 고유 번호를 순서대로 return 하도록 solution 함수를 완성하세요.</p>

<h5>제한사항</h5>

<ul>
<li>genres[i]는 고유번호가 i인 노래의 장르입니다.</li>
<li>plays[i]는 고유번호가 i인 노래가 재생된 횟수입니다.</li>
<li>genres와 plays의 길이는 같으며, 이는 1 이상 10,000 이하입니다.</li>
<li>장르 종류는 100개 미만입니다.</li>
<li>장르에 속한 곡이 하나라면, 하나의 곡만 선택합니다.</li>
<li>모든 장르는 재생된 횟수가 다릅니다.</li>
</ul>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>genres</th>
<th>plays</th>
<th>return</th>
</tr>
</thead>
        <tbody><tr>
<td>["classic", "pop", "classic", "classic", "pop"]</td>
<td>[500, 600, 150, 800, 2500]</td>
<td>[4, 1, 3, 0]</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>classic 장르는 1,450회 재생되었으며, classic 노래는 다음과 같습니다.</p>

<ul>
<li>고유 번호 3: 800회 재생</li>
<li>고유 번호 0: 500회 재생</li>
<li>고유 번호 2: 150회 재생</li>
</ul>

<p>pop 장르는 3,100회 재생되었으며, pop 노래는 다음과 같습니다.</p>

<ul>
<li>고유 번호 4: 2,500회 재생</li>
<li>고유 번호 1: 600회 재생</li>
</ul>

<p>따라서 pop 장르의 [4, 1]번 노래를 먼저, classic 장르의 [3, 0]번 노래를 그다음에 수록합니다.</p>

<ul>
<li>장르 별로 가장 많이 재생된 노래를 최대 두 개까지 모아 베스트 앨범을 출시하므로 2번 노래는 수록되지 않습니다.</li>
</ul>

<p>※ 공지 - 2019년 2월 28일 테스트케이스가 추가되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges

#p.s
이걸 어떻게 알아요~
```cpp
for (int i = 0; i < genres.size(); i++) {
    genrePlayCount[genres[i]] += plays[i];
    genreSongs[genres[i]].emplace_back(plays[i], i);
}
```
목적: 장르별로 재생 횟수의 합계를 계산

```text
genres = {"pop", "classic", "pop", "classic"}
plays  = {600, 500, 1500, 800}

1st iteration: genrePlayCount["pop"] += 600     -> {"pop": 600}
2nd iteration: genrePlayCount["classic"] += 500 -> {"pop": 600, "classic": 500}
3rd iteration: genrePlayCount["pop"] += 1500    -> {"pop": 2100, "classic": 500}
4th iteration: genrePlayCount["classic"] += 800 -> {"pop": 2100, "classic": 1300}
```
목적: 장르별로 노래 정보를 저장합니다.
```text
1st iteration: genreSongs["pop"].emplace_back(600, 0)
-> {"pop": [(600, 0)]}

2nd iteration: genreSongs["classic"].emplace_back(500, 1)
-> {"pop": [(600, 0)], "classic": [(500, 1)]}

3rd iteration: genreSongs["pop"].emplace_back(1500, 2)
-> {"pop": [(600, 0), (1500, 2)], "classic": [(500, 1)]}

4th iteration: genreSongs["classic"].emplace_back(800, 3)
-> {"pop": [(600, 0), (1500, 2)], "classic": [(500, 1), (800, 3)]}
```
