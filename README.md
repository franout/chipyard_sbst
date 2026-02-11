
# Chipyard SBST: Software-Based Self-Tests

This repository provides a framework for compiling and running software-based self-tests (SBST) targeting the [Chipyard](https://chipyard.readthedocs.io/en/latest/) hardware development environment for RISC-V.

---

## Overview

Chipyard SBST enables the creation, registration, and compilation of C-based self-test programs for RISC-V cores and platforms built with Chipyard. The framework is minimal, modular, and designed for easy integration and extension.

---

## Directory Structure

```
.
├── CMakeLists.txt         # Build configuration (CMake)
├── htif.ld                # Linker script for HTIF (Host-Target Interface)
├── include/
│   └── marchid.h          # RISC-V architecture ID utilities
├── src/
│   ├── main.c             # Entry point for test execution
│   ├── tests.c            # Test definitions
│   ├── tests.h            # Test declarations
│   └── tests/
│       └── example/
│           └── dummy.c    # Example test case
└── README.md
```

---

## Building

This project uses CMake for build management. To build all tests:

```sh
mkdir build
cd build
cmake ..
make
```

The resulting binaries will be placed in the `build/` directory.

---

## Usage

The compiled binaries can be used for simulation or deployment on Chipyard-based hardware. To add new test cases:

1. Add new test source files in `src/tests/` (or a subdirectory).
2. Register the new test in `src/tests.c` and declare it in `src/tests.h`.
3. Rebuild the project as above.

---

## Extending & Contributing

- Add new test files in `src/tests/` or its subdirectories.
- Update `tests.c` and `tests.h` to include and register new tests.
- Modify `main.c` to change test execution flow if needed.
- Pull requests and issues are welcome for bug fixes, improvements, or new features.

---

## Support

For questions or support, please open an issue in this repository.

---

## References

- [Chipyard Documentation](https://chipyard.readthedocs.io/en/latest/)
- [RISC-V ISA Specification](https://riscv.org/technical/specifications/)

---

## License

This repository is provided as-is for academic and research purposes.
