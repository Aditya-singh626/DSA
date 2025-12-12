i = 0

with open('capital.txt', 'r') as f:
    while True:
        line = f.readline()
        if line == "":
            break
        i += 1

print(f"number of lines in file is {i}")
