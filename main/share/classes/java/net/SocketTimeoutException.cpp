#include <java/net/SocketTimeoutException.h>
#include <java/io/InterruptedIOException.h>
#include <jcpp.h>

using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void SocketTimeoutException::init$($String* msg) {
	$InterruptedIOException::init$(msg);
}

void SocketTimeoutException::init$() {
	$InterruptedIOException::init$();
}

SocketTimeoutException::SocketTimeoutException() {
}

SocketTimeoutException::SocketTimeoutException(const SocketTimeoutException& e) : $InterruptedIOException(e) {
}

void SocketTimeoutException::throw$() {
	throw *this;
}

$Class* SocketTimeoutException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketTimeoutException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SocketTimeoutException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketTimeoutException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.SocketTimeoutException",
		"java.io.InterruptedIOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTimeoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTimeoutException);
	});
	return class$;
}

$Class* SocketTimeoutException::class$ = nullptr;

	} // net
} // java