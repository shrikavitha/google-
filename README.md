Network on Chip (NOC) Simulator
This project provides a simulator for a Network on Chip (NOC) system, which consists of a CPU, IO peripherals, 
system memory, and a NOC connecting these components. The simulator allows you to evaluate the performance of 
different configurations of the NOC based on provided monitor output.

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

5.Follow the instructions on the console to input monitor output data or modify the code in main.cpp to provide custom monitor output.
Monitor Output Format
The monitor output should be provided as a list of entries, each containing the following fields:

timestamp: The timestamp of the transaction.
transactionType: The type of transaction (Rd for read, Wr for write).
data: The data associated with the transaction (optional for read transactions).
An example monitor output is provided below:


Additional Information
The simulator class provides methods to control the behavior of the NOC components, such as CPU reads and writes, IO reads and writes, setting buffer sizes, setting arbiter weights, and throttling the operating frequency.
Customize the code in main.cpp to test different configurations and monitor output.
Contributors
Shrikavitha S

