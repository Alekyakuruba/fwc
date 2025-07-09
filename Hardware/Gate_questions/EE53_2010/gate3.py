def compute_option(option, x, y, z):
    if option == "A":
        not_x = int(not x)
        not_z = int(not z)
        f = (not_x | y) & not_z
        steps = [
            f"NOT(X) = {not_x}",
            f"OR Gate: NOT(X) + Y = {not_x} + {y} = {not_x | y}",
            f"NOT(Z) = {not_z}",
            f"AND Gate: (NOT(X) + Y) AND NOT(Z) = {not_x | y} AND {not_z} = {f}"
        ]

    elif option == "B":
        not_x = int(not x)
        not_y = int(not y)
        f = (not_x | not_y) & z
        steps = [
            f"NOT(X) = {not_x}",
            f"NOT(Y) = {not_y}",
            f"OR Gate: NOT(X) + NOT(Y) = {not_x} + {not_y} = {not_x | not_y}",
            f"AND Gate: (NOT(X) + NOT(Y)) AND Z = {not_x | not_y} AND {z} = {f}"
        ]

    elif option == "C":
        not_y = int(not y)
        not_z = int(not z)
        f = (x | y) & (not_y | not_z)
        steps = [
            f"OR Gate 1: X + Y = {x} + {y} = {x | y}",
            f"NOT(Y) = {not_y}",
            f"NOT(Z) = {not_z}",
            f"OR Gate 2: NOT(Y) + NOT(Z) = {not_y} + {not_z} = {not_y | not_z}",
            f"AND Gate: (X + Y) AND (NOT(Y) + NOT(Z)) = {(x | y)} AND {(not_y | not_z)} = {f}"
        ]

    elif option == "D":
        not_x = int(not x)
        and1 = not_x & y
        and2 = y & z
        f = and1 | and2
        steps = [
            f"NOT(X) = {not_x}",
            f"AND Gate 1: NOT(X) AND Y = {not_x} AND {y} = {and1}",
            f"AND Gate 2: Y AND Z = {y} AND {z} = {and2}",
            f"OR Gate: (NOT(X) AND Y) + (Y AND Z) = {and1} + {and2} = {f}"
        ]

    else:
        return None, None

    return f, steps

def main():
    x = int(input("Enter value for X (0 or 1): "))
    y = int(input("Enter value for Y (0 or 1): "))
    z = int(input("Enter value for Z (0 or 1): "))

    if any(val not in (0, 1) for val in [x, y, z]):
        print("❌ Please enter only 0 or 1 for X, Y, Z.")
        return

    # Define reference function output - here I assume Option D's function is correct
    ref_f, _ = compute_option("D", x, y, z)

    # Find which option(s) match the reference function output
    for option in ["A", "B", "C", "D"]:
        f_val, steps = compute_option(option, x, y, z)
        if f_val == ref_f:
            print(f"\nCorrect Option: {option}")
            print("-" * 50)
            for step in steps:
                print(step)
            print(f"\nFinal Output F = {f_val}")
            print("-" * 50)
            break  # stop after printing the first correct option

if __name__ == "__main__":
    main()

