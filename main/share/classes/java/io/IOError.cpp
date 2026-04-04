#include <java/io/IOError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void IOError::init$($Throwable* cause) {
	$Error::init$(cause);
}

IOError::IOError() {
}

IOError::IOError(const IOError& e) : $Error(e) {
}

void IOError::throw$() {
	throw *this;
}

$Class* IOError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IOError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IOError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.IOError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IOError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IOError);
	});
	return class$;
}

$Class* IOError::class$ = nullptr;

	} // io
} // java