#include <sun/invoke/util/ValueConversions.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/Number.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/invoke/util/ValueConversions$1.h>
#include <sun/invoke/util/ValueConversions$Handles.h>
#include <sun/invoke/util/ValueConversions$WrapperCache.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOX_CONVERSIONS
#undef BYTE
#undef CAST_REFERENCE
#undef CHAR
#undef CONSTANT_FUNCTIONS
#undef CONVERT_PRIMITIVE_FUNCTIONS
#undef COUNT
#undef DOUBLE
#undef EMPTY
#undef FLOAT
#undef IGNORE
#undef IMPL_LOOKUP
#undef INT
#undef LONG
#undef ONE_INT
#undef SHORT
#undef THIS_CLASS
#undef TYPE
#undef UNBOX_CONVERSIONS
#undef ZERO_INT

using $ValueConversions$WrapperCacheArray = $Array<::sun::invoke::util::ValueConversions$WrapperCache>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ValueConversions$1 = ::sun::invoke::util::ValueConversions$1;
using $ValueConversions$Handles = ::sun::invoke::util::ValueConversions$Handles;
using $ValueConversions$WrapperCache = ::sun::invoke::util::ValueConversions$WrapperCache;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _ValueConversions_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueConversions, $assertionsDisabled)},
	{"THIS_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, THIS_CLASS)},
	{"IMPL_LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, IMPL_LOOKUP)},
	{"UNBOX_CONVERSIONS", "[Lsun/invoke/util/ValueConversions$WrapperCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, UNBOX_CONVERSIONS)},
	{"ZERO_INT", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, ZERO_INT)},
	{"ONE_INT", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, ONE_INT)},
	{"BOX_CONVERSIONS", "[Lsun/invoke/util/ValueConversions$WrapperCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, BOX_CONVERSIONS)},
	{"CONSTANT_FUNCTIONS", "[Lsun/invoke/util/ValueConversions$WrapperCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, CONSTANT_FUNCTIONS)},
	{"CONVERT_PRIMITIVE_FUNCTIONS", "[Lsun/invoke/util/ValueConversions$WrapperCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValueConversions, CONVERT_PRIMITIVE_FUNCTIONS)},
	{}
};

$MethodInfo _ValueConversions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ValueConversions::*)()>(&ValueConversions::init$))},
	{"booleanToByte", "(Z)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(bool)>(&ValueConversions::booleanToByte))},
	{"booleanToChar", "(Z)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(bool)>(&ValueConversions::booleanToChar))},
	{"booleanToDouble", "(Z)D", nullptr, $STATIC, $method(static_cast<double(*)(bool)>(&ValueConversions::booleanToDouble))},
	{"booleanToFloat", "(Z)F", nullptr, $STATIC, $method(static_cast<float(*)(bool)>(&ValueConversions::booleanToFloat))},
	{"booleanToInt", "(Z)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(bool)>(&ValueConversions::booleanToInt))},
	{"booleanToLong", "(Z)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool)>(&ValueConversions::booleanToLong))},
	{"booleanToShort", "(Z)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(bool)>(&ValueConversions::booleanToShort))},
	{"boxBoolean", "(Z)Ljava/lang/Boolean;", nullptr, $STATIC, $method(static_cast<$Boolean*(*)(bool)>(&ValueConversions::boxBoolean))},
	{"boxByte", "(B)Ljava/lang/Byte;", nullptr, $STATIC, $method(static_cast<$Byte*(*)(int8_t)>(&ValueConversions::boxByte))},
	{"boxCharacter", "(C)Ljava/lang/Character;", nullptr, $STATIC, $method(static_cast<$Character*(*)(char16_t)>(&ValueConversions::boxCharacter))},
	{"boxDouble", "(D)Ljava/lang/Double;", nullptr, $STATIC, $method(static_cast<$Double*(*)(double)>(&ValueConversions::boxDouble))},
	{"boxExact", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*)>(&ValueConversions::boxExact))},
	{"boxFloat", "(F)Ljava/lang/Float;", nullptr, $STATIC, $method(static_cast<$Float*(*)(float)>(&ValueConversions::boxFloat))},
	{"boxInteger", "(I)Ljava/lang/Integer;", nullptr, $STATIC, $method(static_cast<$Integer*(*)(int32_t)>(&ValueConversions::boxInteger))},
	{"boxLong", "(J)Ljava/lang/Long;", nullptr, $STATIC, $method(static_cast<$Long*(*)(int64_t)>(&ValueConversions::boxLong))},
	{"boxShort", "(S)Ljava/lang/Short;", nullptr, $STATIC, $method(static_cast<$Short*(*)(int16_t)>(&ValueConversions::boxShort))},
	{"boxType", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($Wrapper*)>(&ValueConversions::boxType))},
	{"byteToBoolean", "(B)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int8_t)>(&ValueConversions::byteToBoolean))},
	{"byteToChar", "(B)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(int8_t)>(&ValueConversions::byteToChar))},
	{"byteToDouble", "(B)D", nullptr, $STATIC, $method(static_cast<double(*)(int8_t)>(&ValueConversions::byteToDouble))},
	{"byteToFloat", "(B)F", nullptr, $STATIC, $method(static_cast<float(*)(int8_t)>(&ValueConversions::byteToFloat))},
	{"byteToInt", "(B)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int8_t)>(&ValueConversions::byteToInt))},
	{"byteToLong", "(B)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int8_t)>(&ValueConversions::byteToLong))},
	{"byteToShort", "(B)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int8_t)>(&ValueConversions::byteToShort))},
	{"capitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&ValueConversions::capitalize))},
	{"cast", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&ValueConversions::cast))},
	{"charToBoolean", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&ValueConversions::charToBoolean))},
	{"charToByte", "(C)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(char16_t)>(&ValueConversions::charToByte))},
	{"charToDouble", "(C)D", nullptr, $STATIC, $method(static_cast<double(*)(char16_t)>(&ValueConversions::charToDouble))},
	{"charToFloat", "(C)F", nullptr, $STATIC, $method(static_cast<float(*)(char16_t)>(&ValueConversions::charToFloat))},
	{"charToInt", "(C)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&ValueConversions::charToInt))},
	{"charToLong", "(C)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(char16_t)>(&ValueConversions::charToLong))},
	{"charToShort", "(C)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(char16_t)>(&ValueConversions::charToShort))},
	{"convertPrimitive", "(Lsun/invoke/util/Wrapper;Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*,$Wrapper*)>(&ValueConversions::convertPrimitive))},
	{"convertPrimitive", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,$Class*)>(&ValueConversions::convertPrimitive))},
	{"doubleToBoolean", "(D)Z", nullptr, $STATIC, $method(static_cast<bool(*)(double)>(&ValueConversions::doubleToBoolean))},
	{"doubleToByte", "(D)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(double)>(&ValueConversions::doubleToByte))},
	{"doubleToChar", "(D)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(double)>(&ValueConversions::doubleToChar))},
	{"doubleToFloat", "(D)F", nullptr, $STATIC, $method(static_cast<float(*)(double)>(&ValueConversions::doubleToFloat))},
	{"doubleToInt", "(D)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(double)>(&ValueConversions::doubleToInt))},
	{"doubleToLong", "(D)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(double)>(&ValueConversions::doubleToLong))},
	{"doubleToShort", "(D)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(double)>(&ValueConversions::doubleToShort))},
	{"empty", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ValueConversions::empty))},
	{"floatToBoolean", "(F)Z", nullptr, $STATIC, $method(static_cast<bool(*)(float)>(&ValueConversions::floatToBoolean))},
	{"floatToByte", "(F)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(float)>(&ValueConversions::floatToByte))},
	{"floatToChar", "(F)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(float)>(&ValueConversions::floatToChar))},
	{"floatToDouble", "(F)D", nullptr, $STATIC, $method(static_cast<double(*)(float)>(&ValueConversions::floatToDouble))},
	{"floatToInt", "(F)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(float)>(&ValueConversions::floatToInt))},
	{"floatToLong", "(F)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(float)>(&ValueConversions::floatToLong))},
	{"floatToShort", "(F)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(float)>(&ValueConversions::floatToShort))},
	{"fromBoolean", "(Z)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(bool)>(&ValueConversions::fromBoolean))},
	{"ignore", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&ValueConversions::ignore))},
	{"ignore", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&ValueConversions::ignore))},
	{"intToBoolean", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ValueConversions::intToBoolean))},
	{"intToByte", "(I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(int32_t)>(&ValueConversions::intToByte))},
	{"intToChar", "(I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&ValueConversions::intToChar))},
	{"intToDouble", "(I)D", nullptr, $STATIC, $method(static_cast<double(*)(int32_t)>(&ValueConversions::intToDouble))},
	{"intToFloat", "(I)F", nullptr, $STATIC, $method(static_cast<float(*)(int32_t)>(&ValueConversions::intToFloat))},
	{"intToLong", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&ValueConversions::intToLong))},
	{"intToShort", "(I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int32_t)>(&ValueConversions::intToShort))},
	{"longToBoolean", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&ValueConversions::longToBoolean))},
	{"longToByte", "(J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(int64_t)>(&ValueConversions::longToByte))},
	{"longToChar", "(J)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(int64_t)>(&ValueConversions::longToChar))},
	{"longToDouble", "(J)D", nullptr, $STATIC, $method(static_cast<double(*)(int64_t)>(&ValueConversions::longToDouble))},
	{"longToFloat", "(J)F", nullptr, $STATIC, $method(static_cast<float(*)(int64_t)>(&ValueConversions::longToFloat))},
	{"longToInt", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&ValueConversions::longToInt))},
	{"longToShort", "(J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t)>(&ValueConversions::longToShort))},
	{"newInternalError", "(Ljava/lang/String;Ljava/lang/Throwable;)Ljava/lang/InternalError;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InternalError*(*)($String*,$Throwable*)>(&ValueConversions::newInternalError))},
	{"newInternalError", "(Ljava/lang/Throwable;)Ljava/lang/InternalError;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InternalError*(*)($Throwable*)>(&ValueConversions::newInternalError))},
	{"newWrapperCaches", "(I)[Lsun/invoke/util/ValueConversions$WrapperCache;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ValueConversions$WrapperCacheArray*(*)(int32_t)>(&ValueConversions::newWrapperCaches))},
	{"primitiveConversion", "(Lsun/invoke/util/Wrapper;Ljava/lang/Object;Z)Ljava/lang/Number;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Number*(*)($Wrapper*,Object$*,bool)>(&ValueConversions::primitiveConversion))},
	{"shortToBoolean", "(S)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int16_t)>(&ValueConversions::shortToBoolean))},
	{"shortToByte", "(S)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(int16_t)>(&ValueConversions::shortToByte))},
	{"shortToChar", "(S)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(int16_t)>(&ValueConversions::shortToChar))},
	{"shortToDouble", "(S)D", nullptr, $STATIC, $method(static_cast<double(*)(int16_t)>(&ValueConversions::shortToDouble))},
	{"shortToFloat", "(S)F", nullptr, $STATIC, $method(static_cast<float(*)(int16_t)>(&ValueConversions::shortToFloat))},
	{"shortToInt", "(S)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int16_t)>(&ValueConversions::shortToInt))},
	{"shortToLong", "(S)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int16_t)>(&ValueConversions::shortToLong))},
	{"toBoolean", "(B)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int8_t)>(&ValueConversions::toBoolean))},
	{"unbox", "(Lsun/invoke/util/Wrapper;I)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*,int32_t)>(&ValueConversions::unbox))},
	{"unboxBoolean", "(Ljava/lang/Boolean;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Boolean*)>(&ValueConversions::unboxBoolean))},
	{"unboxBoolean", "(Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)(Object$*,bool)>(&ValueConversions::unboxBoolean))},
	{"unboxByte", "(Ljava/lang/Byte;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($Byte*)>(&ValueConversions::unboxByte))},
	{"unboxByte", "(Ljava/lang/Object;Z)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(Object$*,bool)>(&ValueConversions::unboxByte))},
	{"unboxCast", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*)>(&ValueConversions::unboxCast))},
	{"unboxCharacter", "(Ljava/lang/Character;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($Character*)>(&ValueConversions::unboxCharacter))},
	{"unboxCharacter", "(Ljava/lang/Object;Z)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(Object$*,bool)>(&ValueConversions::unboxCharacter))},
	{"unboxDouble", "(Ljava/lang/Double;)D", nullptr, $STATIC, $method(static_cast<double(*)($Double*)>(&ValueConversions::unboxDouble))},
	{"unboxDouble", "(Ljava/lang/Object;Z)D", nullptr, $STATIC, $method(static_cast<double(*)(Object$*,bool)>(&ValueConversions::unboxDouble))},
	{"unboxExact", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*)>(&ValueConversions::unboxExact))},
	{"unboxExact", "(Lsun/invoke/util/Wrapper;Z)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*,bool)>(&ValueConversions::unboxExact))},
	{"unboxFloat", "(Ljava/lang/Float;)F", nullptr, $STATIC, $method(static_cast<float(*)($Float*)>(&ValueConversions::unboxFloat))},
	{"unboxFloat", "(Ljava/lang/Object;Z)F", nullptr, $STATIC, $method(static_cast<float(*)(Object$*,bool)>(&ValueConversions::unboxFloat))},
	{"unboxInteger", "(Ljava/lang/Integer;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Integer*)>(&ValueConversions::unboxInteger))},
	{"unboxInteger", "(Ljava/lang/Object;Z)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(Object$*,bool)>(&ValueConversions::unboxInteger))},
	{"unboxLong", "(Ljava/lang/Long;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($Long*)>(&ValueConversions::unboxLong))},
	{"unboxLong", "(Ljava/lang/Object;Z)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(Object$*,bool)>(&ValueConversions::unboxLong))},
	{"unboxShort", "(Ljava/lang/Short;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($Short*)>(&ValueConversions::unboxShort))},
	{"unboxShort", "(Ljava/lang/Object;Z)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(Object$*,bool)>(&ValueConversions::unboxShort))},
	{"unboxType", "(Lsun/invoke/util/Wrapper;I)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($Wrapper*,int32_t)>(&ValueConversions::unboxType))},
	{"unboxWiden", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*)>(&ValueConversions::unboxWiden))},
	{"widenSubword", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&ValueConversions::widenSubword))},
	{"zeroConstantFunction", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*)>(&ValueConversions::zeroConstantFunction))},
	{"zeroDouble", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&ValueConversions::zeroDouble))},
	{"zeroFloat", "()F", nullptr, $STATIC, $method(static_cast<float(*)()>(&ValueConversions::zeroFloat))},
	{"zeroInteger", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&ValueConversions::zeroInteger))},
	{"zeroLong", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ValueConversions::zeroLong))},
	{"zeroObject", "()Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)()>(&ValueConversions::zeroObject))},
	{}
};

$InnerClassInfo _ValueConversions_InnerClassesInfo_[] = {
	{"sun.invoke.util.ValueConversions$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.invoke.util.ValueConversions$Handles", "sun.invoke.util.ValueConversions", "Handles", $PRIVATE | $STATIC},
	{"sun.invoke.util.ValueConversions$WrapperCache", "sun.invoke.util.ValueConversions", "WrapperCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ValueConversions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.invoke.util.ValueConversions",
	"java.lang.Object",
	nullptr,
	_ValueConversions_FieldInfo_,
	_ValueConversions_MethodInfo_,
	nullptr,
	nullptr,
	_ValueConversions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.invoke.util.ValueConversions$1,sun.invoke.util.ValueConversions$Handles,sun.invoke.util.ValueConversions$WrapperCache"
};

$Object* allocate$ValueConversions($Class* clazz) {
	return $of($alloc(ValueConversions));
}

bool ValueConversions::$assertionsDisabled = false;
$Class* ValueConversions::THIS_CLASS = nullptr;
$MethodHandles$Lookup* ValueConversions::IMPL_LOOKUP = nullptr;
$ValueConversions$WrapperCacheArray* ValueConversions::UNBOX_CONVERSIONS = nullptr;
$Integer* ValueConversions::ZERO_INT = nullptr;
$Integer* ValueConversions::ONE_INT = nullptr;
$ValueConversions$WrapperCacheArray* ValueConversions::BOX_CONVERSIONS = nullptr;
$ValueConversions$WrapperCacheArray* ValueConversions::CONSTANT_FUNCTIONS = nullptr;
$ValueConversions$WrapperCacheArray* ValueConversions::CONVERT_PRIMITIVE_FUNCTIONS = nullptr;

void ValueConversions::init$() {
}

$ValueConversions$WrapperCacheArray* ValueConversions::newWrapperCaches(int32_t n) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($ValueConversions$WrapperCacheArray, caches, $new($ValueConversions$WrapperCacheArray, n));
	for (int32_t i = 0; i < n; ++i) {
		caches->set(i, $$new($ValueConversions$WrapperCache));
	}
	return caches;
}

int32_t ValueConversions::unboxInteger($Integer* x) {
	$init(ValueConversions);
	return $nc(x)->intValue();
}

int32_t ValueConversions::unboxInteger(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Integer, x)) {
		return $nc(($cast($Integer, x)))->intValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::INT, x, cast)))->intValue();
}

int8_t ValueConversions::unboxByte($Byte* x) {
	$init(ValueConversions);
	return $nc(x)->byteValue();
}

int8_t ValueConversions::unboxByte(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Byte, x)) {
		return $nc(($cast($Byte, x)))->byteValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::BYTE, x, cast)))->byteValue();
}

int16_t ValueConversions::unboxShort($Short* x) {
	$init(ValueConversions);
	return $nc(x)->shortValue();
}

int16_t ValueConversions::unboxShort(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Short, x)) {
		return $nc(($cast($Short, x)))->shortValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::SHORT, x, cast)))->shortValue();
}

bool ValueConversions::unboxBoolean($Boolean* x) {
	$init(ValueConversions);
	return $nc(x)->booleanValue();
}

bool ValueConversions::unboxBoolean(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Boolean, x)) {
		return $nc(($cast($Boolean, x)))->booleanValue();
	}
	$init($Wrapper);
	return ((int32_t)($nc($(primitiveConversion($Wrapper::BOOLEAN, x, cast)))->intValue() & (uint32_t)1)) != 0;
}

char16_t ValueConversions::unboxCharacter($Character* x) {
	$init(ValueConversions);
	return $nc(x)->charValue();
}

char16_t ValueConversions::unboxCharacter(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Character, x)) {
		return $nc(($cast($Character, x)))->charValue();
	}
	$init($Wrapper);
	return (char16_t)$nc($(primitiveConversion($Wrapper::CHAR, x, cast)))->intValue();
}

int64_t ValueConversions::unboxLong($Long* x) {
	$init(ValueConversions);
	return $nc(x)->longValue();
}

int64_t ValueConversions::unboxLong(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Long, x)) {
		return $nc(($cast($Long, x)))->longValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::LONG, x, cast)))->longValue();
}

