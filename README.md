# OOP Courier Project

**An Object-Oriented C++ Reference Implementation for Courier & Logistics Management**

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Standard](https://img.shields.io/badge/Standard-C%2B%2B17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![Build](https://img.shields.io/badge/Build-CMake-064F8C?logo=cmake&logoColor=white)](https://cmake.org/)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-orange.svg)](https://gcc.gnu.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20macOS%20%7C%20Windows-lightgrey.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](http://makeapullrequest.com)
[![Code Style: Google](https://img.shields.io/badge/code%20style-Google-4285F4.svg)](https://google.github.io/styleguide/cppguide.html)
[![Maintained](https://img.shields.io/badge/Maintained-Yes-success.svg)]()

---

## Preface

In the discipline of modern software engineering, the distance between a working prototype and a dependable production system is bridged not by code alone, but by the rigor of one's design practices. **OOP Courier Project** stands as a testament to that principle: a compact yet comprehensive demonstration of how a courier and logistics service—modeled through the principles of object-oriented programming in modern C++—can be architected, structured, built, and maintained with clarity and discipline.

This repository is intended for engineers, architects, and students of software design who wish to examine a complete, self-contained workflow wherein the domain model is expressed through clean class hierarchies, encapsulated state, and well-defined interfaces.

---

## Table of Contents

1. [Project Overview](#project-overview)
2. [Object-Oriented Design](#object-oriented-design)
3. [Architectural Philosophy](#architectural-philosophy)
4. [Technology Stack](#technology-stack)
5. [Repository Structure](#repository-structure)
6. [Getting Started](#getting-started)
7. [Building the Project](#building-the-project)
8. [Running the Application](#running-the-application)
9. [Design Decisions & Rationale](#design-decisions--rationale)
10. [Contributing](#contributing)
11. [License](#license)

---

## Project Overview

OOP Courier Project models a delivery and logistics service using the core tenets of Object-Oriented Programming in C++. The system manages the full shipment lifecycle—from customer registration to final delivery—through a clean, extensible domain model.

The project is deliberately engineered to demonstrate production-quality C++ design:

- **Encapsulated domain entities** with well-defined public interfaces.
- **Inheritance hierarchies** that model real-world logistics relationships.
- **Polymorphism** through virtual functions and abstract base classes.
- **RAII and smart pointers** for deterministic resource management.
- **Const-correctness** and value semantics throughout the codebase.
- **Separated compilation units** for maintainable, scalable builds.

The objective is not merely to *run* an application, but to demonstrate the disciplined application of C++'s object-oriented capabilities to a realistic problem domain.

---

## Object-Oriented Design

The domain model is organized around the following core abstractions:

| Class | Responsibility |
|---|---|
| `Customer` | Stores identity, contact details, and shipment history |
| `Employee` | Abstract base class for personnel; extended by `Courier` and `Dispatcher` |
| `Vehicle` | Represents fleet assets with capacity and availability state |
| `Shipment` | Encapsulates a parcel's lifecycle, tracking, and status transitions |
| `Delivery` | Coordinates assignment of a `Courier`, `Vehicle`, and `Shipment` |
| `Address` | Value object representing origin and destination locations |

### Principles Applied

- **Encapsulation** — Internal state is kept `private` and exposed through accessor methods; invariants are enforced at the boundary.
- **Inheritance** — `Employee` serves as an abstract base class from which specialized roles derive, eliminating duplication.
- **Polymorphism** — Shipment handlers and delivery strategies are interchangeable through virtual functions.
- **Abstraction** — Interfaces are declared in headers; implementations are hidden in source files.
- **RAII** — Resources (memory, file handles) are acquired in constructors and released in destructors, guaranteeing exception safety.
- **Single Responsibility** — Each class owns exactly one concern, keeping the model comprehensible and testable.

---

## Architectural Philosophy

Three convictions underpin this project:

> **1. Design precedes implementation.**
> A well-structured class hierarchy is not an accident—it is the product of deliberate thought about responsibilities, relationships, and invariants.

> **2. Modern C++ is expressive.**
> The language offers the tools—smart pointers, move semantics, `constexpr`, `auto`—to express intent clearly and safely. The codebase uses them as intended, not as ceremony.

> **3. Clarity is a feature.**
> Code is read far more often than it is written. Every naming decision, every interface, and every file boundary serves the reader first.

---

## Technology Stack

| Layer | Technology | Purpose |
|---|---|---|
| **Language** | C++17 | Object-oriented domain model and business logic |
| **Compiler** | GCC 9+ / Clang 10+ / MSVC 2019+ | Standards-compliant compilation |
| **Build System** | CMake 3.15+ | Cross-platform build orchestration |
| **Standard Library** | STL | Containers, algorithms, smart pointers, strings |
| **Version Control** | Git | Source management and collaboration |

