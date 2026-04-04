#include <java/lang/annotation/AnnotationTypeMismatchException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace lang {
		namespace annotation {

void AnnotationTypeMismatchException::init$($Method* element, $String* foundType) {
	$RuntimeException::init$($$str({"Incorrectly typed data found for annotation element "_s, element, " (Found data of type "_s, foundType, ")"_s}));
	$set(this, element$, element);
	$set(this, foundType$, foundType);
}

$Method* AnnotationTypeMismatchException::element() {
	return this->element$;
}

$String* AnnotationTypeMismatchException::foundType() {
	return this->foundType$;
}

AnnotationTypeMismatchException::AnnotationTypeMismatchException() {
}

AnnotationTypeMismatchException::AnnotationTypeMismatchException(const AnnotationTypeMismatchException& e) : $RuntimeException(e) {
}

void AnnotationTypeMismatchException::throw$() {
	throw *this;
}

$Class* AnnotationTypeMismatchException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnnotationTypeMismatchException, serialVersionUID)},
		{"element", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(AnnotationTypeMismatchException, element$)},
		{"foundType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AnnotationTypeMismatchException, foundType$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AnnotationTypeMismatchException, init$, void, $Method*, $String*)},
		{"element", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AnnotationTypeMismatchException, element, $Method*)},
		{"foundType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationTypeMismatchException, foundType, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.annotation.AnnotationTypeMismatchException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationTypeMismatchException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationTypeMismatchException);
	});
	return class$;
}

$Class* AnnotationTypeMismatchException::class$ = nullptr;

		} // annotation
	} // lang
} // java