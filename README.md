Network on Chip (NOC) Simulator
This project provides a simulator for a Network on Chip (NOC) system, which consists of a CPU, IO peripherals, 
system memory, and a NOC connecting these components. The simulator allows you to evaluate the performance of 
different configurations of the NOC based on provided monitor output.

Pseudocode to measure average latency and bandwidth using the simulator provided monitor output

Initialize variables:

total_latency = 0
total_bytes = 0
num_transactions = 0

For each entry in the monitor output:

    If entry is a read transaction:
        Simulate CPU read
        Increment total_latency by NOC latency
        Increment total_bytes by size of data (32B)
        Increment num_transactions by 1
    Else if entry is a write transaction:
        Simulate CPU write
        Increment total_latency by NOC latency
        Increment total_bytes by size of data (32B)
        Increment num_transactions by 1
average_latency = total_latency / num_transactions
average_bandwidth = total_bytes / num_transactions

Return average_latency and average_bandwidth



Environment Setup
To run the simulator, you need a C++ compiler that supports C++11 or later.

1.Running the Code
Clone the repository to your local machine:
git clone <repository_url>

2.Navigate to the directory containing the source files:
cd noc-simulator

3.Compile the code using your C++ compiler:
g++ main.cpp -o simulator

4.Run the compiled executable
./simulator




Additional Information
The simulator class provides methods to control the behavior of the NOC components, such as CPU reads and writes, IO reads and writes, setting buffer sizes, setting arbiter weights, and throttling the operating frequency.
Customize the code in main.cpp to test different configurations and monitor output.


Contributors
Shrikavitha S

