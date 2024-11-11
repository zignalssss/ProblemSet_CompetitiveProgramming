def find_t(n, crush):
    # Convert to 0-based indexing
    crush = [x-1 for x in crush]
    
    # Function to find cycle length starting from a node
    def cycle_length(start):
        visited = set()
        current = start
        length = 0
        while current not in visited:
            visited.add(current)
            current = crush[current]
            length += 1
        return length

    # Find all cycle lengths
    cycle_lengths = set()
    for i in range(n):
        if i not in cycle_lengths:
            cycle_lengths.add(cycle_length(i))

    # If all cycles have the same length, return it. Otherwise, return -1
    return list(cycle_lengths)[0] if len(cycle_lengths) == 1 else -1

# Read input
n = int(input())
crush = list(map(int, input().split()))

# Find and print result
print(find_t(n, crush))