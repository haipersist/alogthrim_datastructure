import timeit
def  msort(array):
    exchange=False
    for i in xrange(len(array)):
        j=len(array)-1
        while(j>i):
            if array[j]<array[j-1]:
                array[j-1],arra[j]=array[j],array[j-1]
                exchange=True
            j=j-1
        if exchange!=True:
            break

    print array

def main():
    array=list(range(0,10))
    msort(array)

        

if __name__=="__main__":
    t=timeit.Timer("main()",'from __main__ import main')
    print t.timeit(1)