float ValueConversions::unboxFloat($Float* x) {
	$init(ValueConversions);
	return $nc(x)->floatValue();
}

float ValueConversions::unboxFloat(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Float, x)) {
		return $nc(($cast($Float, x)))->floatValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::FLOAT, x, cast)))->floatValue();
}

double ValueConversions::unboxDouble($Double* x) {
	$init(ValueConversions);
	return $nc(x)->doubleValue();
}

double ValueConversions::unboxDouble(Object$* x, bool cast) {
	$init(ValueConversions);
	if ($instanceOf($Double, x)) {
		return $nc(($cast($Double, x)))->doubleValue();
	}
	$init($Wrapper);
	return $nc($(primitiveConversion($Wrapper::DOUBLE, x, cast)))->doubleValue();
}

$MethodType* ValueConversions::unboxType($Wrapper* wrap, int32_t kind) {
	$init(ValueConversions);
	if (kind == 0) {
		$Class* var$0 = $nc(wrap)->primitiveType();
		return $MethodType::methodType(var$0, wrap->wrapperType());
	}
	$init($Boolean);
	return $MethodType::methodType($nc(wrap)->primitiveType(), $Object::class$, $$new($ClassArray, {$Boolean::TYPE}));
}

$MethodHandle* ValueConversions::unbox($Wrapper* wrap, int32_t kind) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($ValueConversions$WrapperCache, cache, $nc(ValueConversions::UNBOX_CONVERSIONS)->get(kind));
	$var($MethodHandle, mh, $nc(cache)->get(wrap));
	if (mh != nullptr) {
		return mh;
	}
	$init($ValueConversions$1);
	switch ($nc($ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrap))->ordinal())) {
	case 1:
		{}
	case 2:
		{
			$throwNew($IllegalArgumentException, $$str({"unbox "_s, wrap}));
		}
	}
	$var($String, name, $str({"unbox"_s, $(wrap->wrapperSimpleName())}));
	$var($MethodType, type, unboxType(wrap, kind));
	try {
		$assign(mh, $nc(ValueConversions::IMPL_LOOKUP)->findStatic(ValueConversions::THIS_CLASS, name, type));
	} catch ($ReflectiveOperationException& ex) {
		$assign(mh, nullptr);
	}
	if (mh != nullptr) {
		if (kind > 0) {
			bool cast = (kind != 2);
			$assign(mh, $MethodHandles::insertArguments(mh, 1, $$new($ObjectArray, {$($of($Boolean::valueOf(cast)))})));
		}
		if (kind == 1) {
			$assign(mh, mh->asType($(unboxType(wrap, 0))));
		}
		return cache->put(wrap, mh);
	}
	$throwNew($IllegalArgumentException, $$str({"cannot find unbox adapter for "_s, wrap, (kind <= 1 ? " (exact)"_s : kind == 3 ? " (cast)"_s : ""_s)}));
}

