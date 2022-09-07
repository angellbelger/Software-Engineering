print('hello, world! My name is Angell.')

x = 0
list = [45,49,53,60,62,66,70,75,78,87,45,49,54,60,62,66,70,76,78,88,46,50,54,60,65,67,70,77,84,88,47,50,57,60,65,67,70,78,85,89,49,51,59,60,65,68,73,78,85,90,49,51,59,60,65,70,73,78,85,90,]

for c in range(0, 60):
    if list[c] >= 75 and list[c] < 81:
        x += 1

list.sort()
print('Repetitions: ')
for c in range(45, 91):
    print(f'Repetitions of number {c}: {list.count(c)}')

print(f'Average: {sum(list) / len(list)}')
print(f'Median {(list[29] + list[30]) / 2}')