let num = 100;
let arr = [];

for(let i=0;i<=100;i++) {
  arr.push(i);
}

for(let k=2;k<=num;k++) {
  if(arr[k] === 1) {
    continue;
  } else {
    console.log(k);
    for(let j=k*k;j<=num;j=j+k){
      arr[j]=1;
    }
  }
}
