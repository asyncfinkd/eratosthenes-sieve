let __num = [], __n = 100, __i = 0, __s = 2, __f = 1;

for(let i = __i; i <= __n; i++) {
  __num.push(i);
}

if(__num.length > __i && typeof __num !== "undefined") {
for(let __k = __s; __k <= __n; __k++) {
  if(__num[__k] === __f){ 
    continue;
  } else {
    console.log(__k);
    if(typeof __k === "number" && typeof __k !== "undefined") {
      for(let __j = __k * __k; __j <= __n; __j = __j + __k) {
      __num[__j] = __f;
      }
    }
  }
}
}
