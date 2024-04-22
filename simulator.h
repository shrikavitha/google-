#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <iostream>
#include <vector>
#include <string>


struct MonitorOutputEntry {
    int timestamp;
    std::string transactionType;
    std::string data;
};

// Define data structures for components
struct CPU { int traffic; };
struct IOPeripheral { int traffic; };
struct SystemMemory { std::vector<int> data; };
struct NOC { int bandwidth; int latency; };
struct Buffer { int occupancy; };
struct Arbiter { int arbitration_rate; };

// Simulator class
class Simulator {
private:
    CPU cpu;
    IOPeripheral ioPeripheral;
    SystemMemory systemMemory;
    NOC noc;
    Buffer cpuBuffer;
    Buffer ioBuffer;
    Arbiter arbiter;

public:
    Simulator();
    void cpuRead();
    void cpuWrite();
    void ioRead();
    void ioWrite();
    void simulateLatency(int cycles);
    void setMaxBufferSize(int buffer_id, int num_entries);
    void setArbiterWeights(std::string agent_type, int weight);
    void throttle();
    void calculateLatencyAndBandwidth(const std::vector<MonitorOutputEntry>& monitorOutput, float& averageLatency, float& averageBandwidth);
};

#endif
