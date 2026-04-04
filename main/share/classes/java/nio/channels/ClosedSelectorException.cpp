#include <java/nio/channels/ClosedSelectorException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void ClosedSelectorException::init$() {
	$IllegalStateException::init$();
}

ClosedSelectorException::ClosedSelectorException() {
}

ClosedSelectorException::ClosedSelectorException(const ClosedSelectorException& e) : $IllegalStateException(e) {
}

void ClosedSelectorException::throw$() {
	throw *this;
}

$Class* ClosedSelectorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedSelectorException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedSelectorException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ClosedSelectorException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedSelectorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedSelectorException);
	});
	return class$;
}

$Class* ClosedSelectorException::class$ = nullptr;

		} // channels
	} // nio
} // java