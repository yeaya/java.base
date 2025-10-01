#ifndef _SerializationTests_h_
#define _SerializationTests_h_
//$ class SerializationTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export SerializationTests : public ::java::lang::Object {
	$class(SerializationTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SerializationTests();
	void init$();
	static void checkSerialForm(::java::math::BigDecimal* bd);
	static void main($StringArray* args);
};

#endif // _SerializationTests_h_