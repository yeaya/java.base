#include <java/net/PortUnreachableException.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace java {
	namespace net {

void PortUnreachableException::init$($String* msg) {
	$SocketException::init$(msg);
}

void PortUnreachableException::init$() {
	$SocketException::init$();
}

PortUnreachableException::PortUnreachableException() {
}

PortUnreachableException::PortUnreachableException(const PortUnreachableException& e) : $SocketException(e) {
}

void PortUnreachableException::throw$() {
	throw *this;
}

$Class* PortUnreachableException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortUnreachableException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PortUnreachableException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(PortUnreachableException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.PortUnreachableException",
		"java.net.SocketException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PortUnreachableException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortUnreachableException);
	});
	return class$;
}

$Class* PortUnreachableException::class$ = nullptr;

	} // net
} // java