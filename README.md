# godot-texturepacker-module
Experimental module for godot engine to load texturepacker files via a cpp module

This is obviously a WIP and should not be expected to run at the moment.

Goal:

Godot seems to run semi-decently with the 3.3 branch and gles2,  however you can not
use the texturepacker addon with out the system crashing from lack of memory even on a 
pi4 with 8G of memory.  This is my attempt to find a solution to the problem so that a
rpi4 could become a viable platform for Godot and 2D Godot games.
