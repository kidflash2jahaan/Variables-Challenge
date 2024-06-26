#include <iostream>

using namespace std;

int main() {
    constexpr float small_room_price = 25;
    constexpr float large_room_price = 35;
    float small_room_amount;
    float large_room_amount;

    constexpr float sales_tax_percentage = 0.06;

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl << endl;

    cout << "How many small rooms would you like cleaned? ";
    cin >> small_room_amount;

    cout << "How many large rooms would you like cleaned? ";
    cin >> large_room_amount;

    const float cost = (small_room_amount * small_room_price) + (large_room_amount * large_room_price);
    const float sales_tax = sales_tax_percentage * cost;
    const float total = cost + sales_tax;

    cout << endl <<
            "Estimate for carpet cleaning service" << endl <<
            "Number of small rooms: " << small_room_amount << endl <<
            "Number of large rooms: " << large_room_amount << endl <<
            "Price per small room: $" << small_room_price << endl <<
            "Price per large room: $" << large_room_price << endl <<
            "Cost: $" << cost << endl <<
            "Tax: $" << sales_tax << endl <<
            "==================================================" << endl <<
            "Total estimate: $" << total << endl <<
            "This estimate is valid for 30 days" << endl;

    return 0;
}
