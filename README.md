# 💎 Diamond Rating System

A C++ console application that evaluates diamonds based on the **4C grading system** (Carat, Clarity, Color, Cut) and calculates both a quality score and an estimated price.

---

## Features

- Interactive command-line interface for entering diamond properties
- Score calculation based on industry-standard 4C criteria
- Quality level classification: **Premium**, **High**, **Medium**, **Low**
- Estimated price calculation using weighted multipliers

---

## How It Works

The program takes four inputs from the user and computes:

1. **Score** — A numeric rating out of 37 based on each attribute
2. **Quality Level** — Derived from the total score
3. **Estimated Price** — Calculated from a $5,000 base price adjusted by multipliers

### Scoring Breakdown

| Attribute | Max Score |
|-----------|-----------|
| Cut       | 10        |
| Clarity   | 10        |
| Color     | 10        |
| Carat     | 10        |
| **Total** | **40**    |

### Quality Levels

| Score Range | Quality Level |
|-------------|---------------|
| ≥ 35        | Premium       |
| ≥ 28        | High          |
| ≥ 20        | Medium        |
| < 20        | Low           |

---

## Inputs

### Carat Weight
Enter the carat weight as a decimal number (e.g., `1.2`).

### Clarity (1–11)
| # | Grade | Description |
|---|-------|-------------|
| 1 | FL    | Flawless |
| 2 | IF    | Internally Flawless |
| 3 | VVS1  | Very Very Slightly Included 1 |
| 4 | VVS2  | Very Very Slightly Included 2 |
| 5 | VS1   | Very Slightly Included 1 |
| 6 | VS2   | Very Slightly Included 2 |
| 7 | SI1   | Slightly Included 1 |
| 8 | SI2   | Slightly Included 2 |
| 9 | I1    | Included 1 |
| 10 | I2   | Included 2 |
| 11 | I3   | Included 3 |

### Color (1–5)
| # | Grade | Description |
|---|-------|-------------|
| 1 | D     | Completely colorless |
| 2 | E–F   | Very very slight color |
| 3 | G–H   | Slight color |
| 4 | I–J   | Slight yellow tint |
| 5 | K–Z   | Noticeable yellow or brown tint |

### Cut (1–4)
| # | Cut Style | Shape |
|---|-----------|-------|
| 1 | Cushion   | Square with rounded corners |
| 2 | Round Brilliant | Round shape |
| 3 | Princess  | Square shape |
| 4 | Oval      | Oval shape |

---

## Build & Run

### Requirements
- A C++ compiler (g++, clang++, MSVC, etc.)
- C++11 or later

### Compile
```bash
g++ -o diamond_rating diamond_rating.cpp
```

### Run
```bash
./diamond_rating
```

### Example Session
```
Enter the carat weight of your diamond: 1.2
Enter the clarity of your diamond: 2
Enter the color of your diamond: 1
Enter the cut of your diamond: 2

Your diamonds stats are:
Color Score: 10
Clarity Score: 9
Cut Score: 10
Carat Score: 8
Overall Score: 37
Quality Level: Premium
Price: 14256.3$
```

---

## Project Structure

```
diamond-rating-system/
├── diamond_rating.cpp   # Main source file
└── README.md
```

---

## License

This project is open source and available under the [MIT License](LICENSE).
