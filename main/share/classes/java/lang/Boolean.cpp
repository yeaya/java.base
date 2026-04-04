#include <java/lang/Boolean.h>
#include <java/io/Serializable.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE
#undef TYPE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

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
	return "true"_s->equalsIgnoreCase(s);
}

bool Boolean::booleanValue() {
	return this->value;
}

Boolean* Boolean::valueOf(bool b) {
	return (b ? Boolean::TRUE : Boolean::FALSE);
}

Boolean* Boolean::valueOf($String* s) {
	return parseBoolean(s) ? Boolean::TRUE : Boolean::FALSE;
}

$String* Boolean::toString(bool b) {
	return b ? "true"_s : "false"_s;
}

$String* Boolean::toString() {
	return this->value ? "true"_s : "false"_s;
}

int32_t Boolean::hashCode() {
	return Boolean::hashCode(this->value);
}

int32_t Boolean::hashCode(bool value) {
	return value ? 1231 : 1237;
}

bool Boolean::equals(Object$* obj) {
	if ($instanceOf(Boolean, obj)) {
		return this->value == $cast(Boolean, obj)->booleanValue();
	}
	return false;
}

bool Boolean::getBoolean($String* name) {
	bool result = false;
	try {
		result = parseBoolean($($System::getProperty(name)));
	} catch ($IllegalArgumentException& e) {
	} catch ($NullPointerException& e) {
	}
	return result;
}

int32_t Boolean::compareTo(Boolean* b) {
	return compare(this->value, $nc(b)->value);
}

int32_t Boolean::compare(bool x, bool y) {
	return (x == y) ? 0 : (x ? 1 : -1);
}

bool Boolean::logicalAnd(bool a, bool b) {
	return a && b;
}

bool Boolean::logicalOr(bool a, bool b) {
	return a || b;
}

bool Boolean::logicalXor(bool a, bool b) {
	return a ^ b;
}

$Optional* Boolean::describeConstable() {
	$init($ConstantDescs);
	return $Optional::of(this->value ? $ConstantDescs::TRUE : $ConstantDescs::FALSE);
}

int32_t Boolean::compareTo(Object$* b) {
	return this->compareTo($cast(Boolean, b));
}

void Boolean::clinit$($Class* clazz) {
	$assignStatic(Boolean::TRUE, $new(Boolean, true));
	$assignStatic(Boolean::FALSE, $new(Boolean, false));
	$assignStatic(Boolean::TYPE, $Class::getPrimitiveClass("boolean"_s));
}

Boolean::Boolean() {
}

$Class* Boolean::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TRUE", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, TRUE)},
		{"FALSE", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, FALSE)},
		{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Boolean, TYPE)},
		{"value", "Z", nullptr, $PRIVATE | $FINAL, $field(Boolean, value)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Boolean, serialVersionUID)},
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
	$CompoundAttribute booleanValuemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute valueOfmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $method(Boolean, init$, void, bool), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(Boolean, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"booleanValue", "()Z", nullptr, $PUBLIC, $method(Boolean, booleanValue, bool), nullptr, nullptr, booleanValuemethodAnnotations$$},
		{"compare", "(ZZ)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, compare, int32_t, bool, bool)},
		{"compareTo", "(Ljava/lang/Boolean;)I", nullptr, $PUBLIC, $method(Boolean, compareTo, int32_t, Boolean*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Boolean, compareTo, int32_t, Object$*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Boolean;>;>;", $PUBLIC, $virtualMethod(Boolean, describeConstable, $Optional*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Boolean, equals, bool, Object$*)},
		{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, getBoolean, bool, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Boolean, hashCode, int32_t)},
		{"hashCode", "(Z)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, hashCode, int32_t, bool)},
		{"logicalAnd", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, logicalAnd, bool, bool, bool)},
		{"logicalOr", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, logicalOr, bool, bool, bool)},
		{"logicalXor", "(ZZ)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, logicalXor, bool, bool, bool)},
		{"parseBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, parseBoolean, bool, $String*)},
		{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, toString, $String*, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Boolean, toString, $String*)},
		{"valueOf", "(Z)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, valueOf, Boolean*, bool), nullptr, nullptr, valueOfmethodAnnotations$$},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $staticMethod(Boolean, valueOf, Boolean*, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Boolean",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Comparable,java.lang.constant.Constable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/Boolean;>;Ljava/lang/constant/Constable;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Boolean, name, initialize, &classInfo$$, Boolean::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Boolean));
	});
	return class$;
}

$Class* Boolean::class$ = nullptr;

	} // lang
} // java