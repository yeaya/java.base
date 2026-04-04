#include <java/nio/channels/UnresolvedAddressException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void UnresolvedAddressException::init$() {
	$IllegalArgumentException::init$();
}

UnresolvedAddressException::UnresolvedAddressException() {
}

UnresolvedAddressException::UnresolvedAddressException(const UnresolvedAddressException& e) : $IllegalArgumentException(e) {
}

void UnresolvedAddressException::throw$() {
	throw *this;
}

$Class* UnresolvedAddressException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnresolvedAddressException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnresolvedAddressException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.UnresolvedAddressException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnresolvedAddressException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnresolvedAddressException);
	});
	return class$;
}

$Class* UnresolvedAddressException::class$ = nullptr;

		} // channels
	} // nio
} // java