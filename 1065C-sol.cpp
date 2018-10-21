
int n , arr[N] , ans = 0 , pre = 0 , idx , k;
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int mx = arr[n - 1];
    if(arr[0] == arr[n - 1]){
        cout << 0 << endl;
        return 0;
    }
    ans = 1;
    while(mx > arr[0]){
        idx = (arr + n) - lower_bound(arr,arr+n,mx);
        if(idx + pre <= k){
            pre += idx;
        }
        else{
            pre = idx;
            ans++;
        }
        mx--;
    }
    cout << ans << endl;
    return 0;
}
