#include <java/nio/channels/UnsupportedAddressTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void UnsupportedAddressTypeException::init$() {
	$IllegalArgumentException::init$();
}

UnsupportedAddressTypeException::UnsupportedAddressTypeException() {
}

UnsupportedAddressTypeException::UnsupportedAddressTypeException(const UnsupportedAddressTypeException& e) : $IllegalArgumentException(e) {
}

void UnsupportedAddressTypeException::throw$() {
	throw *this;
}

$Class* UnsupportedAddressTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedAddressTypeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedAddressTypeException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.UnsupportedAddressTypeException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedAddressTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedAddressTypeException);
	});
	return class$;
}

$Class* UnsupportedAddressTypeException::class$ = nullptr;

		} // channels
	} // nio
} // java