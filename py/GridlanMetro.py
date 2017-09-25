from collections import defaultdict, namedtuple

def main():
    #train = namedtuple('train',['start','end'])
    # Row -> List -> points
    row = defaultdict(list)

    #for i in range(k):
    #    # 0: r , 1: C1, 2: C2
    #    line = list(map(int, input().strip().split(' ')))
    #    row[line[0]]+=[train(start=line[1],end=line[2])]
    #    row[line[0]]=combine(row[line[0]])

    #sum = h * w
   
    #for _, list_of_train in row.items():
    #    for t in list_of_train:
    #        sum -= (t.end - t.start +1)
    
    #print (sum)

    row[1].append(train(3,4))
    row[1]+=[train(start=1, end=2), train(start=4,end=6)]
    row[1]+=[train(start=9, end=12), train(start=7,end=7)]
    row[1].sort(key=lambda x: x.Start)
    row[1] = combine(row[1])
    
    for tr in row[1]:
        print(tr)

def combine(list_of_train):
    if len(list_of_train) <= 1:
        return list_of_train
    list_of_train.sort(key=lambda x: x.Start)
    j = 0 
    i = 1
    while i < len(list_of_train):
        t = list_of_train[i]
        pt = list_of_train[j]
        if t.start >= pt.start and pt.end >= t.start -1:
            temp=train(start=pt.start, end= (pt.end if (pt.end > t.end) else t.end))
            list_of_train[i]=temp
            list_of_train.pop(j)
            i-=1
            j-=1
        j+=1
        i+=1
    return list_of_train

class train:
    def __init__(self, start, end):
        self.start = start
        self.end = end

    @property
    def Start(self):
        return self.start

    @property
    def End(self):
        return self.end

    @property
    def Size(self):
        return self.end - self.start + 1
    
    def __str__(self):
        return 'Start = {} | End = {} | Size = {}'.format(self.Start, self.End, self.Size)

main()
