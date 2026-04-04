#include <java/nio/channels/OverlappingFileLockException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void OverlappingFileLockException::init$() {
	$IllegalStateException::init$();
}

OverlappingFileLockException::OverlappingFileLockException() {
}

OverlappingFileLockException::OverlappingFileLockException(const OverlappingFileLockException& e) : $IllegalStateException(e) {
}

void OverlappingFileLockException::throw$() {
	throw *this;
}

$Class* OverlappingFileLockException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OverlappingFileLockException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OverlappingFileLockException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.OverlappingFileLockException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OverlappingFileLockException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OverlappingFileLockException);
	});
	return class$;
}

$Class* OverlappingFileLockException::class$ = nullptr;

		} // channels
	} // nio
} // java