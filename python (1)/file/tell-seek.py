# Example of tell() and seek()

# 1. tell() - returns current position in file
print("=== Using tell() ===")
with open('myfile.txt', 'r') as f:
    print(f"Initial position: {f.tell()}")
    
    line1 = f.readline()
    print(f"After reading line 1: {f.tell()}")
    print(f"Line 1: {line1}")
    
    line2 = f.readline()
    print(f"After reading line 2: {f.tell()}")
    print(f"Line 2: {line2}")

# 2. seek() - moves file pointer to specific position
print("\n=== Using seek() ===")
with open('myfile.txt', 'r') as f:
    f.seek(0)  # Move to beginning
    print(f"Position after seek(0): {f.tell()}")
    
    content = f.read(10)  # Read first 10 characters
    print(f"First 10 characters: {content}")
    print(f"Current position: {f.tell()}")
    
    f.seek(0)  # Go back to beginning
    print(f"Position after seek(0) again: {f.tell()}")
    
    all_content = f.read()
    print(f"All content from beginning: {all_content}")

    print(f"Final position: {f.tell()}")

# 3. Practical example - read file multiple times
print("\n=== Practical Example ===")
with open('myfile.txt', 'r') as f:
    # Read first time
    print("First read:")
    print(f.read())
    
    # Use seek to go back to start
    f.seek(0)
    
    # Read second time
    print("\nSecond read (after seek):")
    print(f.read())