$MethodHandle* ValueConversions::unboxExact($Wrapper* type) {
	$init(ValueConversions);
	return unbox(type, 0);
}

$MethodHandle* ValueConversions::unboxExact($Wrapper* type, bool throwNPE) {
	$init(ValueConversions);
	return unbox(type, throwNPE ? 0 : 1);
}

$MethodHandle* ValueConversions::unboxWiden($Wrapper* type) {
	$init(ValueConversions);
	return unbox(type, 2);
}

$MethodHandle* ValueConversions::unboxCast($Wrapper* type) {
	$init(ValueConversions);
	return unbox(type, 3);
}

$Number* ValueConversions::primitiveConversion($Wrapper* wrap, Object$* x, bool cast) {
	$init(ValueConversions);
	$var($Number, res, nullptr);
	if (x == nullptr) {
		if (!cast) {
			return nullptr;
		}
		return ValueConversions::ZERO_INT;
	}
	if ($instanceOf($Number, x)) {
		$assign(res, $cast($Number, x));
	} else if ($instanceOf($Boolean, x)) {
		$assign(res, ($nc(($cast($Boolean, x)))->booleanValue() ? ValueConversions::ONE_INT : ValueConversions::ZERO_INT));
	} else if ($instanceOf($Character, x)) {
		$assign(res, $Integer::valueOf((int32_t)$nc(($cast($Character, x)))->charValue()));
	} else {
		$assign(res, $cast($Number, x));
	}
	$Wrapper* xwrap = $Wrapper::findWrapperType($nc($of(x))->getClass());
	if (xwrap == nullptr || !cast && !$nc(wrap)->isConvertibleFrom(xwrap)) {
		return $cast($Number, $nc(wrap->wrapperType())->cast(x));
	}
	return res;
}

