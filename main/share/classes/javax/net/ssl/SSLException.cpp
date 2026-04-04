#include <javax/net/ssl/SSLException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

void SSLException::init$($String* reason) {
	$IOException::init$(reason);
}

void SSLException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	initCause(cause);
}

void SSLException::init$($Throwable* cause) {
	$IOException::init$(cause == nullptr ? ($String*)nullptr : $(cause->toString()));
	initCause(cause);
}

SSLException::SSLException() {
}

SSLException::SSLException(const SSLException& e) : $IOException(e) {
}

void SSLException::throw$() {
	throw *this;
}

$Class* SSLException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SSLException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SSLException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLException);
	});
	return class$;
}

$Class* SSLException::class$ = nullptr;

		} // ssl
	} // net
} // javax