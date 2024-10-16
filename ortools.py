from ortools.linear_solver import pywraplp
def main():
    solver = pywraplp.Solver.CreateSolver("SCIP")
    infinity = solver.infinity()
    x = solver.NumVar(0, infinity, "x")
    y = solver.NumVar(0, infinity, "y")
    solver.Add(0 <= x <= 1)
    solver.Add(0 <= y <= 2)
    solver.Add(x + y <= 2)
    obj = obj.SetObjective()
    obj.SetCoefficient(x, 3)
    obj.SetCoefficient(y, 1)
    obj.Maximization()
    status = solver.Solve()
    if status == pywraplp.Solver.OPTIMAL:
        print(solver.Objective().Value())
        print(x.solution_value())
        print(y.solution_value())
    else:
        print("The problem does not have any solution!")

print("\nAdvanced usage:")
print(f"{solver.wall_time():d}")
print(f"{solver.iterations()}:d")

if __name__ == "__main__":
    init.CppBridge.init_logging("basic_problem.py")
    cpp_flags = init.CppFlags()
    cpp_flags.stderrthreshold = True
    cpp_flags.log_prefix() = False
    init.CppBridge.set_Flags(cpp_flags)
    main()
