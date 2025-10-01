#ifndef _KeySets$1_h_
#define _KeySets$1_h_
//$ class KeySets$1
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class KeySets$1 : public ::KeySets$Catch {
	$class(KeySets$1, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$1();
	void init$($Class* xc, ::java::nio::channels::Selector* val$sel);
	virtual void go() override;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _KeySets$1_h_