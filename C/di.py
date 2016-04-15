import random 

def Give_Out():
	array = ['cp-01','cp-02','cp03','cp04','cp05']
	target = {}
	target.fromkeys(['QA1','QA2','QA3','QA4','QA5'],'')
	for key in target:
		target[key] = random.choice(array)
		array.pop(array.index(target[key]))

	for item in target.iteritems:
		print item
