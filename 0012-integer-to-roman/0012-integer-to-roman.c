char* intToRoman(int num) {
    static char buffer[20];
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };
    int i = 0;
    buffer[0] = '\0';
    while (num > 0) {
        while (num >= values[i]) {
            strcat(buffer, symbols[i]);
            num -= values[i];
        }
        i++;
    }
    return buffer;
}