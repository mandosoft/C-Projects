
#sort whole list by song title 
#sort whole list by artist
#print list of attributes in output
import sys

while True: #continuous input until EOF reached
    try:
        lines = input().split(' ') # reading each input line
        int_values = int(input()) # int based listing
        music_list = [input().split() for i in range(int_values)] #iterates over list 
        s = int(input()) 
        for i in range(s):
            remove = input().strip()
            master = lines.index(remove)
            music_list = sorted(music_list, key=lambda x:x[master])#takes single arg x and returns x at master
            print(' '.join(lines))
            for n in music_list:
                print(' '.join(n)) #add space between outputs
            print()

    except EOFError: #error handling 
        break
