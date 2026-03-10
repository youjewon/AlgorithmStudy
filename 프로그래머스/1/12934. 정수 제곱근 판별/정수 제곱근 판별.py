def solution(n):
    answer = int(n ** (1/2))
    if n == answer ** 2:
        return (answer+1) ** 2
    else :
        return -1
        