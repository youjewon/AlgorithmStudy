def solution(a, b):
    answer = 0
    mm = min(a,b)
    mx = max(a,b)
    for i in range(mm,mx + 1):
        answer += i
    
    return answer