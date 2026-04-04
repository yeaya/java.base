#include <java/net/SocketException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void SocketException::init$($String* msg) {
	$IOException::init$(msg);
}

void SocketException::init$() {
	$IOException::init$();
}

SocketException::SocketException() {
}

SocketException::SocketException(const SocketException& e) : $IOException(e) {
}

void SocketException::throw$() {
	throw *this;
}

$Class* SocketException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SocketException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.SocketException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketException);
	});
	return class$;
}

$Class* SocketException::class$ = nullptr;

	} // net
} // java