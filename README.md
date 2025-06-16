# Implimenting-the-RK4-and-Forward-Euler-method-and-comparing-the-result-with-exact-solution-in-OPP
# Numerical ODE Solvers in C++

This project implements numerical methods for solving ordinary differential equations (ODEs) using C++. It is part of an assignment at IIT Madras for the Object-Oriented Programming course.

## 📌 Methods Implemented
- **Forward Euler Method**
- **Runge-Kutta 4th Order (RK4)**

## 📈 Visualization
The solution is computed and plotted to analyze accuracy based on different step sizes. A sample output is shown below:

![ODE Solution Plot](./Screenshot%202024-11-18%20235847.png)

## 📂 File Structure

| File | Description |
|------|-------------|
| `AbstractOdeSolver.hpp / .cpp` | Abstract base class for solvers |
| `ForwardEulerSolver.hpp / .cpp` | Implementation of Forward Euler method |
| `RungeKuttaSolver.hpp / .cpp` | Implementation of RK4 method |
| `main.cpp` | Runs the solvers and writes output |
| `makefile` | Compiles all source files |
| `*.txt` | Output files with numerical results |

## 🛠 How to Build and Run

```bash
make         # Compile the project
./main       # Run the executable
