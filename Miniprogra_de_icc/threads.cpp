#include <iostream>
#include <thread>
#include <vector>

void loop(int start, int end) {
    long long unsigned int x=0;
    for (int i = start; i < end; i++) {
        for (long long unsigned int j; j<18446744073709551614;j++) {
            x = x+1;
            if (x == 500000000000 || x==1) {
                std::cout << "si llego" << std::endl;
            }
        }
    }
}

int main() {
    int num_threads = std::thread::hardware_concurrency();
    std::vector<std::thread> threads(num_threads);

    int start = 0;
    int end = 1000000;
    int chunk_size = end / num_threads;

    for (int i = 0; i < num_threads; i++) {
        threads[i] = std::thread(loop, start, start + chunk_size);
        start += chunk_size;
    }

    for (int i = 0; i < num_threads; i++) {
        threads[i].join();
    }

    return 0;
}