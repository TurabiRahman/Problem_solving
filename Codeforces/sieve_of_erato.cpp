vector <int> sieve(int n)
{
    vector <bool> v(n, true);

    v[0] = false;
    v[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(v[i] == true)
        {
            for(int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    vector <int> res;

    for(int i = 2; i <= n; i++)
    {
        if(v[i] == true)
        {
            res.push_back(i);
        }
    }

    return res;
}
