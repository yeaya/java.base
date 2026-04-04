#include <java/nio/channels/IllegalSelectorException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void IllegalSelectorException::init$() {
	$IllegalArgumentException::init$();
}

IllegalSelectorException::IllegalSelectorException() {
}

IllegalSelectorException::IllegalSelectorException(const IllegalSelectorException& e) : $IllegalArgumentException(e) {
}

void IllegalSelectorException::throw$() {
	throw *this;
}

$Class* IllegalSelectorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalSelectorException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalSelectorException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.IllegalSelectorException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalSelectorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalSelectorException);
	});
	return class$;
}

$Class* IllegalSelectorException::class$ = nullptr;

		} // channels
	} // nio
} // java