# GoogleTestUsingCMakeToolsVSCode
Contains a project which uses the Google Test for Unit Testing Framework.

The tools used to develop the project is VSCode with CMakeTools package

Run the following commands to execute unit tests in the command palette window

# CMake:Configure
This creates the build folder in the repository

Make the below changes in the following file build/CMakeCache.txt

//Use shared (DLL) run-time lib even when Google Test is built
// as static lib.
gtest_force_shared_crt:BOOL=ON

# CMake:Configure
This will update the changes

# CMake:Build
This will compile all the files mentioned in the CMakeLists.txt

# CMake:Build Target
This will create an executable

# CMake:Run Tests
This will run all the unit tests
