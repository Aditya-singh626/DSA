# Example file operations

# 1. read() - reads the entire file as a single string
print("=== Using read() ===")
with open('myfile.txt', 'r') as f:
    content = f.read()
    print(content)

# 2. readline() - reads one line at a time
print("\n=== Using readline() ===")
with open('myfile.txt', 'r') as f:
    line1 = f.readline()
    line2 = f.readline()
    print(line1)
    print(line2)

# 3. readline() in a loop - reads all lines one by one
print("\n=== Using readline() in loop ===")
with open('myfile.txt', 'r') as f:
    while True:
        line = f.readline()
        if not line:
            break
        print(line.strip())

# 4. readlines() - reads all lines as a list
print("\n=== Using readlines() ===")
with open('myfile.txt', 'r') as f:
    lines = f.readlines()
    print(lines)

# 5. readlines() with for loop - iterate through list
print("\n=== Using readlines() with for loop ===")
with open('myfile.txt', 'r') as f:
    for line in f.readlines():
        print(line.strip())