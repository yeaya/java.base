#ifndef _java_util_stream_Tripwire_h_
#define _java_util_stream_Tripwire_h_
//$ class java.util.stream.Tripwire
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ENABLED")
#undef ENABLED
#pragma push_macro("TRIPWIRE_PROPERTY")
#undef TRIPWIRE_PROPERTY

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Tripwire : public ::java::lang::Object {
	$class(Tripwire, 0, ::java::lang::Object)
public:
	Tripwire();
	void init$();
	static ::java::lang::Boolean* lambda$static$0();
	static void trip($Class* trippingClass, $String* msg);
	static $String* TRIPWIRE_PROPERTY;
	static bool ENABLED;
};

		} // stream
	} // util
} // java

#pragma pop_macro("ENABLED")
#pragma pop_macro("TRIPWIRE_PROPERTY")

#endif // _java_util_stream_Tripwire_h_