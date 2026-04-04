#include <java/net/UnknownHostException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void UnknownHostException::init$($String* message) {
	$IOException::init$(message);
}

void UnknownHostException::init$() {
	$IOException::init$();
}

UnknownHostException::UnknownHostException() {
}

UnknownHostException::UnknownHostException(const UnknownHostException& e) : $IOException(e) {
}

void UnknownHostException::throw$() {
	throw *this;
}

$Class* UnknownHostException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownHostException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownHostException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnknownHostException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.UnknownHostException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownHostException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownHostException);
	});
	return class$;
}

$Class* UnknownHostException::class$ = nullptr;

	} // net
} // java