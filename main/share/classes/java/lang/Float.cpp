#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/util/Optional.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#include <cmath>

#undef BYTES
#undef MAX_EXPONENT
#undef MAX_VALUE
#undef MIN_EXPONENT
#undef MIN_NORMAL
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY
#undef SIZE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Optional = ::java::util::Optional;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace java {
	namespace lang {

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
	return $FloatingDecimal::toJavaFormatString(f);
}

$String* Float::toHexString(float f) {
	if ($Math::abs(f) < Float::MIN_NORMAL && f != 0.0f) {
		$var($String, s, $Double::toHexString($Math::scalb((double)f, $Double::MIN_EXPONENT - Float::MIN_EXPONENT)));
		return $nc(s)->replaceFirst("p-1022$"_s, "p-126"_s);
	} else {
		return $Double::toHexString(f);
	}
}

Float* Float::valueOf($String* s) {
	return $new(Float, parseFloat(s));
}

Float* Float::valueOf(float f) {
	return $new(Float, f);
}

float Float::parseFloat($String* s) {
	return $FloatingDecimal::parseFloat(s);
}

bool Float::isNaN(float v) {
	return (v != v);
}

bool Float::isInfinite(float v) {
	return (v == Float::POSITIVE_INFINITY) || (v == Float::NEGATIVE_INFINITY);
}

bool Float::isFinite(float f) {
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
	return floatToIntBits(value);
}

bool Float::equals(Object$* obj) {
	bool var$0 = $instanceOf(Float, obj);
	if (var$0) {
		int32_t var$1 = floatToIntBits($cast(Float, obj)->value);
		var$0 = var$1 == floatToIntBits(this->value);
	}
	return var$0;
}

int32_t Float::floatToIntBits(float value) {
	if (!isNaN(value)) {
		return floatToRawIntBits(value);
	}
	return 0x7fc00000;
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
	return a + b;
}

float Float::max(float a, float b) {
	return $Math::max(a, b);
}

float Float::min(float a, float b) {
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

void Float::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
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
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$2$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$2[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$2$namedAttribute},
		{}
	};
	$CompoundAttribute floatToIntBitsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute floatToRawIntBitsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute floatValuemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute intBitsToFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute valueOfmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(F)V", nullptr, $PUBLIC | $DEPRECATED, $method(Float, init$, void, float), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(D)V", nullptr, $PUBLIC | $DEPRECATED, $method(Float, init$, void, double), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(Float, init$, void, $String*), "java.lang.NumberFormatException", nullptr, init$methodAnnotations$$$2},
		{"byteValue", "()B", nullptr, $PUBLIC, $virtualMethod(Float, byteValue, int8_t)},
		{"compare", "(FF)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, compare, int32_t, float, float)},
		{"compareTo", "(Ljava/lang/Float;)I", nullptr, $PUBLIC, $method(Float, compareTo, int32_t, Float*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Float, compareTo, int32_t, Object$*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Float;>;", $PUBLIC, $virtualMethod(Float, describeConstable, $Optional*)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(Float, doubleValue, double)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Float, equals, bool, Object$*)},
		{"floatToIntBits", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, floatToIntBits, int32_t, float), nullptr, nullptr, floatToIntBitsmethodAnnotations$$},
		{"floatToRawIntBits", "(F)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Float, floatToRawIntBits, int32_t, float), nullptr, nullptr, floatToRawIntBitsmethodAnnotations$$},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(Float, floatValue, float), nullptr, nullptr, floatValuemethodAnnotations$$},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Float, hashCode, int32_t)},
		{"hashCode", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, hashCode, int32_t, float)},
		{"intBitsToFloat", "(I)F", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Float, intBitsToFloat, float, int32_t), nullptr, nullptr, intBitsToFloatmethodAnnotations$$},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(Float, intValue, int32_t)},
		{"isFinite", "(F)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, isFinite, bool, float)},
		{"isInfinite", "(F)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, isInfinite, bool, float)},
		{"isInfinite", "()Z", nullptr, $PUBLIC, $method(Float, isInfinite, bool)},
		{"isNaN", "(F)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, isNaN, bool, float)},
		{"isNaN", "()Z", nullptr, $PUBLIC, $method(Float, isNaN, bool)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(Float, longValue, int64_t)},
		{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, max, float, float, float)},
		{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, min, float, float, float)},
		{"parseFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, parseFloat, float, $String*), "java.lang.NumberFormatException"},
		{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;", nullptr, $PUBLIC, $virtualMethod(Float, resolveConstantDesc, $Object*, $MethodHandles$Lookup*)},
		{"shortValue", "()S", nullptr, $PUBLIC, $virtualMethod(Float, shortValue, int16_t)},
		{"sum", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, sum, float, float, float)},
		{"toHexString", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, toHexString, $String*, float)},
		{"toString", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, toString, $String*, float)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Float, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, valueOf, Float*, $String*), "java.lang.NumberFormatException"},
		{"valueOf", "(F)Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC, $staticMethod(Float, valueOf, Float*, float), nullptr, nullptr, valueOfmethodAnnotations$$$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Float",
		"java.lang.Number",
		"java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Float;>;Ljava/lang/constant/Constable;Ljava/lang/constant/ConstantDesc;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Float, name, initialize, &classInfo$$, Float::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Float));
	});
	return class$;
}

$Class* Float::class$ = nullptr;

float Float::mod(float a, float b) {
	return std::fmod(a, b);
}

	} // lang
} // java