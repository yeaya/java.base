#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace time {

void DateTimeException::init$($String* message) {
	$RuntimeException::init$(message);
}

void DateTimeException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

DateTimeException::DateTimeException() {
}

DateTimeException::DateTimeException(const DateTimeException& e) : $RuntimeException(e) {
}

void DateTimeException::throw$() {
	throw *this;
}

$Class* DateTimeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DateTimeException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DateTimeException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.time.DateTimeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeException);
	});
	return class$;
}

$Class* DateTimeException::class$ = nullptr;

	} // time
} // java