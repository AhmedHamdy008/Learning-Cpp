#include <iostream>

double getShipping(double weightkg);
double getShipping(double weightkg, bool express);
double getShipping(double weightkg, double custRate);

int main() {
    double weight;
    int choice;
    double total = 0.0;

    std::cout << "Enter package weight (kg): ";
    std::cin >> weight;

    std::cout << "Choose shipping type : \n";
    std::cout << "1 = Standard (2.50$/kg)\n";
    std::cout << "2 = Express (+10.00$)\n";
    std::cout << "3 = Custom rate \n";
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == 1) {
        total = getShipping(weight);

    } else if (choice == 2) {
        total = getShipping(weight, true);

    } else if (choice == 3) {
        double rate;
        std::cout << "Enter custom rate per kg: ";
        std::cin >> rate;
        total = getShipping(weight, rate);
    } else {
        std::cout << "Invalid choice\n";
        return 1;
    }

    std::cout << "Total shipping cost: " << total << "$\n";

    return 0;
}

double getShipping(double weightkg) {

    return weightkg* 2.5;
}

double getShipping(double weightkg , bool express) {
    double cost = getShipping( weightkg );
    if (express) {
        cost += 10.0;
    }
    return cost;
}

  double getShipping(double weightkg, double custRate) {
    return weightkg * custRate;
}