n = int(input('Enter the Air Quality Index\n'))
if n>0 and n<=50:
    print('Good')
elif n>50 and n<=100:
    print('Moderate')
elif n>100 and n<=150:
    print('Unhealthy for sensitive Groups')
elif n>150 and n<=200:
    print('Unhealthy')
elif n>200 and n<=300:
    print('Very Unhealthy')
elif n>300 and n<=500:
    print('Hazardous')
