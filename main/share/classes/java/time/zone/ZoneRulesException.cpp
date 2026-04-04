#include <java/time/zone/ZoneRulesException.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace java {
	namespace time {
		namespace zone {

void ZoneRulesException::init$($String* message) {
	$DateTimeException::init$(message);
}

void ZoneRulesException::init$($String* message, $Throwable* cause) {
	$DateTimeException::init$(message, cause);
}

ZoneRulesException::ZoneRulesException() {
}

ZoneRulesException::ZoneRulesException(const ZoneRulesException& e) : $DateTimeException(e) {
}

void ZoneRulesException::throw$() {
	throw *this;
}

$Class* ZoneRulesException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneRulesException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZoneRulesException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ZoneRulesException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.time.zone.ZoneRulesException",
		"java.time.DateTimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZoneRulesException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZoneRulesException);
	});
	return class$;
}

$Class* ZoneRulesException::class$ = nullptr;

		} // zone
	} // time
} // java