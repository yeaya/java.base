#include <sun/reflect/annotation/AnnotationType.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Inherited.h>
#include <java/lang/annotation/Retention.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <sun/reflect/annotation/AnnotationParser.h>
#include <sun/reflect/annotation/AnnotationType$1.h>
#include <jcpp.h>

#undef CLASS
#undef RUNTIME
#undef TYPE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Inherited = ::java::lang::annotation::Inherited;
using $Retention = ::java::lang::annotation::Retention;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;
using $AnnotationParser = ::sun::reflect::annotation::AnnotationParser;
using $AnnotationType$1 = ::sun::reflect::annotation::AnnotationType$1;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AnnotationType, $assertionsDisabled)},
	{"memberTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(AnnotationType, memberTypes$)},
	{"memberDefaults", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AnnotationType, memberDefaults$)},
	{"members", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $PRIVATE | $FINAL, $field(AnnotationType, members$)},
	{"retention", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PRIVATE | $FINAL, $field(AnnotationType, retention$)},
	{"inherited", "Z", nullptr, $PRIVATE | $FINAL, $field(AnnotationType, inherited)},
	{}
};

$MethodInfo _AnnotationType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)V", $PRIVATE, $method(static_cast<void(AnnotationType::*)($Class*)>(&AnnotationType::init$))},
	{"getInstance", "(Ljava/lang/Class;)Lsun/reflect/annotation/AnnotationType;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Lsun/reflect/annotation/AnnotationType;", $PUBLIC | $STATIC, $method(static_cast<AnnotationType*(*)($Class*)>(&AnnotationType::getInstance))},
	{"invocationHandlerReturnType", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&AnnotationType::invocationHandlerReturnType))},
	{"isInherited", "()Z", nullptr, $PUBLIC},
	{"memberDefaults", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{"memberTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC},
	{"members", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $PUBLIC},
	{"retention", "()Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnnotationType_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnnotationType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.annotation.AnnotationType",
	"java.lang.Object",
	nullptr,
	_AnnotationType_FieldInfo_,
	_AnnotationType_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationType$1"
};

$Object* allocate$AnnotationType($Class* clazz) {
	return $of($alloc(AnnotationType));
}

bool AnnotationType::$assertionsDisabled = false;

AnnotationType* AnnotationType::getInstance($Class* annotationClass) {
	$init(AnnotationType);
	$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
	$var(AnnotationType, result, $nc(jla)->getAnnotationType(annotationClass));
	if (result == nullptr) {
		$assign(result, $new(AnnotationType, annotationClass));
		if (!jla->casAnnotationType(annotationClass, nullptr, result)) {
			$assign(result, jla->getAnnotationType(annotationClass));
			if (!AnnotationType::$assertionsDisabled && !(result != nullptr)) {
				$throwNew($AssertionError);
			}
		}
	}
	return result;
}

void AnnotationType::init$($Class* annotationClass) {
	$beforeCallerSensitive();
	if (!$nc(annotationClass)->isAnnotation()) {
		$throwNew($IllegalArgumentException, "Not an annotation type"_s);
	}
	$var($MethodArray, methods, $cast($MethodArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AnnotationType$1, this, annotationClass)))));
	$set(this, memberTypes$, $new($HashMap, $nc(methods)->length + 1, 1.0f));
	$set(this, memberDefaults$, $new($HashMap, 0));
	$set(this, members$, $new($HashMap, $nc(methods)->length + 1, 1.0f));
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$1 = $Modifier::isPublic($nc(method)->getModifiers());
				bool var$0 = var$1 && $Modifier::isAbstract($nc(method)->getModifiers());
				if (var$0 && !$nc(method)->isSynthetic()) {
					if (method->getParameterCount() != 0) {
						$throwNew($IllegalArgumentException, $$str({method, " has params"_s}));
					}
					$var($String, name, method->getName());
					$Class* type = method->getReturnType();
					$nc(this->memberTypes$)->put(name, invocationHandlerReturnType(type));
					$nc(this->members$)->put(name, method);
					$var($Object, defaultValue, method->getDefaultValue());
					if (defaultValue != nullptr) {
						$nc(this->memberDefaults$)->put(name, defaultValue);
					}
				}
			}
		}
	}
	$load($Retention);
	$load($Inherited);
	if (annotationClass != $Retention::class$ && annotationClass != $Inherited::class$) {
		$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
		$var($bytes, var$2, $nc(jla)->getRawClassAnnotations(annotationClass));
		$var($Map, metaAnnotations, $AnnotationParser::parseSelectAnnotations(var$2, $(jla->getConstantPool(annotationClass)), annotationClass, $$new($ClassArray, {
			$Retention::class$,
			$Inherited::class$
		})));
		$var($Retention, ret, $cast($Retention, $nc(metaAnnotations)->get($Retention::class$)));
		$init($RetentionPolicy);
		$set(this, retention$, ret == nullptr ? $RetentionPolicy::CLASS : $nc(ret)->value());
		this->inherited = metaAnnotations->containsKey($Inherited::class$);
	} else {
		$init($RetentionPolicy);
		$set(this, retention$, $RetentionPolicy::RUNTIME);
		this->inherited = false;
	}
}

$Class* AnnotationType::invocationHandlerReturnType($Class* type) {
	$init(AnnotationType);
	$init($Byte);
	if (type == $Byte::TYPE) {
		return $Byte::class$;
	}
	$init($Character);
	if (type == $Character::TYPE) {
		return $Character::class$;
	}
	$init($Double);
	if (type == $Double::TYPE) {
		return $Double::class$;
	}
	$init($Float);
	if (type == $Float::TYPE) {
		return $Float::class$;
	}
	$init($Integer);
	if (type == $Integer::TYPE) {
		return $Integer::class$;
	}
	$init($Long);
	if (type == $Long::TYPE) {
		return $Long::class$;
	}
	$init($Short);
	if (type == $Short::TYPE) {
		return $Short::class$;
	}
	$init($Boolean);
	if (type == $Boolean::TYPE) {
		return $Boolean::class$;
	}
	return type;
}

$Map* AnnotationType::memberTypes() {
	return this->memberTypes$;
}

$Map* AnnotationType::members() {
	return this->members$;
}

$Map* AnnotationType::memberDefaults() {
	return this->memberDefaults$;
}

$RetentionPolicy* AnnotationType::retention() {
	return this->retention$;
}

bool AnnotationType::isInherited() {
	return this->inherited;
}

$String* AnnotationType::toString() {
	return $str({"Annotation Type:\n   Member types: "_s, this->memberTypes$, "\n   Member defaults: "_s, this->memberDefaults$, "\n   Retention policy: "_s, this->retention$, "\n   Inherited: "_s, $$str(this->inherited)});
}

void clinit$AnnotationType($Class* class$) {
	AnnotationType::$assertionsDisabled = !AnnotationType::class$->desiredAssertionStatus();
}

AnnotationType::AnnotationType() {
}

$Class* AnnotationType::load$($String* name, bool initialize) {
	$loadClass(AnnotationType, name, initialize, &_AnnotationType_ClassInfo_, clinit$AnnotationType, allocate$AnnotationType);
	return class$;
}

$Class* AnnotationType::class$ = nullptr;

		} // annotation
	} // reflect
} // sun