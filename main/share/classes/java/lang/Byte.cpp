#include <java/lang/Byte.h>

#include <java/lang/Array.h>
#include <java/lang/Byte$ByteCache.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef BYTES
#undef BSM_EXPLICIT_CAST
#undef SIZE
#undef MAX_VALUE
#undef MIN_VALUE
#undef TYPE

using $ByteArray = $Array<::java::lang::Byte>;
using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $Byte$ByteCache = ::java::lang::Byte$ByteCache;
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
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $Constable = ::java::lang::constant::Constable;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
$CompoundAttribute _Byte_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Byte_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Byte_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Byte_Attribute_var$0},
	{}
};

$NamedAttribute Byte_Attribute_var$1[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Byte_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", Byte_Attribute_var$1},
	{}
};

$CompoundAttribute _Byte_MethodAnnotations_byteValue2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Byte_MethodAnnotations_valueOf23[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};


$FieldInfo _Byte_FieldInfo_[] = {
	{"MIN_VALUE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Byte, MIN_VALUE)},
	{"MAX_VALUE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Byte, MAX_VALUE)},
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Byte;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Byte, TYPE)},
	{"value", "B", nullptr, $PRIVATE | $FINAL, $field(Byte, value)},
	{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Byte, SIZE)},
	{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Byte, BYTES)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Byte, serialVersionUID)},
	{}
};

