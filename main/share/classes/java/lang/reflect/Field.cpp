#include <java/lang/reflect/Field.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jdk/internal/reflect/FieldAccessor.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <sun/reflect/annotation/AnnotationParser.h>
#include <sun/reflect/annotation/AnnotationSupport.h>
#include <sun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget.h>
#include <sun/reflect/annotation/TypeAnnotationParser.h>
#include <sun/reflect/generics/factory/CoreReflectionFactory.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/repository/FieldRepository.h>
#include <sun/reflect/generics/scope/AbstractScope.h>
#include <sun/reflect/generics/scope/ClassScope.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <jcpp.h>

#undef ENUM
#undef FIELD

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Member = ::java::lang::reflect::Member;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;
using $FieldAccessor = ::jdk::internal::reflect::FieldAccessor;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;
using $AnnotationParser = ::sun::reflect::annotation::AnnotationParser;
using $AnnotationSupport = ::sun::reflect::annotation::AnnotationSupport;
using $TypeAnnotation$TypeAnnotationTarget = ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget;
using $TypeAnnotationParser = ::sun::reflect::annotation::TypeAnnotationParser;
using $CoreReflectionFactory = ::sun::reflect::generics::factory::CoreReflectionFactory;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $FieldRepository = ::sun::reflect::generics::repository::FieldRepository;
using $AbstractScope = ::sun::reflect::generics::scope::AbstractScope;
using $ClassScope = ::sun::reflect::generics::scope::ClassScope;
using $Scope = ::sun::reflect::generics::scope::Scope;

