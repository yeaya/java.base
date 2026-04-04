#include <java/lang/Double.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/util/Optional.h>
#include <jdk/internal/math/DoubleConsts.h>
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
#undef SIGNIF_BIT_MASK
#undef SIZE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Optional = ::java::util::Optional;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace java {
	namespace lang {

$Object* Double::clone() {
	 return this->$Number::clone();
}

void Double::finalize() {
	this->$Number::finalize();
}

double Double::POSITIVE_INFINITY = 0.0;
double Double::NEGATIVE_INFINITY = 0.0;
double Double::NaN = 0.0;
double Double::MAX_VALUE = 0.0;
double Double::MIN_NORMAL = 0.0;
double Double::MIN_VALUE = 0.0;
$Class* Double::TYPE = nullptr;

$String* Double::toString(double d) {
	return $FloatingDecimal::toJavaFormatString(d);
}

$String* Double::toHexString(double d) {
	$useLocalObjectStack();
	if (!isFinite(d)) {
		return Double::toString(d);
	} else {
		$var($StringBuilder, answer, $new($StringBuilder, 24));
		if ($Math::copySign(1.0, d) == -1.0) {
			answer->append("-"_s);
		}
		answer->append("0x"_s);
		d = $Math::abs(d);
		if (d == 0.0) {
			answer->append("0.0p0"_s);
		} else {
			bool subnormal = (d < Double::MIN_NORMAL);
			int64_t signifBits = (Double::doubleToLongBits(d) & $DoubleConsts::SIGNIF_BIT_MASK) | (int64_t)0x1000000000000000;
			answer->append(subnormal ? "0."_s : "1."_s);
			$var($String, signif, $$nc($Long::toHexString(signifBits))->substring(3, 16));
			answer->append(signif->equals("0000000000000"_s) ? "0"_s : $(signif->replaceFirst("0{1,12}$"_s, ""_s)));
			answer->append(u'p');
			answer->append(subnormal ? Double::MIN_EXPONENT : $Math::getExponent(d));
		}
		return answer->toString();
	}
}

Double* Double::valueOf($String* s) {
	return $new(Double, parseDouble(s));
}

Double* Double::valueOf(double d) {
	return $new(Double, d);
}

double Double::parseDouble($String* s) {
	return $FloatingDecimal::parseDouble(s);
}

bool Double::isNaN(double v) {
	return (v != v);
}

bool Double::isInfinite(double v) {
	return (v == Double::POSITIVE_INFINITY) || (v == Double::NEGATIVE_INFINITY);
}

bool Double::isFinite(double d) {
	return $Math::abs(d) <= Double::MAX_VALUE;
}

void Double::init$(double value) {
	$Number::init$();
	this->value = value;
}

void Double::init$($String* s) {
	$Number::init$();
	this->value = parseDouble(s);
}

bool Double::isNaN() {
	return isNaN(this->value);
}

bool Double::isInfinite() {
	return isInfinite(this->value);
}

$String* Double::toString() {
	return toString(this->value);
}

int8_t Double::byteValue() {
	return $cast(int8_t, this->value);
}

int16_t Double::shortValue() {
	return $cast(int16_t, this->value);
}

int32_t Double::intValue() {
	return $cast(int32_t, this->value);
}

int64_t Double::longValue() {
	return $cast(int64_t, this->value);
}

float Double::floatValue() {
	return (float)this->value;
}

double Double::doubleValue() {
	return this->value;
}

int32_t Double::hashCode() {
	return Double::hashCode(this->value);
}

int32_t Double::hashCode(double value) {
	int64_t bits = doubleToLongBits(value);
	return (int32_t)(bits ^ ((int64_t)((uint64_t)bits >> 32)));
}

bool Double::equals(Object$* obj) {
	bool var$0 = $instanceOf(Double, obj);
	if (var$0) {
		int64_t var$1 = doubleToLongBits($cast(Double, obj)->value);
		var$0 = var$1 == doubleToLongBits(this->value);
	}
	return var$0;
}

int64_t Double::doubleToLongBits(double value) {
	if (!isNaN(value)) {
		return doubleToRawLongBits(value);
	}
	return (int64_t)0x7ff8000000000000;
}

int64_t Double::doubleToRawLongBits(double value) {
	union {
		int64_t l;
		double d;
	} u;
	u.d = value;
	return u.l;
}

double Double::longBitsToDouble(int64_t bits) {
	union {
		int64_t l;
		double d;
	} u;
	u.l = bits;
	return u.d;
}

int32_t Double::compareTo(Double* anotherDouble) {
	return Double::compare(this->value, $nc(anotherDouble)->value);
}

int32_t Double::compare(double d1, double d2) {
	if (d1 < d2) {
		return -1;
	}
	if (d1 > d2) {
		return 1;
	}
	int64_t thisBits = Double::doubleToLongBits(d1);
	int64_t anotherBits = Double::doubleToLongBits(d2);
	return (thisBits == anotherBits ? 0 : (thisBits < anotherBits ? -1 : 1));
}

double Double::sum(double a, double b) {
	return a + b;
}

double Double::max(double a, double b) {
	return $Math::max(a, b);
}

double Double::min(double a, double b) {
	return $Math::min(a, b);
}

$Optional* Double::describeConstable() {
	return $Optional::of(this);
}

$Object* Double::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	return $of(this);
}

