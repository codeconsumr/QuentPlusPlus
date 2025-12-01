# Quent++
Hybrid C++/Python NLP Engine Optimised for Low-Level Efficiency

## Features
- Tokenisation and preprocessing in C++
- Python bindings via pybind11
- Benchmark suite comparing C++ vs Python performance

## Structure

QuentPlusPlus/
│
├── src/
│   ├── cpp/
│   │   ├── include/          # .hpp files
│   │   ├── core/             # core C++ NLP logic
│   │   ├── bindings/         # pybind11 bindings
│   │   └── main.cpp          # entry point if needed
│   │
│   ├── python/
│   │   ├── quentpp/          # Python package directory
│   │   │   ├── __init__.py
│   │   │   ├── interface.py  # Python-side API wrappers
│   │   │   └── utils/        # Tokenisers, helpers, preprocessing
│   │   └── tests/            	# Unit tests for Python side
│   │
│   └── shared/
│       ├── data_structures/  # Any dual-language representations
│       └── utils/            # Language-agnostic algorithms
│
├── build/                    # Build outputs (ignored in .gitignore)
├── docs/
│   ├── dissertation/         # PDD, notes, drafts
│   └── design_diagrams/      # UML, architecture diagrams
│
├── examples/
│   ├── basic_usage.py        # Example import + call from Python
│   └── benchmark.cpp         # For performance comparison
│
├── scripts/
│   ├── build_cpp.sh          # Build scripts
│   ├── run_tests.sh
│   └── setup_env.py          # Env installer
│
├── tests/
│   ├── cpp/                  # C++ unit tests
│   └── integration/          # C++ ↔ Python integration tests
│
├── CMakeLists.txt            # CMake config for C++
├── pyproject.toml / setup.py # Python package metadata
├── requirements.txt          # Python dependencies
├── .gitignore                
├── README.md                 # High-level documentation
└── LICENSE


## Build Instructions
- How to compile C++ and bind to Python

## Usage
- Show example Python and C++ usage

## Roadmap
- Add POS tagging
- Improve binding layer
