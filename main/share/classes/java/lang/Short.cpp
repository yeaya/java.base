#include <java/lang/Short.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Short$ShortCache.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef BSM_EXPLICIT_CAST
#undef BYTES
#undef MAX_VALUE
#undef MIN_VALUE
#undef SIZE
#undef TYPE

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Short$ShortCache = ::java::lang::Short$ShortCache;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$Object* Short::clone() {
	 return this->$Number::clone();
}

void Short::finalize() {
	this->$Number::finalize();
}

$Class* Short::TYPE = nullptr;

$String* Short::toString(int16_t s) {
	return $Integer::toString((int32_t)s, 10);
}

int16_t Short::parseShort($String* s, int32_t radix) {
	$useLocalObjectStack();
	int32_t i = $Integer::parseInt(s, radix);
	if (i < Short::MIN_VALUE || i > Short::MAX_VALUE) {
		$throwNew($NumberFormatException, $$str({"Value out of range. Value:\""_s, s, "\" Radix:"_s, $$str(radix)}));
	}
	return (int16_t)i;
}

int16_t Short::parseShort($String* s) {
	return parseShort(s, 10);
}

Short* Short::valueOf($String* s, int32_t radix) {
	return valueOf(parseShort(s, radix));
}

Short* Short::valueOf($String* s) {
	return valueOf(s, 10);
}

$Optional* Short::describeConstable() {
	$useLocalObjectStack();
	$init($ConstantDescs);
	return $Optional::of($($DynamicConstantDesc::ofNamed($ConstantDescs::BSM_EXPLICIT_CAST, "_"_s, $ConstantDescs::CD_short, $$new($ConstantDescArray, {$($Integer::valueOf(intValue()))}))));
}

Short* Short::valueOf(int16_t s) {
	int32_t offset = 128;
	int32_t sAsInt = s;
	if (sAsInt >= -128 && sAsInt <= 127) {
		$init($Short$ShortCache);
		return $nc($Short$ShortCache::cache)->get(sAsInt + offset);
	}
	return $new(Short, s);
}

Short* Short::decode($String* nm) {
	$useLocalObjectStack();
	int32_t i = $($Integer::decode(nm))->intValue();
	if (i < Short::MIN_VALUE || i > Short::MAX_VALUE) {
		$throwNew($NumberFormatException, $$str({"Value "_s, $$str(i), " out of range from input "_s, nm}));
	}
	return valueOf((int16_t)i);
}

void Short::init$(int16_t value) {
	$Number::init$();
	this->value = value;
}

void Short::init$($String* s) {
	$Number::init$();
	this->value = parseShort(s, 10);
}

int8_t Short::byteValue() {
	return (int8_t)this->value;
}

int16_t Short::shortValue() {
	return this->value;
}

int32_t Short::intValue() {
	return (int32_t)this->value;
}

int64_t Short::longValue() {
	return (int64_t)this->value;
}

float Short::floatValue() {
	return (float)this->value;
}

double Short::doubleValue() {
	return (double)this->value;
}

$String* Short::toString() {
	return $Integer::toString((int32_t)this->value);
}

int32_t Short::hashCode() {
	return Short::hashCode(this->value);
}

int32_t Short::hashCode(int16_t value) {
	return (int32_t)value;
}

bool Short::equals(Object$* obj) {
	if ($instanceOf(Short, obj)) {
		return this->value == $cast(Short, obj)->shortValue();
	}
	return false;
}

int32_t Short::compareTo(Short* anotherShort) {
	return compare(this->value, $nc(anotherShort)->value);
}

int32_t Short::compare(int16_t x, int16_t y) {
	return x - y;
}

int32_t Short::compareUnsigned(int16_t x, int16_t y) {
	int32_t var$0 = Short::toUnsignedInt(x);
	return var$0 - Short::toUnsignedInt(y);
}

int16_t Short::reverseBytes(int16_t i) {
	return (int16_t)(((i & 0xff00) >> 8) | (i << 8));
}

