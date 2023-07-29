#!/bin/bash

# Store the script's filename in a variable
script_name=$(basename "$0")

# Delete files that do not have the .cpp extension in the current directory
for file in *; do
    if [ "$file" == "$script_name" ]; then
        continue # Skip the script file itself
    fi

    if [ ! -f "$file" ]; then
        continue # Skip if it's not a regular file (e.g., directories)
    fi

    if [[ "$file" != *.cpp ]]; then
        rm -f "$file"
    fi
done

echo "Files without .cpp extension in the current directory (excluding the 
script itself) have been deleted."

