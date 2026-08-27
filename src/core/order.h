//
// Created by acheb on 2026-08-27.
//

#ifndef ORDERBOOK_ORDER_H
#define ORDERBOOK_ORDER_H


class order {
};

enum class Orderside {
    BUY,
    SELL
};

enum class OrderStatus {
    FILLED,
    CANCELLED,
    PARTIALLY_FILLED,
    REFUNDED,
    ACTIVE
};
#endif //ORDERBOOK_ORDER_H
