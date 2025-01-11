# [level 0] 두 수의 나눗셈 - 120806 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120806) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 01월 11일 20:38:52

### 문제 설명

<p>정수 <code>num1</code>과 <code>num2</code>가 매개변수로 주어질 때, <code>num1</code>을 <code>num2</code>로 나눈 값에 1,000을 곱한 후 정수 부분을 return 하도록 soltuion 함수를 완성해주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>0 &lt; <code>num1</code> ≤ 100</li>
<li>0 &lt; <code>num2</code> ≤ 100</li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>num1</th>
<th>num2</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>2</td>
<td>1500</td>
</tr>
<tr>
<td>7</td>
<td>3</td>
<td>2333</td>
</tr>
<tr>
<td>1</td>
<td>16</td>
<td>62</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li><code>num1</code>이 3, <code>num2</code>가 2이므로 3 / 2 = 1.5에 1,000을 곱하면 1500이 됩니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>num1</code>이 7, <code>num2</code>가 3이므로 7 / 3 = 2.33333...에 1,000을 곱하면 2333.3333.... 이 되며, 정수 부분은 2333입니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li><code>num1</code>이 1, <code>num2</code>가 16이므로 1 / 16 = 0.0625에 1,000을 곱하면 62.5가 되며, 정수 부분은 62입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges
>
#p.s
이 문제의 경우
```cpp
int solution(int num1, int num2) {
    return (num1* 1000)/num2 ;
}
```
위와 같이 형변환 없이 곱연산을 먼저해 결과를 만들어내는 방법이 있다. 메모리 변경이 굳이 필요하지 않은 문제는 최대한 형변환을 사용하지 않는것이 메모리 최적화 하기 좋아 보인다.

지금 문제는 간단한 코드지만 다른 복잡한 코드에서 메모리 관리는 매우 중요하기 때문에 이러한 방법이 있다는것을 인지하는것도 중요한 포인트 인것 같다.
