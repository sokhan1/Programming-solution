wordlist=[]
trash=[]

while True:
    Number = input('Enter the desired number')
    Number.replace(' ','')
    try:
        Number = int(Number)
        if (type(Number)==int):
            break
    except ValueError:
        print("Error: Input should be an integer")
        
for i in range(0,Number):
    word=input('Enter word you want and the length of word must be less than or equal to 50')
    if len(word) <= 50:
        wordlist.append(word)
    else :
        trash.append(word)
        
print(wordlist) # Check what strings are in wordlist
