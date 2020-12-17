/*
Consider the following pseudo code, where x and y are positive integers.

BEGIN:
    q:= 0
    r:= x
  while r >= y do
    BEGIN:
        r:= r-y
        q:= q+1
    END
END

The post condition that needs to be satisfied after the program terminates is
a). {r = qx + y AND r < y}
b). {x = qy + r AND r < y} => Correct
c). {y = qx + r AND 0 < r < y}
d). {q + 1 0}

*/