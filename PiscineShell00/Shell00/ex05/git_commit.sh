#!/bin/sh

# Get the ids of the last 5 commits
commit_ids=$(git log -n 5 --format="%H")

# Display the commit ids
echo "$commit_ids"
