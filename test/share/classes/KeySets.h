#ifndef _KeySets_h_
#define _KeySets_h_
//$ class KeySets
//$ extends java.lang.Object

#include <java/lang/Array.h>

class KeySets$Adder;
namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

class $export KeySets : public ::java::lang::Object {
	$class(KeySets, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeySets();
	void init$();
	static void main($StringArray* args);
	static ::java::nio::channels::SelectionKey* reg(::java::nio::channels::Selector* sel);
	static void testClose();
	static void testMutability();
	static void testNoAddition(::java::util::Set* s);
	static void testNoRemoval(::java::util::Set* s, ::KeySets$Adder* adder);
};

#endif // _KeySets_h_