//
// Created by Owen ANCELOT on 15/01/2026.
//

#ifndef CARTOGRAPHER_ENVIRONMENT_HPP
#define CARTOGRAPHER_ENVIRONMENT_HPP
#include <vector>

#include "draw/trace.hpp"

class Environment {
public:
    explicit Environment(const std::vector<Trace>& trace) : traces(trace){}

    ~Environment() = default;

    [[nodiscard]] const std::vector<Trace> &getTraces() const { return traces; }

private:
    std::vector<Trace> traces;
};

#endif //CARTOGRAPHER_ENVIRONMENT_HPP
