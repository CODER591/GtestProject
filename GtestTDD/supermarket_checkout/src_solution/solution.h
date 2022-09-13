#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <string>
#include <set>

#include <string>
#include <map>

class Checkout {
public:
	Checkout();
	virtual ~Checkout();

	void AddItemPrice(std::string item, int price);
	void AddItem(std::string item);
	void AddDiscount(std::string item, int nbrOfItems, int discountPrice);
	int CalculateTotal();

protected:
	struct Discount{
		int nbrOfItems;
		int discountPrice;
	};

	std::map<std::string, int> prices;
	std::map<std::string, Discount> discounts;
	std::map<std::string, int> items;
	int total;

	void CalculateItem(std::string item, int itemCnt);
	void CalculateDiscount( std::string item, int itemCnt, Discount discount );
};

Checkout::Checkout():total(0) {}

Checkout::~Checkout() {}

void Checkout::AddItemPrice( std::string item, int price ){
	prices[item] = price;
}

void Checkout::AddItem( std::string item ){
	std::map<std::string, int>::iterator priceIter = prices.find(item);
	if( priceIter == prices.end() ){
		throw std::invalid_argument("Invalid item.  No price");
	}

	items[item]++;
}

void Checkout::AddDiscount(std::string item, int nbrOfItems, int discountPrice){
	Discount discount;
	discount.nbrOfItems = nbrOfItems;
	discount.discountPrice = discountPrice;
	discounts[item] = discount;
}

int Checkout::CalculateTotal(){
	total = 0;

	for(std::map<std::string, int>::iterator itemIter = items.begin();
			itemIter != items.end(); itemIter++){
		std::string item = itemIter->first;
		int itemCnt = itemIter->second;
		CalculateItem(item, itemCnt);
	}

	return total;
}

void Checkout::CalculateItem( std::string item, int itemCnt ){
	std::map<std::string, Discount>::iterator discountIter;
	discountIter = discounts.find(item);
	if( discountIter != discounts.end()){
		Discount discount = discountIter->second;
		CalculateDiscount(item, itemCnt, discount);
	}
	else {
		total += itemCnt * prices[item];
	}
}

void Checkout::CalculateDiscount( std::string item, int itemCnt, Discount discount ){
	if( itemCnt >= discount.nbrOfItems ){
		int nbrOfDiscounts = itemCnt / discount.nbrOfItems;
		total += nbrOfDiscounts * discount.discountPrice;
		int remainingItems = itemCnt % discount.nbrOfItems;
		total += remainingItems * prices[item];
	}
	else {
		total += itemCnt * prices[item];
	}
}



#endif /* end of include guard:  SOLUTION_H */
