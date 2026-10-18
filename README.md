# OOP Courier Project

**A Production-Grade Object-Oriented Reference Implementation for Courier & Logistics Management**

[![Python](https://img.shields.io/badge/Python-3.9%2B-3776AB?logo=python&logoColor=white)](https://www.python.org/)
[![SQLite](https://img.shields.io/badge/SQLite-3-003B57?logo=sqlite&logoColor=white)](https://www.sqlite.org/)
[![Docker](https://img.shields.io/badge/Docker-Containerized-2496ED?logo=docker&logoColor=white)](https://www.docker.com/)
[![Ansible](https://img.shields.io/badge/Ansible-Provisioned-EE0000?logo=ansible&logoColor=white)](https://www.ansible.com/)
[![GitHub Actions](https://img.shields.io/badge/CI%2FCD-GitHub%20Actions-2088FF?logo=githubactions&logoColor=white)](https://github.com/features/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](http://makeapullrequest.com)
[![Code Style: Black](https://img.shields.io/badge/code%20style-black-000000.svg)](https://github.com/psf/black)
[![Maintained](https://img.shields.io/badge/Maintained-Yes-success.svg)]()

---

## Preface

In the discipline of modern software engineering, the distance between a working prototype and a dependable production system is bridged not by code alone, but by the rigor of one's operational practices. **OOP Courier Project** stands as a testament to that principle: a compact yet comprehensive demonstration of how a courier and logistics service—modeled through the principles of object-oriented programming—can be engineered, containerized, provisioned, and delivered through an unbroken chain of automated assurance.

This repository is intended for engineers, architects, and students of software design and DevOps who wish to examine a complete, end-to-end workflow wherein every commit is treated as a candidate for production and every deployment is the product of verifiable automation.

---

## Table of Contents

1. [Project Overview](#project-overview)
2. [Object-Oriented Design](#object-oriented-design)
3. [Architectural Philosophy](#architectural-philosophy)
4. [Technology Stack](#technology-stack)
5. [Repository Structure](#repository-structure)
6. [Getting Started](#getting-started)
7. [The CI/CD Pipeline](#the-cicd-pipeline)
8. [Branching Strategy](#branching-strategy)
9. [Containerization & Provisioning](#containerization--provisioning)
10. [Design Decisions & Rationale](#design-decisions--rationale)
11. [Contributing](#contributing)
12. [License](#license)

---

## Project Overview

OOP Courier Project models a delivery and logistics service using the core tenets of Object-Oriented Programming. The system manages the full shipment lifecycle—from customer registration to final delivery—through a clean, extensible domain model.

The project is deliberately engineered to mirror the concerns of production systems:

- **Encapsulated domain entities** with well-defined public interfaces.
- **Inheritance hierarchies** that model real-world logistics relationships.
- **Deterministic persistence** with ACID guarantees inherited from SQLite.
- **Immutable build artifacts** produced via Docker.
- **Idempotent infrastructure provisioning** orchestrated by Ansible.
- **Continuous integration and delivery** executed through GitHub Actions on every push.
- **A disciplined branching model** that keeps `main` perpetually releasable.

The objective is not merely to *run* an application, but to demonstrate the full lifecycle of a service: from a developer's first commit to a verified, deployed artifact.

---

## Object-Oriented Design

The domain model is organized around the following core abstractions:

| Class | Responsibility |
|---|---|
| `Customer` | Stores identity, contact details, and shipment history |
| `Employee` | Base class for personnel; extended by `Courier` and `Dispatcher` |
| `Vehicle` | Represents fleet assets with capacity and availability state |
| `Shipment` | Encapsulates a parcel's lifecycle, tracking, and status transitions |
| `Delivery` | Coordinates assignment of a `Courier`, `Vehicle`, and `Shipment` |
| `Address` | Value object representing origin and destination locations |

### Principles Applied

- **Encapsulation** — Internal state is guarded behind accessor methods; invariants are enforced at the boundary.
- **Inheritance** — `Employee` serves as a base class from which specialized roles derive, eliminating duplication.
- **Polymorphism** — Shipment handlers and delivery strategies are interchangeable through shared interfaces.
- **Abstraction** — The persistence layer is separated from the domain model, allowing storage backends to evolve independently.
- **Single Responsibility** — Each class owns exactly one concern, keeping the model comprehensible and testable.

---

## Architectural Philosophy

Three convictions underpin this project:

> **1. Automation is not a convenience; it is a contract.**
> Every quality gate encoded in the pipeline is a promise to future maintainers that regressions will be caught before they reach production.

> **2. Simplicity is a feature.**
> SQLite was chosen deliberately. It eliminates the operational overhead of a database server while preserving transactional integrity—allowing the project's focus to remain squarely on object-oriented design and delivery mechanics.

> **3. Reproducibility is non-negotiable.**
> The same commit, processed by the same pipeline, must yield the same artifact—on any machine, at any time.

---

## Technology Stack

| Layer | Technology | Purpose |
|---|---|---|
| **Application** | Python 3 | Object-oriented domain model and business logic |
| **Persistence** | SQLite | Embedded, ACID-compliant relational store |
| **Containerization** | Docker | Immutable, portable runtime artifacts |
| **Provisioning** | Ansible | Idempotent environment configuration |
| **Continuous Delivery** | GitHub Actions | Automated build, test, and deployment |
| **Version Control** | Git | Disciplined branching and release management |

---

## Repository Structure
