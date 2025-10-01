#ifndef _ChangingInterests_h_
#define _ChangingInterests_h_
//$ class ChangingInterests
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OPS")
#undef OPS

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
			class SocketChannel;
		}
	}
}

class $export ChangingInterests : public ::java::lang::Object {
	$class(ChangingInterests, 0, ::java::lang::Object)
public:
	ChangingInterests();
	void init$();
	static void assertTrue(bool v, $String* msg);
	static void drain(::java::nio::channels::SocketChannel* sc);
	static void main($StringArray* args);
	static void makeReadable(::java::nio::channels::SocketChannel* out, ::java::nio::channels::SocketChannel* in);
	static void testChange(::java::nio::channels::SelectionKey* key, int32_t from, int32_t to);
	static void testForSpin(::java::nio::channels::Selector* sel);
	static $String* toOpsString(int32_t ops);
	static $ints* OPS;
};

#pragma pop_macro("OPS")

#endif // _ChangingInterests_h_