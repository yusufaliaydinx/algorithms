# finding the mode and the number of repetitions(frequency) of a given list
try:
    numbers = []

    adet = int(input("How many numbers will you process? "))

    for i in range(adet):
        number = int(input("State {}th number: ".format(i+1)))
        numbers = numbers + [number]

    emptyDict = {}

    mostRepeatedNumber = 0

    results = []

    for number in numbers:
        if number in emptyDict.keys():
            emptyDict[number] += 1
        else:
            emptyDict[number] = 1

    for number in emptyDict.keys():
        if emptyDict[number] > mostRepeatedNumber:
            mostRepeatedNumber = emptyDict[number]
            result = number

    for number in emptyDict.keys():
        if emptyDict[number] == mostRepeatedNumber:
            results.append(number)

    if mostRepeatedNumber != 1:
        print("Most repeating number is/are (Mode): ",str(results),"The frequency is: ",mostRepeatedNumber)
    elif mostRepeatedNumber == 1:
        print("There is/are no repeating number")

except ValueError:
	print("The number entered must be an integer");