namespace java {
	namespace lang {
		namespace reflect {

$CompoundAttribute _Field_MethodAnnotations_get7[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getBoolean11[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getByte12[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getChar13[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getDouble16[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getFloat20[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getInt24[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getLong25[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_getShort29[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_set36[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setAccessible37[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setBoolean38[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setByte39[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setChar40[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setDouble41[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setFloat43[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setInt44[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setLong45[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Field_MethodAnnotations_setShort46[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _Field_FieldInfo_[] = {
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(Field, clazz)},
	{"slot", "I", nullptr, $PRIVATE, $field(Field, slot)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Field, name)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(Field, type)},
	{"modifiers", "I", nullptr, $PRIVATE, $field(Field, modifiers)},
	{"trustedFinal", "Z", nullptr, $PRIVATE, $field(Field, trustedFinal)},
	{"signature", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(Field, signature)},
	{"genericInfo", "Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PRIVATE | $TRANSIENT, $field(Field, genericInfo)},
	{"annotations", "[B", nullptr, $PRIVATE, $field(Field, annotations)},
	{"fieldAccessor", "Ljdk/internal/reflect/FieldAccessor;", nullptr, $PRIVATE, $field(Field, fieldAccessor)},
	{"overrideFieldAccessor", "Ljdk/internal/reflect/FieldAccessor;", nullptr, $PRIVATE, $field(Field, overrideFieldAccessor)},
	{"root", "Ljava/lang/reflect/Field;", nullptr, $PRIVATE, $field(Field, root)},
	{"declaredAnnotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(Field, declaredAnnotations$)},
	{"typeAnnotation", "[B", nullptr, 2, $field(Field, typeAnnotation)},
	{}
};

$MethodInfo _Field_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;IZILjava/lang/String;[B)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;IZILjava/lang/String;[B)V", 0, $method(static_cast<void(Field::*)($Class*,$String*,$Class*,int32_t,bool,int32_t,$String*,$bytes*)>(&Field::init$))},
	{"acquireFieldAccessor", "(Z)Ljdk/internal/reflect/FieldAccessor;", nullptr, $PRIVATE, $method(static_cast<$FieldAccessor*(Field::*)(bool)>(&Field::acquireFieldAccessor))},
	{"checkAccess", "(Ljava/lang/Class;Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;)V", $PRIVATE, $method(static_cast<void(Field::*)($Class*,Object$*)>(&Field::checkAccess)), "java.lang.IllegalAccessException"},
	{"checkCanSetAccessible", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0},
	{"copy", "()Ljava/lang/reflect/Field;", nullptr, 0, $method(static_cast<Field*(Field::*)()>(&Field::copy))},
	{"declaredAnnotations", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE, $method(static_cast<$Map*(Field::*)()>(&Field::declaredAnnotations))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Field::*)(Object$*)>(&Field::get)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_get7},
	{"getAnnotatedType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $method(static_cast<$AnnotatedType*(Field::*)()>(&Field::getAnnotatedType))},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Field::*)(Object$*)>(&Field::getBoolean)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getBoolean11},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $method(static_cast<int8_t(Field::*)(Object$*)>(&Field::getByte)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getByte12},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $method(static_cast<char16_t(Field::*)(Object$*)>(&Field::getChar)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getChar13},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $method(static_cast<double(Field::*)(Object$*)>(&Field::getDouble)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getDouble16},
	{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(static_cast<$GenericsFactory*(Field::*)()>(&Field::getFactory))},
	{"getFieldAccessor", "(Ljava/lang/Object;)Ljdk/internal/reflect/FieldAccessor;", nullptr, $PRIVATE, $method(static_cast<$FieldAccessor*(Field::*)(Object$*)>(&Field::getFieldAccessor)), "java.lang.IllegalAccessException"},
	{"getFieldAccessor", "(Z)Ljdk/internal/reflect/FieldAccessor;", nullptr, $PRIVATE, $method(static_cast<$FieldAccessor*(Field::*)(bool)>(&Field::getFieldAccessor))},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $method(static_cast<float(Field::*)(Object$*)>(&Field::getFloat)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getFloat20},
	{"getGenericInfo", "()Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PRIVATE, $method(static_cast<$FieldRepository*(Field::*)()>(&Field::getGenericInfo))},
	{"getGenericSignature", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Field::*)()>(&Field::getGenericSignature))},
	{"getGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $method(static_cast<$Type*(Field::*)()>(&Field::getGenericType))},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Field::*)(Object$*)>(&Field::getInt)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getInt24},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Field::*)(Object$*)>(&Field::getLong)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getLong25},
	{"getModifiers", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRoot", "()Ljava/lang/reflect/Field;", nullptr, 0},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $method(static_cast<int16_t(Field::*)(Object$*)>(&Field::getShort)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_getShort29},
	{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Field::*)()>(&Field::getType))},
	{"getTypeAnnotationBytes0", "()[B", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$bytes*(Field::*)()>(&Field::getTypeAnnotationBytes0))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEnumConstant", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Field::*)()>(&Field::isEnumConstant))},
	{"isSynthetic", "()Z", nullptr, $PUBLIC},
	{"isTrustedFinal", "()Z", nullptr, 0, $method(static_cast<bool(Field::*)()>(&Field::isTrustedFinal))},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,Object$*)>(&Field::set)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_set36},
	{"setAccessible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Field_MethodAnnotations_setAccessible37},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,bool)>(&Field::setBoolean)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setBoolean38},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,int8_t)>(&Field::setByte)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setByte39},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,char16_t)>(&Field::setChar)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setChar40},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,double)>(&Field::setDouble)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setDouble41},
	{"setFieldAccessor", "(Ljdk/internal/reflect/FieldAccessor;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Field::*)($FieldAccessor*,bool)>(&Field::setFieldAccessor))},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,float)>(&Field::setFloat)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setFloat43},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,int32_t)>(&Field::setInt)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setInt44},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,int64_t)>(&Field::setLong)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setLong45},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Object$*,int16_t)>(&Field::setShort)), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException", nullptr, _Field_MethodAnnotations_setShort46},
	{"toGenericString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Field::*)()>(&Field::toGenericString))},
	{"toShortString", "()Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getTypeAnnotationBytes0 33

$ClassInfo _Field_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.reflect.Field",
	"java.lang.reflect.AccessibleObject",
	"java.lang.reflect.Member",
	_Field_FieldInfo_,
	_Field_MethodInfo_
};

$Object* allocate$Field($Class* clazz) {
	return $of($alloc(Field));
}

$Object* Field::clone() {
	 return this->$AccessibleObject::clone();
}

void Field::finalize() {
	this->$AccessibleObject::finalize();
}

$String* Field::getGenericSignature() {
	return this->signature;
}

$GenericsFactory* Field::getFactory() {
	$Class* c = getDeclaringClass();
	return $CoreReflectionFactory::make(c, $($ClassScope::make(c)));
}

$FieldRepository* Field::getGenericInfo() {
	if (this->genericInfo == nullptr) {
		$var($String, var$0, getGenericSignature());
		$set(this, genericInfo, $FieldRepository::make(var$0, $(getFactory())));
	}
	return this->genericInfo;
}

void Field::init$($Class* declaringClass, $String* name, $Class* type, int32_t modifiers, bool trustedFinal, int32_t slot, $String* signature, $bytes* annotations) {
	$AccessibleObject::init$();
	$set(this, clazz, declaringClass);
	$set(this, name, name);
	$set(this, type, type);
	this->modifiers = modifiers;
	this->trustedFinal = trustedFinal;
	this->slot = slot;
	$set(this, signature, signature);
	$set(this, annotations, annotations);
}

Field* Field::copy() {
	if (this->root != nullptr) {
		$throwNew($IllegalArgumentException, "Can not copy a non-root Field"_s);
	}
	$var(Field, res, $new<Field>(this->clazz, this->name, this->type, this->modifiers, this->trustedFinal, this->slot, this->signature, this->annotations));
	$set(res, root, this);
	$set(res, fieldAccessor, this->fieldAccessor);
	$set(res, overrideFieldAccessor, this->overrideFieldAccessor);
	$set(res, typeAnnotation, this->typeAnnotation);
	res->offsetof = this->offsetof;
	return res;
}

void Field::setAccessible(bool flag) {
	$AccessibleObject::checkPermission();
	if (flag) {
		checkCanSetAccessible($Reflection::getCallerClass());
	}
	setAccessible0(flag);
}

void Field::checkCanSetAccessible($Class* caller) {
	checkCanSetAccessible(caller, this->clazz);
}

$Class* Field::getDeclaringClass() {
	return this->clazz;
}

$String* Field::getName() {
	return this->name;
}

int32_t Field::getModifiers() {
	return this->modifiers;
}

bool Field::isEnumConstant() {
	return ((int32_t)(getModifiers() & (uint32_t)$Modifier::ENUM)) != 0;
}

bool Field::isSynthetic() {
	return $Modifier::isSynthetic(getModifiers());
}

$Class* Field::getType() {
	return this->type;
}

$Type* Field::getGenericType() {
	if (getGenericSignature() != nullptr) {
		return $nc($(getGenericInfo()))->getGenericType();
	} else {
		return getType();
	}
}

bool Field::equals(Object$* obj) {
	{
		$var(Field, other, nullptr);
		bool var$0 = $instanceOf(Field, obj);
		if (var$0) {
			$assign(other, $cast(Field, obj));
			var$0 = true;
		}
		if (var$0) {
			bool var$2 = (getDeclaringClass() == $nc(other)->getDeclaringClass());
			if (var$2) {
				var$2 = (getName() == other->getName());
			}
			bool var$1 = var$2;
			if (var$1) {
				var$1 = (getType() == other->getType());
			}
			return var$1;
		}
	}
	return false;
}

int32_t Field::hashCode() {
	int32_t var$0 = $nc($($nc(getDeclaringClass())->getName()))->hashCode();
	return var$0 ^ $nc($(getName()))->hashCode();
}

$String* Field::toString() {
	int32_t mod = getModifiers();
	$var($String, var$4, ((mod == 0) ? ""_s : ($$str({$($Modifier::toString(mod)), " "_s}))));
	$var($String, var$3, $$concat(var$4, $($nc(getType())->getTypeName())));
	$var($String, var$2, $$concat(var$3, " "));
	$var($String, var$1, $$concat(var$2, $($nc(getDeclaringClass())->getTypeName())));
	$var($String, var$0, $$concat(var$1, "."));
	return ($concat(var$0, $(getName())));
}

$String* Field::toShortString() {
	$var($String, var$0, $$str({"field "_s, $($nc(getDeclaringClass())->getTypeName()), "."_s}));
	return $concat(var$0, $(getName()));
}

$String* Field::toGenericString() {
	int32_t mod = getModifiers();
	$var($Type, fieldType, getGenericType());
	$var($String, var$4, ((mod == 0) ? ""_s : ($$str({$($Modifier::toString(mod)), " "_s}))));
	$var($String, var$3, $$concat(var$4, $($nc(fieldType)->getTypeName())));
	$var($String, var$2, $$concat(var$3, " "));
	$var($String, var$1, $$concat(var$2, $($nc(getDeclaringClass())->getTypeName())));
	$var($String, var$0, $$concat(var$1, "."));
	return ($concat(var$0, $(getName())));
}

$Object* Field::get(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $of($nc($(getFieldAccessor(obj)))->get(obj));
}

bool Field::getBoolean(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getBoolean(obj);
}

int8_t Field::getByte(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getByte(obj);
}

char16_t Field::getChar(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getChar(obj);
}

int16_t Field::getShort(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getShort(obj);
}

int32_t Field::getInt(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getInt(obj);
}

int64_t Field::getLong(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getLong(obj);
}

float Field::getFloat(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getFloat(obj);
}

double Field::getDouble(Object$* obj) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	return $nc($(getFieldAccessor(obj)))->getDouble(obj);
}

void Field::set(Object$* obj, Object$* value) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->set(obj, value);
}

void Field::setBoolean(Object$* obj, bool z) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setBoolean(obj, z);
}

void Field::setByte(Object$* obj, int8_t b) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setByte(obj, b);
}

void Field::setChar(Object$* obj, char16_t c) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setChar(obj, c);
}

void Field::setShort(Object$* obj, int16_t s) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setShort(obj, s);
}

void Field::setInt(Object$* obj, int32_t i) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setInt(obj, i);
}

void Field::setLong(Object$* obj, int64_t l) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setLong(obj, l);
}

void Field::setFloat(Object$* obj, float f) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setFloat(obj, f);
}

void Field::setDouble(Object$* obj, double d) {
	if (!this->override$) {
		$Class* caller = $Reflection::getCallerClass();
		checkAccess(caller, obj);
	}
	$nc($(getFieldAccessor(obj)))->setDouble(obj, d);
}

void Field::checkAccess($Class* caller, Object$* obj) {
	checkAccess(caller, this->clazz, $Modifier::isStatic(this->modifiers) ? ($Class*)nullptr : $nc($of(obj))->getClass(), this->modifiers);
}

$FieldAccessor* Field::getFieldAccessor(Object$* obj) {
	bool ov = this->override$;
	$var($FieldAccessor, a, (ov) ? this->overrideFieldAccessor : this->fieldAccessor);
	return (a != nullptr) ? a : acquireFieldAccessor(ov);
}

$FieldAccessor* Field::acquireFieldAccessor(bool overrideFinalCheck) {
	$var($FieldAccessor, tmp, nullptr);
	if (this->root != nullptr) {
		$assign(tmp, $nc(this->root)->getFieldAccessor(overrideFinalCheck));
	}
	if (tmp != nullptr) {
		if (overrideFinalCheck) {
			$set(this, overrideFieldAccessor, tmp);
		} else {
			$set(this, fieldAccessor, tmp);
		}
	} else {
		$init($AccessibleObject);
		$assign(tmp, $nc($AccessibleObject::reflectionFactory)->newFieldAccessor(this, overrideFinalCheck));
		setFieldAccessor(tmp, overrideFinalCheck);
	}
	return tmp;
}

$FieldAccessor* Field::getFieldAccessor(bool overrideFinalCheck) {
	return (overrideFinalCheck) ? this->overrideFieldAccessor : this->fieldAccessor;
}

void Field::setFieldAccessor($FieldAccessor* accessor, bool overrideFinalCheck) {
	if (overrideFinalCheck) {
		$set(this, overrideFieldAccessor, accessor);
	} else {
		$set(this, fieldAccessor, accessor);
	}
	if (this->root != nullptr) {
		$nc(this->root)->setFieldAccessor(accessor, overrideFinalCheck);
	}
}

Field* Field::getRoot() {
	return this->root;
}

bool Field::isTrustedFinal() {
	return this->trustedFinal;
}

$Annotation* Field::getAnnotation($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $cast($Annotation, annotationClass->cast($($nc($(declaredAnnotations()))->get(annotationClass))));
}

$AnnotationArray* Field::getAnnotationsByType($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $AnnotationSupport::getDirectlyAndIndirectlyPresent($(declaredAnnotations()), annotationClass);
}

$AnnotationArray* Field::getDeclaredAnnotations() {
	return $AnnotationParser::toArray($(declaredAnnotations()));
}

$Map* Field::declaredAnnotations() {
	$var($Map, declAnnos, nullptr);
	if (($assign(declAnnos, this->declaredAnnotations$)) == nullptr) {
		$synchronized(this) {
			if (($assign(declAnnos, this->declaredAnnotations$)) == nullptr) {
				$var(Field, root, this->root);
				if (root != nullptr) {
					$assign(declAnnos, root->declaredAnnotations());
				} else {
					$var($bytes, var$0, this->annotations);
					$var($ConstantPool, var$1, $nc($($SharedSecrets::getJavaLangAccess()))->getConstantPool(getDeclaringClass()));
					$assign(declAnnos, $AnnotationParser::parseAnnotations(var$0, var$1, getDeclaringClass()));
				}
				$set(this, declaredAnnotations$, declAnnos);
			}
		}
	}
	return declAnnos;
}

$bytes* Field::getTypeAnnotationBytes0() {
	return typeAnnotation;
}

$AnnotatedType* Field::getAnnotatedType() {
	$var($bytes, var$0, getTypeAnnotationBytes0());
	$var($ConstantPool, var$1, $nc($($SharedSecrets::getJavaLangAccess()))->getConstantPool(getDeclaringClass()));
	$Class* var$2 = getDeclaringClass();
	$init($TypeAnnotation$TypeAnnotationTarget);
	return $TypeAnnotationParser::buildAnnotatedType(var$0, var$1, this, var$2, $(getGenericType()), $TypeAnnotation$TypeAnnotationTarget::FIELD);
}

Field::Field() {
}

$Class* Field::load$($String* name, bool initialize) {
	$loadClass(Field, name, initialize, &_Field_ClassInfo_, allocate$Field);
	return class$;
}

$Class* Field::class$ = nullptr;

bool Field::isStatic() {
	return (getModifiers() & Modifier::STATIC) != 0;
}

void Field::setOffsetof(int64_t offsetof) {
	this->offsetof = offsetof;
}

int64_t Field::getOffsetof() {
	return offsetof;
}

		} // reflect
	} // lang
} // java