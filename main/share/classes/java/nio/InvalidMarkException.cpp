#include <java/nio/InvalidMarkException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {

void InvalidMarkException::init$() {
	$IllegalStateException::init$();
}

InvalidMarkException::InvalidMarkException() {
}

InvalidMarkException::InvalidMarkException(const InvalidMarkException& e) : $IllegalStateException(e) {
}

void InvalidMarkException::throw$() {
	throw *this;
}

$Class* InvalidMarkException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidMarkException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidMarkException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.InvalidMarkException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidMarkException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidMarkException);
	});
	return class$;
}

$Class* InvalidMarkException::class$ = nullptr;

	} // nio
} // java