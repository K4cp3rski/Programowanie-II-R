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
CMAKE_SOURCE_DIR = "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/w_8.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/w_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/w_8.dir/flags.make

CMakeFiles/w_8.dir/main.cpp.o: CMakeFiles/w_8.dir/flags.make
CMakeFiles/w_8.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/w_8.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/w_8.dir/main.cpp.o -c "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/main.cpp"

CMakeFiles/w_8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/w_8.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/main.cpp" > CMakeFiles/w_8.dir/main.cpp.i

CMakeFiles/w_8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/w_8.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/main.cpp" -o CMakeFiles/w_8.dir/main.cpp.s

CMakeFiles/w_8.dir/Polynomial.cpp.o: CMakeFiles/w_8.dir/flags.make
CMakeFiles/w_8.dir/Polynomial.cpp.o: ../Polynomial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/w_8.dir/Polynomial.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/w_8.dir/Polynomial.cpp.o -c "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/Polynomial.cpp"

CMakeFiles/w_8.dir/Polynomial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/w_8.dir/Polynomial.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/Polynomial.cpp" > CMakeFiles/w_8.dir/Polynomial.cpp.i

CMakeFiles/w_8.dir/Polynomial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/w_8.dir/Polynomial.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/Polynomial.cpp" -o CMakeFiles/w_8.dir/Polynomial.cpp.s

# Object files for target w_8
w_8_OBJECTS = \
"CMakeFiles/w_8.dir/main.cpp.o" \
"CMakeFiles/w_8.dir/Polynomial.cpp.o"

# External object files for target w_8
w_8_EXTERNAL_OBJECTS =

w_8: CMakeFiles/w_8.dir/main.cpp.o
w_8: CMakeFiles/w_8.dir/Polynomial.cpp.o
w_8: CMakeFiles/w_8.dir/build.make
w_8: CMakeFiles/w_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable w_8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/w_8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/w_8.dir/build: w_8
.PHONY : CMakeFiles/w_8.dir/build

CMakeFiles/w_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/w_8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/w_8.dir/clean

CMakeFiles/w_8.dir/depend:
	cd "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug" "/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Ćw.8/cmake-build-debug/CMakeFiles/w_8.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/w_8.dir/depend

