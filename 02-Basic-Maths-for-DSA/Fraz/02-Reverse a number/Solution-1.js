let num = 1234567;

let d,
  rev = 0;
while (num > 0) {
  d = num % 10;
  rev = rev * 10 + d;
  num = Math.floor(num / 10);
}
console.log(rev);


// T.C. : O(log n)