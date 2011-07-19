<?php
function fib($n)
{
  if ($n == 0 || $n == 1) {
    return $n;
  }
  else {
    return fib($n - 1) + fib($n - 2);
  }
}

for ($i = 0; $i < 36; $i++) {
    printf("n=%d => %d\n",$i, fib($i));
}
?>
