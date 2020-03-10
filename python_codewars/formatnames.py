def namelist(names):
    a=''
    if len(names)==0:
        return a

    for i in range(0,len(names)-1):
        if i!=len(names)-2:
            a=a+str(names[i]['name']+', ')
        else:
            a=a+str(names[len(names)-2]['name']+' & ')
            
    a=a+str(names[len(names)-1]['name'])

    return a
            
