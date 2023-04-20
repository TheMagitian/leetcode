//Q58
int lengthOfLastWord(char* s) {

    int len = strlen(s);

    if (len == 0) return 0;

    int count = 0;

    int i;

    for (i = len - 1; i >= 0; i--) {

        if (s[i] == ' ') {

            if (count == 0) continue;

            else break;

        }

        count++;

    }

    return count;

}
