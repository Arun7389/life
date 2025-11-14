char* multiply(char* num1, char* num2) {
    int len1 = strlen(num1), len2 = strlen(num2);
    if (num1[0] == '0' || num2[0] == '0') {
        char* res = (char*)malloc(2);
        res[0] = '0'; res[1] = '\0';
        return res;
    }

    int* prod = (int*)calloc(len1 + len2, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + prod[i + j + 1];
            prod[i + j] += sum / 10;
            prod[i + j + 1] = sum % 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && prod[i] == 0) i++;

    char* res = (char*)malloc(len1 + len2 - i + 1);
    int k = 0;
    while (i < len1 + len2) res[k++] = prod[i++] + '0';
    res[k] = '\0';

    free(prod);
    return res;
}