int32_t ValueConversions::widenSubword(Object$* x) {
	$init(ValueConversions);
	if ($instanceOf($Integer, x)) {
		return $nc(($cast($Integer, x)))->intValue();
	} else if ($instanceOf($Boolean, x)) {
		return fromBoolean($nc(($cast($Boolean, x)))->booleanValue());
	} else if ($instanceOf($Character, x)) {
		return $nc(($cast($Character, x)))->charValue();
	} else if ($instanceOf($Short, x)) {
		return $nc(($cast($Short, x)))->shortValue();
	} else if ($instanceOf($Byte, x)) {
		return $nc(($cast($Byte, x)))->byteValue();
	} else {
		return $nc(($cast($Integer, x)))->intValue();
	}
}

$Integer* ValueConversions::boxInteger(int32_t x) {
	$init(ValueConversions);
	return $Integer::valueOf(x);
}

$Byte* ValueConversions::boxByte(int8_t x) {
	$init(ValueConversions);
	return $Byte::valueOf(x);
}

$Short* ValueConversions::boxShort(int16_t x) {
	$init(ValueConversions);
	return $Short::valueOf(x);
}

$Boolean* ValueConversions::boxBoolean(bool x) {
	$init(ValueConversions);
	return $Boolean::valueOf(x);
}

