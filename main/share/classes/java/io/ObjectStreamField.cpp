#include <java/io/ObjectStreamField.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Field.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $Field = ::java::lang::reflect::Field;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace io {

void ObjectStreamField::init$($String* name, $Class* type) {
	ObjectStreamField::init$(name, type, false);
}

void ObjectStreamField::init$($String* name, $Class* type, bool unshared) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, name, name);
	$set(this, type, type);
	this->unshared = unshared;
	$set(this, field, nullptr);
	$set(this, signature, nullptr);
}

void ObjectStreamField::init$($String* name, $String* signature, bool unshared) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, name, name);
	$set(this, signature, $nc(signature)->intern());
	this->unshared = unshared;
	$set(this, field, nullptr);
	$var($Class, var$0, nullptr);
	switch (signature->charAt(0)) {
	case u'Z':
		var$0 = $Boolean::TYPE;
		break;
	case u'B':
		var$0 = $Byte::TYPE;
		break;
	case u'C':
		var$0 = $Character::TYPE;
		break;
	case u'S':
		var$0 = $Short::TYPE;
		break;
	case u'I':
		var$0 = $Integer::TYPE;
		break;
	case u'J':
		var$0 = $Long::TYPE;
		break;
	case u'F':
		var$0 = $Float::TYPE;
		break;
	case u'D':
		var$0 = $Double::TYPE;
		break;
	case u'L':
	case u'[':
		var$0 = $Object::class$;
		break;
	default:
		$throwNew($IllegalArgumentException, "illegal signature"_s);
	}
	$set(this, type, var$0);
}

$String* ObjectStreamField::getPrimitiveSignature($Class* cl) {
	$init(ObjectStreamField);
	if (cl == $Integer::TYPE) {
		return "I"_s;
	} else if (cl == $Byte::TYPE) {
		return "B"_s;
	} else if (cl == $Long::TYPE) {
		return "J"_s;
	} else if (cl == $Float::TYPE) {
		return "F"_s;
	} else if (cl == $Double::TYPE) {
		return "D"_s;
	} else if (cl == $Short::TYPE) {
		return "S"_s;
	} else if (cl == $Character::TYPE) {
		return "C"_s;
	} else if (cl == $Boolean::TYPE) {
		return "Z"_s;
	} else if (cl == $Void::TYPE) {
		return "V"_s;
	} else {
		$throwNew($InternalError);
	}
}

$String* ObjectStreamField::getClassSignature($Class* cl) {
	$init(ObjectStreamField);
	$useLocalObjectStack();
	if ($nc(cl)->isPrimitive()) {
		return getPrimitiveSignature(cl);
	} else {
		return $$nc(appendClassSignature($$new($StringBuilder), cl))->toString();
	}
}

$StringBuilder* ObjectStreamField::appendClassSignature($StringBuilder* sbuf, $Class* cl) {
	$init(ObjectStreamField);
	$useLocalObjectStack();
	while ($nc(cl)->isArray()) {
		$nc(sbuf)->append(u'[');
		cl = cl->getComponentType();
	}
	if ($nc(cl)->isPrimitive()) {
		$nc(sbuf)->append($(getPrimitiveSignature(cl)));
	} else {
		$nc(sbuf)->append(u'L')->append($($$nc(cl->getName())->replace(u'.', u'/')))->append(u';');
	}
	return sbuf;
}

void ObjectStreamField::init$($Field* field, bool unshared, bool showType) {
	$set(this, field, field);
	this->unshared = unshared;
	$set(this, name, $nc(field)->getName());
	$Class* ftype = field->getType();
	$set(this, type, (showType || $nc(ftype)->isPrimitive()) ? ftype : $Object::class$);
	$set(this, signature, $$nc(getClassSignature(ftype))->intern());
}

$String* ObjectStreamField::getName() {
	return this->name;
}

$Class* ObjectStreamField::getType() {
	$useLocalObjectStack();
	if ($System::getSecurityManager() != nullptr) {
		$Class* caller = $Reflection::getCallerClass();
		$var($ClassLoader, var$0, $nc(caller)->getClassLoader());
		if ($ReflectUtil::needsPackageAccessCheck(var$0, $($nc(this->type)->getClassLoader()))) {
			$ReflectUtil::checkPackageAccess(this->type);
		}
	}
	return this->type;
}

