# -----------------------------
# Writing to a file using write()
# -----------------------------
with open("demo.txt", "w") as f:
    f.write("Line 1: Written using write()\n")
    f.write("Line 2: Also written using write()\n")

# ---------------------------------
# Writing multiple lines using writelines()
# ---------------------------------
more_lines = [
    "Line 3: Added using writelines()\n",
    "Line 4: Another writelines() entry\n"
]

with open("demo.txt", "a") as f:   # 'a' = append mode
    f.writelines(more_lines)

# -----------------------------
# Reading the file back
# -----------------------------
with open("demo.txt", "r") as f:
    content = f.read()
    print("File content:\n")
    print(content)