$Character* ValueConversions::boxCharacter(char16_t x) {
	$init(ValueConversions);
	return $Character::valueOf(x);
}

$Long* ValueConversions::boxLong(int64_t x) {
	$init(ValueConversions);
	return $Long::valueOf(x);
}

$Float* ValueConversions::boxFloat(float x) {
	$init(ValueConversions);
	return $Float::valueOf(x);
}

$Double* ValueConversions::boxDouble(double x) {
	$init(ValueConversions);
	return $Double::valueOf(x);
}

$MethodType* ValueConversions::boxType($Wrapper* wrap) {
	$init(ValueConversions);
	$Class* boxType = $nc(wrap)->wrapperType();
	return $MethodType::methodType(boxType, wrap->primitiveType());
}

$MethodHandle* ValueConversions::boxExact($Wrapper* wrap) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($ValueConversions$WrapperCache, cache, $nc(ValueConversions::BOX_CONVERSIONS)->get(0));
	$var($MethodHandle, mh, $nc(cache)->get(wrap));
	if (mh != nullptr) {
		return mh;
	}
	$var($String, name, $str({"box"_s, $($nc(wrap)->wrapperSimpleName())}));
	$var($MethodType, type, boxType(wrap));
	try {
		$assign(mh, $nc(ValueConversions::IMPL_LOOKUP)->findStatic(ValueConversions::THIS_CLASS, name, type));
	} catch ($ReflectiveOperationException& ex) {
		$assign(mh, nullptr);
	}
	if (mh != nullptr) {
		return cache->put(wrap, mh);
	}
	$throwNew($IllegalArgumentException, $$str({"cannot find box adapter for "_s, wrap}));
}

