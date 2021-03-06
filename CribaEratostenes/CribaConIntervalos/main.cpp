vector<long long int> criba2( long long int mayor, long long int menor)
{
    vector< long long int> primos;
    for (long long int i = menor; i <= mayor; i++)
    {
        if(mod(i,2))
            primos.push_back(i);
    }
    for (long long int k = 3; k < mayor; k+=2)
    {
        if (k * k < mayor)
        {
            for (long long int x = 0; x < primos.size(); x++)
            {
                if (!(mod(primos[x], k)))
                    primos.erase(primos.begin() + x);
            }
        }
    }
    return primos; 
}
int main()
{
  criba2(10000,9000);
}
