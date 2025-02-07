#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
def listLength(numbers):
    #Write your code below to return the length of the list
    #Don't print here
    return (len(numbers))

#{ 
 # Driver Code Starts.


def main():
    t=int(input())
    
    while(t>0):
        
        numbers=[int(x) for x in input().strip().split()]
        
        print(listLength(numbers))
        t-=1

        print("~")
if __name__ == "__main__": 
    main()
# } Driver Code Ends