#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 9명의 난쟁이 키를 입력받습니다.
    vector<int> heights(9);
    for (int i = 0; i < 9; ++i) {
        cin >> heights[i];
    }

    // 난쟁이들의 키를 정렬합니다.
    sort(heights.begin(), heights.end());

    // 가능한 모든 7명의 조합을 확인하면서 합이 100인 조합을 찾습니다.
    do {
        int sum = 0;
        vector<int> selected_heights;
        for (int i = 0; i < 7; ++i) {
            sum += heights[i];
            selected_heights.push_back(heights[i]);
        }
        // 합이 100이면 출력하고 프로그램을 종료합니다.
        if (sum == 100) {
            for (int i = 0; i < 7; ++i) {
                cout << selected_heights[i] << "\n";
            }
            return 0;
        }
    } while (next_permutation(heights.begin(), heights.end()));
    // 다음 순열 확인 .. do-while문을 통해 한 번은 실행하고 루프.
    // 순열 함수 쓰기 위해서는 배열,리스트,벡터를 정리해놔야함 
    return 0;
}
