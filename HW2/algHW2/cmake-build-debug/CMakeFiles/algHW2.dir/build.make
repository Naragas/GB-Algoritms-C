# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GitHub\GB-Algoritms-C\HW2\algHW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\algHW2.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\algHW2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\algHW2.dir\flags.make

CMakeFiles\algHW2.dir\main.c.obj: CMakeFiles\algHW2.dir\flags.make
CMakeFiles\algHW2.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/algHW2.dir/main.c.obj"
	C:\PROGRA~2\MICROS~1\2017\ENTERP~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\algHW2.dir\main.c.obj /FdCMakeFiles\algHW2.dir\ /FS -c E:\GitHub\GB-Algoritms-C\HW2\algHW2\main.c
<<

CMakeFiles\algHW2.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/algHW2.dir/main.c.i"
	C:\PROGRA~2\MICROS~1\2017\ENTERP~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\algHW2.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\GitHub\GB-Algoritms-C\HW2\algHW2\main.c
<<

CMakeFiles\algHW2.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/algHW2.dir/main.c.s"
	C:\PROGRA~2\MICROS~1\2017\ENTERP~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\algHW2.dir\main.c.s /c E:\GitHub\GB-Algoritms-C\HW2\algHW2\main.c
<<

# Object files for target algHW2
algHW2_OBJECTS = \
"CMakeFiles\algHW2.dir\main.c.obj"

# External object files for target algHW2
algHW2_EXTERNAL_OBJECTS =

algHW2.exe: CMakeFiles\algHW2.dir\main.c.obj
algHW2.exe: CMakeFiles\algHW2.dir\build.make
algHW2.exe: CMakeFiles\algHW2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable algHW2.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\algHW2.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2017\ENTERP~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\algHW2.dir\objects1.rsp @<<
 /out:algHW2.exe /implib:algHW2.lib /pdb:E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug\algHW2.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\algHW2.dir\build: algHW2.exe

.PHONY : CMakeFiles\algHW2.dir\build

CMakeFiles\algHW2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\algHW2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\algHW2.dir\clean

CMakeFiles\algHW2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\GitHub\GB-Algoritms-C\HW2\algHW2 E:\GitHub\GB-Algoritms-C\HW2\algHW2 E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug E:\GitHub\GB-Algoritms-C\HW2\algHW2\cmake-build-debug\CMakeFiles\algHW2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\algHW2.dir\depend
