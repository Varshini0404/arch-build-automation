# 🚀 Cross-Architecture C Build Automation

**(x86, ARMv7, RISC-V | C, Bash, GNU Toolchains, QEMU)**

---

## 📌 Overview

This project demonstrates cross-compilation of a portable C application across **x86, ARMv7, and RISC-V architectures**. It automates the build process and validates execution using **QEMU emulation**, highlighting key embedded systems concepts like toolchains and architecture portability.

---

## 📁 Project Structure

```
├── build/        # Compiled binaries for each architecture
├── scripts/      # Build automation scripts (Bash)
├── src/          # Source code (C files)
└── README.md
```

---

## ⚙️ Features

* Multi-architecture compilation (x86, ARMv7, RISC-V)
* Automated build workflow using Bash scripts
* Execution of cross-compiled binaries using QEMU
* Analysis of architecture-level and instruction-level differences

---

## 🛠️ Technologies Used

* C Programming
* Bash Scripting
* GNU Toolchains
* QEMU Emulator

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/cross-arch-build.git
cd cross-arch-build
```

### 2. Run Build Script

```bash
chmod +x scripts/build.sh
./scripts/build.sh
```

### 3. Execute Binaries

#### x86 (Native)

```bash
./build/x86/app
```

#### ARM (QEMU)

```bash
qemu-arm ./build/arm/app
```

#### RISC-V (QEMU)

```bash
qemu-riscv64 ./build/riscv/app
```

---

## 🔍 Key Learnings

* Cross-compilation using GNU toolchains
* Embedded architecture targeting (ARM, RISC-V)
* Handling portability and linking issues
* Using QEMU for multi-architecture testing

---

## ⚡ Challenges

* Resolving cross-architecture linking errors
* Managing toolchain configurations
* Understanding instruction-level differences

---

## 📈 Future Enhancements

* Add ARM64 support
* Integrate Makefile or CMake
* Benchmark performance across architectures
* Deploy on real embedded hardware

---

## 👩‍💻 Author

**Varshini Endrakanti**
