#include <AnnotatedElementDelegate.h>

#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

$FieldInfo _AnnotatedElementDelegate_FieldInfo_[] = {
	{"base", "Ljava/lang/reflect/AnnotatedElement;", nullptr, $PRIVATE, $field(AnnotatedElementDelegate, base)},
	{}
};

$MethodInfo _AnnotatedElementDelegate_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $PUBLIC, $method(AnnotatedElementDelegate, init$, void, $AnnotatedElement*)},
	{"annotationArrayCheck", "([Ljava/lang/annotation/Annotation;[Ljava/lang/annotation/Annotation;Ljava/lang/Class;Ljava/lang/String;)I", "<T::Ljava/lang/annotation/Annotation;>([TT;[TT;Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/String;)I", $PRIVATE | $STATIC, $staticMethod(AnnotatedElementDelegate, annotationArrayCheck, int32_t, $AnnotationArray*, $AnnotationArray*, $Class*, $String*)},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(AnnotatedElementDelegate, getAnnotation, $Annotation*, $Class*)},
	{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(AnnotatedElementDelegate, getAnnotations, $AnnotationArray*)},
	{"getBase", "()Ljava/lang/reflect/AnnotatedElement;", nullptr, $PUBLIC, $virtualMethod(AnnotatedElementDelegate, getBase, $AnnotatedElement*)},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(AnnotatedElementDelegate, getDeclaredAnnotations, $AnnotationArray*)},
	{"testDelegate", "(LAnnotatedElementDelegate;Ljava/lang/Class;)I", "(LAnnotatedElementDelegate;Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)I", $STATIC, $staticMethod(AnnotatedElementDelegate, testDelegate, int32_t, AnnotatedElementDelegate*, $Class*)},
	{}
};

$ClassInfo _AnnotatedElementDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"AnnotatedElementDelegate",
	"java.lang.Object",
	"java.lang.reflect.AnnotatedElement",
	_AnnotatedElementDelegate_FieldInfo_,
	_AnnotatedElementDelegate_MethodInfo_
};

$Object* allocate$AnnotatedElementDelegate($Class* clazz) {
	return $of($alloc(AnnotatedElementDelegate));
}

void AnnotatedElementDelegate::init$($AnnotatedElement* base) {
	$Objects::requireNonNull(base);
	$set(this, base, base);
}

$Annotation* AnnotatedElementDelegate::getAnnotation($Class* annotationClass) {
	return $nc(this->base)->getAnnotation(annotationClass);
}

$AnnotationArray* AnnotatedElementDelegate::getAnnotations() {
	return $nc(this->base)->getAnnotations();
}

$AnnotationArray* AnnotatedElementDelegate::getDeclaredAnnotations() {
	return $nc(this->base)->getDeclaredAnnotations();
}

$AnnotatedElement* AnnotatedElementDelegate::getBase() {
	return this->base;
}

int32_t AnnotatedElementDelegate::testDelegate(AnnotatedElementDelegate* delegate, $Class* annotationClass) {
	$init(AnnotatedElementDelegate);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($AnnotatedElement, base, $nc(delegate)->getBase());
	$var($AnnotationArray, var$0, delegate->getDeclaredAnnotationsByType(annotationClass));
	failures += annotationArrayCheck(var$0, $($nc(base)->getDeclaredAnnotationsByType(annotationClass)), annotationClass, "Equality failure on getDeclaredAnnotationsByType(%s) on %s)%n"_s);
	$var($AnnotationArray, var$1, delegate->getAnnotationsByType(annotationClass));
	failures += annotationArrayCheck(var$1, $($nc(base)->getAnnotationsByType(annotationClass)), annotationClass, "Equality failure on getAnnotationsByType(%s) on %s)%n"_s);
	$var($Object, var$2, $of(delegate->getDeclaredAnnotation(annotationClass)));
	if (!$Objects::equals(var$2, $($nc(base)->getDeclaredAnnotation(annotationClass)))) {
		++failures;
		$nc($System::err)->printf("Equality failure on getDeclaredAnnotation(%s) on %s)%n"_s, $$new($ObjectArray, {
			$of(annotationClass),
			$of(delegate)
		}));
	}
	return failures;
}

int32_t AnnotatedElementDelegate::annotationArrayCheck($AnnotationArray* delegate, $AnnotationArray* base, $Class* annotationClass, $String* message) {
	$init(AnnotatedElementDelegate);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	if (!$Objects::deepEquals(delegate, base)) {
		failures = 1;
		$nc($System::err)->printf(message, $$new($ObjectArray, {
			$of(annotationClass),
			$of(delegate)
		}));
		$nc($System::err)->println($$str({"Base result:\t"_s, $($Arrays::toString(base))}));
		$nc($System::err)->println($$str({"Delegate result:\t "_s, $($Arrays::toString(delegate))}));
		$nc($System::err)->println();
	}
	return failures;
}

AnnotatedElementDelegate::AnnotatedElementDelegate() {
}

$Class* AnnotatedElementDelegate::load$($String* name, bool initialize) {
	$loadClass(AnnotatedElementDelegate, name, initialize, &_AnnotatedElementDelegate_ClassInfo_, allocate$AnnotatedElementDelegate);
	return class$;
}

$Class* AnnotatedElementDelegate::class$ = nullptr;