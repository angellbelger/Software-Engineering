print('hello, world')

x = 0
list = [45,
49,
53,
60,
62,
66,
70,
75,
78,
87,
45,
49,
54,
60,
62,
66,
70,
76,
78,
88,
46,
50,
54,
60,
65,
67,
70,
77,
84,
88,
47,
50,
57,
60,
65,
67,
70,
78,
85,
89,
49,
51,
59,
60,
65,
68,
73,
78,
85,
90,
49,
51,
59,
60,
65,
70,
73,
78,
85,
90,]



for c in range(0, 60):
    if list[c] == 87 or list[c] == 88 or list[c] == 89 or list[c] == 90:
        x += 1

print(f'Numero de unidades: {x}')