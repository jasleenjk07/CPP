#include <iostream>
using namespace std;

// Class representing a Ticket with a unique ticket ID
class Ticket {
private:
    int ticketId;
public:
    // Constructor to initialize the ticket ID (default is 0)
    Ticket(int id = 0) : ticketId(id) {}

    // Getter function to retrieve the ticket ID
    int getId() const { return ticketId; }
};

// Class representing a Reservation system
class Reservation {
private:
    int reservedTickets[25];
    int size;
public:
    // Constructor to initialize an empty reservation
    Reservation() : size(0) {}

    // Function to reserve a ticket by adding its ID to the array
    void reserveTicket(int id) {
        reservedTickets[size++] = id;
    }

    // Function to display all reserved ticket IDs
    void displayReservedTickets() const {
        cout << "Reserved Tickets:";
        for (int i = 0; i < size; ++i)
            cout << " " << reservedTickets[i];
        cout << endl;
    }

    // Friend function to cancel a reservation for a specific ticket
    friend void cancelReservation(Reservation& reservation, const Ticket& ticket);
};

// Friend function to cancel a ticket reservation
void cancelReservation(Reservation& reservation, const Ticket& ticket) {
    int index = -1;

    // Search for the ticket ID in the reserved tickets array
    for (int i = 0; i < reservation.size; ++i) {
        if (reservation.reservedTickets[i] == ticket.getId()) {
            index = i;
            break;
        }
    }

    // If the ticket ID is found, cancel the reservation
    if (index != -1) {
        cout << "Ticket with ID " << ticket.getId() << " has been cancelled" << endl;
        for (int i = index; i < reservation.size - 1; ++i) {
            reservation.reservedTickets[i] = reservation.reservedTickets[i + 1];
        }
        --reservation.size;
    } else {
        cout << "Ticket with ID " << ticket.getId() << " not found in the reservation" << endl;
    }
}

int main() {
    int N, ticketId;
    cin >> N;

    Reservation reservation;            // Create a Reservation object
    for (int i = 0; i < N; ++i) {
        cin >> ticketId;
        reservation.reserveTicket(ticketId);
    }

    reservation.displayReservedTickets();

    cin >> ticketId;
    Ticket cancelTicket(ticketId);

    cancelReservation(reservation, cancelTicket);
    reservation.displayReservedTickets();

    return 0;
}
