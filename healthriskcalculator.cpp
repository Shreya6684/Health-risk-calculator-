#include <iostream>
using namespace std;

int main() {
    int age;
    float height, weight, bmi;
    int bp;      // blood pressure
    int glucose; // fasting glucose level
    char smoker, exercise;
    float riskScore = 0;

    cout << "====== Health Risk Calculator ======\n";

    // Input data
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Enter your weight (in kg): ";
    cin >> weight;
    cout << "Enter your average blood pressure (mmHg): ";
    cin >> bp;
    cout << "Enter your fasting glucose level (mg/dL): ";
    cin >> glucose;
    cout << "Do you smoke? (y/n): ";
    cin >> smoker;
    cout << "Do you exercise regularly? (y/n): ";
    cin >> exercise;

    // Calculate BMI
    bmi = weight / (height * height);

    // BMI Risk Logic
    if (bmi < 18.5 || bmi > 25)
        riskScore += 2;

    // Heart Risk Logic
    if (bp > 140)
        riskScore += 3;
    if (smoker == 'y' || smoker == 'Y')
        riskScore += 2;
    if (exercise == 'n' || exercise == 'N')
        riskScore += 1;

    // Diabetes Risk Logic
    if (glucose > 126)
        riskScore += 3;
    else if (glucose >= 100 && glucose <= 125)
        riskScore += 2;

    if (age > 50)
        riskScore += 1;

    // Display BMI
    cout << "\nYour BMI is: " << bmi << endl;
    cout << "Your total Health Risk Score: " << riskScore << "/12\n";

    // Risk Category
    if (riskScore <= 3)
        cout << "Health Status: Low Risk ✅\n";
    else if (riskScore <= 7)
        cout << "Health Status: Moderate Risk ⚠️\n";
    else
        cout << "Health Status: High Risk ❌\n";

    cout << "\n=====================================\n";
    return 0;
}
