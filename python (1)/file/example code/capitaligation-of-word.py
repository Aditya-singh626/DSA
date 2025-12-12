# Read the file
with open('capital.txt', 'r') as f:
    text = f.read()

# Capitalize the first letter of every word
capitalized_text = text.title()

# Write back to the file
with open('capital.txt', 'w') as f:
    f.write(capitalized_text)
