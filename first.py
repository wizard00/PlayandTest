import re


phonenumregex = re.compile(r'\d{4}-\d{3}-\d{4}')

mo = phonenumregex.findall("1223-455-7890-123-1234")

print(mo)
re.compile(r'(A|B|C)')
re.compile(r'super(wo)*man')#zero or more time
re.compile(r'(ha)+')#one or more time
re.compile(r'(Bla){3}')#exact times
re.compile(r'(Bla){3,5}')#3 to 5 times
re.compile(r'(Bla){3,}')#3 or more
re.compile(r'\b[ABC]') #self defined group [ap]
re.compile(r'\b.at\b')