void ValueConversions::ignore(Object$* x) {
	$init(ValueConversions);
}

void ValueConversions::empty() {
	$init(ValueConversions);
}

$Object* ValueConversions::zeroObject() {
	$init(ValueConversions);
	return $of(nullptr);
}

int32_t ValueConversions::zeroInteger() {
	$init(ValueConversions);
	return 0;
}

int64_t ValueConversions::zeroLong() {
	$init(ValueConversions);
	return 0;
}

float ValueConversions::zeroFloat() {
	$init(ValueConversions);
	return (float)0;
}

double ValueConversions::zeroDouble() {
	$init(ValueConversions);
	return (double)0;
}

$MethodHandle* ValueConversions::zeroConstantFunction($Wrapper* wrap) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($ValueConversions$WrapperCache, cache, $nc(ValueConversions::CONSTANT_FUNCTIONS)->get(0));
	$var($MethodHandle, mh, $nc(cache)->get(wrap));
	if (mh != nullptr) {
		return mh;
	}
	$var($MethodType, type, $MethodType::methodType($nc(wrap)->primitiveType()));
	$init($ValueConversions$1);
	switch ($nc($ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrap))->ordinal())) {
	case 2:
		{
			$init($ValueConversions$Handles);
			$assign(mh, $ValueConversions$Handles::EMPTY);
			break;
		}
	case 1:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{
			try {
				$assign(mh, $nc(ValueConversions::IMPL_LOOKUP)->findStatic(ValueConversions::THIS_CLASS, $$str({"zero"_s, $(wrap->wrapperSimpleName())}), type));
			} catch ($ReflectiveOperationException& ex) {
				$assign(mh, nullptr);
			}
			break;
		}
	}
	if (mh != nullptr) {
		return cache->put(wrap, mh);
	}
	if (wrap->isSubwordOrInt() && wrap != $Wrapper::INT) {
		$assign(mh, $MethodHandles::explicitCastArguments($(zeroConstantFunction($Wrapper::INT)), type));
		return cache->put(wrap, mh);
	}
	$throwNew($IllegalArgumentException, $$str({"cannot find zero constant for "_s, wrap}));
}

$MethodHandle* ValueConversions::ignore() {
	$init(ValueConversions);
	$init($ValueConversions$Handles);
	return $ValueConversions$Handles::IGNORE;
}

$MethodHandle* ValueConversions::cast() {
	$init(ValueConversions);
	$init($ValueConversions$Handles);
	return $ValueConversions$Handles::CAST_REFERENCE;
}

float ValueConversions::doubleToFloat(double x) {
	$init(ValueConversions);
	return (float)x;
}

int64_t ValueConversions::doubleToLong(double x) {
	$init(ValueConversions);
	return $cast(int64_t, x);
}

int32_t ValueConversions::doubleToInt(double x) {
	$init(ValueConversions);
	return $cast(int32_t, x);
}

int16_t ValueConversions::doubleToShort(double x) {
	$init(ValueConversions);
	return $cast(int16_t, x);
}

char16_t ValueConversions::doubleToChar(double x) {
	$init(ValueConversions);
	return (char16_t)x;
}

int8_t ValueConversions::doubleToByte(double x) {
	$init(ValueConversions);
	return $cast(int8_t, x);
}

bool ValueConversions::doubleToBoolean(double x) {
	$init(ValueConversions);
	return toBoolean($cast(int8_t, x));
}

double ValueConversions::floatToDouble(float x) {
	$init(ValueConversions);
	return x;
}

int64_t ValueConversions::floatToLong(float x) {
	$init(ValueConversions);
	return $cast(int64_t, x);
}

