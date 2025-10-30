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

using $ShortArray = $Array<::java::lang::Short>;
using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Short$ShortCache = ::java::lang::Short$ShortCache;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $Constable = ::java::lang::constant::Constable;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$CompoundAttribute _Short_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Short_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Short_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Short_Attribute_var$0},
	{}
};

$NamedAttribute Short_Attribute_var$1[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Short_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", Short_Attribute_var$1},
	{}
};

$CompoundAttribute _Short_MethodAnnotations_reverseBytes18[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Short_MethodAnnotations_shortValue19[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Short_MethodAnnotations_valueOf26[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Short_FieldInfo_[] = {
	{"MIN_VALUE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, MIN_VALUE)},
	{"MAX_VALUE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, MAX_VALUE)},
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Short;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Short, TYPE)},
	{"value", "S", nullptr, $PRIVATE | $FINAL, $field(Short, value)},
	{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, SIZE)},
	{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Short, BYTES)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Short, serialVersionUID)},
	{}
};

$MethodInfo _Short_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(S)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Short::*)(int16_t)>(&Short::init$)), nullptr, nullptr, _Short_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Short::*)($String*)>(&Short::init$)), "java.lang.NumberFormatException", nullptr, _Short_MethodAnnotations_init$1},
	{"byteValue", "()B", nullptr, $PUBLIC},
	{"compare", "(SS)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int16_t,int16_t)>(&Short::compare))},
	{"compareTo", "(Ljava/lang/Short;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Short::*)(Short*)>(&Short::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"compareUnsigned", "(SS)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int16_t,int16_t)>(&Short::compareUnsigned))},
	{"decode", "(Ljava/lang/String;)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Short*(*)($String*)>(&Short::decode)), "java.lang.NumberFormatException"},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Short;>;>;", $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int16_t)>(&Short::hashCode))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"parseShort", "(Ljava/lang/String;I)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)($String*,int32_t)>(&Short::parseShort)), "java.lang.NumberFormatException"},
	{"parseShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)($String*)>(&Short::parseShort)), "java.lang.NumberFormatException"},
	{"reverseBytes", "(S)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&Short::reverseBytes)), nullptr, nullptr, _Short_MethodAnnotations_reverseBytes18},
	{"shortValue", "()S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Short_MethodAnnotations_shortValue19},
	{"toString", "(S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&Short::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUnsignedInt", "(S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int16_t)>(&Short::toUnsignedInt))},
	{"toUnsignedLong", "(S)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int16_t)>(&Short::toUnsignedLong))},
	{"valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Short*(*)($String*,int32_t)>(&Short::valueOf)), "java.lang.NumberFormatException"},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Short*(*)($String*)>(&Short::valueOf)), "java.lang.NumberFormatException"},
	{"valueOf", "(S)Ljava/lang/Short;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Short*(*)(int16_t)>(&Short::valueOf)), nullptr, nullptr, _Short_MethodAnnotations_valueOf26},
	{}
};

$InnerClassInfo _Short_InnerClassesInfo_[] = {
	{"java.lang.Short$ShortCache", "java.lang.Short", "ShortCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Short_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Short",
	"java.lang.Number",
	"java.lang.Comparable,java.lang.constant.Constable",
	_Short_FieldInfo_,
	_Short_MethodInfo_,
	"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Short;>;Ljava/lang/constant/Constable;",
	nullptr,
	_Short_InnerClassesInfo_,
	_Short_Annotations_,
	nullptr,
	"java.lang.Short$ShortCache"
};

$Object* allocate$Short($Class* clazz) {
	return $of($alloc(Short));
}

$Object* Short::clone() {
	 return this->$Number::clone();
}

void Short::finalize() {
	this->$Number::finalize();
}

$Class* Short::TYPE = nullptr;

$String* Short::toString(int16_t s) {
	$init(Short);
	return $Integer::toString((int32_t)s, 10);
}

int16_t Short::parseShort($String* s, int32_t radix) {
	$init(Short);
	$useLocalCurrentObjectStackCache();
	int32_t i = $Integer::parseInt(s, radix);
	if (i < Short::MIN_VALUE || i > Short::MAX_VALUE) {
		$throwNew($NumberFormatException, $$str({"Value out of range. Value:\""_s, s, "\" Radix:"_s, $$str(radix)}));
	}
	return (int16_t)i;
}

int16_t Short::parseShort($String* s) {
	$init(Short);
	return parseShort(s, 10);
}

Short* Short::valueOf($String* s, int32_t radix) {
	$init(Short);
	return valueOf(parseShort(s, radix));
}

Short* Short::valueOf($String* s) {
	$init(Short);
	return valueOf(s, 10);
}

$Optional* Short::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	return $Optional::of($($DynamicConstantDesc::ofNamed($ConstantDescs::BSM_EXPLICIT_CAST, "_"_s, $ConstantDescs::CD_short, $$new($ConstantDescArray, {$(static_cast<$ConstantDesc*>($Integer::valueOf(intValue())))}))));
}

Short* Short::valueOf(int16_t s) {
	$init(Short);
	int32_t offset = 128;
	int32_t sAsInt = s;
	if (sAsInt >= -128 && sAsInt <= 127) {
		$init($Short$ShortCache);
		return $nc($Short$ShortCache::cache)->get(sAsInt + offset);
	}
	return $new(Short, s);
}

Short* Short::decode($String* nm) {
	$init(Short);
	$useLocalCurrentObjectStackCache();
	int32_t i = $nc($($Integer::decode(nm)))->intValue();
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
	$init(Short);
	return (int32_t)value;
}

bool Short::equals(Object$* obj) {
	if ($instanceOf(Short, obj)) {
		return this->value == $nc(($cast(Short, obj)))->shortValue();
	}
	return false;
}

int32_t Short::compareTo(Short* anotherShort) {
	return compare(this->value, $nc(anotherShort)->value);
}

int32_t Short::compare(int16_t x, int16_t y) {
	$init(Short);
	return x - y;
}

int32_t Short::compareUnsigned(int16_t x, int16_t y) {
	$init(Short);
	int32_t var$0 = Short::toUnsignedInt(x);
	return var$0 - Short::toUnsignedInt(y);
}

int16_t Short::reverseBytes(int16_t i) {
	$init(Short);
	return (int16_t)((((int32_t)(i & (uint32_t)0x0000FF00)) >> 8) | (i << 8));
}

int32_t Short::toUnsignedInt(int16_t x) {
	$init(Short);
	return (int32_t)(((int32_t)x) & (uint32_t)0x0000FFFF);
}

int64_t Short::toUnsignedLong(int16_t x) {
	$init(Short);
	return (int64_t)(((int64_t)x) & (uint64_t)(int64_t)65535);
}

int32_t Short::compareTo(Object$* anotherShort) {
	return this->compareTo($cast(Short, anotherShort));
}

void clinit$Short($Class* class$) {
	$assignStatic(Short::TYPE, $Class::getPrimitiveClass("short"_s));
}

Short::Short() {
}

$Class* Short::load$($String* name, bool initialize) {
	$loadClass(Short, name, initialize, &_Short_ClassInfo_, clinit$Short, allocate$Short);
	return class$;
}

$Class* Short::class$ = nullptr;

	} // lang
} // java