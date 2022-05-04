t = int(input())
while t:
    n = int(input())
    arr = input().split(" ")
    one_1 = arr.count('1')
    two = arr.count('2')
    three = arr.count('3')
    four = arr.count('4')
    five = arr.count('5')
    six = arr.count('6')
    seven = arr.count('7')
    eight = arr.count('8')
    nine = arr.count('9')
    ten = arr.count('10')
    if one_1 > two and one_1 > three and one_1 > four and one_1 > five and one_1 > six and one_1 > seven and one_1 > eight and one_1 > nine and one_1 > ten:
        print(1)
    else:
        if two > one_1 and two > three and two > four and two > five and two > six and two > seven and two > eight and two > nine and two > ten:
            print(2)
        else:
            if three > two and three > one_1 and three > four and three > five and three > six and three > seven and three > eight and three > nine and three > ten:
                print(3)
            else:
                if four > two and four > three and one_1 < four and four > five and four > six and four > seven and four > eight and four > nine and four > ten:
                    print(4)
                else:
                    if five > two and five > three and five > four and one_1 < five and five > six and five > seven and five > eight and five > nine and five > ten:
                        print(5)
                    else:
                        if six > two and six > three and six > four and six > five and one_1 < six and six > seven and six > eight and six > nine and six > ten:
                            print(6)
                        else:
                            if seven > two and seven > three and seven > four and seven > five and seven > six and one_1 < seven and seven > eight and seven > nine and seven > ten:
                                print(7)
                            else:
                                if eight > two and eight > three and eight > four and eight > five and eight > six and eight > seven and one_1 < eight and eight > nine and eight > ten:
                                    print(8)
                                else:
                                    if nine > two and nine > three and nine > four and nine > five and nine > six and nine > seven and nine > eight and one_1 < nine and nine > ten:
                                        print(9)
                                    else:
                                        if ten > two and ten > three and ten > four and ten > five and ten > six and ten > seven and ten > eight and ten > nine and one_1 < ten:
                                            print(10)
                                        else:
                                            print("Confused")
    t = t - 1