int32_t ValueConversions::floatToInt(float x) {
	$init(ValueConversions);
	return $cast(int32_t, x);
}

int16_t ValueConversions::floatToShort(float x) {
	$init(ValueConversions);
	return $cast(int16_t, x);
}

char16_t ValueConversions::floatToChar(float x) {
	$init(ValueConversions);
	return (char16_t)x;
}

int8_t ValueConversions::floatToByte(float x) {
	$init(ValueConversions);
	return $cast(int8_t, x);
}

bool ValueConversions::floatToBoolean(float x) {
	$init(ValueConversions);
	return toBoolean($cast(int8_t, x));
}

double ValueConversions::longToDouble(int64_t x) {
	$init(ValueConversions);
	return (double)x;
}

float ValueConversions::longToFloat(int64_t x) {
	$init(ValueConversions);
	return (float)x;
}

int32_t ValueConversions::longToInt(int64_t x) {
	$init(ValueConversions);
	return (int32_t)x;
}

int16_t ValueConversions::longToShort(int64_t x) {
	$init(ValueConversions);
	return (int16_t)x;
}

char16_t ValueConversions::longToChar(int64_t x) {
	$init(ValueConversions);
	return (char16_t)x;
}

int8_t ValueConversions::longToByte(int64_t x) {
	$init(ValueConversions);
	return (int8_t)x;
}

bool ValueConversions::longToBoolean(int64_t x) {
	$init(ValueConversions);
	return toBoolean((int8_t)x);
}

double ValueConversions::intToDouble(int32_t x) {
	$init(ValueConversions);
	return (double)x;
}

float ValueConversions::intToFloat(int32_t x) {
	$init(ValueConversions);
	return (float)x;
}

int64_t ValueConversions::intToLong(int32_t x) {
	$init(ValueConversions);
	return x;
}

int16_t ValueConversions::intToShort(int32_t x) {
	$init(ValueConversions);
	return (int16_t)x;
}

char16_t ValueConversions::intToChar(int32_t x) {
	$init(ValueConversions);
	return (char16_t)x;
}

int8_t ValueConversions::intToByte(int32_t x) {
	$init(ValueConversions);
	return (int8_t)x;
}

bool ValueConversions::intToBoolean(int32_t x) {
	$init(ValueConversions);
	return toBoolean((int8_t)x);
}

double ValueConversions::shortToDouble(int16_t x) {
	$init(ValueConversions);
	return (double)x;
}

float ValueConversions::shortToFloat(int16_t x) {
	$init(ValueConversions);
	return (float)x;
}

int64_t ValueConversions::shortToLong(int16_t x) {
	$init(ValueConversions);
	return x;
}

int32_t ValueConversions::shortToInt(int16_t x) {
	$init(ValueConversions);
	return x;
}

char16_t ValueConversions::shortToChar(int16_t x) {
	$init(ValueConversions);
	return (char16_t)x;
}

int8_t ValueConversions::shortToByte(int16_t x) {
	$init(ValueConversions);
	return (int8_t)x;
}

bool ValueConversions::shortToBoolean(int16_t x) {
	$init(ValueConversions);
	return toBoolean((int8_t)x);
}

double ValueConversions::charToDouble(char16_t x) {
	$init(ValueConversions);
	return (double)x;
}

float ValueConversions::charToFloat(char16_t x) {
	$init(ValueConversions);
	return (float)x;
}

int64_t ValueConversions::charToLong(char16_t x) {
	$init(ValueConversions);
	return x;
}

int32_t ValueConversions::charToInt(char16_t x) {
	$init(ValueConversions);
	return x;
}

int16_t ValueConversions::charToShort(char16_t x) {
	$init(ValueConversions);
	return (int16_t)x;
}

int8_t ValueConversions::charToByte(char16_t x) {
	$init(ValueConversions);
	return (int8_t)x;
}

bool ValueConversions::charToBoolean(char16_t x) {
	$init(ValueConversions);
	return toBoolean((int8_t)x);
}

double ValueConversions::byteToDouble(int8_t x) {
	$init(ValueConversions);
	return (double)x;
}

float ValueConversions::byteToFloat(int8_t x) {
	$init(ValueConversions);
	return (float)x;
}

int64_t ValueConversions::byteToLong(int8_t x) {
	$init(ValueConversions);
	return x;
}

int32_t ValueConversions::byteToInt(int8_t x) {
	$init(ValueConversions);
	return x;
}

int16_t ValueConversions::byteToShort(int8_t x) {
	$init(ValueConversions);
	return (int16_t)x;
}

char16_t ValueConversions::byteToChar(int8_t x) {
	$init(ValueConversions);
	return (char16_t)x;
}

bool ValueConversions::byteToBoolean(int8_t x) {
	$init(ValueConversions);
	return toBoolean(x);
}

double ValueConversions::booleanToDouble(bool x) {
	$init(ValueConversions);
	return (double)fromBoolean(x);
}

float ValueConversions::booleanToFloat(bool x) {
	$init(ValueConversions);
	return (float)fromBoolean(x);
}

