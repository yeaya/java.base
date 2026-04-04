#include <java/nio/charset/CoderMalfunctionError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

void CoderMalfunctionError::init$($Exception* cause) {
	$Error::init$(cause);
}

CoderMalfunctionError::CoderMalfunctionError() {
}

CoderMalfunctionError::CoderMalfunctionError(const CoderMalfunctionError& e) : $Error(e) {
}

void CoderMalfunctionError::throw$() {
	throw *this;
}

$Class* CoderMalfunctionError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderMalfunctionError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(CoderMalfunctionError, init$, void, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.CoderMalfunctionError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CoderMalfunctionError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CoderMalfunctionError);
	});
	return class$;
}

$Class* CoderMalfunctionError::class$ = nullptr;

		} // charset
	} // nio
} // java