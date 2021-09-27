def all_ways_to_evaluate(exp):
    result = []
    if "+" not in exp and "*" not in exp and "-" not in exp:
        result.append(exp)
    else:
        for i in range(len(exp)):
            if not exp[i].isdigit():
                left = all_ways_to_evaluate(exp[:i])
                right = all_ways_to_evaluate(exp[i+1:])

                for a in left:
                    for b in right:
                        if exp[i] == "+":
                            result.append(int(a) + int(b))
                        if exp[i] == "*":
                            result.append(int(a) * int(b))
                        if exp[i] == "-":
                            result.append(int(a) - int(b))
    return result

exp = input().replace(" ", "")
print(all_ways_to_evaluate(exp))