int32_t Short::toUnsignedInt(int16_t x) {
	return ((int32_t)x) & 0xffff;
}

int64_t Short::toUnsignedLong(int16_t x) {
	return ((int64_t)x) & (int64_t)0xffff;
}

int32_t Short::compareTo(Object$* anotherShort) {
	return this->compareTo($cast(Short, anotherShort));
}

void Short::clinit$($Class* clazz) {
	$assignStatic(Short::TYPE, $Class::getPrimitiveClass("short"_s));
}

Short::Short() {
}

$Class* Short::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MIN_VALUE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, MIN_VALUE)},
		{"MAX_VALUE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, MAX_VALUE)},
		{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Short;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Short, TYPE)},
		{"value", "S", nullptr, $PRIVATE | $FINAL, $field(Short, value)},
		{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, SIZE)},
		{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, BYTES)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Short, serialVersionUID)},
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
	$CompoundAttribute reverseBytesmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute shortValuemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute valueOfmethodAnnotations$$$2[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(S)V", nullptr, $PUBLIC | $DEPRECATED, $method(Short, init$, void, int16_t), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(Short, init$, void, $String*), "java.lang.NumberFormatException", nullptr, init$methodAnnotations$$$1},
		{"byteValue", "()B", nullptr, $PUBLIC, $virtualMethod(Short, byteValue, int8_t)},
		{"compare", "(SS)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, compare, int32_t, int16_t, int16_t)},
		{"compareTo", "(Ljava/lang/Short;)I", nullptr, $PUBLIC, $method(Short, compareTo, int32_t, Short*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Short, compareTo, int32_t, Object$*)},
		{"compareUnsigned", "(SS)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, compareUnsigned, int32_t, int16_t, int16_t)},
		{"decode", "(Ljava/lang/String;)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, decode, Short*, $String*), "java.lang.NumberFormatException"},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Short;>;>;", $PUBLIC, $virtualMethod(Short, describeConstable, $Optional*)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(Short, doubleValue, double)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Short, equals, bool, Object$*)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(Short, floatValue, float)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Short, hashCode, int32_t)},
		{"hashCode", "(S)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, hashCode, int32_t, int16_t)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(Short, intValue, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(Short, longValue, int64_t)},
		{"parseShort", "(Ljava/lang/String;I)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, parseShort, int16_t, $String*, int32_t), "java.lang.NumberFormatException"},
		{"parseShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, parseShort, int16_t, $String*), "java.lang.NumberFormatException"},
		{"reverseBytes", "(S)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, reverseBytes, int16_t, int16_t), nullptr, nullptr, reverseBytesmethodAnnotations$$},
		{"shortValue", "()S", nullptr, $PUBLIC, $virtualMethod(Short, shortValue, int16_t), nullptr, nullptr, shortValuemethodAnnotations$$},
		{"toString", "(S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, toString, $String*, int16_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Short, toString, $String*)},
		{"toUnsignedInt", "(S)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, toUnsignedInt, int32_t, int16_t)},
		{"toUnsignedLong", "(S)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, toUnsignedLong, int64_t, int16_t)},
		{"valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, valueOf, Short*, $String*, int32_t), "java.lang.NumberFormatException"},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, valueOf, Short*, $String*), "java.lang.NumberFormatException"},
		{"valueOf", "(S)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $staticMethod(Short, valueOf, Short*, int16_t), nullptr, nullptr, valueOfmethodAnnotations$$$2},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Short$ShortCache", "java.lang.Short", "ShortCache", $PRIVATE | $STATIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Short",
		"java.lang.Number",
		"java.lang.Comparable,java.lang.constant.Constable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Short;>;Ljava/lang/constant/Constable;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.lang.Short$ShortCache"
	};
	$loadClass(Short, name, initialize, &classInfo$$, Short::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Short));
	});
	return class$;
}

$Class* Short::class$ = nullptr;

	} // lang
} // java