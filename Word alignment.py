wordlist=[]
lengthlist=[]
trash=[]

def LengthOrder(wordlist2,Number2):
    wordlist2=[]
    length1=0
    wordlistbyorder=[]
    ##test##
    # len(wordlist2)
    # len(wordlistbyorder)
    ########
    for i in range(0,Number2):
        count = 0
        length1=len(wordlist2[i])
        for j in range(0,Number2):
            length2=len(wordlist[j])
            if length1>length2:
                count+=1
        wordlistbyorder.insert(count,wordlist[j])
            
        
        
        return wordlistbyorder
    
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
    word=word.lower()
    if len(word) <= 50:
        wordlist.append(word)
    else :
        trash.append(word)

wordlist=LengthOrder(wordlist2=wordlist,Number2=Number)
print(wordlist)

    
       
print(wordlist) # Check what strings are in wordlist


