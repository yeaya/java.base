#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void IllegalFormatException::init$() {
	$IllegalArgumentException::init$();
}

IllegalFormatException::IllegalFormatException() {
}

IllegalFormatException::IllegalFormatException(const IllegalFormatException& e) : $IllegalArgumentException(e) {
}

void IllegalFormatException::throw$() {
	throw *this;
}

$Class* IllegalFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IllegalFormatException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllegalFormatException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatException);
	});
	return class$;
}

$Class* IllegalFormatException::class$ = nullptr;

	} // util
} // java