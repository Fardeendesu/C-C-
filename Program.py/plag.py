from difflib import SequenceMatcher 
  
with open('substring.java') as first, open('ReverseString.java') as second: 
                                                       file1 = first.read() 
                                                       file2 = second.read() 
ab = SequenceMatcher(None, file1, 
                         file2).ratio()  
result = int(ab*100) 
print(f"{result}% Plagiarized Content") 
