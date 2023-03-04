#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

static char* card[14] = {"one","two","three","four","five",
                          "six","seven","eight","nine","ten",
                          "eleven","queen","king","ace"};

static char* kind[4] = {"clubs","hearts","diamonds","spades"};

static char* type[3] = {"Dealer","Computer","Human"};

class Card{

public:

    void init_card(int index, int kind){

        index_ = index;
        kind_ = kind;
    }

    int get_index(){

        return index_;
    }

    int get_kind(){

        return kind_;
    }
private:

    int index_;
    int kind_;
};

class Bank{

public:

    void init_bank(int player, double cash){

        player_ = player;
        cash_ = cash;
    }

    bool draw(double quant){

        if(cash_-quant < 0){
                return false;
        }else{
                cash_ -= quant;
                return true;
        }
    }

    void add(double quant){

        cash_ += quant;
    }

    int get_player(){

        return player_;
    }


    double get_cash(){

        return cash_;
    }

private:

    int player_;
    double cash_;
};

class Player{

public:

    void init_player(int type, int cash){

        type_ = type;
        bank.init_bank(type_, cash);
        count_cards_ = 0;
    }

    void set_card(int index, int kind){

        cards_[count_cards_].init_card(index, kind);

        count_cards_++;
    }

    void add(double money){

        bank.add(money);
    }

    void to_string(){

        cout << "This is: " << ::type[type_] << ", got " << (count_cards_)
        << " card, " << ::card[cards_[count_cards_-1].get_index()-1]
        << " of " << ::kind[cards_[count_cards_-1].get_kind()-1]
        << " and have " << bank.get_cash() << " dolars" << endl;
    }

private:

    int type_;
    int count_cards_;
    Bank bank;
    Card cards_[2];
    Card flop[3];

};

int main(){

    Player human;

    human.init_player(2, double(1000));

    human.set_card(14, 1);

    human.to_string();



    return 0;
}
