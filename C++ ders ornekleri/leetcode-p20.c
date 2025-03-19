bool isValid(char* s) {
    int len = strlen(s);
    int  i;
    if(len % 2 != 0)
    return false;
    for(i = 0;i <= len;i++)
    {
        if((s[i] == '(' && s[i+1] == ')') || (s[i] == '{' && s[i+1] == '}') || (s[i] == '[' && s[i+1] == ']'))
        {
            int j;
            for(j = i;j <= len - 2 ;j++)
            {
                s[j] = s[j+2];
            }
            len = len - 2;
            i = -1;
        }
    }
    if(s[0] == '\0')
    return true;
    else
    return false;
}
