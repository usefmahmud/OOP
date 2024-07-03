#include <bits/stdc++.h>
using namespace std;

class Item{
    int price, discount;
    bool hasDiscount = false;
    string name;
public:
    Item(int price, const string& name, bool hasDiscount, int discount = 0):
            price(price),
            name(name),
            hasDiscount(hasDiscount),
            discount(discount)
    {  }

    void print() const{
        cout<<name<<", "<<price<<endl;
    }

    double getPrice() const{
        return price * (hasDiscount ? (100 - discount) / 100.0 : 1);
    }
};

class Invoice{
    vector<pair<Item, int>> items;
public:
    void addItem(const Item& item, const int& quantity){
        items.emplace_back(item, quantity);
    }

    void print() const{
        for(const auto& item: items){
            item.first.print();
        }
    }

    double totalPrice() const{
        double total = 0;
        for(const auto& item: items){
            total += item.first.getPrice() * item.second;
        }
        return total;
    }
};

int main() {
    Invoice invoice;

    int count;
    cout<<"how many items you want to add? "<<endl;
    cin>>count;

    for(int i = 1; i <= count; i++){
        int price, discount = 0, hasDiscount, quantity;
        string name;
        cout<<"Enter item "<<i<<" name"<<endl;
        cin>>name;

        cout<<"Enter item "<<i<<" price"<<endl;
        cin>>price;

        cout<<"Enter item "<<i<<" quantity"<<endl;
        cin>>quantity;

        cout<<"Does the item "<<i<<" have discount? "<<endl;
        cin>>hasDiscount;

        if(hasDiscount){
            cout<<"How much is the discount?"<<endl;
            cin>>discount;
        }
        Item item(price, name, hasDiscount, discount);
        invoice.addItem(item, quantity);
    }

    invoice.print();
    cout<<invoice.totalPrice();
}