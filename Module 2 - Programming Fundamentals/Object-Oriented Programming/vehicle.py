
# Classes

class Vehcicle:
    def __init__(self, name, model):
        self.name = name
        self.model = model
        self._gear = 1

    @property
    def gear(self):
        return self._gear

    @gear.setter
    def gear(self, gear_number):
        if gear_number > 6 or gear_number < 1:
            raise ValueError("Gear and only be between 1 and 6")
        self._gear = gear_number

    def horn(self):
        return "Honk Honk !!!"


class Salon(Vehcicle):

    def play_music(self):
        return "Play Music"

    def horn(self):
        return "Horrrrrnnnnnnn !!!"


# Objects
new_vehicle = Vehcicle("Bugatti", "Veyron")
new_salon = Salon("Toyota", "Corolla")
# new_vehicle.name = "Ferrari"
# new_vehicle.model = "La Ferrari"
# new_vehicle.gear = 3
# print("Vehicle Name:", new_vehicle.name)
# print("Vehicle model:", new_vehicle.model)
# print("Vehicle gear:", new_vehicle.gear)

print("Vehicle Gear: ", new_vehicle.gear)
print("Vehicle Horn: ", new_vehicle.horn())

# Change the gear of the Salon Car
new_salon.gear = 3

print("Salon Gear: ", new_salon.gear)
print("Salon Horn: ", new_salon.horn())
# print("Salon Music", new_salon.play_music())
