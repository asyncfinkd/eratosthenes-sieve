class App {
  constructor(num) {
    this.num = num;
  }

  printSieveNumber(i) {
    console.log(i);
  }

  fillArray(number) {
    for(let k=0;k<=100;k++) {
      number.push(k);
    }
  }

  CalculateSieve(number = [], num = 100) {
    this.fillArray(number);

    for(let i=2;i<=num;i++) {
      if(number[i]===1) {
        continue;
      } else {
        this.printSieveNumber(i);
        for(let j=i*i;j<=num;j=j+i){
          number[j]=1;
        }
      }
    }
  }

  Application() {
     this.CalculateSieve();
  }
}

const myApp = new App();
myApp.Application();
