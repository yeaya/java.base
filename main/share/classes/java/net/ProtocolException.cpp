#include <java/net/ProtocolException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void ProtocolException::init$($String* message) {
	$IOException::init$(message);
}

void ProtocolException::init$() {
	$IOException::init$();
}

ProtocolException::ProtocolException() {
}

ProtocolException::ProtocolException(const ProtocolException& e) : $IOException(e) {
}

void ProtocolException::throw$() {
	throw *this;
}

$Class* ProtocolException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProtocolException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProtocolException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProtocolException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.ProtocolException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProtocolException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProtocolException);
	});
	return class$;
}

$Class* ProtocolException::class$ = nullptr;

	} // net
} // java