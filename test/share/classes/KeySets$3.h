#ifndef _KeySets$3_h_
#define _KeySets$3_h_
//$ class KeySets$3
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

namespace java {
	namespace util {
		class Set;
	}
}

class KeySets$3 : public ::KeySets$Catch {
	$class(KeySets$3, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$3();
	void init$($Class* xc, ::java::util::Set* val$s);
	virtual void go() override;
	::java::util::Set* val$s = nullptr;
};

#endif // _KeySets$3_h_