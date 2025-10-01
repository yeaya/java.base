#ifndef _Close_h_
#define _Close_h_
//$ class Close
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
		}
	}
}

class $export Close : public ::java::lang::Object {
	$class(Close, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Close();
	void init$();
	static void check(::java::nio::channels::SelectionKey* sk);
	static void main($StringArray* args);
	static ::java::nio::channels::SelectionKey* open();
	static void testChannelClose();
	static void testSocketClose();
};

#endif // _Close_h_