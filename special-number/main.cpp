int main()
{
    int num, temp, digit, factorial, sum = 0;

    cout << "enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a special number";
    } else {
        cout << num << " is not a special number";
    }

    return 0;
}
