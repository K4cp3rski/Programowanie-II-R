# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/w6.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/w6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/w6.dir/flags.make

CMakeFiles/w6.dir/main.cpp.o: CMakeFiles/w6.dir/flags.make
CMakeFiles/w6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/w6.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/w6.dir/main.cpp.o -c "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/main.cpp"

CMakeFiles/w6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/w6.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/main.cpp" > CMakeFiles/w6.dir/main.cpp.i

CMakeFiles/w6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/w6.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/main.cpp" -o CMakeFiles/w6.dir/main.cpp.s

# Object files for target w6
w6_OBJECTS = \
"CMakeFiles/w6.dir/main.cpp.o"

# External object files for target w6
w6_EXTERNAL_OBJECTS =

w6: CMakeFiles/w6.dir/main.cpp.o
w6: CMakeFiles/w6.dir/build.make
w6: CMakeFiles/w6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable w6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/w6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/w6.dir/build: w6
.PHONY : CMakeFiles/w6.dir/build

CMakeFiles/w6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/w6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/w6.dir/clean

CMakeFiles/w6.dir/depend:
	cd "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw6/cmake-build-debug/CMakeFiles/w6.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/w6.dir/depend

