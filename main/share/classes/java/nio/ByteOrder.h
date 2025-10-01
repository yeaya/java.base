#ifndef _java_nio_ByteOrder_h_
#define _java_nio_ByteOrder_h_
//$ class java.nio.ByteOrder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BIG_ENDIAN")
#undef BIG_ENDIAN
#pragma push_macro("LITTLE_ENDIAN")
#undef LITTLE_ENDIAN
#pragma push_macro("NATIVE_ORDER")
#undef NATIVE_ORDER

namespace java {
	namespace nio {

class $export ByteOrder : public ::java::lang::Object {
	$class(ByteOrder, $PRELOAD, ::java::lang::Object)
public:
	ByteOrder();
	void init$($String* name);
	static ::java::nio::ByteOrder* nativeOrder();
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::java::nio::ByteOrder* BIG_ENDIAN;
	static ::java::nio::ByteOrder* LITTLE_ENDIAN;
	static ::java::nio::ByteOrder* NATIVE_ORDER;
};

	} // nio
} // java

#pragma pop_macro("BIG_ENDIAN")
#pragma pop_macro("LITTLE_ENDIAN")
#pragma pop_macro("NATIVE_ORDER")

#endif // _java_nio_ByteOrder_h_