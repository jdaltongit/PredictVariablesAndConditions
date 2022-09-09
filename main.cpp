// Problem 1
int score = 90;
cout << "Score? ";
cin >> score;
score = score + (score * 0.1);
cout << "Updated: " << score << endl;

// Problem 2
double feet = 6.02;
if( feet / 3 > 1 ){
    cout << feet << " is at least " << (int) feet / 3 << " yards";
}

// Problem 3
char letter = 'D';
if( letter >= 'A' & letter <= 'Z' ){
    cout << "Upper";
}

// Problem 4
int value = 50;

if( value > 0 ){
    int value = 100;
}

cout << "Result is " << value << endl;