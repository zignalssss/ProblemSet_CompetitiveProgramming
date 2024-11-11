def solve_robin_hood(n, d, k, jobs):
    overlap = [0] * (n + 1)   
    for l, r in jobs:
        overlap[l] += 1
        if r + 1 <= n:
            overlap[r + 1] -= 1

    for i in range(1, n + 1):
        overlap[i] += overlap[i - 1]

    best_brother_start = 1
    best_brother_jobs = 0
    best_mother_start = 1
    best_mother_jobs = float('inf')
    for start in range(1, n - d + 2):
        end = start + d - 1
        jobs_count = len(set(job for job in jobs if not (job[1] < start or job[0] > end)))
        
        if jobs_count > best_brother_jobs:
            best_brother_jobs = jobs_count
            best_brother_start = start
  
        if jobs_count < best_mother_jobs:
            best_mother_jobs = jobs_count
            best_mother_start = start 
    return best_brother_start, best_mother_start
def main():
    t = int(input())
    for _ in range(t):
        n, d, k = map(int, input().split())
        jobs = [tuple(map(int, input().split())) for _ in range(k)]
        brother_start, mother_start = solve_robin_hood(n, d, k, jobs)
        print(brother_start, mother_start)

if __name__ == "__main__":
    main()