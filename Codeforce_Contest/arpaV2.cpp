#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int findT(int n, std::vector<int>& crush) {
        // Convert to 0-based indexing
        for (int& x : crush) x--;
        
        std::unordered_set<int> cycleLengths;
        
        for (int i = 0; i < n; i++) {
            int length = cycleLength(i, crush);
            if (length > 0) {
                cycleLengths.insert(length);
            }
        }
        
        return cycleLengths.size() == 1 ? *cycleLengths.begin() : -1;
    }
    
private:
    int cycleLength(int start, const std::vector<int>& crush) {
        std::vector<bool> visited(crush.size(), false);
        int current = start;
        int length = 0;
        
        while (!visited[current]) {
            visited[current] = true;
            current = crush[current];
            length++;
            if (current == start) {
                return length;
            }
        }
        
        return 0;  // Not a cycle
    }
};

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> crush(n);
    for (int i = 0; i < n; i++) {
        std::cin >> crush[i];
    }
    
    Solution solution;
    std::cout << solution.findT(n, crush) << std::endl;
    
    return 0;
}
