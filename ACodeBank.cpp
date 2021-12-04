#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

}

// Basic Functions
struct basefunc {
    // Mininum Value In A Subarray
    int64 amin(int64 a, int64 b, vector<int64> c) {
        if (a == b) return c[a];
        if (a == b - 1) return min(c[a],c[b]);
        int64 i = log2(b-a+1), k;
        if (i == log2(b-a+1)) k = pow(2,i-1);
        else k = pow(2,i);
        return min(amin(a,a+k-1,c),amin(b-k+1,b,c));
    }

    // Array Sum
    vector<int64> arrsum(vector<int64> c) {
        vector<int64> x(c.size());
        x[0] = c[0];
        for (int64 i = 1; i < c.size(); i++)
            x[i] = x[i-1]+c[i];
        return x;
    }

    // Change Base
    string cbase(int64 n, int64 b) {
        string s = "";
        vector<char> c = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J'};
        while (n > 0) {
            s = c[n%b]+s;
            n = n/b;
        }
        return s;
    }

    // Sum of Digits
    int64 digsum(string s) {
        int64 ans = 0;
        for (auto x : s)
            ans += x-'0';
        return ans;
    }

    // Highest Power Of 2 That Divides N
    int64 div2(int64 n) {
        return (n & (~(n-1)));
    }

    int64 gcd(int64 a, int64 b) {
        if (a == 0) return b;
        return gcd(b%a, a);
    }

    // Binary Exponentiation
    int64 modpow(int64 x, int64 n, int64 m) {
        if (n == 0) return 1 % m;
        int64 u = modpow(x, n/2, m);
        u = (u * u) % m;
        if (n % 2 == 1) u = (u * x) % m;
        return u;
    }

    // Check Palindrome
    bool pdrome(string s) {
        int64 n = sz(s);
        for (int64 i = 0; i < n; i++) {
            if (s[i] != s[n-i-1]) return false;
        }
        return true;
    }

    // Permutations of a String
    vector<string> perm1(string a) {
        vector<string> s;
        sort(a.begin(),a.end());
        s.pb(a);
        while (next_permutation(a.begin(),a.end()))
            s.pb(a);
        return s;
    }

    // Prime Factorization of an int64eger
    vector<int64> pfactor(int64 n) {
        vector<int64> f;
        while (n % 2 == 0) {
            f.pb(2);
            n /= 2;
        }
        for (int64 x = 3; x*x <= n; x += 2) {
            while (n%x == 0) {
                f.pb(x);
                n /= x;
            }
        }
        if (n > 1) f.pb(n);
        return f;
    }

    // Prime or Composite
    bool prime(int64 n) {
        if (n < 2) return false;
        if (n == 2 || n == 3 || n == 5 || n == 7) return true;
        if (n % 2 == 0) return false;
        for (int64 x = 3; x*x <= n; x += 2) {
            if (n % x == 0) return false;
        }
        return true;
        }

    // Sieve of Eratosthenes
    vector<int64> sieve(int64 a, int64 b) {
        vector<int64> v(b+1);
        for (int64 x = 2; x <= b; x++) {
            if (v[x]) continue;
            for (int64 u = 2 * x; u <= b; u += x) v[u] = x;
        }
        vector<int64> ans = {v.begin()+a, v.end()};
        return ans;
    }
}

// Segment Tree
struct segtree {
    ll getMid(ll s, ll e) {
    	return s + (e-s)/2;
    }
    ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si) {
    	if (ss == se) {
    		st[si] = arr[ss];
    		return arr[ss];
    	}
    	ll mid = getMid(ss,se);
    	st[si] = constructSTUtil(arr,ss,mid,st,si*2+1) + constructSTUtil(arr,mid+1,se,st,si*2+2);
    	return st[si];
    }
    ll *constructST(ll arr[], ll n) {
    	ll x = (ll)(ceil(log2(n)));
    	ll max_size = 2*(ll)pow(2, x) - 1;
    	ll *st = new ll[max_size];
    	constructSTUtil(arr, 0, n-1, st, 0);
    	return st;
    }

    void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll si) {
    	if (i < ss || i > se)
    		return;
    	st[si] = st[si] + diff;
    	if (se != ss) {
    		ll mid = getMid(ss,se);
    		updateValueUtil(st,ss,mid,i,diff,2*si+1);
    		updateValueUtil(st,mid+1,se,i,diff,2*si+2);
    	}
    }
    void updateValue(ll arr[], ll *st, ll n, ll i, ll new_val) {
    	if (i < 0 || i > n-1) {
    		cout << "Invalid Input" << "\n";
    		return;
    	}
    	ll diff = new_val - arr[i];
    	arr[i] = new_val;
    	updateValueUtil(st,0,n-1,i,diff,0);
    }

    ll getValueUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si) {
    	if (qs <= ss && qe >= se)
    		return st[si];
    	if (se < qs || ss > qe)
    		return 0;
    	ll mid = getMid(ss,se);
    	return getValueUtil(st,ss,mid,qs,qe,2*si+1) + getValueUtil(st,mid+1,se,qs,qe,2*si+2);
    }
    ll getValue(ll *st, ll n, ll qs, ll qe) {
    	if (qs < 0 || qe > n-1 || qs > qe) {
    		cout << "Invalid Input" << "\n";
    		return -1;
    	}
    	return getValueUtil(st,0,n-1,qs,qe,0);
    }
}

// Ordered Set
struct orderedset {
    #include <ext/pb_ds/assoc_container.hpp>
    using namespace __gnu_pbds;
    typedef tree<int, null_type,
                less_equal<int>, rb_tree_tag,
                tree_order_statistics_node_update>
            Ordered_set;
    // Set.find_by_order(index)
    // Set.find_by_key(number)
}
