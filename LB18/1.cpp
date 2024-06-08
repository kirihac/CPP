#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder {
private:
    string item_name;
    double unit_price;
    int items_ordered;
    double total_price;

public:
    ShopItemOrder(string item_name,double unit_price,int items_ordered);
    void set_item_name(string item_name);
    void set_unit_price(double unit_price);
    void set_items_ordered(int items_ordered);
    string get_item_name();
    double get_unit_price();
    int get_items_ordered();
    double get_total_price();
    void print();
};

ShopItemOrder::ShopItemOrder(string item_name,double unit_price,int items_ordered){
    set_item_name(item_name);
    set_unit_price(unit_price);
    set_items_ordered(items_ordered);
    get_total_price();
}

void ShopItemOrder::set_item_name(string item_name){
    this->item_name=item_name;
}

void ShopItemOrder::set_unit_price(double unit_price){
    this->unit_price=unit_price;
}

void ShopItemOrder::set_items_ordered(int items_ordered){
    this->items_ordered=items_ordered;
}

string ShopItemOrder::get_item_name(){
    return this -> item_name;
}

double ShopItemOrder::get_unit_price(){
    return this -> unit_price;
}

int ShopItemOrder::get_items_ordered(){
    return this -> items_ordered;
}

double ShopItemOrder::get_total_price(){
    this->total_price = unit_price * items_ordered;
    return total_price;
}

void ShopItemOrder::print() {
    cout << "Item name: "<< this->item_name << " costs = " << this->unit_price << ". Items ordered= " << this->items_ordered << " total price= "<<this->total_price<< endl;
}

int main() {
    ShopItemOrder shopItemOrder("pepsi",12,5);
    shopItemOrder.print();
    return 0;
}