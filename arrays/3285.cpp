#include <iostream>
#include <vector>

using namespace std;

/**
 * Finds all "stable mountains" — indices where the previous mountain's
 * height strictly exceeds the given threshold.
 *
 * @param height     Input array representing mountain heights
 * @param threshold  Minimum height the previous mountain must exceed
 * @return           Vector of indices of all stable mountains
 */
vector<int> stableMountains(vector<int>& height, int threshold) {
    vector<int> stableIndices;

    for (int i = 0; i < height.size() - 1; i++) {
        if (height[i] > threshold) {
            stableIndices.push_back(i + 1);
        }
    }

    return stableIndices;
}

int main() {
    vector<int> height = {1, 2, 3, 4, 5};
    int threshold = 2;

    vector<int> result = stableMountains(height, threshold);

    cout << "Stable mountain indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}