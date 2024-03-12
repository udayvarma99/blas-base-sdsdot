#include <iostream>
#include <cstdlib>
#include <chrono>

const long  N = 100000000; 

float Product_n(const float* a, const float* b, long long n) {
    float result = 0.0f;
    for (long long i = 0; i < n; ++i) {
        result += a[i] * b[i];
    }
    return result;
}

int main() {
    float* a = new float[N];
    float* b = new float[N];

    // Initialize vectors with random values
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (long long i = 0; i < N; ++i) {
        a[i] = static_cast<float>(std::rand()) / RAND_MAX;
        b[i] = static_cast<float>(std::rand()) / RAND_MAX;
    }

    
    float n_result = 0.0f;
    while (elapsed_time < target_execution_time) {
        n_result = Product_n(a, b, N);
        auto end_time = std::chrono::high_resolution_clock::now();
        elapsed_time = std::chrono::duration<double>(end_time - start_time).count();
    }

    std::cout << "Product: " << n_result  << std::endl;
   
    return 0;
}
