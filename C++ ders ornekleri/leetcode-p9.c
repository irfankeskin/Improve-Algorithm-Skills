bool isPalindrome(int x) {
    if(x < 0)
    {
    	return false;
	}
    if(x == 0)
    {
    	return true;
	}
	int unsigned temp = 0;
    int tempint = x;
    while(x != 0)
    {
        temp *= 10;
        temp +=  x % 10;  
        x = x / 10;
    }
    if(temp == tempint)
    {
        return true;
    }
    else
    {
        return false;
    }
}
