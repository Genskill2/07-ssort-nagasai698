void swap_max(int arr[],int l,int n) {
int tmp=0,max=n;
  for(int i=n;i<l;i++) {
  if(arr[i]>arr[max]) {
  max = i;
  }
  }
  tmp = arr[max];
  arr[max] = arr[n];
  arr[n] = tmp;
}

void ssort(int arr[],int l) {
for(int i=0;i<l;i++) {
swap_max(arr,l,i);
}
}
