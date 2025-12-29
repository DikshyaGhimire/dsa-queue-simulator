# Traffic Junction Queue Simulator

## Project Description
This project simulates a four-road traffic junction using Queue and Priority Queue data structures.

The simulation is visualized using SDL2.

## Features Implemented
- Four roads(A, B, C, D)
- Each road has three lanes(AL1, AL2, AL3)
- AL2 is treated as a priority lane
- If priority lane vehicles > 10, that road is served first
- Queue used for vehicle management
- Priority logic used for tarffic light control
- File-based communication between generator and simulator
- SDL2 based visualization
- Traffic light states(RED / GREEN)

# Summary:
  I have designed and implemented a traffic light simulator using Data Structure and Algorithm concepts in C++. The project consists of two separate programs: Traffic generator and Traffic simulator. In the traffic generator, I used queue to store vehicles for each road, ensuring that vehicles are processed in a First-In-First-Out manner. I implemented a priority handling mechanism for the priority lane (AL2). Traffic light states (RED and GREEN) were implemented so that only one road is allowed to move at a time. The entire traffic flow and signal behavior were visualized using the SDL2 library.

# Data Structures Used:
Queue – Store vehicles waiting in lanes
Priority logic – Select road during congestion
Struct – Represent vehicles
Enum – Represent traffic light state

# List of Functions:
loadLane () – loads vehicles from a file into a queue (Queue)
serveRoad () – Removes vehicles from the lane according to green signal timing (Queue)
getPriorityRoad () – Determines if any road’s priority lane has more than 10 vehicles (Queue + Priority Logic)
drawLights () – Displays traffic light states (RED/GREEN) (Enum/Array)
enqueue () – Adds new vehicle to the road queue (Queue)
dequeue () – Removes the vehicle from the front of the queue when served (Queue)
trafficGenerator () – Generates vehicles randomly and writes to files.

# Algorithm Used:
1. Vehicle Generation
Vehicles are generated randomly and written into lane files using traffic_generator.cpp

2. Load Vehicles
Simulator reads vehicle data from files into queues.

3. Priority Check
If any priority lane contains more than 10 vehicles, that road is selected.

4. Normal condition
If no priority exists, roads are served using round-robin scheduling.

# Time Complexity Analysis:

Enqueue vehicle – O(1)
Dequeue vehicle – O(1)
Priority check – O(n)
Overall simulation loop – O(n)

