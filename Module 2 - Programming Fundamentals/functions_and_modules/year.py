from days import days
from week import weeks
from month import months


def years(num_years):
    """Days in a year"""
    days_in_years = days() * weeks() * months() * num_years
    return days_in_years


days_in_1_year = years(2)

print(f"Days in the year: {days_in_1_year}")
