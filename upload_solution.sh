#!/bin/bash

# Path to your competitive programming solutions directory
SOLUTIONS_DIR="C:/Users/anura/Desktop/coding/competitive programming"

# Navigate to the solutions directory
cd "$SOLUTIONS_DIR" || exit

# Add all changes to git
git add .

# Commit the changes with a message
git commit -m "Updated solutions"

# Push the changes to GitHub
git push origin main
