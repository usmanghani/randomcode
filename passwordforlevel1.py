import sys
import math
import itertools
import string

# def largest_reverse(inputStr):
# 	inputStr = ''.join(map(lambda d: d.lower(), filter(lambda c: str(c).isalnum(), inputStr)))
# 	currentLargest = ''
# 	# import pdb
# 	# pdb.set_trace()
# 	for i in xrange(0, len(inputStr) + 1):
# 		for j in xrange(len(inputStr), i, -1):
# 			stringInQuestion = inputStr[i:j]
# 			if (stringInQuestion == stringInQuestion[::-1]) and (len(stringInQuestion) > len(currentLargest)):
# 				currentLargest = stringInQuestion
# 	return currentLargest


# inputString = ''
# with open(sys.argv[1]) as f:
# 	inputString = f.read()
# 	f.close()

# print len('Adogaplanacanalpagoda')
# print largest_reverse('Adogaplanacanalpagoda')
# print largest_reverse('I like racecars that go fast')
# print largest_reverse(inputString)

# def fib(a):
# 	if a < 2: 
# 		return a

# 	return fib(a-1) + fib(a-2)

# def isprime(n):
# 	for i in xrange(2, int(math.ceil(math.sqrt(n)))):
# 		if n % i == 0:
# 			return False
# 	return True

# def largest_prime_fib_bounded_by(n):
# 	a = 1
# 	for i in xrange(1, n):
# 		a = fib(i)
# 		if a > n and isprime(a):
# 			break
# 	return a

# def prime_factors(x):
# 	a = set()
# 	for i in xrange(2, int(math.ceil(math.sqrt(x)))):
# 		if (x % i == 0) and isprime(i):
# 			a.add(i)
# 	return a

# b = prime_factors(largest_prime_fib_bounded_by(227000) + 1)
# print b
# print sum(b)

# def is_set_there(sets, s):
# 	for theSet in sets:
# 		if theSet == s:
# 			return True
# 	return False

# def get_all_subsets(lst, result):
# 	ourSet = set(lst)
# 	for i in xrange(0, len(ourSet) + 1):
# 		for j in xrange(0, i):



# def largest_sum_of_others(listOfNumbers):
# 	theSets = set()
# 	ourSet = set(listOfNumbers)
# 	for i in xrange(0, len(ourSet) + 1):
# 		for j in xrange(len(ourSet), i, -1):
# 			temp = sorted(itertools.islice(ourSet,i,j))
# 			temp2 = sum(temp[0:len(temp) - 1])
# 			if temp2 == temp[-1]:
# 				theSets.add(str(temp))

# 	return theSets

# print largest_sum_of_others([1,2,3,4,6])
# print largest_sum_of_others([3, 4, 9, 14, 15, 19, 28, 37, 47, 50, 54, 56, 59, 61, 70, 73, 78, 81, 92, 95, 97, 99])


# def make_words(inputStr, lstOfWords):
# 	outputList = []
# 	startIndex = 0
# 	endIndex = startIndex + 1
# 	while endIndex <= len(inputStr):
# 		if inputStr[startIndex:endIndex] in lstOfWords:
# 			outputList.append(inputStr[startIndex:endIndex])
# 			startIndex = startIndex + 1
# 		endIndex += 1

# 	return outputList

# def make_words2(inputStr, startIndex, current_length, lstOfWords):
# 	flag = False
# 	if startIndex >= len(inputStr):
# 		return

# 	while not flag:
# 		a = inputStr[startIndex: startIndex + current_length]
# 		if not a in lstOfWords:
# 			flag = True
# 			print inputStr[startIndex: startIndex + current_length]
# 			startIndex += current_length
# 			current_length = 1
# 		else:
# 			current_length += 1
			
# 		make_words2(inputStr, startIndex, current_length, lstOfWords)

# print make_words2("iamastudentfromwaterloo", 0, 1, ["from", "waterloo", "hi", "am", "yes", "i", "a", "student", "ama"]) 
# print make_words("iamastudentfromwaterloo", ["from", "waterloo", "hi", "am", "yes", "i", "a", "student"]) 


# def find_dominator(array):
# 	a = {}
# 	for index, i in enumerate(array):
# 		if i in a:
# 			a[i].append(index)
# 		else:
# 			a[i] = [index]

# 	a = sorted(a.items(), key = lambda x: len(x[1]))
# 	return a[-1][1]
	

# print find_dominator([3,4,3,2,3,-1,3,3])


# fruits = []
# while line != '':
#     fruits.append(line)
#     line = raw_input()

# import sys
# fruit_map = {}
# fruits = sys.stdin.readlines()

# for fruit in fruits:
# 	fruit = fruit.strip()
# 	if fruit in fruit_map:
# 		fruit_map[fruit.lower()] += 1
# 	else:
# 		fruit_map[fruit.lower()] = 1


# a = sorted(fruit_map.items(), cmp = lambda x, y: ((y[1] - x[1]) or cmp(x[0], y[0])))

# for i in a:
# 	print i[0].strip() + ":" + str(i[1])


# theStringToReverse2 = theStringToReverse[::-1]

# print theStringToReverse, theStringToReverse2

# theStringToReverse = "The quick    brown fox   "

# import string
# for theStringToReverse in sys.stdin.readlines():
# 	i = 0
# 	j = 0
# 	final_string = ''
# 	while j < len(theStringToReverse):
# 		while j < len(theStringToReverse) and theStringToReverse[j] not in string.whitespace:
# 			j += 1
		
# 		final_string += theStringToReverse[i:j][::-1]
		
# 		while j < len(theStringToReverse) and theStringToReverse[j] in string.whitespace:
# 			final_string += theStringToReverse[j]
# 			j += 1

# 		i = j

# 	print final_string

# i = 0
# j = 0
# final_string = ''
# while j < len(theStringToReverse):
# 	while theStringToReverse[j] != ' ':
# 		j += 1
	
# 	final_string += theStringToReverse[i:j][::-1]
	
# 	while j < len(theStringToReverse) and theStringToReverse[j] == ' ':
# 		final_string += ' '
# 		j += 1

# 	i = j

# sys.stdout.write(final_string)

	# while theStringToReverse2[i] == ' ':

# s = []
# for i in theStringToReverse2.split(" "):
# 	s.append(i)

# a = [i for i in reversed(s)]
# print s, a
# for i in a:
# 	if i == '':
# 		sys.stdout.write(' ')
# 	else:
# 		sys.stdout.write(i)


def merge2(a,b):
	i = 0 
	j = 0
	result = []

	while (i < len(a) and j < len(b)):
		if a[i] < b[j]:
			result.append(a[i])
			i += 1
		else:
			result.append(b[j])
			j += 1

	while (i < len(a)):
		result.append(a[i])
		i += 1

	while (j < len(b)):
		result.append(b[j])
		j += 1

	return result

def merge(a,b,c):
	intermediate_result = merge2(a,b)
	final_result = merge2(intermediate_result, c)
	return final_result

a = [int(i.strip()) for i in raw_input().split(' ')]
b = [int(i.strip()) for i in raw_input().split(' ')]
c = [int(i.strip()) for i in raw_input().split(' ')]

print merge(a,b,c)

print merge([0,3,8], [1,4,7], [2,5,6])



# def merge(a, b, c):
# 	i = 0
# 	j = 0
# 	d = []

# 	for k in xrange(0, min(len(a), len(b))):
# 		if a[i] < b[j]:
# 			d.append(a[i])
# 			i += 1
# 		else:
# 			d.append(b[j])
# 			j += 1

# 	if len(a) < len(b):
	

