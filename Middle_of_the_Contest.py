a, b = map(int, input().split(':'))
c, d = map(int, input().split(':'))
start_min = a * 60 + b
end_min = c * 60 + d
total_min = (start_min + end_min) // 2
mid_hour = total_min // 60
mid_min = total_min % 60
print('{:02d}:{:02d}'.format(mid_hour, mid_min))
