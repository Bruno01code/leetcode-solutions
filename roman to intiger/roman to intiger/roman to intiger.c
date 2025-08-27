int romanToInt(char* s) {
    int  I, V, X, L, C, D, M, novbr, a, br = 0, result = 0, br2 = 0;
    I = 1;
    V = 5;
    X = 10;
    L = 50;
    C = 100;
    D = 500;
    M = 1000;
    a = strlen(s);
    for (int i = 0; i < a; i++) {

        for (int u = 0; u < 1; u++) {
            if (s[i] == 'I') {
                br = 1;
            }if (s[i] == 'V') {
                br = 5;
            }if (s[i] == 'X') {
                br = 10;
            }if (s[i] == 'L') {
                br = 50;
            }if (s[i] == 'C') {
                br = 100;
            }if (s[i] == 'D') {
                br = 500;
            }if (s[i] == 'M') {
                br = 1000;
            }
        }


        for (int u = 0; u < 1; u++) {
            if (s[i + 1] == 'I') {
                br2 = 1;
            }if (s[i + 1] == 'V') {
                br2 = 5;
            }if (s[i + 1] == 'X') {
                br2 = 10;
            }if (s[i + 1] == 'L') {
                br2 = 50;
            }if (s[i + 1] == 'C') {
                br2 = 100;
            }if (s[i + 1] == 'D') {
                br2 = 500;
            }if (s[i + 1] == 'M') {
                br2 = 1000;
            }


        }
        if (br == br2 || br > br2) {
            result = result + br;
        }
        else {
            result = result - br;
        }

    }
    return result;



}