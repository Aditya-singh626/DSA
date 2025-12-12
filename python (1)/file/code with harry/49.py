f = open('myfile.txt', 'r') ## read  
print(f)
text = f.read()
print(text)
f.close()
t = open ('myfile2.txt','a')  ## append
for i in range(5):
    t.write(str(i))
t.close()  