#include <java/net/UnknownServiceException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void UnknownServiceException::init$() {
	$IOException::init$();
}

void UnknownServiceException::init$($String* msg) {
	$IOException::init$(msg);
}

UnknownServiceException::UnknownServiceException() {
}

UnknownServiceException::UnknownServiceException(const UnknownServiceException& e) : $IOException(e) {
}

void UnknownServiceException::throw$() {
	throw *this;
}

$Class* UnknownServiceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownServiceException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnknownServiceException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownServiceException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.UnknownServiceException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownServiceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownServiceException);
	});
	return class$;
}

$Class* UnknownServiceException::class$ = nullptr;

	} // net
} // java