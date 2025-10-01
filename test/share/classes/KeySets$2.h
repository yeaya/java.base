#ifndef _KeySets$2_h_
#define _KeySets$2_h_
//$ class KeySets$2
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class KeySets$2 : public ::KeySets$Catch {
	$class(KeySets$2, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$2();
	void init$($Class* xc, ::java::nio::channels::Selector* val$sel);
	virtual void go() override;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _KeySets$2_h_