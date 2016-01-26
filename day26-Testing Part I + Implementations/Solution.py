aDay, aMonth, aYear = map(int, raw_input().split())
rDay, rMonth, rYear = map(int, raw_input().split())

fine = 0

if aYear <= rYear and aMonth <= rMonth and aDay <= rDay:
    fine = 0
    
elif aYear == rYear and aMonth == rMonth:
    fine = 15 * (aDay - rDay)
    
elif aYear == rYear:
    fine = 500 * (aMonth - rMonth)

else:
    fine = 10000
    
print fine