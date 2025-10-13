#ifndef _LingerOnClose$TestMode_h_
#define _LingerOnClose$TestMode_h_
//$ class LingerOnClose$TestMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCKING")
#undef BLOCKING
#pragma push_macro("NON_BLOCKING")
#undef NON_BLOCKING
#pragma push_macro("NON_BLOCKING_AND_REGISTERED")
#undef NON_BLOCKING_AND_REGISTERED

class LingerOnClose$TestMode : public ::java::lang::Enum {
	$class(LingerOnClose$TestMode, 0, ::java::lang::Enum)
public:
	LingerOnClose$TestMode();
	static $Array<LingerOnClose$TestMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::LingerOnClose$TestMode* valueOf($String* name);
	static $Array<LingerOnClose$TestMode>* values();
	static ::LingerOnClose$TestMode* BLOCKING;
	static ::LingerOnClose$TestMode* NON_BLOCKING;
	static ::LingerOnClose$TestMode* NON_BLOCKING_AND_REGISTERED;
	static $Array<LingerOnClose$TestMode>* $VALUES;
};

#pragma pop_macro("BLOCKING")
#pragma pop_macro("NON_BLOCKING")
#pragma pop_macro("NON_BLOCKING_AND_REGISTERED")

#endif // _LingerOnClose$TestMode_h_