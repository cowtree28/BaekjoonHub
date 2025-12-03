n = int(input())
extentions_num = {}
for i in range(n):
    name,extention = input().split('.')
    if extention in extentions_num:
        extentions_num[extention] += 1
    else:
        extentions_num[extention] = 1
for ex, num in sorted(extentions_num.items()):
    print(ex,num)