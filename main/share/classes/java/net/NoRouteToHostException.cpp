#include <java/net/NoRouteToHostException.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace java {
	namespace net {

void NoRouteToHostException::init$($String* msg) {
	$SocketException::init$(msg);
}

void NoRouteToHostException::init$() {
	$SocketException::init$();
}

NoRouteToHostException::NoRouteToHostException() {
}

NoRouteToHostException::NoRouteToHostException(const NoRouteToHostException& e) : $SocketException(e) {
}

void NoRouteToHostException::throw$() {
	throw *this;
}

$Class* NoRouteToHostException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoRouteToHostException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoRouteToHostException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoRouteToHostException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.NoRouteToHostException",
		"java.net.SocketException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoRouteToHostException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoRouteToHostException);
	});
	return class$;
}

$Class* NoRouteToHostException::class$ = nullptr;

	} // net
} // java