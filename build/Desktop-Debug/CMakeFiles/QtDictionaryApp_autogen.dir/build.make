# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/art14/qt-dict/qt-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/art14/qt-dict/qt-project/build/Desktop-Debug

# Utility rule file for QtDictionaryApp_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QtDictionaryApp_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QtDictionaryApp_autogen.dir/progress.make

CMakeFiles/QtDictionaryApp_autogen: QtDictionaryApp_autogen/timestamp

QtDictionaryApp_autogen/timestamp: /usr/lib/qt5/bin/moc
QtDictionaryApp_autogen/timestamp: /usr/lib/qt5/bin/uic
QtDictionaryApp_autogen/timestamp: CMakeFiles/QtDictionaryApp_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/art14/qt-dict/qt-project/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QtDictionaryApp"
	/usr/bin/cmake -E cmake_autogen /home/art14/qt-dict/qt-project/build/Desktop-Debug/CMakeFiles/QtDictionaryApp_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/art14/qt-dict/qt-project/build/Desktop-Debug/QtDictionaryApp_autogen/timestamp

QtDictionaryApp_autogen: CMakeFiles/QtDictionaryApp_autogen
QtDictionaryApp_autogen: QtDictionaryApp_autogen/timestamp
QtDictionaryApp_autogen: CMakeFiles/QtDictionaryApp_autogen.dir/build.make
.PHONY : QtDictionaryApp_autogen

# Rule to build all files generated by this target.
CMakeFiles/QtDictionaryApp_autogen.dir/build: QtDictionaryApp_autogen
.PHONY : CMakeFiles/QtDictionaryApp_autogen.dir/build

CMakeFiles/QtDictionaryApp_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QtDictionaryApp_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QtDictionaryApp_autogen.dir/clean

CMakeFiles/QtDictionaryApp_autogen.dir/depend:
	cd /home/art14/qt-dict/qt-project/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/art14/qt-dict/qt-project /home/art14/qt-dict/qt-project /home/art14/qt-dict/qt-project/build/Desktop-Debug /home/art14/qt-dict/qt-project/build/Desktop-Debug /home/art14/qt-dict/qt-project/build/Desktop-Debug/CMakeFiles/QtDictionaryApp_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QtDictionaryApp_autogen.dir/depend

