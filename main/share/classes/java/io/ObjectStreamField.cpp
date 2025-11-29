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

$CompoundAttribute _ObjectStreamField_MethodAnnotations_getType12[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$FieldInfo _ObjectStreamField_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, name)},
	{"signature", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, signature)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ObjectStreamField, type)},
	{"typeSignature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectStreamField, typeSignature)},
	{"unshared", "Z", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, unshared)},
	{"field", "Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamField, field)},
	{"offset", "I", nullptr, $PRIVATE, $field(ObjectStreamField, offset)},
	{}
};

$MethodInfo _ObjectStreamField_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(ObjectStreamField::*)($String*,$Class*)>(&ObjectStreamField::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V", "(Ljava/lang/String;Ljava/lang/Class<*>;Z)V", $PUBLIC, $method(static_cast<void(ObjectStreamField::*)($String*,$Class*,bool)>(&ObjectStreamField::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(ObjectStreamField::*)($String*,$String*,bool)>(&ObjectStreamField::init$))},
	{"<init>", "(Ljava/lang/reflect/Field;ZZ)V", nullptr, 0, $method(static_cast<void(ObjectStreamField::*)($Field*,bool,bool)>(&ObjectStreamField::init$))},
	{"appendClassSignature", "(Ljava/lang/StringBuilder;Ljava/lang/Class;)Ljava/lang/StringBuilder;", "(Ljava/lang/StringBuilder;Ljava/lang/Class<*>;)Ljava/lang/StringBuilder;", $STATIC, $method(static_cast<$StringBuilder*(*)($StringBuilder*,$Class*)>(&ObjectStreamField::appendClassSignature))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getClassSignature", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $STATIC, $method(static_cast<$String*(*)($Class*)>(&ObjectStreamField::getClassSignature))},
	{"getField", "()Ljava/lang/reflect/Field;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getPrimitiveSignature", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&ObjectStreamField::getPrimitiveSignature))},
	{"getSignature", "()Ljava/lang/String;", nullptr, 0},
	{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, nullptr, nullptr, nullptr, _ObjectStreamField_MethodAnnotations_getType12},
	{"getTypeCode", "()C", nullptr, $PUBLIC},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isPrimitive", "()Z", nullptr, $PUBLIC},
	{"isUnshared", "()Z", nullptr, $PUBLIC},
	{"setOffset", "(I)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectStreamField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.ObjectStreamField",
	"java.lang.Object",
	"java.lang.Comparable",
	_ObjectStreamField_FieldInfo_,
	_ObjectStreamField_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/Object;>;"
};

$Object* allocate$ObjectStreamField($Class* clazz) {
	return $of($alloc(ObjectStreamField));
}

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

	$var($Class, var$0, nullptr)
	switch (signature->charAt(0)) {
	case u'Z':
		{
			$init($Boolean);
			var$0 = $Boolean::TYPE;
			break;
		}
	case u'B':
		{
			$init($Byte);
			var$0 = $Byte::TYPE;
			break;
		}
	case u'C':
		{
			$init($Character);
			var$0 = $Character::TYPE;
			break;
		}
	case u'S':
		{
			$init($Short);
			var$0 = $Short::TYPE;
			break;
		}
	case u'I':
		{
			$init($Integer);
			var$0 = $Integer::TYPE;
			break;
		}
	case u'J':
		{
			$init($Long);
			var$0 = $Long::TYPE;
			break;
		}
	case u'F':
		{
			$init($Float);
			var$0 = $Float::TYPE;
			break;
		}
	case u'D':
		{
			$init($Double);
			var$0 = $Double::TYPE;
			break;
		}
	case u'L':
		{}
	case u'[':
		{
			var$0 = $Object::class$;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "illegal signature"_s);
		}
	}
	$set(this, type, var$0);
}

$String* ObjectStreamField::getPrimitiveSignature($Class* cl) {
	$init(ObjectStreamField);
	$init($Integer);
	if (cl == $Integer::TYPE) {
		return "I"_s;
	} else {
		$init($Byte);
		if (cl == $Byte::TYPE) {
			return "B"_s;
		} else {
			$init($Long);
			if (cl == $Long::TYPE) {
				return "J"_s;
			} else {
				$init($Float);
				if (cl == $Float::TYPE) {
					return "F"_s;
				} else {
					$init($Double);
					if (cl == $Double::TYPE) {
						return "D"_s;
					} else {
						$init($Short);
						if (cl == $Short::TYPE) {
							return "S"_s;
						} else {
							$init($Character);
							if (cl == $Character::TYPE) {
								return "C"_s;
							} else {
								$init($Boolean);
								if (cl == $Boolean::TYPE) {
									return "Z"_s;
								} else {
									$init($Void);
									if (cl == $Void::TYPE) {
										return "V"_s;
									} else {
										$throwNew($InternalError);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$String* ObjectStreamField::getClassSignature($Class* cl) {
	$init(ObjectStreamField);
	$useLocalCurrentObjectStackCache();
	if ($nc(cl)->isPrimitive()) {
		return getPrimitiveSignature(cl);
	} else {
		return $nc($(appendClassSignature($$new($StringBuilder), cl)))->toString();
	}
}

$StringBuilder* ObjectStreamField::appendClassSignature($StringBuilder* sbuf, $Class* cl) {
	$init(ObjectStreamField);
	$useLocalCurrentObjectStackCache();
	while ($nc(cl)->isArray()) {
		$nc(sbuf)->append(u'[');
		cl = cl->getComponentType();
	}
	if ($nc(cl)->isPrimitive()) {
		$nc(sbuf)->append($(getPrimitiveSignature(cl)));
	} else {
		$nc(sbuf)->append(u'L')->append($($nc($(cl->getName()))->replace(u'.', u'/')))->append(u';');
	}
	return sbuf;
}

void ObjectStreamField::init$($Field* field, bool unshared, bool showType) {
	$set(this, field, field);
	this->unshared = unshared;
	$set(this, name, $nc(field)->getName());
	$Class* ftype = field->getType();
	$set(this, type, (showType || $nc(ftype)->isPrimitive()) ? ftype : $Object::class$);
	$set(this, signature, $nc($(getClassSignature(ftype)))->intern());
}

$String* ObjectStreamField::getName() {
	return this->name;
}

$Class* ObjectStreamField::getType() {
	$useLocalCurrentObjectStackCache();
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
	return $nc($(getSignature()))->charAt(0);
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
	return $nc(this->name)->compareTo($nc(other)->name);
}

$String* ObjectStreamField::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$(getSignature()), $$str(u' '), this->name});
}

$Field* ObjectStreamField::getField() {
	return this->field;
}

$String* ObjectStreamField::getSignature() {
	$useLocalCurrentObjectStackCache();
	if (this->signature != nullptr) {
		return this->signature;
	}
	$var($String, sig, this->typeSignature);
	if (sig == nullptr) {
		$set(this, typeSignature, ($assign(sig, $nc($(getClassSignature(this->type)))->intern())));
	}
	return sig;
}

ObjectStreamField::ObjectStreamField() {
}

$Class* ObjectStreamField::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamField, name, initialize, &_ObjectStreamField_ClassInfo_, allocate$ObjectStreamField);
	return class$;
}

$Class* ObjectStreamField::class$ = nullptr;

	} // io
} // java