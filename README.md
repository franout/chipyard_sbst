# Chipyard SBST: Software-Based Self-Tests

This repository provides a basic framework for compiling software-based self-tests (SBST) targeting the [Chipyard](https://chipyard.readthedocs.io/en/latest/) hardware development environment.

## Overview

Chipyard SBST enables the creation and compilation of C-based self-test programs for RISC-V cores and platforms built with Chipyard. The structure is minimal and intended for easy integration and extension.

## Directory Structure

- `src/` — Main source files
	- `main.c` — Entry point for test execution
	- `tests/` — Collection of test cases
		- `dummy.c` — Example test
		- `tests.c` / `tests.h` — Test definitions and declarations
- `include/` — Header files
	- `marchid.h` — RISC-V architecture ID utilities
- `CMakeLists.txt` — Build configuration (CMake)
- `htif.ld` — Linker script for HTIF (Host-Target Interface)

## Building

This project uses CMake for build management. To compile the tests:

```bash
mkdir build
cd build
cmake ..
make
```

## Usage

The compiled binaries can be used for simulation or deployment on Chipyard-based hardware. Test cases can be added in the `src/tests/` directory and registered in `tests.c`.

## Extending

- Add new test files in `src/tests/`.
- Update `tests.c` and `tests.h` to include and register new tests.
- Modify `main.c` to change test execution flow if needed.

## References

- [Chipyard Documentation](https://chipyard.readthedocs.io/en/latest/)
- [RISC-V ISA Specification](https://riscv.org/technical/specifications/)

## License

This repository is provided as-is for academic and research purposes.
