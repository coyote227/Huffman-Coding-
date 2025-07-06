from collections import Counter


file = open("lyrics.txt",'r') 
ly = file.read()

char_counts = Counter(ly)
print(char_counts[" "])
print(char_counts["a"])
print(char_counts['N'])
# print(ly)
# importing text to compress 
lst=[]
for i in ly:
    lst.append(i)

# getting no of unique elements 
# could use .fromkeys
UniqueList = []
for i in lst:
    if i not in UniqueList:
        UniqueList.append(i)
print(len(UniqueList))
for i in UniqueList:
    uni_+str(i) = UniqueList[i]


print(uni_1)








# # no of times it occured  
# for i in range(len(UniqueList)):
#     # for j in lst:
#     {i}freq = lst.count(i)




      

# af = lst.count("a")    
# bf




