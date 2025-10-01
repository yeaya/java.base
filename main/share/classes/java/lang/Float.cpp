#include <java/lang/Float.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#include <cmath>

#undef POSITIVE_INFINITY
#undef BYTES
#undef MAX_EXPONENT
#undef NEGATIVE_INFINITY
#undef MIN_NORMAL
#undef SIZE
#undef MAX_VALUE
#undef MIN_VALUE
#undef TYPE
#undef MIN_EXPONENT

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $Constable = ::java::lang::constant::Constable;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Optional = ::java::util::Optional;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace java {
	namespace lang {
$CompoundAttribute _Float_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Float_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Float_Attribute_var$0},
	{}
};

$NamedAttribute Float_Attribute_var$1[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", Float_Attribute_var$1},
	{}
};

$NamedAttribute Float_Attribute_var$2[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_init$2[] = {
	{"Ljava/lang/Deprecated;", Float_Attribute_var$2},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_floatToIntBits10[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_floatToRawIntBits11[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_floatValue12[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_intBitsToFloat15[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Float_MethodAnnotations_valueOf33[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};


$FieldInfo _Float_FieldInfo_[] = {
	{"POSITIVE_INFINITY", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, POSITIVE_INFINITY)},
	{"NEGATIVE_INFINITY", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, NEGATIVE_INFINITY)},
	{"NaN", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, NaN)},
	{"MAX_VALUE", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, MAX_VALUE)},
	{"MIN_NORMAL", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, MIN_NORMAL)},
	{"MIN_VALUE", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Float, MIN_VALUE)},
	{"MAX_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Float, MAX_EXPONENT)},
	{"MIN_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Float, MIN_EXPONENT)},
	{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Float, SIZE)},
	{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Float, BYTES)},
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Float;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Float, TYPE)},
	{"value", "F", nullptr, $PRIVATE | $FINAL, $field(Float, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Float, serialVersionUID)},
	{}
};

$MethodInfo _Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(F)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Float::*)(float)>(&Float::init$)), nullptr, nullptr, _Float_MethodAnnotations_init$0},
	{"<init>", "(D)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Float::*)(double)>(&Float::init$)), nullptr, nullptr, _Float_MethodAnnotations_init$1},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Float::*)($String*)>(&Float::init$)), "java.lang.NumberFormatException", nullptr, _Float_MethodAnnotations_init$2},
	{"byteValue", "()B", nullptr, $PUBLIC},
	{"compare", "(FF)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float,float)>(&Float::compare))},
	{"compareTo", "(Ljava/lang/Float;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Float::*)(Float*)>(&Float::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Float;>;", $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"floatToIntBits", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&Float::floatToIntBits)), nullptr, nullptr, _Float_MethodAnnotations_floatToIntBits10},
	{"floatToRawIntBits", "(F)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(float)>(&Float::floatToRawIntBits)), nullptr, nullptr, _Float_MethodAnnotations_floatToRawIntBits11},
	{"floatValue", "()F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Float_MethodAnnotations_floatValue12},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&Float::hashCode))},
	{"intBitsToFloat", "(I)F", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<float(*)(int32_t)>(&Float::intBitsToFloat)), nullptr, nullptr, _Float_MethodAnnotations_intBitsToFloat15},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"isFinite", "(F)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(float)>(&Float::isFinite))},
	{"isInfinite", "(F)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(float)>(&Float::isInfinite))},
	{"isInfinite", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Float::*)()>(&Float::isInfinite))},
	{"isNaN", "(F)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(float)>(&Float::isNaN))},
	{"isNaN", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Float::*)()>(&Float::isNaN))},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Float::max))},
	{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Float::min))},
	{"parseFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($String*)>(&Float::parseFloat)), "java.lang.NumberFormatException"},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;", nullptr, $PUBLIC},
	{"shortValue", "()S", nullptr, $PUBLIC},
	{"sum", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Float::sum))},
	{"toHexString", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(float)>(&Float::toHexString))},
	{"toString", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(float)>(&Float::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Float*(*)($String*)>(&Float::valueOf)), "java.lang.NumberFormatException"},
	{"valueOf", "(F)Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Float*(*)(float)>(&Float::valueOf)), nullptr, nullptr, _Float_MethodAnnotations_valueOf33},
	{}
};

#define _METHOD_INDEX_floatToRawIntBits 13
#define _METHOD_INDEX_intBitsToFloat 17

$ClassInfo _Float_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Float",
	"java.lang.Number",
	"java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc",
	_Float_FieldInfo_,
	_Float_MethodInfo_,
	"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Float;>;Ljava/lang/constant/Constable;Ljava/lang/constant/ConstantDesc;",
	nullptr,
	nullptr,
	_Float_Annotations_
};

$Object* allocate$Float($Class* clazz) {
	return $of($alloc(Float));
}

$Object* Float::clone() {
	 return this->$Number::clone();
}

void Float::finalize() {
	this->$Number::finalize();
}


float Float::POSITIVE_INFINITY = 0.0;

float Float::NEGATIVE_INFINITY = 0.0;

float Float::NaN = 0.0;

float Float::MAX_VALUE = 0.0;

float Float::MIN_NORMAL = 0.0;

