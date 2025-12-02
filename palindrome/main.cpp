int main()
{
    int num, reverse=0, temp, lastdigit;
    cout << "enter a number: ";
    cin >> num;
    temp = num;
    if (num < 0 || num>9999) {
        cout << "please enter invalid number.";
    }
    else {
        while (temp > 0) {
            lastdigit = temp % 10;
            reverse = reverse * 10 + lastdigit;
            temp = temp / 10;
        }
        if (reverse == num) {
            cout << num << " is palindrom";
        }
        else {
            cout << num << " is not palindrom ";
        }
    }
    return 0;
}
