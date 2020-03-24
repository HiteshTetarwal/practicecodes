import string
def to_jaden_case(string1):
    print(string1)
    i=0
    j=len(string1)
    newList=[]
    newString=''
    if j==0:
        return None
    else:
        list=string1.split()
        for i in range(0,len(list)):
            tomodify=list[i]
            newList.append(string.capwords(tomodify))

        newString+=newList[0]
        for x in range(1,len(newList)):
            newString+=" "+newList[x]
        print(newString)
    return newString