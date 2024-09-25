# Magazine Subscription Management System

This project is a **Magazine Subscription Management System** developed in **C++**. It allows users to subscribe or unsubscribe to magazines like **"Corint"** and **"Litera"**. The system also provides special features like a horoscope based on the user's birth date, as well as articles and news sections. The system includes both client-side and admin-side operations.

## Features

### Magazine Subscription
- Users can create new subscriptions to magazines.
- Users can cancel existing subscriptions.
- The system provides support for two magazines: **Corint** and **Litera**.

### Horoscope
- If the user provides their birth date while creating a subscription, the system will provide a daily horoscope via the `Horoscop` class.

### Articles & News
- The system includes different types of content:
  - **Articles**: Managed using the `Articole` class.
  - **Interior Design Articles**: Managed by the `Design_Interior` class.
  - **News**: Managed by the `Stiri` class.

## Classes and Structure

### `Abonat`
This class represents a subscriber and holds information such as:
- **Name** (`nume` and `prenume`)
- **Password** (`parola`)
- **Birth date** (`ziua_nasterii`, `luna_nasterii`)

It includes setters and getters for managing private attributes, such as the user's birth date and password.

### `Revista`
Represents a magazine and contains the following properties:
- **Name of the magazine** (`denumire`)
- **Number of pages** (`nr_pag`)
- **Number of articles** (`nr_articole`)

It includes methods for creating and deleting subscriptions.

### `Horoscop`
This class inherits from `Revista` and generates a daily horoscope for the subscriber if their birthday matches the current day.

### `Articole`
Represents an article with fields like:
- **Section** (`rubrica`)
- **Author** (`autor`)

### `Design_Interior`
This class inherits from `Articole` and adds interior design-specific attributes like:
- **Title** (`titlu`)
- **Number of subjects** (`nr_subiecte`)
- **Design type** (`tip_design`)

### `Stiri`
Represents news articles with the following fields:
- **Subject** (`subiect`)
- **Title** (`titlu`)
- **Author** (`autor`)

### `Virtuale`
This is an abstract base class that defines two virtual methods:
- `create()`
- `delete_it()`

These methods are implemented by the `Revista` class and its derived classes.

## How It Works

1. **Magazine Subscription**:
   - The user selects one of the available magazines, **Corint** or **Litera**.
   - If the user opts to provide their birth date, they will receive a horoscope each day.
   - Subscriptions can be canceled via the `delete_it()` function.

2. **Horoscope**:
   - If the subscriber's birthday matches the current day, they receive a message like "Astrele iti surad!" (The stars are aligned for you!).

3. **Articles and News**:
   - The system stores various types of content, including news and articles, which are associated with a particular magazine.

## Project Structure

### Header Files
- **`Abonat.h`**: Contains the definition for the `Abonat` class, which represents a subscriber.
- **`Revista.h`**: Contains the definition for the `Revista` class, which represents a magazine.
- **`Horoscop.h`**: Contains the definition for the `Horoscop` class, responsible for generating horoscopes.
- **`Articole.h`**: Contains the definition for the `Articole` class, representing articles in the magazine.
- **`Design_Interior.h`**: Inherits from `Articole` and represents design articles.
- **`Stiri.h`**: Represents news articles.
- **`Virtuale.h`**: Abstract base class with virtual methods for creating and deleting subscriptions.

### Source Files
- **`Abonat.cpp`**: Implements methods for the `Abonat` class, including constructors, destructors, and methods for setting and getting private fields like birth date and password.
- **`Revista.cpp`**: Implements methods for creating and deleting magazine subscriptions.
- **`Horoscop.cpp`**: Implements the horoscope generation logic.
- **`Articole.cpp`**: Implements methods for the `Articole` class.
- **`Design_Interior.cpp`**: Implements methods for managing interior design articles.
- **`Stiri.cpp`**: Implements methods for managing news articles.
- **`Project3.cpp`**: The main entry point of the system. It handles user interaction, allowing users to create or cancel subscriptions.

## Example Usage

1. **Creating a Subscription**:
    - The user selects **Corint** or **Litera**.
    - If they provide a birth date, a horoscope is generated for them every day.
    - A new subscriber is created and stored.

2. **Canceling a Subscription**:
    - The user selects the magazine they want to unsubscribe from.
    - Their subscription is deleted from the system.

3. **Horoscope Generation**:
    - If the user’s birth date matches the current date, a message like "Happy Birthday!" is displayed.

## How to Run

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/magazine-subscription-system.git
    cd magazine-subscription-system
    ```

2. **Compile the Code**:
    ```bash
    g++ Project3.cpp Abonat.cpp Revista.cpp Horoscop.cpp Articole.cpp Design_Interior.cpp Stiri.cpp -o magazine_system
    ```

3. **Run the Program**:
    ```bash
    ./magazine_system
    ```


## Acknowledgments

- **Institution**: Technical University of Cluj-Napoca.
