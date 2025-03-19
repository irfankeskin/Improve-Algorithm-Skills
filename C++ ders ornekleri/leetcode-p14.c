char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 0)
    {
        return "";
    }
    char *temp = strs[0];
    int i;
    for(i = 0;i < strsSize;i++)
    {
        int j = 0;
        while(temp[j] != '\0' && strs[i][j] != '\0' && strs[i][j] == temp[j])
        {
            j++;
        }
        temp[j] = '\0';
    }
    return temp;
}
