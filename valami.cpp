
class ticket {
    int id;
    
};

ticket getTicketToCustomer() {
    return new ticket();
}

bool isThisTicketValid(ticket yourTicket) {
    return yourticket == current;
}

ticket shoutOutNextTicketNumber() {
    return v[current + 1];
}


const int N=10;
int i=0;
ticket v[N];
ticket current;

int main() {

    for(i=0; i<N; i++) {
        //kikerem a sorszamokat
        v = getTicketToCustomer();
    }

    for(i=0; i<N; i++) {
        // Az ugyintezo egyesevel behivja az osszes sorszamot
         current = shoutOutNextticketNumber();

        for(int j=0; j<N; j++) {
            // megindulnak az ugyfelek mind a pulthoz
            if(isThisTicketValid(v[j])) {
                cout << "Nem te kovetkezel!";
            } else {
                cout << "Miben segithetek";
            }
        }
    }

    return 0;
}