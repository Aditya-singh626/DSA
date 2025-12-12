t= open('myfile2.txt','r') ## read
i = 0
while True:
    i=i+1
    text = t.readline()# it will read line by linE the test file
    if (text == ''):
       break
    m1 = text.split(",")[0]
    m2 = text.split(",")[1]
    m3 = text.split(",")[2]
    print(f"marks of student {i} in subject 1 is {m1}")
    print(f"marks of student {i} in subject 2 is {m2}")
    print(f"marks of student {i} in subject 3 is {m3}")
t.close()

c = open('myfile3.txt','w')
line = ["this is first line\n","this is second line\n","this is third line\n"]
c.writelines(line)
c.close()