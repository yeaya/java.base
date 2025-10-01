#ifndef _sun_invoke_util_ValueConversions_h_
#define _sun_invoke_util_ValueConversions_h_
//$ class sun.invoke.util.ValueConversions
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IMPL_LOOKUP")
#undef IMPL_LOOKUP
#pragma push_macro("ZERO_INT")
#undef ZERO_INT
#pragma push_macro("THIS_CLASS")
#undef THIS_CLASS
#pragma push_macro("UNBOX_CONVERSIONS")
#undef UNBOX_CONVERSIONS
#pragma push_macro("BOX_CONVERSIONS")
#undef BOX_CONVERSIONS
#pragma push_macro("ONE_INT")
#undef ONE_INT
#pragma push_macro("CONVERT_PRIMITIVE_FUNCTIONS")
#undef CONVERT_PRIMITIVE_FUNCTIONS
#pragma push_macro("CONSTANT_FUNCTIONS")
#undef CONSTANT_FUNCTIONS

namespace java {
	namespace lang {
		class Boolean;
		class Byte;
		class Character;
		class Double;
		class Float;
		class Integer;
		class InternalError;
		class Long;
		class Number;
		class Short;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace sun {
	namespace invoke {
		namespace util {
			class ValueConversions$WrapperCache;
			class Wrapper;
		}
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export ValueConversions : public ::java::lang::Object {
	$class(ValueConversions, 0, ::java::lang::Object)
public:
	ValueConversions();
	void init$();
	static int8_t booleanToByte(bool x);
	static char16_t booleanToChar(bool x);
	static double booleanToDouble(bool x);
	static float booleanToFloat(bool x);
	static int32_t booleanToInt(bool x);
	static int64_t booleanToLong(bool x);
	static int16_t booleanToShort(bool x);
	static ::java::lang::Boolean* boxBoolean(bool x);
	static ::java::lang::Byte* boxByte(int8_t x);
	static ::java::lang::Character* boxCharacter(char16_t x);
	static ::java::lang::Double* boxDouble(double x);
	static ::java::lang::invoke::MethodHandle* boxExact(::sun::invoke::util::Wrapper* wrap);
	static ::java::lang::Float* boxFloat(float x);
	static ::java::lang::Integer* boxInteger(int32_t x);
	static ::java::lang::Long* boxLong(int64_t x);
	static ::java::lang::Short* boxShort(int16_t x);
	static ::java::lang::invoke::MethodType* boxType(::sun::invoke::util::Wrapper* wrap);
	static bool byteToBoolean(int8_t x);
	static char16_t byteToChar(int8_t x);
	static double byteToDouble(int8_t x);
	static float byteToFloat(int8_t x);
	static int32_t byteToInt(int8_t x);
	static int64_t byteToLong(int8_t x);
	static int16_t byteToShort(int8_t x);
	static $String* capitalize($String* x);
	static ::java::lang::invoke::MethodHandle* cast();
	static bool charToBoolean(char16_t x);
	static int8_t charToByte(char16_t x);
	static double charToDouble(char16_t x);
	static float charToFloat(char16_t x);
	static int32_t charToInt(char16_t x);
	static int64_t charToLong(char16_t x);
	static int16_t charToShort(char16_t x);
	static ::java::lang::invoke::MethodHandle* convertPrimitive(::sun::invoke::util::Wrapper* wsrc, ::sun::invoke::util::Wrapper* wdst);
	static ::java::lang::invoke::MethodHandle* convertPrimitive($Class* src, $Class* dst);
	static bool doubleToBoolean(double x);
	static int8_t doubleToByte(double x);
	static char16_t doubleToChar(double x);
	static float doubleToFloat(double x);
	static int32_t doubleToInt(double x);
	static int64_t doubleToLong(double x);
	static int16_t doubleToShort(double x);
	static void empty();
	static bool floatToBoolean(float x);
	static int8_t floatToByte(float x);
	static char16_t floatToChar(float x);
	static double floatToDouble(float x);
	static int32_t floatToInt(float x);
	static int64_t floatToLong(float x);
	static int16_t floatToShort(float x);
	static int8_t fromBoolean(bool x);
	static void ignore(Object$* x);
	static ::java::lang::invoke::MethodHandle* ignore();
	static bool intToBoolean(int32_t x);
	static int8_t intToByte(int32_t x);
	static char16_t intToChar(int32_t x);
	static double intToDouble(int32_t x);
	static float intToFloat(int32_t x);
	static int64_t intToLong(int32_t x);
	static int16_t intToShort(int32_t x);
	static bool longToBoolean(int64_t x);
	static int8_t longToByte(int64_t x);
	static char16_t longToChar(int64_t x);
	static double longToDouble(int64_t x);
	static float longToFloat(int64_t x);
	static int32_t longToInt(int64_t x);
	static int16_t longToShort(int64_t x);
	static ::java::lang::InternalError* newInternalError($String* message, $Throwable* cause);
	static ::java::lang::InternalError* newInternalError($Throwable* cause);
	static $Array<::sun::invoke::util::ValueConversions$WrapperCache>* newWrapperCaches(int32_t n);
	static ::java::lang::Number* primitiveConversion(::sun::invoke::util::Wrapper* wrap, Object$* x, bool cast);
	static bool shortToBoolean(int16_t x);
	static int8_t shortToByte(int16_t x);
	static char16_t shortToChar(int16_t x);
	static double shortToDouble(int16_t x);
	static float shortToFloat(int16_t x);
	static int32_t shortToInt(int16_t x);
	static int64_t shortToLong(int16_t x);
	static bool toBoolean(int8_t x);
	static ::java::lang::invoke::MethodHandle* unbox(::sun::invoke::util::Wrapper* wrap, int32_t kind);
	static bool unboxBoolean(::java::lang::Boolean* x);
	static bool unboxBoolean(Object$* x, bool cast);
	static int8_t unboxByte(::java::lang::Byte* x);
	static int8_t unboxByte(Object$* x, bool cast);
	static ::java::lang::invoke::MethodHandle* unboxCast(::sun::invoke::util::Wrapper* type);
	static char16_t unboxCharacter(::java::lang::Character* x);
	static char16_t unboxCharacter(Object$* x, bool cast);
	static double unboxDouble(::java::lang::Double* x);
	static double unboxDouble(Object$* x, bool cast);
	static ::java::lang::invoke::MethodHandle* unboxExact(::sun::invoke::util::Wrapper* type);
	static ::java::lang::invoke::MethodHandle* unboxExact(::sun::invoke::util::Wrapper* type, bool throwNPE);
	static float unboxFloat(::java::lang::Float* x);
	static float unboxFloat(Object$* x, bool cast);
	static int32_t unboxInteger(::java::lang::Integer* x);
	static int32_t unboxInteger(Object$* x, bool cast);
	static int64_t unboxLong(::java::lang::Long* x);
	static int64_t unboxLong(Object$* x, bool cast);
	static int16_t unboxShort(::java::lang::Short* x);
	static int16_t unboxShort(Object$* x, bool cast);
	static ::java::lang::invoke::MethodType* unboxType(::sun::invoke::util::Wrapper* wrap, int32_t kind);
	static ::java::lang::invoke::MethodHandle* unboxWiden(::sun::invoke::util::Wrapper* type);
	static int32_t widenSubword(Object$* x);
	static ::java::lang::invoke::MethodHandle* zeroConstantFunction(::sun::invoke::util::Wrapper* wrap);
	static double zeroDouble();
	static float zeroFloat();
	static int32_t zeroInteger();
	static int64_t zeroLong();
	static $Object* zeroObject();
	static bool $assertionsDisabled;
	static $Class* THIS_CLASS;
	static ::java::lang::invoke::MethodHandles$Lookup* IMPL_LOOKUP;
	static $Array<::sun::invoke::util::ValueConversions$WrapperCache>* UNBOX_CONVERSIONS;
	static ::java::lang::Integer* ZERO_INT;
	static ::java::lang::Integer* ONE_INT;
	static $Array<::sun::invoke::util::ValueConversions$WrapperCache>* BOX_CONVERSIONS;
	static $Array<::sun::invoke::util::ValueConversions$WrapperCache>* CONSTANT_FUNCTIONS;
	static $Array<::sun::invoke::util::ValueConversions$WrapperCache>* CONVERT_PRIMITIVE_FUNCTIONS;
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("IMPL_LOOKUP")
#pragma pop_macro("ZERO_INT")
#pragma pop_macro("THIS_CLASS")
#pragma pop_macro("UNBOX_CONVERSIONS")
#pragma pop_macro("BOX_CONVERSIONS")
#pragma pop_macro("ONE_INT")
#pragma pop_macro("CONVERT_PRIMITIVE_FUNCTIONS")
#pragma pop_macro("CONSTANT_FUNCTIONS")

#endif // _sun_invoke_util_ValueConversions_h_