#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

void AnnotationFormatError::init$($String* message) {
	$Error::init$(message);
}

void AnnotationFormatError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

void AnnotationFormatError::init$($Throwable* cause) {
	$Error::init$(cause);
}

AnnotationFormatError::AnnotationFormatError() {
}

AnnotationFormatError::AnnotationFormatError(const AnnotationFormatError& e) : $Error(e) {
}

void AnnotationFormatError::throw$() {
	throw *this;
}

$Class* AnnotationFormatError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnnotationFormatError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AnnotationFormatError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(AnnotationFormatError, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(AnnotationFormatError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.annotation.AnnotationFormatError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationFormatError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationFormatError);
	});
	return class$;
}

$Class* AnnotationFormatError::class$ = nullptr;

		} // annotation
	} // lang
} // java