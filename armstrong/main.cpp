int power(int x, int y)
{
	int i, result = 1;
	for (i = 1; i <= y; i++) {
		result = result * x;
	}
	return result;
}

int main()
{
	int num, temp, digitcount = 0, lastdigit, sum = 0;
	cout << "sayi gir: ";
	cin >> num;
	temp = num;

	while (temp > 0) {
		temp = temp / 10;
		digitcount++;
	}

	temp = num;

	while (temp > 0) {
		lastdigit = temp % 10;
		sum = sum + power(lastdigit, digitcount);
		temp = temp / 10;
	}

	if (sum == num) {
		cout << num << " is armstrong";
	}
	else {
		cout << num << " is not armstrong";
	}

	return 0;
}
