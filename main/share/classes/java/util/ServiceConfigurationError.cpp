#include <java/util/ServiceConfigurationError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void ServiceConfigurationError::init$($String* msg) {
	$Error::init$(msg);
}

void ServiceConfigurationError::init$($String* msg, $Throwable* cause) {
	$Error::init$(msg, cause);
}

ServiceConfigurationError::ServiceConfigurationError() {
}

ServiceConfigurationError::ServiceConfigurationError(const ServiceConfigurationError& e) : $Error(e) {
}

void ServiceConfigurationError::throw$() {
	throw *this;
}

$Class* ServiceConfigurationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceConfigurationError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServiceConfigurationError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ServiceConfigurationError, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.ServiceConfigurationError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceConfigurationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceConfigurationError);
	});
	return class$;
}

$Class* ServiceConfigurationError::class$ = nullptr;

	} // util
} // java