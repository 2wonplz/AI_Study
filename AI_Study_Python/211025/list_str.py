def so_simple1(st):
    print(st)


so_simple1([1, 2, 3, 4, 5])
so_simple1("abcdef")
so_simple1(10)
so_simple1(7.5)


def so_simple2(st):
    return st + [1, 2, 3]


print(so_simple2([1, 2, 3]))