$MethodInfo _Byte_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(B)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Byte::*)(int8_t)>(&Byte::init$)), nullptr, nullptr, _Byte_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Byte::*)($String*)>(&Byte::init$)), "java.lang.NumberFormatException", nullptr, _Byte_MethodAnnotations_init$1},
	{"byteValue", "()B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Byte_MethodAnnotations_byteValue2},
	{"compare", "(BB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int8_t,int8_t)>(&Byte::compare))},
	{"compareTo", "(Ljava/lang/Byte;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Byte::*)(Byte*)>(&Byte::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"compareUnsigned", "(BB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int8_t,int8_t)>(&Byte::compareUnsigned))},
	{"decode", "(Ljava/lang/String;)Ljava/lang/Byte;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Byte*(*)($String*)>(&Byte::decode)), "java.lang.NumberFormatException"},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Byte;>;>;", $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int8_t)>(&Byte::hashCode))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"parseByte", "(Ljava/lang/String;I)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)($String*,int32_t)>(&Byte::parseByte)), "java.lang.NumberFormatException"},
	{"parseByte", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)($String*)>(&Byte::parseByte)), "java.lang.NumberFormatException"},
	{"shortValue", "()S", nullptr, $PUBLIC},
	{"toString", "(B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&Byte::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUnsignedInt", "(B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int8_t)>(&Byte::toUnsignedInt))},
	{"toUnsignedLong", "(B)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int8_t)>(&Byte::toUnsignedLong))},
	{"valueOf", "(B)Ljava/lang/Byte;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Byte*(*)(int8_t)>(&Byte::valueOf)), nullptr, nullptr, _Byte_MethodAnnotations_valueOf23},
	{"valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Byte*(*)($String*,int32_t)>(&Byte::valueOf)), "java.lang.NumberFormatException"},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Byte*(*)($String*)>(&Byte::valueOf)), "java.lang.NumberFormatException"},
	{}
};

$InnerClassInfo _Byte_InnerClassesInfo_[] = {
	{"java.lang.Byte$ByteCache", "java.lang.Byte", "ByteCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Byte_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Byte",
	"java.lang.Number",
	"java.lang.Comparable,java.lang.constant.Constable",
	_Byte_FieldInfo_,
	_Byte_MethodInfo_,
	"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/lang/Byte;>;Ljava/lang/constant/Constable;",
	nullptr,
	_Byte_InnerClassesInfo_,
	_Byte_Annotations_,
	nullptr,
	"java.lang.Byte$ByteCache"
};

$Object* allocate$Byte($Class* clazz) {
	return $of($alloc(Byte));
}

$Object* Byte::clone() {
	 return this->$Number::clone();
}

void Byte::finalize() {
	this->$Number::finalize();
}


$Class* Byte::TYPE = nullptr;

$String* Byte::toString(int8_t b) {
	$init(Byte);
	return $Integer::toString((int32_t)b, 10);
}

$Optional* Byte::describeConstable() {
	$init($ConstantDescs);
	return $Optional::of($($DynamicConstantDesc::ofNamed($ConstantDescs::BSM_EXPLICIT_CAST, "_"_s, $ConstantDescs::CD_byte, $$new($ConstantDescArray, {$(static_cast<$ConstantDesc*>($Integer::valueOf(intValue())))}))));
}

Byte* Byte::valueOf(int8_t b) {
	$init(Byte);
	int32_t offset = 128;
	$init($Byte$ByteCache);
	return $nc($Byte$ByteCache::cache)->get((int32_t)b + offset);
}

int8_t Byte::parseByte($String* s, int32_t radix) {
	$init(Byte);
	int32_t i = $Integer::parseInt(s, radix);
	if (i < Byte::MIN_VALUE || i > Byte::MAX_VALUE) {
		$throwNew($NumberFormatException, $$str({"Value out of range. Value:\""_s, s, "\" Radix:"_s, $$str(radix)}));
	}
	return (int8_t)i;
}

int8_t Byte::parseByte($String* s) {
	$init(Byte);
	return parseByte(s, 10);
}

Byte* Byte::valueOf($String* s, int32_t radix) {
	$init(Byte);
	return valueOf(parseByte(s, radix));
}

Byte* Byte::valueOf($String* s) {
	$init(Byte);
	return valueOf(s, 10);
}

Byte* Byte::decode($String* nm) {
	$init(Byte);
	int32_t i = $nc($($Integer::decode(nm)))->intValue();
	if (i < Byte::MIN_VALUE || i > Byte::MAX_VALUE) {
		$throwNew($NumberFormatException, $$str({"Value "_s, $$str(i), " out of range from input "_s, nm}));
	}
	return valueOf((int8_t)i);
}

void Byte::init$(int8_t value) {
	$Number::init$();
	this->value = value;
}

void Byte::init$($String* s) {
	$Number::init$();
	this->value = parseByte(s, 10);
}

int8_t Byte::byteValue() {
	return this->value;
}

int16_t Byte::shortValue() {
	return (int16_t)this->value;
}

int32_t Byte::intValue() {
	return (int32_t)this->value;
}

int64_t Byte::longValue() {
	return (int64_t)this->value;
}

float Byte::floatValue() {
	return (float)this->value;
}

double Byte::doubleValue() {
	return (double)this->value;
}

$String* Byte::toString() {
	return $Integer::toString((int32_t)this->value);
}

int32_t Byte::hashCode() {
	return Byte::hashCode(this->value);
}

int32_t Byte::hashCode(int8_t value) {
	$init(Byte);
	return (int32_t)value;
}

bool Byte::equals(Object$* obj) {
	if ($instanceOf(Byte, obj)) {
		return this->value == $nc(($cast(Byte, obj)))->byteValue();
	}
	return false;
}

int32_t Byte::compareTo(Byte* anotherByte) {
	return compare(this->value, $nc(anotherByte)->value);
}

int32_t Byte::compare(int8_t x, int8_t y) {
	$init(Byte);
	return x - y;
}

int32_t Byte::compareUnsigned(int8_t x, int8_t y) {
	$init(Byte);
	int32_t var$0 = Byte::toUnsignedInt(x);
	return var$0 - Byte::toUnsignedInt(y);
}

int32_t Byte::toUnsignedInt(int8_t x) {
	$init(Byte);
	return (int32_t)(((int32_t)x) & (uint32_t)255);
}

int64_t Byte::toUnsignedLong(int8_t x) {
	$init(Byte);
	return (int64_t)(((int64_t)x) & (uint64_t)(int64_t)255);
}

int32_t Byte::compareTo(Object$* anotherByte) {
	return this->compareTo($cast(Byte, anotherByte));
}

void clinit$Byte($Class* class$) {
	$assignStatic(Byte::TYPE, $Class::getPrimitiveClass("byte"_s));
}

Byte::Byte() {
}

$Class* Byte::load$($String* name, bool initialize) {
	$loadClass(Byte, name, initialize, &_Byte_ClassInfo_, clinit$Byte, allocate$Byte);
	return class$;
}

$Class* Byte::class$ = nullptr;

	} // lang
} // java