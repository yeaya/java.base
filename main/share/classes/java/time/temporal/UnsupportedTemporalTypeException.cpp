#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace java {
	namespace time {
		namespace temporal {

void UnsupportedTemporalTypeException::init$($String* message) {
	$DateTimeException::init$(message);
}

void UnsupportedTemporalTypeException::init$($String* message, $Throwable* cause) {
	$DateTimeException::init$(message, cause);
}

UnsupportedTemporalTypeException::UnsupportedTemporalTypeException() {
}

UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(const UnsupportedTemporalTypeException& e) : $DateTimeException(e) {
}

void UnsupportedTemporalTypeException::throw$() {
	throw *this;
}

$Class* UnsupportedTemporalTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedTemporalTypeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedTemporalTypeException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedTemporalTypeException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.time.temporal.UnsupportedTemporalTypeException",
		"java.time.DateTimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedTemporalTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedTemporalTypeException);
	});
	return class$;
}

$Class* UnsupportedTemporalTypeException::class$ = nullptr;

		} // temporal
	} // time
} // java