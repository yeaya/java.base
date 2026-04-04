#include <sun/net/ConnectionResetException.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace sun {
	namespace net {

void ConnectionResetException::init$($String* msg) {
	$SocketException::init$(msg);
}

void ConnectionResetException::init$() {
	$SocketException::init$();
}

ConnectionResetException::ConnectionResetException() {
}

ConnectionResetException::ConnectionResetException(const ConnectionResetException& e) : $SocketException(e) {
}

void ConnectionResetException::throw$() {
	throw *this;
}

$Class* ConnectionResetException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectionResetException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConnectionResetException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConnectionResetException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.ConnectionResetException",
		"java.net.SocketException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionResetException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionResetException);
	});
	return class$;
}

$Class* ConnectionResetException::class$ = nullptr;

	} // net
} // sun