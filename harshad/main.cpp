int main()
{
    int num, temp, sum = 0, digit;

    cout << "enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (num % sum == 0) {
        cout << num << " is a harshad number";
    }
    else {
        cout << num << " is not a harshad number";
    }

    return 0;
}
