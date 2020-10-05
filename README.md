# Global Positioning System

#### Motto: "Connecting cities"


## Table of contents
* [General Info](#general-info)
* [Version Updates](#version-updates)
* [Setup](#setup)
* [Contributing](#contributing)


## General Info
The application allows you to to find the mimimum distance between two locations using the basic SP algorithm (dijikstra). The application doesnt deal with any barriers. 

### Algorithm for Dijikstra's Algorithm
1) Create a set sptSet (shortest path tree set) that keeps track of vertices included in shortest path tree, i.e., whose minimum distance from source is calculated and finalized. Initially, this set is empty.
2) Assign a distance value to all vertices in the input graph. Initialize all distance values as INFINITE. Assign distance value as 0 for the source vertex so that it is picked first.
3) While sptSet doesn’t include all vertices
    a) Pick a vertex u which is not there in sptSet and has minimum distance value.
    b) Include u to sptSet.
    c) Update distance value of all adjacent vertices of u. To update the distance values, iterate through all adjacent vertices. For every adjacent vertex v, if sum of distance          value of u (from source) and weight of edge u-v, is less than the distance value of v, then update the distance value of v.



## Version Updates

### Version 1.0.0

System functions are added to improve the UI. FMS (file management system) hasnt been implemented yet which is expected to improve the data handling and make a common database. Pointer extraction and editing has been used to reduce time complexity and memory efficiency.


## Setup
To run this project:
```
Simply compile all the files into a single editor, and run it. 
```

## Roadmap
In a later version A* algorithm will be applied to make it more user friendly.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change. Please restrict yourself to the use of functions
##### DO NOT EDIT THE MAIN FILE. ANY PULL REQUEST FOR THE MAIN FILE WILL NOT BE APPROVED.


Please make sure to update tests as appropriate.
