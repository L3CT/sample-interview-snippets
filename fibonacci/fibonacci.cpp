#include <iostream>
#include <string>

float fibonacci(float num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void)
{
    for (float i = 0; i < 10; i++)
    {
        std::cout << std::to_string(i) + " - " + std::to_string(fibonacci(i)) << std::endl;
        // printf("%0.f - %.0f\n", i, fibonacci(i));
    }
}
