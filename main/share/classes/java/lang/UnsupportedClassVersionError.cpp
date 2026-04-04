#include <java/lang/UnsupportedClassVersionError.h>
#include <java/lang/ClassFormatError.h>
#include <jcpp.h>

using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void UnsupportedClassVersionError::init$() {
	$ClassFormatError::init$();
}

void UnsupportedClassVersionError::init$($String* s) {
	$ClassFormatError::init$(s);
}

UnsupportedClassVersionError::UnsupportedClassVersionError() {
}

UnsupportedClassVersionError::UnsupportedClassVersionError(const UnsupportedClassVersionError& e) : $ClassFormatError(e) {
}

void UnsupportedClassVersionError::throw$() {
	throw *this;
}

$Class* UnsupportedClassVersionError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedClassVersionError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedClassVersionError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedClassVersionError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.UnsupportedClassVersionError",
		"java.lang.ClassFormatError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedClassVersionError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedClassVersionError);
	});
	return class$;
}

$Class* UnsupportedClassVersionError::class$ = nullptr;

	} // lang
} // java