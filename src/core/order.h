//
// Created by acheb on 2026-08-27.
//

#ifndef ORDERBOOK_ORDER_H
#define ORDERBOOK_ORDER_H


enum class OrderSide {
    BUY,
    SELL
};

enum class OrderType {
    LIMIT,
    MARKET,
    STOP // may add the different types of stop orders in the future
};

enum class OrderStatus {
    FILLED,
    CANCELLED,
    PARTIALLY_FILLED,
    REFUNDED,
    ACTIVE
};



class order {
public:
    order(int id, OrderSide side, OrderType type, OrderStatus status, double quantity, double price, double remaining_quantity):
    id(id),
    side(side),
    type(type),
    status(status),
    quantity(quantity),
    price(price),
    remaining_quantity(remaining_quantity){}


    int getId() const;
    OrderSide getSide() const;
    OrderType getType() const;
    OrderStatus getStatus() const;
    double getQuantity() const;
    double getPrice() const;
    double getRemainingQuantity() const;

// will use this over a struct for convenience, we can use both but structs are public by default
private:
    int id;
    OrderSide side;
    OrderType type;
    OrderStatus status;
    double quantity;
    double price;
    double remaining_quantity;

};

#endif //ORDERBOOK_ORDER_H
