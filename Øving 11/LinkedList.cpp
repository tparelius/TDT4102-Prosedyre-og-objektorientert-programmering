#include "LinkedList.h"

std::ostream & LinkedList::operator<<(std::ostream & os, const Node & node)
{
	os << node.getValue();
	return os;
}

namespace LinkedList {
	Node * LinkedList::LinkedList::insert(Node * pos, const std::string & value)
	{
		if (pos == begin()) {
			std::unique_ptr<Node> newN = std::make_unique<Node>(value, std::move(head), nullptr);
			head = std::move(newN);
			pos->prev = begin();
		}
		else {
			std::unique_ptr<Node> newN = std::make_unique<Node>(value, std::move(pos->prev->next), pos->prev);
			pos->prev->next = std::move(newN);
			pos->prev = pos->prev->getNext();
		}
		return pos->getPrev();
	}

	Node * LinkedList::find(const std::string & value)
	{
		
	}
}