int32_t Double::compareTo(Object$* anotherDouble) {
	return this->compareTo($cast(Double, anotherDouble));
}

void Double::clinit$($Class* clazz) {
	Double::POSITIVE_INFINITY = $div(1.0, 0.0);
	Double::NEGATIVE_INFINITY = $div(-1.0, 0.0);
	Double::NaN = $div(0.0, 0.0);
	Double::MAX_VALUE = 1.7976931348623157E308;
	Double::MIN_NORMAL = 2.2250738585072014E-308;
	Double::MIN_VALUE = 4.9E-324;
	$assignStatic(Double::TYPE, $Class::getPrimitiveClass("double"_s));
}

Double::Double() {
}

$Class* Double::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"POSITIVE_INFINITY", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, POSITIVE_INFINITY)},
		{"NEGATIVE_INFINITY", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, NEGATIVE_INFINITY)},
		{"NaN", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, NaN)},
		{"MAX_VALUE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, MAX_VALUE)},
		{"MIN_NORMAL", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, MIN_NORMAL)},
		{"MIN_VALUE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Double, MIN_VALUE)},
		{"MAX_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Double, MAX_EXPONENT)},
		{"MIN_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Double, MIN_EXPONENT)},
		{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Double, SIZE)},
		{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Double, BYTES)},
		{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Double;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Double, TYPE)},
		{"value", "D", nullptr, $PRIVATE | $FINAL, $field(Double, value)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Double, serialVersionUID)},
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
	$CompoundAttribute doubleToLongBitsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute doubleToRawLongBitsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute doubleValuemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute longBitsToDoublemethodAnnotations$$[] = {
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
		{"<init>", "(D)V", nullptr, $PUBLIC | $DEPRECATED, $method(Double, init$, void, double), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(Double, init$, void, $String*), "java.lang.NumberFormatException", nullptr, init$methodAnnotations$$$1},
		{"byteValue", "()B", nullptr, $PUBLIC, $virtualMethod(Double, byteValue, int8_t)},
		{"compare", "(DD)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, compare, int32_t, double, double)},
		{"compareTo", "(Ljava/lang/Double;)I", nullptr, $PUBLIC, $method(Double, compareTo, int32_t, Double*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Double, compareTo, int32_t, Object$*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Double;>;", $PUBLIC, $virtualMethod(Double, describeConstable, $Optional*)},
		{"doubleToLongBits", "(D)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, doubleToLongBits, int64_t, double), nullptr, nullptr, doubleToLongBitsmethodAnnotations$$},
		{"doubleToRawLongBits", "(D)J", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Double, doubleToRawLongBits, int64_t, double), nullptr, nullptr, doubleToRawLongBitsmethodAnnotations$$},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(Double, doubleValue, double), nullptr, nullptr, doubleValuemethodAnnotations$$},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Double, equals, bool, Object$*)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(Double, floatValue, float)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Double, hashCode, int32_t)},
		{"hashCode", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, hashCode, int32_t, double)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(Double, intValue, int32_t)},
		{"isFinite", "(D)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, isFinite, bool, double)},
		{"isInfinite", "(D)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, isInfinite, bool, double)},
		{"isInfinite", "()Z", nullptr, $PUBLIC, $method(Double, isInfinite, bool)},
		{"isNaN", "(D)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, isNaN, bool, double)},
		{"isNaN", "()Z", nullptr, $PUBLIC, $method(Double, isNaN, bool)},
		{"longBitsToDouble", "(J)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Double, longBitsToDouble, double, int64_t), nullptr, nullptr, longBitsToDoublemethodAnnotations$$},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(Double, longValue, int64_t)},
		{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, max, double, double, double)},
		{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, min, double, double, double)},
		{"parseDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, parseDouble, double, $String*), "java.lang.NumberFormatException"},
		{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;", nullptr, $PUBLIC, $virtualMethod(Double, resolveConstantDesc, $Object*, $MethodHandles$Lookup*)},
		{"shortValue", "()S", nullptr, $PUBLIC, $virtualMethod(Double, shortValue, int16_t)},
		{"sum", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, sum, double, double, double)},
		{"toHexString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, toHexString, $String*, double)},
		{"toString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, toString, $String*, double)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Double, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/Double;", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, valueOf, Double*, $String*), "java.lang.NumberFormatException"},
		{"valueOf", "(D)Ljava/lang/Double;", nullptr, $PUBLIC | $STATIC, $staticMethod(Double, valueOf, Double*, double), nullptr, nullptr, valueOfmethodAnnotations$$$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Double",
		"java.lang.Number",
		"java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Double;>;Ljava/lang/constant/Constable;Ljava/lang/constant/ConstantDesc;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Double, name, initialize, &classInfo$$, Double::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Double));
	});
	return class$;
}

$Class* Double::class$ = nullptr;

double Double::mod(double a, double b) {
	return std::fmod(a, b);
}

	} // lang
} // java