# EzyMoneda

This project implements a payment processing system simulator using C++/CLI and Windows Forms. It includes functionalities for account management, transaction logging, and basic security features.

## Features

- **Account Management:** Allows users to log in with an account ID and password, view account details, and perform balance updates.
- **Transaction History:** Logs all transactions, including funds sent, received, and reimbursed amounts.
- **Security Measures:** Implements basic security measures such as password encryption and validation.

## Getting Started

To run the simulator locally, follow these steps:

### Prerequisites

- Visual Studio with C++/CLI support
- .NET Framework (version X.X or higher)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/payment-processing-simulator.git
   ```

2. Open the solution file `PaymentProcessingSystem.sln` in Visual Studio.

3. Build the solution (`Ctrl+Shift+B`).

4. Start debugging (`F5`) or run without debugging (`Ctrl+F5`).

## Usage

1. **Login:** Enter the account ID and password to access the syste(See [backend.h](blob/master/ezyMoneda/backend.h) for information about accounts).

2. **View Balance:** Once logged in, the system displays the account's current balance.

3. **Send Money:** Transfer funds to another account by entering their ID and the amount.

4. **Add Funds:** Add funds to your account using a valid credit card.

5. **Transaction History:** View transaction logs to track all activities related to your account.

## Contributors

- Sambhav Mahajan
- Mayank Dhatwalia
- Astha Raj
- Gaurav Lamba
- Vinesh Kumar Goswami

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Chandigarh University for providing the platform for development.
- Inspiration and guidance from the professors and mentors.