int64_t ValueConversions::booleanToLong(bool x) {
	$init(ValueConversions);
	return fromBoolean(x);
}

int32_t ValueConversions::booleanToInt(bool x) {
	$init(ValueConversions);
	return fromBoolean(x);
}

int16_t ValueConversions::booleanToShort(bool x) {
	$init(ValueConversions);
	return fromBoolean(x);
}

char16_t ValueConversions::booleanToChar(bool x) {
	$init(ValueConversions);
	return (char16_t)fromBoolean(x);
}

int8_t ValueConversions::booleanToByte(bool x) {
	$init(ValueConversions);
	return fromBoolean(x);
}

bool ValueConversions::toBoolean(int8_t x) {
	$init(ValueConversions);
	return (((int32_t)(x & (uint32_t)1)) != 0);
}

int8_t ValueConversions::fromBoolean(bool x) {
	$init(ValueConversions);
	return (x ? (int8_t)1 : (int8_t)0);
}

$MethodHandle* ValueConversions::convertPrimitive($Wrapper* wsrc, $Wrapper* wdst) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($ValueConversions$WrapperCache, cache, $nc(ValueConversions::CONVERT_PRIMITIVE_FUNCTIONS)->get($nc(wsrc)->ordinal()));
	$var($MethodHandle, mh, $nc(cache)->get(wdst));
	if (mh != nullptr) {
		return mh;
	}
	$Class* src = wsrc->primitiveType();
	$Class* dst = $nc(wdst)->primitiveType();
	$var($MethodType, type, $MethodType::methodType(dst, src));
	if (wsrc == wdst) {
		$assign(mh, $MethodHandles::identity(src));
	} else {
		bool var$0 = !ValueConversions::$assertionsDisabled;
		if (var$0) {
			bool var$1 = $nc(src)->isPrimitive();
			var$0 = !(var$1 && $nc(dst)->isPrimitive());
		}
		if (var$0) {
			$throwNew($AssertionError);
		}
		try {
			$var($String, var$2, $$str({$($nc(src)->getSimpleName()), "To"_s}));
			$assign(mh, $nc(ValueConversions::IMPL_LOOKUP)->findStatic(ValueConversions::THIS_CLASS, $$concat(var$2, $(capitalize($($nc(dst)->getSimpleName())))), type));
		} catch ($ReflectiveOperationException& ex) {
			$assign(mh, nullptr);
		}
	}
	if (mh != nullptr) {
		if (!ValueConversions::$assertionsDisabled && !(mh->type() == type)) {
			$throwNew($AssertionError, $of(mh));
		}
		return cache->put(wdst, mh);
	}
	$var($String, var$3, $$str({"cannot find primitive conversion function for "_s, $($nc(src)->getSimpleName()), " -> "_s}));
	$throwNew($IllegalArgumentException, $$concat(var$3, $($nc(dst)->getSimpleName())));
}

$MethodHandle* ValueConversions::convertPrimitive($Class* src, $Class* dst) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($Wrapper, var$0, $Wrapper::forPrimitiveType(src));
	return convertPrimitive(var$0, $($Wrapper::forPrimitiveType(dst)));
}

$String* ValueConversions::capitalize($String* x) {
	$init(ValueConversions);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $str($Character::toUpperCase($nc(x)->charAt(0))));
	return $concat(var$0, $($nc(x)->substring(1)));
}

$InternalError* ValueConversions::newInternalError($String* message, $Throwable* cause) {
	$init(ValueConversions);
	return $new($InternalError, message, cause);
}

$InternalError* ValueConversions::newInternalError($Throwable* cause) {
	$init(ValueConversions);
	return $new($InternalError, cause);
}

void clinit$ValueConversions($Class* class$) {
	$beforeCallerSensitive();
	ValueConversions::$assertionsDisabled = !ValueConversions::class$->desiredAssertionStatus();
	$assignStatic(ValueConversions::THIS_CLASS, ValueConversions::class$);
	$assignStatic(ValueConversions::IMPL_LOOKUP, $MethodHandles::lookup());
	$assignStatic(ValueConversions::UNBOX_CONVERSIONS, ValueConversions::newWrapperCaches(4));
	$assignStatic(ValueConversions::ZERO_INT, $Integer::valueOf(0));
	$assignStatic(ValueConversions::ONE_INT, $Integer::valueOf(1));
	$assignStatic(ValueConversions::BOX_CONVERSIONS, ValueConversions::newWrapperCaches(1));
	$assignStatic(ValueConversions::CONSTANT_FUNCTIONS, ValueConversions::newWrapperCaches(2));
	$assignStatic(ValueConversions::CONVERT_PRIMITIVE_FUNCTIONS, ValueConversions::newWrapperCaches($Wrapper::COUNT));
}

ValueConversions::ValueConversions() {
}

$Class* ValueConversions::load$($String* name, bool initialize) {
	$loadClass(ValueConversions, name, initialize, &_ValueConversions_ClassInfo_, clinit$ValueConversions, allocate$ValueConversions);
	return class$;
}

$Class* ValueConversions::class$ = nullptr;

		} // util
	} // invoke
} // sun