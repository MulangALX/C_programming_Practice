def area_of_circle(r):
    A = 22/7 * r**2
    print("The area of a circle of raduis {}, is {}".format(r, A))

name = input("Enter Your name")
my_radius = input("ENter the radius of the circle whose area you want to calculate")
print(name, "Below is the result: /n", area_of_circle(my_radius))
