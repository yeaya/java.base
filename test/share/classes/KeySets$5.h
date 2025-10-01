#ifndef _KeySets$5_h_
#define _KeySets$5_h_
//$ class KeySets$5
//$ extends KeySets$Catch

#include <KeySets$Catch.h>

class KeySets$Adder;
namespace java {
	namespace util {
		class Set;
	}
}

class KeySets$5 : public ::KeySets$Catch {
	$class(KeySets$5, $NO_CLASS_INIT, ::KeySets$Catch)
public:
	KeySets$5();
	void init$($Class* xc, ::KeySets$Adder* val$adder, ::java::util::Set* val$s);
	virtual void go() override;
	::java::util::Set* val$s = nullptr;
	::KeySets$Adder* val$adder = nullptr;
};

#endif // _KeySets$5_h_