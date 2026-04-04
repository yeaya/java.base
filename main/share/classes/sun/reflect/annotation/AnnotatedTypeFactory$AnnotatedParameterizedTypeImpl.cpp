#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory.h>
#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

#undef BASE_LOCATION
#undef EMPTY_ANNOTATED_TYPE
#undef EMPTY_TYPE_ANNOTATION_ARRAY

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeAnnotationArray = $Array<::sun::reflect::annotation::TypeAnnotation>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AnnotatedTypeFactory = ::sun::reflect::annotation::AnnotatedTypeFactory;
using $AnnotatedTypeFactory$AnnotatedTypeBaseImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl;
using $TypeAnnotation = ::sun::reflect::annotation::TypeAnnotation;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString : public $Function {
	$class(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($ofnc(inst$)->toString());
	}
};
$Class* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString);
	});
	return class$;
}
$Class* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString::class$ = nullptr;

$AnnotationArray* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotationsByType(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getDeclaredAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getDeclaredAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getDeclaredAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotationsByType(annotation);
}

$Type* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getType() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getType();
}

bool AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::isAnnotationPresent($Class* annotationClass) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::isAnnotationPresent(annotationClass);
}

$Object* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::clone() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::clone();
}

void AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::finalize() {
	this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::finalize();
}

void AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::init$($ParameterizedType* type, $TypeAnnotation$LocationInfo* location, $TypeAnnotationArray* actualTypeAnnotations, $TypeAnnotationArray* allOnSameTargetTypeAnnotations, $AnnotatedElement* decl) {
	$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::init$(type, location, actualTypeAnnotations, allOnSameTargetTypeAnnotations, decl);
}

$AnnotatedTypeArray* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getAnnotatedActualTypeArguments() {
	$useLocalObjectStack();
	$var($TypeArray, arguments, $$nc(getParameterizedType())->getActualTypeArguments());
	$var($AnnotatedTypeArray, res, $new($AnnotatedTypeArray, $nc(arguments)->length));
	$init($AnnotatedTypeFactory);
	$Arrays::fill(res, $AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE);
	int32_t initialCapacity = $nc($(getTypeAnnotations()))->length;
	for (int32_t i = 0; i < res->length; ++i) {
		$var($List, l, $new($ArrayList, initialCapacity));
		$var($TypeAnnotation$LocationInfo, newLoc, $AnnotatedTypeFactory::nestingForType(arguments->get(i), $($$nc(getLocation())->pushTypeArg((int8_t)i))));
		{
			$var($TypeAnnotationArray, arr$, getTypeAnnotations());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($TypeAnnotation, t, arr$->get(i$));
				if ($$nc($nc(t)->getLocationInfo())->isSameLocationInfo(newLoc)) {
					l->add(t);
				}
			}
		}
		$var($Type, var$0, arguments->get(i));
		$var($TypeAnnotationArray, var$1, $cast($TypeAnnotationArray, l->toArray($AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY)));
		$var($TypeAnnotationArray, var$2, getTypeAnnotations());
		res->set(i, $($AnnotatedTypeFactory::buildAnnotatedType(var$0, newLoc, var$1, var$2, $(getDecl()))));
	}
	return res;
}

$AnnotatedType* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getAnnotatedOwnerType() {
	$useLocalObjectStack();
	$var($Type, owner, $$nc(getParameterizedType())->getOwnerType());
	if (owner == nullptr) {
		return nullptr;
	}
	$var($TypeAnnotation$LocationInfo, outerLoc, $$nc(getLocation())->popLocation((int8_t)1));
	if (outerLoc == nullptr) {
		$init($AnnotatedTypeFactory);
		return $AnnotatedTypeFactory::buildAnnotatedType(owner, $TypeAnnotation$LocationInfo::BASE_LOCATION, $AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, $AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, $(getDecl()));
	}
	$var($TypeAnnotationArray, all, getTypeAnnotations());
	$var($List, l, $new($ArrayList, $nc(all)->length));
	{
		$var($TypeAnnotationArray, arr$, all);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeAnnotation, t, arr$->get(i$));
			if ($$nc($nc(t)->getLocationInfo())->isSameLocationInfo(outerLoc)) {
				l->add(t);
			}
		}
	}
	$init($AnnotatedTypeFactory);
	$var($TypeAnnotationArray, var$0, $cast($TypeAnnotationArray, l->toArray($AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY)));
	return $AnnotatedTypeFactory::buildAnnotatedType(owner, outerLoc, var$0, all, $(getDecl()));
}

$ParameterizedType* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::getParameterizedType() {
	return $cast($ParameterizedType, getType());
}

$String* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($(annotationsToString($(getAnnotations()), false)));
	$var($Type, t, $$nc(getParameterizedType())->getRawType());
	sb->append($($nc(t)->getTypeName()));
	$var($AnnotatedTypeArray, typeArgs, getAnnotatedActualTypeArguments());
	if ($nc(typeArgs)->length > 0) {
		sb->append($$cast($String, $$nc($$nc($Stream::of(typeArgs))->map($$new(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString)))->collect($($Collectors::joining(", "_s, "<"_s, ">"_s)))));
	}
	return sb->toString();
}

bool AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::equals(Object$* o) {
	$useLocalObjectStack();
	if ($instanceOf($AnnotatedParameterizedType, o)) {
		$var($AnnotatedParameterizedType, that, $cast($AnnotatedParameterizedType, o));
		bool var$0 = equalsTypeAndAnnotations(that);
		if (var$0) {
			$var($ObjectArray, var$1, getAnnotatedActualTypeArguments());
			var$0 = $Arrays::equals(var$1, $(that->getAnnotatedActualTypeArguments()));
		}
		return var$0;
	} else {
		return false;
	}
}

int32_t AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::hashCode() {
	int32_t var$0 = baseHashCode();
	return var$0 ^ $Objects::hash($$cast($ObjectArray, getAnnotatedActualTypeArguments()));
}

AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl() {
}

$Class* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString")) {
			return AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl$$Lambda$toString::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
		{"*getType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/reflect/ParameterizedType;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, 0, $method(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, init$, void, $ParameterizedType*, $TypeAnnotation$LocationInfo*, $TypeAnnotationArray*, $TypeAnnotationArray*, $AnnotatedElement*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, equals, bool, Object$*)},
		{"getAnnotatedActualTypeArguments", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, getAnnotatedActualTypeArguments, $AnnotatedTypeArray*)},
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, getAnnotatedOwnerType, $AnnotatedType*)},
		{"getParameterizedType", "()Ljava/lang/reflect/ParameterizedType;", nullptr, $PRIVATE, $method(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, getParameterizedType, $ParameterizedType*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, hashCode, int32_t)},
		{"*isAnnotationPresent", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedParameterizedTypeImpl", $PRIVATE | $STATIC | $FINAL},
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeBaseImpl", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl",
		"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl",
		"java.lang.reflect.AnnotatedParameterizedType",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotatedTypeFactory"
	};
	$loadClass(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl));
	});
	return class$;
}

$Class* AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl::class$ = nullptr;

		} // annotation
	} // reflect
} // sun