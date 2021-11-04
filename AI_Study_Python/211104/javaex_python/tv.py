class TV:
    def __init__(self, brand, year, inch):
        print("Brand :", brand)
        print("Year :", year)
        print("Inch :", inch)
        self.brand = brand
        self.year = year
        self.inch = inch

    def show(self):
        print(self.brand, "에서 만든", \
              self.year, "년형", \
              self.inch, "인치 TV")
