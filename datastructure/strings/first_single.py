import sys

class First_Single:

    def __init__(self,obj):
        if isinstance(obj,basestring):
            self.obj = list(obj)
        elif isinstance(obj,(tuple,list)):
            self.obj = obj
        else:
            print 'incorrect data type'
            sys.exit(1)
        self._create_dict()

    def _create_dict(self):
        self.obj_in_dict = dict.fromkeys(self.obj,-1)
        
    def insert(self):
        for index,char in enumerate(self.obj):
            if self.obj_in_dict[char] == -1:
                self.obj_in_dict[char] = index
            elif self.obj_in_dict[char] >= 0:
                self.obj_in_dict[char] = -2

    def get_first_single(self):
        items = self.obj_in_dict.items()
        result = filter(lambda x:x[1] >= 0,items)
        return sorted(result,key = lambda x:x[1])[0][0]





if __name__ == "__main__":

    string = 'igoogleilae'
    first = First_Single(string)
    first.insert()
    print 'the first word which has only one is %s'%first.get_first_single()


