#include <java/nio/file/ClosedWatchServiceException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

void ClosedWatchServiceException::init$() {
	$IllegalStateException::init$();
}

ClosedWatchServiceException::ClosedWatchServiceException() {
}

ClosedWatchServiceException::ClosedWatchServiceException(const ClosedWatchServiceException& e) : $IllegalStateException(e) {
}

void ClosedWatchServiceException::throw$() {
	throw *this;
}

$Class* ClosedWatchServiceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedWatchServiceException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedWatchServiceException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ClosedWatchServiceException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedWatchServiceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedWatchServiceException);
	});
	return class$;
}

$Class* ClosedWatchServiceException::class$ = nullptr;

		} // file
	} // nio
} // java