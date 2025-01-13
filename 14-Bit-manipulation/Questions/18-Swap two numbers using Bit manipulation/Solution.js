let a = 3,
  b = 5;

function swapTwo(a, b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  return {a,b}
}

console.log(swapTwo(a,b))