char16_t ObjectStreamField::getTypeCode() {
	return $$nc(getSignature())->charAt(0);
}

$String* ObjectStreamField::getTypeString() {
	return isPrimitive() ? ($String*)nullptr : getSignature();
}

int32_t ObjectStreamField::getOffset() {
	return this->offset;
}

void ObjectStreamField::setOffset(int32_t offset) {
	this->offset = offset;
}

bool ObjectStreamField::isPrimitive() {
	char16_t tcode = getTypeCode();
	return ((tcode != u'L') && (tcode != u'['));
}

bool ObjectStreamField::isUnshared() {
	return this->unshared;
}

int32_t ObjectStreamField::compareTo(Object$* obj) {
	$var(ObjectStreamField, other, $cast(ObjectStreamField, obj));
	bool isPrim = isPrimitive();
	if (isPrim != $nc(other)->isPrimitive()) {
		return isPrim ? -1 : 1;
	}
	return $nc(this->name)->compareTo(other->name);
}

$String* ObjectStreamField::toString() {
	$useLocalObjectStack();
	return $str({$(getSignature()), $$str(u' '), this->name});
}

$Field* ObjectStreamField::getField() {
	return this->field;
}

$String* ObjectStreamField::getSignature() {
	$useLocalObjectStack();
	if (this->signature != nullptr) {
		return this->signature;
	}
	$var($String, sig, this->typeSignature);
	if (sig == nullptr) {
		$set(this, typeSignature, $assign(sig, $$nc(getClassSignature(this->type))->intern()));
	}
	return sig;
}

ObjectStreamField::ObjectStreamField() {
}

$Class* ObjectStreamField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, name)},
		{"signature", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, signature)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ObjectStreamField, type)},
		{"typeSignature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectStreamField, typeSignature)},
		{"unshared", "Z", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, unshared)},
		{"field", "Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, field)},
		{"offset", "I", nullptr, $PRIVATE, $field(ObjectStreamField, offset)},
		{}
	};
	$CompoundAttribute getTypemethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(ObjectStreamField, init$, void, $String*, $Class*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V", "(Ljava/lang/String;Ljava/lang/Class<*>;Z)V", $PUBLIC, $method(ObjectStreamField, init$, void, $String*, $Class*, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(ObjectStreamField, init$, void, $String*, $String*, bool)},
		{"<init>", "(Ljava/lang/reflect/Field;ZZ)V", nullptr, 0, $method(ObjectStreamField, init$, void, $Field*, bool, bool)},
		{"appendClassSignature", "(Ljava/lang/StringBuilder;Ljava/lang/Class;)Ljava/lang/StringBuilder;", "(Ljava/lang/StringBuilder;Ljava/lang/Class<*>;)Ljava/lang/StringBuilder;", $STATIC, $staticMethod(ObjectStreamField, appendClassSignature, $StringBuilder*, $StringBuilder*, $Class*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, compareTo, int32_t, Object$*)},
		{"getClassSignature", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $STATIC, $staticMethod(ObjectStreamField, getClassSignature, $String*, $Class*)},
		{"getField", "()Ljava/lang/reflect/Field;", nullptr, 0, $virtualMethod(ObjectStreamField, getField, $Field*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, getName, $String*)},
		{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, getOffset, int32_t)},
		{"getPrimitiveSignature", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(ObjectStreamField, getPrimitiveSignature, $String*, $Class*)},
		{"getSignature", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ObjectStreamField, getSignature, $String*)},
		{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ObjectStreamField, getType, $Class*), nullptr, nullptr, getTypemethodAnnotations$$},
		{"getTypeCode", "()C", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, getTypeCode, char16_t)},
		{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, getTypeString, $String*)},
		{"isPrimitive", "()Z", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, isPrimitive, bool)},
		{"isUnshared", "()Z", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, isUnshared, bool)},
		{"setOffset", "(I)V", nullptr, $PROTECTED, $virtualMethod(ObjectStreamField, setOffset, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectStreamField, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.ObjectStreamField",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/Object;>;"
	};
	$loadClass(ObjectStreamField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamField);
	});
	return class$;
}

$Class* ObjectStreamField::class$ = nullptr;

	} // io
} // java