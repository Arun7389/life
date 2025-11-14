int myAtoi(char* s) {
    int i = 0;

    // Skip spaces
    while (s[i] == ' ') i++;

    // Handle sign
    int sign = 1;
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // Skip leading zeros
    while (s[i] == '0') i++;

    long result = 0;     // use long temporarily

    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Overflow check
        if (result > 214748364 ||
           (result == 214748364 && digit > (sign == 1 ? 7 : 8))) {
            return sign == 1 ? 2147483647 : -2147483648;
        }

        result = result * 10 + digit;
        i++;
    }

    return (int)(result * sign);
}
