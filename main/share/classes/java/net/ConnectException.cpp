#include <java/net/ConnectException.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace java {
	namespace net {

void ConnectException::init$($String* msg) {
	$SocketException::init$(msg);
}

void ConnectException::init$() {
	$SocketException::init$();
}

ConnectException::ConnectException() {
}

ConnectException::ConnectException(const ConnectException& e) : $SocketException(e) {
}

void ConnectException::throw$() {
	throw *this;
}

$Class* ConnectException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConnectException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConnectException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.ConnectException",
		"java.net.SocketException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectException);
	});
	return class$;
}

$Class* ConnectException::class$ = nullptr;

	} // net
} // java