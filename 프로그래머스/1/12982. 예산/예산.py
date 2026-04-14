def solution(d, budget):
    d.sort()
    
    count = 0
    total = 0
    
    for price in d:
        total += price
        if total > budget:
            break
        count+=1
    
    return count