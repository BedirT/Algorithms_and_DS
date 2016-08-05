// https://www.hackerrank.com/challenges/prettyprint

string integer = to_string(abs((int)B));
// 1st
cout << setw(0) << "0x" << nouppercase <<hex << (long)A << endl;

// 2nd
if (B >= 0) cout << setw(15 - (integer.length() + 3)) << setfill('_') << fixed << setprecision(2) << '+' << B << endl;
else cout << setw(15) << setfill('_') << fixed << setprecision(2) << '-' << B << endl;

//3rd
printf("%.9E\n", C);