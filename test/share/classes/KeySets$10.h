#ifndef _KeySets$10_h_
#define _KeySets$10_h_
//$ class KeySets$10
//$ extends KeySets$Adder

#include <KeySets$Adder.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class KeySets$10 : public ::KeySets$Adder {
	$class(KeySets$10, $NO_CLASS_INIT, ::KeySets$Adder)
public:
	KeySets$10();
	void init$(::java::nio::channels::Selector* val$sel);
	virtual void add() override;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _KeySets$10_h_