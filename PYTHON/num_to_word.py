n = int(input("Enter any no.: "))
my_dict = ["Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"]
my_str = ""

if n>100000:
    temp = n//100000
    n = n%100000
    my_str += my_dict[temp] + "Lac"
if n>1000:
    temp = n//1000
    n = n%1000
    my_str += my_dict[temp] + "Thousand"
if n>100:
    temp = n//100
    n = n%100
    my_str += my_dict[temp] + "Hundred"
    
print(my_str)
    
    
