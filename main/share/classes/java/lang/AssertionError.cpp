#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void AssertionError::init$() {
	$Error::init$();
}

void AssertionError::init$($String* detailMessage) {
	$Error::init$(detailMessage);
}

void AssertionError::init$(Object$* detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
	if ($instanceOf($Throwable, detailMessage)) {
		initCause($cast($Throwable, detailMessage));
	}
}

void AssertionError::init$(bool detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(char16_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(int32_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(int64_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(float detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(double detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

AssertionError::AssertionError() {
}

AssertionError::AssertionError(const AssertionError& e) : $Error(e) {
}

void AssertionError::throw$() {
	throw *this;
}

$Class* AssertionError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AssertionError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AssertionError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(AssertionError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, Object$*)},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, bool)},
		{"<init>", "(C)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, char16_t)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, int32_t)},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, int64_t)},
		{"<init>", "(F)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, float)},
		{"<init>", "(D)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, double)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(AssertionError, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.AssertionError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AssertionError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssertionError);
	});
	return class$;
}

$Class* AssertionError::class$ = nullptr;

	} // lang
} // java