float Float::MIN_VALUE = 0.0;

$Class* Float::TYPE = nullptr;

$String* Float::toString(float f) {
	$init(Float);
	return $FloatingDecimal::toJavaFormatString(f);
}

$String* Float::toHexString(float f) {
	$init(Float);
	if ($Math::abs(f) < Float::MIN_NORMAL && f != 0.0f) {
		$var($String, s, $Double::toHexString($Math::scalb((double)f, $Double::MIN_EXPONENT - Float::MIN_EXPONENT)));
		return $nc(s)->replaceFirst("p-1022$"_s, "p-126"_s);
	} else {
		return $Double::toHexString(f);
	}
}

Float* Float::valueOf($String* s) {
	$init(Float);
	return $new(Float, parseFloat(s));
}

Float* Float::valueOf(float f) {
	$init(Float);
	return $new(Float, f);
}

float Float::parseFloat($String* s) {
	$init(Float);
	return $FloatingDecimal::parseFloat(s);
}

bool Float::isNaN(float v) {
	$init(Float);
	return (v != v);
}

bool Float::isInfinite(float v) {
	$init(Float);
	return (v == Float::POSITIVE_INFINITY) || (v == Float::NEGATIVE_INFINITY);
}

bool Float::isFinite(float f) {
	$init(Float);
	return $Math::abs(f) <= Float::MAX_VALUE;
}

void Float::init$(float value) {
	$Number::init$();
	this->value = value;
}

void Float::init$(double value) {
	$Number::init$();
	this->value = (float)value;
}

void Float::init$($String* s) {
	$Number::init$();
	this->value = parseFloat(s);
}

bool Float::isNaN() {
	return isNaN(this->value);
}

bool Float::isInfinite() {
	return isInfinite(this->value);
}

$String* Float::toString() {
	return Float::toString(this->value);
}

int8_t Float::byteValue() {
	return $cast(int8_t, this->value);
}

int16_t Float::shortValue() {
	return $cast(int16_t, this->value);
}

int32_t Float::intValue() {
	return $cast(int32_t, this->value);
}

int64_t Float::longValue() {
	return $cast(int64_t, this->value);
}

float Float::floatValue() {
	return this->value;
}

double Float::doubleValue() {
	return (double)this->value;
}

int32_t Float::hashCode() {
	return Float::hashCode(this->value);
}

int32_t Float::hashCode(float value) {
	$init(Float);
	return floatToIntBits(value);
}

bool Float::equals(Object$* obj) {
	bool var$0 = ($instanceOf(Float, obj));
	if (var$0) {
		int32_t var$1 = floatToIntBits($nc(($cast(Float, obj)))->value);
		var$0 = (var$1 == floatToIntBits(this->value));
	}
	return var$0;
}

int32_t Float::floatToIntBits(float value) {
	$init(Float);
	if (!isNaN(value)) {
		return floatToRawIntBits(value);
	}
	return 0x7FC00000;
}

int32_t Float::floatToRawIntBits(float value) {
	union {
		int32_t i;
		float f;
	} u;
	u.f = value;
	return u.i;
}

float Float::intBitsToFloat(int32_t bits) {
	union {
		int32_t i;
		float f;
	} u;
	u.i = bits;
	return u.f;
}

int32_t Float::compareTo(Float* anotherFloat) {
	return Float::compare(this->value, $nc(anotherFloat)->value);
}

int32_t Float::compare(float f1, float f2) {
	$init(Float);
	if (f1 < f2) {
		return -1;
	}
	if (f1 > f2) {
		return 1;
	}
	int32_t thisBits = Float::floatToIntBits(f1);
	int32_t anotherBits = Float::floatToIntBits(f2);
	return (thisBits == anotherBits ? 0 : (thisBits < anotherBits ? -1 : 1));
}

float Float::sum(float a, float b) {
	$init(Float);
	return a + b;
}

float Float::max(float a, float b) {
	$init(Float);
	return $Math::max(a, b);
}

float Float::min(float a, float b) {
	$init(Float);
	return $Math::min(a, b);
}

$Optional* Float::describeConstable() {
	return $Optional::of(this);
}

$Object* Float::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	return $of(this);
}

int32_t Float::compareTo(Object$* anotherFloat) {
	return this->compareTo($cast(Float, anotherFloat));
}

void clinit$Float($Class* class$) {
	Float::POSITIVE_INFINITY = $div(1.0f, 0.0f);
	Float::NEGATIVE_INFINITY = $div(-1.0f, 0.0f);
	Float::NaN = $div(0.0f, 0.0f);
	Float::MAX_VALUE = 3.4028235E38f;
	Float::MIN_NORMAL = 1.17549435E-38f;
	Float::MIN_VALUE = 1.4E-45f;
	$assignStatic(Float::TYPE, $Class::getPrimitiveClass("float"_s));
}

Float::Float() {
}

$Class* Float::load$($String* name, bool initialize) {
	$loadClass(Float, name, initialize, &_Float_ClassInfo_, clinit$Float, allocate$Float);
	return class$;
}

$Class* Float::class$ = nullptr;

float Float::mod(float a, float b) {
	return std::fmod(a, b);
}

	} // lang
} // java