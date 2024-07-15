#include <iostream>
#include <queue>
#include <utility> // for std::pair

int main() {
    std::queue<std::pair<int, int>> q;

    // Push some pairs into the queue
    q.push({1, 2});
    q.push({3, 4});
    q.push({5, 6});

    // Retrieve the front element and assign it to 'top'
    std::pair<int, int> top = q.front();

    // Output the values in 'top'
    std::cout << "Top pair: (" << top.first << ", " << top.second << ")" << std::endl;

    return 0;
}
