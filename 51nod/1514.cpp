#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cmath>
using namespace std;
typedef long long ll;
const int mod=998244353;
const int G=3;

int inverse(int a,int m){
    return a==1?1:(ll)inverse(m%a,m)*(m-m/a)%m;
}

int power_mod(int a,int n){
    int r=1,k=n>0?n:-n;
    while(k){
        if(k%2) r=(ll)r*a%mod;
        a=(ll)a*a%mod;
        k/=2;
    }
    if(n<0) r=inverse(r,mod);
    return r;
}

void transform(int x[],int n,int on){
    for(int i=0,j=0;i<n;i++){
        if(i<j) swap(x[i],x[j]);
        for(int k=n>>1;(j^=k)<k;k>>=1);
    }
    for(int h=2;h<=n;h<<=1){
        int wn=power_mod(G,on*(mod-1)/h);
        for(int j=0;j<n;j+=h){
            int w=1;
            for(int k=j;k<j+h/2;k++){
                int u=x[k],t=(ll)w*x[k+h/2]%mod;
                x[k]=(u+t)%mod;
                x[k+h/2]=(u-t+mod)%mod;
                w=(ll)w*wn%mod;
            }
        }
    }
    if(on==-1){
        int inv=inverse(n%mod,mod);
        for(int i=0;i<n;i++){
            x[i]=(ll)x[i]*inv%mod;
        }
    }
}

void polynomial_inverse(int a[],int b[],int tmp[],int deg){
    b[0]=inverse(a[0]%mod,mod);
    if(deg==1) return;
    for(int h=2;h<=deg;h<<=1){
        copy(a,a+h,tmp);
        int p=h<<1;
        transform(b,p,1);
        transform(tmp,p,1);
        for(int i=0;i<p;i++){
            b[i]=(ll)(2-(ll)tmp[i]*b[i]%mod+mod)*b[i]%mod;
        }
        transform(b,p,-1);
        fill(b+h,b+p,0);
    }
}

const int N=1<<18;
int g[N],f[N],tmp[N];
int main(){
    g[0]=1;
    for(int i=1;i<N>>1;i++){
        g[i]=(ll)g[i-1]*i%mod;
    }
    polynomial_inverse(g,f,tmp,N>>1);
    f[0]=0;
    for(int i=1;i<N>>1;i++){
        f[i]=(mod-f[i])%mod;
    }
    int T;
    cin>>T;
    while(T--){
        int n;
        scanf("%d",&n);
        printf("%d\n",f[n]);
    }
    return 0;
}