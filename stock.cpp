#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    return max_profit;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de dias: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Ingrese los precios:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "La ganancia maxima es: " 
         << maxProfit(prices) << endl;

    return 0;
}
