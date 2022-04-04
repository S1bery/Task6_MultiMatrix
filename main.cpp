#include <iostream>
#include <vector>

int main() {
    std::vector<float> V(4);
    std::vector<float> R(4);
    float M[4][4];

    std::cout << "V:" << std::endl;
    for (int i = 0; i < 4; i++) {
            std::cin >> V[i];
    }

    std::cout << "M:" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> M[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += M[i][j] * V[j];
        }
        R[i] = sum;
    }
    std::cout << "R: " << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << R[i] << " ";
    }

    return 0;
}
