#define ll long long
 
// we need to define a pow function to raise a to m-2
// function below calculates (a^b)%mod
ll power(ll a, ll b, ll mod){
	ll x = 1, y = a;
	while (b > 0){
		if (b%2){
			x = (x*y)%mod;
		}
		y = (y*y)%mod;
		b /= 2;
	}
	return x%mod;
}	
 
ll modular_inverse(ll n, ll mod){
	return power(n, mod-2, mod);
}
 
ll nCr(ll n, ll k, ll mod){
	return (factorial[n]*((modular_inverse(factorial[k]*modular_inverse(factorial[n-k]))%mod))%mod;
}
 
