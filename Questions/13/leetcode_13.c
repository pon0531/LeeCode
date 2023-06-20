int romanToInt(char* s) {
    int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    char symbols[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

    int result = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int current = values[strchr(symbols, s[i]) - symbols];
        int next = (i < n - 1) ? values[strchr(symbols, s[i + 1]) - symbols] : 0;

        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }

    return result;
}

int romanToInt(char * s){
    int sum = 0;
    int char_num = 0;

    for(int i = 0;i<strlen(s);i++)
    {
        switch(s[i])
        {
            case 'I':
            {
                if(s[i+1] == 'V' && i < (strlen(s)-1))
                {
                    char_num = 4;
                    i++;
                }
                else if(s[i+1] == 'X' && i < (strlen(s)-1))
                {
                    char_num = 9;
                    i++;
                }
                else
                {
                    char_num = 1;
                }
                break;
            }
                
            case 'V':
                char_num = 5;
                break;
            case 'X':
           {
                if(s[i+1] == 'L' && i < (strlen(s)-1))
                {
                    char_num = 40;
                    i++;
                }
                else if(s[i+1] == 'C' && i < (strlen(s)-1))
                {
                    char_num = 90;
                    i++;
                }
                else
                {
                    char_num = 10;
                }
                break;
            }
            case 'L':
                char_num = 50;
                break;              
            case 'C':
           {
                if(s[i+1] == 'D' && i < (strlen(s)-1))
                {
                    char_num = 400;
                    i++;
                }
                else if(s[i+1] == 'M' && i < (strlen(s)-1))
                {
                    char_num = 900;
                    i++;
                }
                else
                {
                    char_num = 100;
                }
                break;
            }
            case 'D':
                char_num = 500;
                break;
            case 'M':
                char_num = 1000;
                break;
            default:
                printf("no match char\n");
                break;

        }
        sum = char_num + sum;
    }

    printf("sum =%d\n",sum);
    return sum;
}