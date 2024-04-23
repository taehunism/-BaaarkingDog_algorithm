#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cnt[10] = {0}; // 0부터 9까지의 숫자 개수를 저장할 배열
    string room_number;
    cin >> room_number;
    
    for(int i = 0; i<room_number.size();i++) {
        int num = room_number[i] - '0'; // char를 int로 변환
        cnt[num]++;
    }
    
    // 6과 9는 서로 대체 가능하므로, 두 개의 합 중 최대 값을 구함
    cnt[6] = (cnt[6] + cnt[9] + 1) / 2;
    cnt[9] = 0; // 6과 9는 이미 처리했으므로 0으로 설정
    
    int answer = *max_element(cnt, cnt + 10); // 가장 큰 값이 필요한 세트의 수
    
    cout << answer << endl;
    
    return 0;
}
