#ifndef _KeySets$6_h_
#define _KeySets$6_h_
//$ class KeySets$6
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

class KeySets$Adder;
namespace java {
	namespace util {
		class Set;
	}
}

class KeySets$6 : public ::KeySets$Catch {
	$class(KeySets$6, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$6();
	void init$($Class* xc, ::KeySets$Adder* val$adder, ::java::util::Set* val$s);
	virtual void go() override;
	::java::util::Set* val$s = nullptr;
	::KeySets$Adder* val$adder = nullptr;
};

#endif // _KeySets$6_h_