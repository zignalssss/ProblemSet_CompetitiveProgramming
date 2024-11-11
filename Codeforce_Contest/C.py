def min_gold_for_robin_hood(t, cases):
    results = []
    
    for n, wealth in cases:
        S = sum(wealth)
        a_max = max(wealth)
        
        unhappy_count = sum(1 for a in wealth if a < S / (2 * n))
        
        if unhappy_count > n / 2 or n <= 2:
            results.append(-1)
            continue
        
        low, high = 0, 10**6 * 2 
        
        while low < high:
            mid = (low + high) // 2
            new_avg = (S + mid) / n
            new_unhappy_count = sum(1 for a in wealth if a < new_avg / 2)
            
            if new_unhappy_count > n / 2:
                high = mid
            else:
                low = mid + 1
        
        results.append(low)
    
    return results


# Input handling
t = int(input())
cases = []

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    cases.append((n, arr))


results = min_gold_for_robin_hood(t, cases)

for result in results:
    print(result)
