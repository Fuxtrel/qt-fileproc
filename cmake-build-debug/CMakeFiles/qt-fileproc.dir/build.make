# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/alex/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alex/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/CLionProjects/qt-fileproc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/CLionProjects/qt-fileproc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/qt-fileproc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qt-fileproc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qt-fileproc.dir/flags.make

CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o: CMakeFiles/qt-fileproc.dir/flags.make
CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o: qt-fileproc_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o -c /home/alex/CLionProjects/qt-fileproc/cmake-build-debug/qt-fileproc_autogen/mocs_compilation.cpp

CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/qt-fileproc/cmake-build-debug/qt-fileproc_autogen/mocs_compilation.cpp > CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.i

CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/qt-fileproc/cmake-build-debug/qt-fileproc_autogen/mocs_compilation.cpp -o CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.s

CMakeFiles/qt-fileproc.dir/main.cpp.o: CMakeFiles/qt-fileproc.dir/flags.make
CMakeFiles/qt-fileproc.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qt-fileproc.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt-fileproc.dir/main.cpp.o -c /home/alex/CLionProjects/qt-fileproc/main.cpp

CMakeFiles/qt-fileproc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt-fileproc.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/qt-fileproc/main.cpp > CMakeFiles/qt-fileproc.dir/main.cpp.i

CMakeFiles/qt-fileproc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt-fileproc.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/qt-fileproc/main.cpp -o CMakeFiles/qt-fileproc.dir/main.cpp.s

CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o: CMakeFiles/qt-fileproc.dir/flags.make
CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o -c /home/alex/CLionProjects/qt-fileproc/mainwindow.cpp

CMakeFiles/qt-fileproc.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt-fileproc.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/qt-fileproc/mainwindow.cpp > CMakeFiles/qt-fileproc.dir/mainwindow.cpp.i

CMakeFiles/qt-fileproc.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt-fileproc.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/qt-fileproc/mainwindow.cpp -o CMakeFiles/qt-fileproc.dir/mainwindow.cpp.s

CMakeFiles/qt-fileproc.dir/file_proc.cpp.o: CMakeFiles/qt-fileproc.dir/flags.make
CMakeFiles/qt-fileproc.dir/file_proc.cpp.o: ../file_proc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qt-fileproc.dir/file_proc.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt-fileproc.dir/file_proc.cpp.o -c /home/alex/CLionProjects/qt-fileproc/file_proc.cpp

CMakeFiles/qt-fileproc.dir/file_proc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt-fileproc.dir/file_proc.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/qt-fileproc/file_proc.cpp > CMakeFiles/qt-fileproc.dir/file_proc.cpp.i

CMakeFiles/qt-fileproc.dir/file_proc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt-fileproc.dir/file_proc.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/qt-fileproc/file_proc.cpp -o CMakeFiles/qt-fileproc.dir/file_proc.cpp.s

# Object files for target qt-fileproc
qt__fileproc_OBJECTS = \
"CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qt-fileproc.dir/main.cpp.o" \
"CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o" \
"CMakeFiles/qt-fileproc.dir/file_proc.cpp.o"

# External object files for target qt-fileproc
qt__fileproc_EXTERNAL_OBJECTS =

qt-fileproc: CMakeFiles/qt-fileproc.dir/qt-fileproc_autogen/mocs_compilation.cpp.o
qt-fileproc: CMakeFiles/qt-fileproc.dir/main.cpp.o
qt-fileproc: CMakeFiles/qt-fileproc.dir/mainwindow.cpp.o
qt-fileproc: CMakeFiles/qt-fileproc.dir/file_proc.cpp.o
qt-fileproc: CMakeFiles/qt-fileproc.dir/build.make
qt-fileproc: /home/alex/Qt/5.15.0/gcc_64/lib/libQt5Widgets.so.5.15.0
qt-fileproc: /usr/lib/x86_64-linux-gnu/libboost_system.a
qt-fileproc: /usr/lib/x86_64-linux-gnu/libboost_iostreams.a
qt-fileproc: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
qt-fileproc: /usr/lib/x86_64-linux-gnu/libboost_regex.a
qt-fileproc: /usr/lib/x86_64-linux-gnu/libz.so
qt-fileproc: /usr/lib/x86_64-linux-gnu/libssl.so
qt-fileproc: /home/alex/Qt/5.15.0/gcc_64/lib/libQt5Gui.so.5.15.0
qt-fileproc: /home/alex/Qt/5.15.0/gcc_64/lib/libQt5Core.so.5.15.0
qt-fileproc: /usr/lib/x86_64-linux-gnu/libcrypto.so
qt-fileproc: CMakeFiles/qt-fileproc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable qt-fileproc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qt-fileproc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qt-fileproc.dir/build: qt-fileproc

.PHONY : CMakeFiles/qt-fileproc.dir/build

CMakeFiles/qt-fileproc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qt-fileproc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qt-fileproc.dir/clean

CMakeFiles/qt-fileproc.dir/depend:
	cd /home/alex/CLionProjects/qt-fileproc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/CLionProjects/qt-fileproc /home/alex/CLionProjects/qt-fileproc /home/alex/CLionProjects/qt-fileproc/cmake-build-debug /home/alex/CLionProjects/qt-fileproc/cmake-build-debug /home/alex/CLionProjects/qt-fileproc/cmake-build-debug/CMakeFiles/qt-fileproc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qt-fileproc.dir/depend

