#include <java/lang/reflect/AnnotatedElement.h>

#include <java/io/Serializable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/reflect/annotation/AnnotationSupport.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AnnotationSupport = ::sun::reflect::annotation::AnnotationSupport;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;

namespace java {
	namespace lang {
		namespace reflect {

class AnnotatedElement$$Lambda$annotationType : public $Function {
	$class(AnnotatedElement$$Lambda$annotationType, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Annotation, inst$)->annotationType());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AnnotatedElement$$Lambda$annotationType>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AnnotatedElement$$Lambda$annotationType::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotatedElement$$Lambda$annotationType::*)()>(&AnnotatedElement$$Lambda$annotationType::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AnnotatedElement$$Lambda$annotationType::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.reflect.AnnotatedElement$$Lambda$annotationType",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* AnnotatedElement$$Lambda$annotationType::load$($String* name, bool initialize) {
	$loadClass(AnnotatedElement$$Lambda$annotationType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AnnotatedElement$$Lambda$annotationType::class$ = nullptr;

class AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1 : public $BinaryOperator {
	$class(AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* first, Object$* second) override {
		 return $of(AnnotatedElement::lambda$getDeclaredAnnotationsByType$0($cast($Annotation, first), $cast($Annotation, second)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::*)()>(&AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.reflect.AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::load$($String* name, bool initialize) {
	$loadClass(AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::class$ = nullptr;

class AnnotatedElement$$Lambda$LinkedHashMap$2 : public $Supplier {
	$class(AnnotatedElement$$Lambda$LinkedHashMap$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($LinkedHashMap));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AnnotatedElement$$Lambda$LinkedHashMap$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AnnotatedElement$$Lambda$LinkedHashMap$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotatedElement$$Lambda$LinkedHashMap$2::*)()>(&AnnotatedElement$$Lambda$LinkedHashMap$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AnnotatedElement$$Lambda$LinkedHashMap$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.reflect.AnnotatedElement$$Lambda$LinkedHashMap$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* AnnotatedElement$$Lambda$LinkedHashMap$2::load$($String* name, bool initialize) {
	$loadClass(AnnotatedElement$$Lambda$LinkedHashMap$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AnnotatedElement$$Lambda$LinkedHashMap$2::class$ = nullptr;

$MethodInfo _AnnotatedElement_MethodInfo_[] = {
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"isAnnotationPresent", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Z", $PUBLIC},
	{"lambda$getDeclaredAnnotationsByType$0", "(Ljava/lang/annotation/Annotation;Ljava/lang/annotation/Annotation;)Ljava/lang/annotation/Annotation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Annotation*(*)($Annotation*,$Annotation*)>(&AnnotatedElement::lambda$getDeclaredAnnotationsByType$0))},
	{}
};

$ClassInfo _AnnotatedElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedElement",
	nullptr,
	nullptr,
	nullptr,
	_AnnotatedElement_MethodInfo_
};

$Object* allocate$AnnotatedElement($Class* clazz) {
	return $of($alloc(AnnotatedElement));
}

bool AnnotatedElement::isAnnotationPresent($Class* annotationClass) {
	return getAnnotation(annotationClass) != nullptr;
}

$AnnotationArray* AnnotatedElement::getAnnotationsByType($Class* annotationClass) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationArray, result, getDeclaredAnnotationsByType(annotationClass));
	if ($nc(result)->length == 0 && $instanceOf($Class, this) && $nc($($AnnotationType::getInstance(annotationClass)))->isInherited()) {
		$Class* superClass = $nc(($cast($Class, this)))->getSuperclass();
		if (superClass != nullptr) {
			$assign(result, superClass->getAnnotationsByType(annotationClass));
		}
	}
	return result;
}

$Annotation* AnnotatedElement::getDeclaredAnnotation($Class* annotationClass) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(annotationClass);
	{
		$var($AnnotationArray, arr$, getDeclaredAnnotations());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Annotation, annotation, arr$->get(i$));
			{
				if ($of(annotationClass)->equals($nc(annotation)->annotationType())) {
					return $cast($Annotation, annotationClass->cast(annotation));
				}
			}
		}
	}
	return nullptr;
}

$AnnotationArray* AnnotatedElement::getDeclaredAnnotationsByType($Class* annotationClass) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(annotationClass);
	$var($Function, var$0, static_cast<$Function*>($new(AnnotatedElement$$Lambda$annotationType)));
	$var($Function, var$1, $Function::identity());
	$var($BinaryOperator, var$2, (static_cast<$BinaryOperator*>($new(AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1))));
	return $AnnotationSupport::getDirectlyAndIndirectlyPresent($cast($Map, $($nc($($Arrays::stream($(getDeclaredAnnotations()))))->collect($($Collectors::toMap(var$0, var$1, var$2, static_cast<$Supplier*>($$new(AnnotatedElement$$Lambda$LinkedHashMap$2))))))), annotationClass);
}

$Annotation* AnnotatedElement::lambda$getDeclaredAnnotationsByType$0($Annotation* first, $Annotation* second) {
	return first;
}

$Class* AnnotatedElement::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AnnotatedElement$$Lambda$annotationType::classInfo$.name)) {
			return AnnotatedElement$$Lambda$annotationType::load$(name, initialize);
		}
		if (name->equals(AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::classInfo$.name)) {
			return AnnotatedElement$$Lambda$lambda$getDeclaredAnnotationsByType$0$1::load$(name, initialize);
		}
		if (name->equals(AnnotatedElement$$Lambda$LinkedHashMap$2::classInfo$.name)) {
			return AnnotatedElement$$Lambda$LinkedHashMap$2::load$(name, initialize);
		}
	}
	$loadClass(AnnotatedElement, name, initialize, &_AnnotatedElement_ClassInfo_, allocate$AnnotatedElement);
	return class$;
}

$Class* AnnotatedElement::class$ = nullptr;

		} // reflect
	} // lang
} // java