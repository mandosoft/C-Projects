#Write a program that sorts a list of student last names, 
#but the sort only uses the first two letters of the name. 
#Nothing else in the name is used for sorting.
import sys
while True:
    try:
        infile=sys.stdin.readlines() #read infile as ints
        if infile==0: # EOF sentinel  
            break
        values = [input() for i in infile] #creates array by taking input and and iterating over it 
        sorted(values, key=lambda x:x[0:2]) #sort input based on first two indexes in array 
        print(values)
        print('\n'.join(values)) 
        print()
    except:EOFError
    break
