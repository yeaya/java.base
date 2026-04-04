#include <java/lang/reflect/GenericSignatureFormatError.h>
#include <java/lang/ClassFormatError.h>
#include <jcpp.h>

using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

void GenericSignatureFormatError::init$() {
	$ClassFormatError::init$();
}

void GenericSignatureFormatError::init$($String* message) {
	$ClassFormatError::init$(message);
}

GenericSignatureFormatError::GenericSignatureFormatError() {
}

GenericSignatureFormatError::GenericSignatureFormatError(const GenericSignatureFormatError& e) : $ClassFormatError(e) {
}

void GenericSignatureFormatError::throw$() {
	throw *this;
}

$Class* GenericSignatureFormatError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GenericSignatureFormatError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GenericSignatureFormatError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GenericSignatureFormatError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.reflect.GenericSignatureFormatError",
		"java.lang.ClassFormatError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GenericSignatureFormatError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenericSignatureFormatError);
	});
	return class$;
}

$Class* GenericSignatureFormatError::class$ = nullptr;

		} // reflect
	} // lang
} // java