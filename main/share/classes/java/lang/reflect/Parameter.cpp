#include <java/lang/reflect/Parameter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <sun/reflect/annotation/AnnotationSupport.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Executable = ::java::lang::reflect::Executable;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $AnnotationSupport = ::sun::reflect::annotation::AnnotationSupport;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _Parameter_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Parameter, name)},
	{"modifiers", "I", nullptr, $PRIVATE | $FINAL, $field(Parameter, modifiers)},
	{"executable", "Ljava/lang/reflect/Executable;", nullptr, $PRIVATE | $FINAL, $field(Parameter, executable)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(Parameter, index)},
	{"parameterTypeCache", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Parameter, parameterTypeCache)},
	{"parameterClassCache", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(Parameter, parameterClassCache)},
	{"declaredAnnotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $TRANSIENT, $field(Parameter, declaredAnnotations$)},
	{}
};

$MethodInfo _Parameter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/reflect/Executable;I)V", nullptr, 0, $method(static_cast<void(Parameter::*)($String*,int32_t,$Executable*,int32_t)>(&Parameter::init$))},
	{"declaredAnnotations", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Map*(Parameter::*)()>(&Parameter::declaredAnnotations))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAnnotatedType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $method(static_cast<$AnnotatedType*(Parameter::*)()>(&Parameter::getAnnotatedType))},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getDeclaringExecutable", "()Ljava/lang/reflect/Executable;", nullptr, $PUBLIC, $method(static_cast<$Executable*(Parameter::*)()>(&Parameter::getDeclaringExecutable))},
	{"getModifiers", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Parameter::*)()>(&Parameter::getModifiers))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Parameter::*)()>(&Parameter::getName))},
	{"getParameterizedType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $method(static_cast<$Type*(Parameter::*)()>(&Parameter::getParameterizedType))},
	{"getRealName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(Parameter::*)()>(&Parameter::getRealName))},
	{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Parameter::*)()>(&Parameter::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isImplicit", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Parameter::*)()>(&Parameter::isImplicit))},
	{"isNamePresent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Parameter::*)()>(&Parameter::isNamePresent))},
	{"isSynthetic", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Parameter::*)()>(&Parameter::isSynthetic))},
	{"isVarArgs", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Parameter::*)()>(&Parameter::isVarArgs))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Parameter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.reflect.Parameter",
	"java.lang.Object",
	"java.lang.reflect.AnnotatedElement",
	_Parameter_FieldInfo_,
	_Parameter_MethodInfo_
};

$Object* allocate$Parameter($Class* clazz) {
	return $of($alloc(Parameter));
}

void Parameter::init$($String* name, int32_t modifiers, $Executable* executable, int32_t index) {
	$set(this, name, name);
	this->modifiers = modifiers;
	$set(this, executable, executable);
	this->index = index;
}

bool Parameter::equals(Object$* obj) {
	$var(Parameter, other, nullptr);
	bool var$2 = $instanceOf(Parameter, obj);
	if (var$2) {
		$assign(other, $cast(Parameter, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $nc($of($nc(other)->executable))->equals(this->executable);
	return var$0 && other->index == this->index;
}

int32_t Parameter::hashCode() {
	return $nc($of(this->executable))->hashCode() ^ this->index;
}

bool Parameter::isNamePresent() {
	return $nc(this->executable)->hasRealParameterData() && this->name != nullptr;
}

$String* Parameter::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($Type, type, getParameterizedType());
	$var($String, typename$, $nc(type)->getTypeName());
	sb->append($($Modifier::toString(getModifiers())));
	if (0 != this->modifiers) {
		sb->append(u' ');
	}
	if (isVarArgs()) {
		sb->append($($nc(typename$)->replaceFirst("\\[\\]$"_s, "..."_s)));
	} else {
		sb->append(typename$);
	}
	sb->append(u' ');
	sb->append($(getName()));
	return sb->toString();
}

$Executable* Parameter::getDeclaringExecutable() {
	return this->executable;
}

int32_t Parameter::getModifiers() {
	return this->modifiers;
}

$String* Parameter::getName() {
	if (this->name == nullptr || $nc(this->name)->isEmpty()) {
		return $str({"arg"_s, $$str(this->index)});
	} else {
		return this->name;
	}
}

$String* Parameter::getRealName() {
	return this->name;
}

$Type* Parameter::getParameterizedType() {
	$var($Type, tmp, this->parameterTypeCache);
	if (nullptr == tmp) {
		$assign(tmp, $nc($($nc(this->executable)->getAllGenericParameterTypes()))->get(this->index));
		$set(this, parameterTypeCache, tmp);
	}
	return tmp;
}

$Class* Parameter::getType() {
	$Class* tmp = this->parameterClassCache;
	if (nullptr == tmp) {
		tmp = $nc($($nc(this->executable)->getParameterTypes()))->get(this->index);
		$set(this, parameterClassCache, tmp);
	}
	return tmp;
}

$AnnotatedType* Parameter::getAnnotatedType() {
	return $nc($($nc(this->executable)->getAnnotatedParameterTypes()))->get(this->index);
}

bool Parameter::isImplicit() {
	return $Modifier::isMandated(getModifiers());
}

bool Parameter::isSynthetic() {
	return $Modifier::isSynthetic(getModifiers());
}

bool Parameter::isVarArgs() {
	bool var$0 = $nc(this->executable)->isVarArgs();
	return var$0 && this->index == $nc(this->executable)->getParameterCount() - 1;
}

$Annotation* Parameter::getAnnotation($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $cast($Annotation, annotationClass->cast($($nc($(declaredAnnotations()))->get(annotationClass))));
}

$AnnotationArray* Parameter::getAnnotationsByType($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $AnnotationSupport::getDirectlyAndIndirectlyPresent($(declaredAnnotations()), annotationClass);
}

$AnnotationArray* Parameter::getDeclaredAnnotations() {
	return $nc($($nc(this->executable)->getParameterAnnotations()))->get(this->index);
}

$Annotation* Parameter::getDeclaredAnnotation($Class* annotationClass) {
	return getAnnotation(annotationClass);
}

$AnnotationArray* Parameter::getDeclaredAnnotationsByType($Class* annotationClass) {
	return getAnnotationsByType(annotationClass);
}

$AnnotationArray* Parameter::getAnnotations() {
	return getDeclaredAnnotations();
}

$Map* Parameter::declaredAnnotations() {
	$synchronized(this) {
		if (nullptr == this->declaredAnnotations$) {
			$set(this, declaredAnnotations$, $new($HashMap));
			{
				$var($AnnotationArray, arr$, getDeclaredAnnotations());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Annotation, a, arr$->get(i$));
					$nc(this->declaredAnnotations$)->put($nc(a)->annotationType(), a);
				}
			}
		}
		return this->declaredAnnotations$;
	}
}

Parameter::Parameter() {
}

$Class* Parameter::load$($String* name, bool initialize) {
	$loadClass(Parameter, name, initialize, &_Parameter_ClassInfo_, allocate$Parameter);
	return class$;
}

$Class* Parameter::class$ = nullptr;

		} // reflect
	} // lang
} // java