#include <java/lang/Boolean.h>

#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE
#undef TYPE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constable = ::java::lang::constant::Constable;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
$CompoundAttribute _Boolean_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Boolean_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Boolean_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Boolean_Attribute_var$0},
	{}
};

$NamedAttribute Boolean_Attribute_var$1[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Boolean_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", Boolean_Attribute_var$1},
	{}
};

$CompoundAttribute _Boolean_MethodAnnotations_booleanValue2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Boolean_MethodAnnotations_valueOf17[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};


$FieldInfo _Boolean_FieldInfo_[] = {
	{"TRUE", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, TRUE)},
	{"FALSE", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, FALSE)},
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, TYPE)},
	{"value", "Z", nullptr, $PRIVATE | $FINAL, $field(Boolean, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Boolean, serialVersionUID)},
	{}
};

$MethodInfo _Boolean_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Boolean::*)(bool)>(&Boolean::init$)), nullptr, nullptr, _Boolean_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Boolean::*)($String*)>(&Boolean::init$)), nullptr, nullptr, _Boolean_MethodAnnotations_init$1},
	{"booleanValue", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Boolean::*)()>(&Boolean::booleanValue)), nullptr, nullptr, _Boolean_MethodAnnotations_booleanValue2},
	{"compare", "(ZZ)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(bool,bool)>(&Boolean::compare))},
	{"compareTo", "(Ljava/lang/Boolean;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Boolean::*)(Boolean*)>(&Boolean::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Boolean;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Boolean::getBoolean))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(Z)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(bool)>(&Boolean::hashCode))},
	{"logicalAnd", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool,bool)>(&Boolean::logicalAnd))},
	{"logicalOr", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool,bool)>(&Boolean::logicalOr))},
	{"logicalXor", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool,bool)>(&Boolean::logicalXor))},
	{"parseBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Boolean::parseBoolean))},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(bool)>(&Boolean::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Z)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Boolean*(*)(bool)>(&Boolean::valueOf)), nullptr, nullptr, _Boolean_MethodAnnotations_valueOf17},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Boolean*(*)($String*)>(&Boolean::valueOf))},
	{}
};

$ClassInfo _Boolean_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Boolean",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Comparable,java.lang.constant.Constable",
	_Boolean_FieldInfo_,
	_Boolean_MethodInfo_,
	"Ljava/lang/Object;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/Boolean;>;Ljava/lang/constant/Constable;",
	nullptr,
	nullptr,
	_Boolean_Annotations_
};

$Object* allocate$Boolean($Class* clazz) {
	return $of($alloc(Boolean));
}

$Object* Boolean::clone() {
	 return this->$Serializable::clone();
}

void Boolean::finalize() {
	this->$Serializable::finalize();
}


Boolean* Boolean::TRUE = nullptr;

Boolean* Boolean::FALSE = nullptr;

$Class* Boolean::TYPE = nullptr;

void Boolean::init$(bool value) {
	this->value = value;
}

void Boolean::init$($String* s) {
	Boolean::init$(parseBoolean(s));
}

bool Boolean::parseBoolean($String* s) {
	$init(Boolean);
	return "true"_s->equalsIgnoreCase(s);
}

bool Boolean::booleanValue() {
	return this->value;
}

Boolean* Boolean::valueOf(bool b) {
	$init(Boolean);
	return (b ? Boolean::TRUE : Boolean::FALSE);
}

Boolean* Boolean::valueOf($String* s) {
	$init(Boolean);
	return parseBoolean(s) ? Boolean::TRUE : Boolean::FALSE;
}

$String* Boolean::toString(bool b) {
	$init(Boolean);
	return b ? "true"_s : "false"_s;
}

$String* Boolean::toString() {
	return this->value ? "true"_s : "false"_s;
}

int32_t Boolean::hashCode() {
	return Boolean::hashCode(this->value);
}

int32_t Boolean::hashCode(bool value) {
	$init(Boolean);
	return value ? 1231 : 1237;
}

bool Boolean::equals(Object$* obj) {
	if ($instanceOf(Boolean, obj)) {
		return this->value == $nc(($cast(Boolean, obj)))->booleanValue();
	}
	return false;
}

bool Boolean::getBoolean($String* name) {
	$init(Boolean);
	bool result = false;
	try {
		result = parseBoolean($($System::getProperty(name)));
	} catch ($IllegalArgumentException&) {
		$var($RuntimeException, e, $catch());
	} catch ($NullPointerException&) {
		$var($RuntimeException, e, $catch());
	}
	return result;
}

int32_t Boolean::compareTo(Boolean* b) {
	return compare(this->value, $nc(b)->value);
}

int32_t Boolean::compare(bool x, bool y) {
	$init(Boolean);
	return (x == y) ? 0 : (x ? 1 : -1);
}

bool Boolean::logicalAnd(bool a, bool b) {
	$init(Boolean);
	return a && b;
}

bool Boolean::logicalOr(bool a, bool b) {
	$init(Boolean);
	return a || b;
}

bool Boolean::logicalXor(bool a, bool b) {
	$init(Boolean);
	return a ^ b;
}

$Optional* Boolean::describeConstable() {
	$init($ConstantDescs);
	return $Optional::of(this->value ? $ConstantDescs::TRUE : $ConstantDescs::FALSE);
}

int32_t Boolean::compareTo(Object$* b) {
	return this->compareTo($cast(Boolean, b));
}

void clinit$Boolean($Class* class$) {
	$assignStatic(Boolean::TRUE, $new(Boolean, true));
	$assignStatic(Boolean::FALSE, $new(Boolean, false));
	$assignStatic(Boolean::TYPE, $Class::getPrimitiveClass("boolean"_s));
}

Boolean::Boolean() {
}

$Class* Boolean::load$($String* name, bool initialize) {
	$loadClass(Boolean, name, initialize, &_Boolean_ClassInfo_, clinit$Boolean, allocate$Boolean);
	return class$;
}

$Class* Boolean::class$ = nullptr;

	} // lang
} // java