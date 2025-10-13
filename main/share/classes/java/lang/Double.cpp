#include <java/lang/Double.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $Constable = ::java::lang::constant::Constable;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Optional = ::java::util::Optional;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace java {
	namespace lang {
$CompoundAttribute _Double_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Double_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Double_Attribute_var$0},
	{}
};

$NamedAttribute Double_Attribute_var$1[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", Double_Attribute_var$1},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_doubleToLongBits7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_doubleToRawLongBits8[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_doubleValue9[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_longBitsToDouble20[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Double_MethodAnnotations_valueOf32[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};


$FieldInfo _Double_FieldInfo_[] = {
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

$MethodInfo _Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(D)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Double::*)(double)>(&Double::init$)), nullptr, nullptr, _Double_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Double::*)($String*)>(&Double::init$)), "java.lang.NumberFormatException", nullptr, _Double_MethodAnnotations_init$1},
	{"byteValue", "()B", nullptr, $PUBLIC},
	{"compare", "(DD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double)>(&Double::compare))},
	{"compareTo", "(Ljava/lang/Double;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Double::*)(Double*)>(&Double::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Double;>;", $PUBLIC},
	{"doubleToLongBits", "(D)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(double)>(&Double::doubleToLongBits)), nullptr, nullptr, _Double_MethodAnnotations_doubleToLongBits7},
	{"doubleToRawLongBits", "(D)J", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(double)>(&Double::doubleToRawLongBits)), nullptr, nullptr, _Double_MethodAnnotations_doubleToRawLongBits8},
	{"doubleValue", "()D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Double_MethodAnnotations_doubleValue9},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&Double::hashCode))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"isFinite", "(D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double)>(&Double::isFinite))},
	{"isInfinite", "(D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double)>(&Double::isInfinite))},
	{"isInfinite", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Double::*)()>(&Double::isInfinite))},
	{"isNaN", "(D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double)>(&Double::isNaN))},
	{"isNaN", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Double::*)()>(&Double::isNaN))},
	{"longBitsToDouble", "(J)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(int64_t)>(&Double::longBitsToDouble)), nullptr, nullptr, _Double_MethodAnnotations_longBitsToDouble20},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Double::max))},
	{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Double::min))},
	{"parseDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&Double::parseDouble)), "java.lang.NumberFormatException"},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;", nullptr, $PUBLIC},
	{"shortValue", "()S", nullptr, $PUBLIC},
	{"sum", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Double::sum))},
	{"toHexString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(double)>(&Double::toHexString))},
	{"toString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(double)>(&Double::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Double;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Double*(*)($String*)>(&Double::valueOf)), "java.lang.NumberFormatException"},
	{"valueOf", "(D)Ljava/lang/Double;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Double*(*)(double)>(&Double::valueOf)), nullptr, nullptr, _Double_MethodAnnotations_valueOf32},
	{}
};

#define _METHOD_INDEX_doubleToRawLongBits 10
#define _METHOD_INDEX_longBitsToDouble 22

$ClassInfo _Double_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Double",
	"java.lang.Number",
	"java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc",
	_Double_FieldInfo_,
	_Double_MethodInfo_,
	"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Double;>;Ljava/lang/constant/Constable;Ljava/lang/constant/ConstantDesc;",
	nullptr,
	nullptr,
	_Double_Annotations_
};

$Object* allocate$Double($Class* clazz) {
	return $of($alloc(Double));
}

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
	$init(Double);
	return $FloatingDecimal::toJavaFormatString(d);
}

$String* Double::toHexString(double d) {
	$init(Double);
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
			int64_t signifBits = ((int64_t)(Double::doubleToLongBits(d) & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK)) | (int64_t)0x1000000000000000;
			answer->append(subnormal ? "0."_s : "1."_s);
			$var($String, signif, $nc($($Long::toHexString(signifBits)))->substring(3, 16));
			answer->append(signif->equals("0000000000000"_s) ? "0"_s : $(signif->replaceFirst("0{1,12}$"_s, ""_s)));
			answer->append(u'p');
			answer->append(subnormal ? Double::MIN_EXPONENT : $Math::getExponent(d));
		}
		return answer->toString();
	}
}

Double* Double::valueOf($String* s) {
	$init(Double);
	return $new(Double, parseDouble(s));
}

Double* Double::valueOf(double d) {
	$init(Double);
	return $new(Double, d);
}

double Double::parseDouble($String* s) {
	$init(Double);
	return $FloatingDecimal::parseDouble(s);
}

bool Double::isNaN(double v) {
	$init(Double);
	return (v != v);
}

bool Double::isInfinite(double v) {
	$init(Double);
	return (v == Double::POSITIVE_INFINITY) || (v == Double::NEGATIVE_INFINITY);
}

bool Double::isFinite(double d) {
	$init(Double);
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
	$init(Double);
	int64_t bits = doubleToLongBits(value);
	return (int32_t)(bits ^ ((int64_t)((uint64_t)bits >> 32)));
}

bool Double::equals(Object$* obj) {
	bool var$0 = ($instanceOf(Double, obj));
	if (var$0) {
		int64_t var$1 = doubleToLongBits($nc(($cast(Double, obj)))->value);
		var$0 = (var$1 == doubleToLongBits(this->value));
	}
	return var$0;
}

int64_t Double::doubleToLongBits(double value) {
	$init(Double);
	if (!isNaN(value)) {
		return doubleToRawLongBits(value);
	}
	return 0x7FF8000000000000;
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
	$init(Double);
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
	$init(Double);
	return a + b;
}

double Double::max(double a, double b) {
	$init(Double);
	return $Math::max(a, b);
}

double Double::min(double a, double b) {
	$init(Double);
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

void clinit$Double($Class* class$) {
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
	$loadClass(Double, name, initialize, &_Double_ClassInfo_, clinit$Double, allocate$Double);
	return class$;
}

$Class* Double::class$ = nullptr;

double Double::mod(double a, double b) {
	return std::fmod(a, b);
}

	} // lang
} // java