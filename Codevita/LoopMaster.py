def execute_commands(commands):
    stack = []  # Stack to handle nested loops
    current_output = []  # Current loop's output
    i = 0

    while i < len(commands):
        line = commands[i].strip()
        
        if line.startswith("for"):
            # Extract number of iterations for the loop
            _, times, *_ = line.split()
            stack.append((int(times), []))  # Add to the stack

        elif line == "do":
            pass  # "do" indicates the start of a loop; we handle this in "for"

        elif line == "done":
            # End of a loop
            times, loop_output = stack.pop()
            repeated_output = loop_output * times  # Repeat the content of the loop
            if stack:
                # Add to the parent loop's content
                stack[-1][1].extend(repeated_output)
            else:
                # Top-level loop, add to final output
                current_output.extend(repeated_output)

        elif line.startswith("break"):
            # Handle "break N"
            _, n = line.split()
            n = int(n)
            if stack:
                times, loop_output = stack.pop()
                stack.append((min(n, times), loop_output))

        elif line.startswith("continue"):
            # Handle "continue N"
            _, n = line.split()
            n = int(n)
            if stack:
                times, loop_output = stack.pop()
                if n < times:
                    # Skip the iteration but keep the remaining ones
                    stack.append((times - n, loop_output))
                else:
                    # Skip all remaining iterations
                    stack.append((0, []))

        elif line.startswith("print"):
            # Extract the statement to be printed
            statement = line[6:-1]
            if stack:
                # Add to the current loop's output
                stack[-1][1].append(statement)
            else:
                # No loop, print immediately
                current_output.append(statement)

        i += 1

    # Print final output
    for line in current_output:
        print(line)


# Example Input
commands = [
    "for 2 times",
    "do",
    "for 1 time",
    "do",
    "print \"hello world!\"",
    "done",
    "done"
]

# Execute the commands
execute_commands(commands)
