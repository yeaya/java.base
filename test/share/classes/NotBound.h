#ifndef _NotBound_h_
#define _NotBound_h_
//$ class NotBound
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export NotBound : public ::java::lang::Object {
	$class(NotBound, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NotBound();
	void init$();
	static void checkBound(::java::nio::channels::DatagramChannel* dc);
	static void main($StringArray* args);
	static void wakeupWhenBound(::java::nio::channels::DatagramChannel* dc);
};

#endif // _NotBound_h_