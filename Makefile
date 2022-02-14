# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/sevla/Desktop/LANG-lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sevla/Desktop/LANG-lab2

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sevla/Desktop/LANG-lab2/CMakeFiles /home/sevla/Desktop/LANG-lab2//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sevla/Desktop/LANG-lab2/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named LANG

# Build rule for target.
LANG: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 LANG
.PHONY : LANG

# fast build rule for target.
LANG/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/build
.PHONY : LANG/fast

Automat/Automate.o: Automat/Automate.cpp.o

.PHONY : Automat/Automate.o

# target to build an object file
Automat/Automate.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Automat/Automate.cpp.o
.PHONY : Automat/Automate.cpp.o

Automat/Automate.i: Automat/Automate.cpp.i

.PHONY : Automat/Automate.i

# target to preprocess a source file
Automat/Automate.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Automat/Automate.cpp.i
.PHONY : Automat/Automate.cpp.i

Automat/Automate.s: Automat/Automate.cpp.s

.PHONY : Automat/Automate.s

# target to generate assembly for a file
Automat/Automate.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Automat/Automate.cpp.s
.PHONY : Automat/Automate.cpp.s

Lexer/Lexer.o: Lexer/Lexer.cpp.o

.PHONY : Lexer/Lexer.o

# target to build an object file
Lexer/Lexer.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Lexer.cpp.o
.PHONY : Lexer/Lexer.cpp.o

Lexer/Lexer.i: Lexer/Lexer.cpp.i

.PHONY : Lexer/Lexer.i

# target to preprocess a source file
Lexer/Lexer.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Lexer.cpp.i
.PHONY : Lexer/Lexer.cpp.i

Lexer/Lexer.s: Lexer/Lexer.cpp.s

.PHONY : Lexer/Lexer.s

# target to generate assembly for a file
Lexer/Lexer.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Lexer.cpp.s
.PHONY : Lexer/Lexer.cpp.s

Lexer/Symbole.o: Lexer/Symbole.cpp.o

.PHONY : Lexer/Symbole.o

# target to build an object file
Lexer/Symbole.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Symbole.cpp.o
.PHONY : Lexer/Symbole.cpp.o

Lexer/Symbole.i: Lexer/Symbole.cpp.i

.PHONY : Lexer/Symbole.i

# target to preprocess a source file
Lexer/Symbole.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Symbole.cpp.i
.PHONY : Lexer/Symbole.cpp.i

Lexer/Symbole.s: Lexer/Symbole.cpp.s

.PHONY : Lexer/Symbole.s

# target to generate assembly for a file
Lexer/Symbole.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/Lexer/Symbole.cpp.s
.PHONY : Lexer/Symbole.cpp.s

State/Etat.o: State/Etat.cpp.o

.PHONY : State/Etat.o

# target to build an object file
State/Etat.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/State/Etat.cpp.o
.PHONY : State/Etat.cpp.o

State/Etat.i: State/Etat.cpp.i

.PHONY : State/Etat.i

# target to preprocess a source file
State/Etat.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/State/Etat.cpp.i
.PHONY : State/Etat.cpp.i

State/Etat.s: State/Etat.cpp.s

.PHONY : State/Etat.s

# target to generate assembly for a file
State/Etat.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/State/Etat.cpp.s
.PHONY : State/Etat.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LANG.dir/build.make CMakeFiles/LANG.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... LANG"
	@echo "... Automat/Automate.o"
	@echo "... Automat/Automate.i"
	@echo "... Automat/Automate.s"
	@echo "... Lexer/Lexer.o"
	@echo "... Lexer/Lexer.i"
	@echo "... Lexer/Lexer.s"
	@echo "... Lexer/Symbole.o"
	@echo "... Lexer/Symbole.i"
	@echo "... Lexer/Symbole.s"
	@echo "... State/Etat.o"
	@echo "... State/Etat.i"
	@echo "... State/Etat.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

