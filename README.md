🏎️ Car Racing Fuel Status

This project simulates a Car Racing Fuel Monitoring System using the C programming language.
It calculates and displays the fuel status of racing cars based on their speed, distance, and fuel consumption rate.

🚀 Features

Displays real-time fuel level during the race

Calculates fuel used based on distance covered

Gives alerts when fuel level is low

Shows total distance traveled and efficiency

💻 Technologies Used

Language: C

Compiler: GCC / Turbo C / Code::Blocks

Platform: Console-based application

🎯 Objective

To create a simulation of a real-time car racing fuel monitoring system that helps track fuel consumption and alerts for refueling during the race.

📂 Project Files

car_racing_fuel_status.c → Main source code

README.md → Project documentation

output.png → Sample output (optional)

🧠 How It Works

The program takes car details and race parameters (like distance or speed).

It calculates the fuel consumption rate.
OUTPUT - 
🏁 Car Racing - Fuel Status System 🏁 
--------------------------------------

Enter laps remaining: 10
Enter current fuel (in Litres): 22
Enter driving mode (A=Aggressive, N=Normal, C=Conserve): N

Analyzing fuel and mode...

Mode: Normal (2.0 L/lap)
Laps possible with current fuel: 11.0
✅ Decision: You can finish the race without pitting.

Do you want to check another scenario? (Y/N): Y

Enter laps remaining: 15
Enter current fuel (in Litres): 30
Enter driving mode (A=Aggressive, N=Normal, C=Conserve): A

Analyzing fuel and mode...

Mode: Aggressive (2.6 L/lap)
Laps possible with current fuel: 11.5
🚫 Decision: You CANNOT finish. You must pit for fuel.

Do you want to check another scenario? (Y/N): N

🏁 Thank you for using the Fuel Status System! 🏁 

The fuel level decreases as the race progresses.

If the fuel goes below a set limit, a “Low Fuel Alert” is displayed.
