// searching by value on maps

string searchbyvalue(::unordered_map<string, int> m)
{
    int max = 0;
    for (auto value : m)
    {
        if (value.second > max)
            max = value.second;
    }
    string t;
    for (auto value : m)
    {
        if (value.second == max)
        {
            t = value.first;
            break;
        }
    }
    return t;
}


// factorial

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}


//bubble sort

for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - 1 - i; j++)
        {
            if (ara[j] > ara[j + 1])
                swap(ara[j], ara[j + 1]);
        }
    }


//custom sort
// a.first gulo ascending ebong a.second gulo descending
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    else
        return false;
}


// string to decimal

int todecimal(string s)
{
    int l = s.length();
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        int x = s[i] - '0';
        sum = +(sum * 10 + x);
    }
    return sum;
}

//decimal to string

string tostring(int n)
{
    string s;
    while (n)
    {
        int x = n % 10;
        s.push_back(x + '0');
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

