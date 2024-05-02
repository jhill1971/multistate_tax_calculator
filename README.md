# Order Amount Calculator

This is a simple C program that calculates the total amount of an order based on the order amount, state, and county (if applicable). It takes into account different tax rates for different states and counties.

## Installation

1. Clone the repository or download the source code file `order_amount_calculator.c`.
2. Compile the program using a C compiler.
    ```bash
    gcc order_amount_calculator.c -o order_amount_calculator
    ```

## Usage

1. Run the compiled program.
    ```bash
    ./order_amount_calculator
    ```

2. Enter the order amount when prompted.
3. Enter the state you live in.
4. If you live in Wisconsin, enter the county as prompted.

## Example

What is the order amount? 100.00
What state do you live in? Illinois

Your order amount is: $100.00
Your tax is: $8.00
Your total is: $108.00


## Supported States and Counties

- **Illinois**: A flat tax rate of 8% is applied.
- **Wisconsin**: Different tax rates are applied based on the county.
    - **Eau Claire**: A combined tax rate of 5.5% is applied.
    - **Dunn**: A combined tax rate of 5.4% is applied.
    - Other counties: A flat tax rate of 5.5% is applied.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvement, please open an issue or create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

