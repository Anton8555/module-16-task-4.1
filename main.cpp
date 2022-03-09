#include <iostream>
#include <string>
#include <cstdio>

/*!
 * @brief Comparing 'value' with 'reference' with 'epsilon' precision.
 * @param value - desired value.
 * @param reference - referenced value.
 * @param epsilon - accuracy.
 * @return Returns true if 'value' > 'reference', false otherwise.
 */
bool compareMore(double value, double reference, double epsilon)
{
    return value >= (reference+epsilon);
}

int main() {
    double delta;
    double speed;
    char buffer[100];

    // data input
    do{
        std::cout << "Enter delta:";
        std::cin >> delta;
        std::cout << "Enter speed:";
        std::cin >> speed;
    }while( (delta<=0) || (speed<0) || (speed>150) );

    // work
    while( compareMore(speed,0,0.01) )
    {
        std::sprintf(buffer, "%.1f km/h", speed);
        std::cout << buffer << std::endl;
        speed -= delta;
    }

    return 0;
}
