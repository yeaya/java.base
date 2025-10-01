#ifndef _KeySets$4_h_
#define _KeySets$4_h_
//$ class KeySets$4
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

namespace java {
	namespace util {
		class Set;
	}
}

class KeySets$4 : public ::KeySets$Catch {
	$class(KeySets$4, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$4();
	void init$($Class* xc, ::java::util::Set* val$s);
	virtual void go() override;
	::java::util::Set* val$s = nullptr;
};

#endif // _KeySets$4_h_