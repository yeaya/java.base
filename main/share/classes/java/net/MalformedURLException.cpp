#include <java/net/MalformedURLException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void MalformedURLException::init$() {
	$IOException::init$();
}

void MalformedURLException::init$($String* msg) {
	$IOException::init$(msg);
}

MalformedURLException::MalformedURLException() {
}

MalformedURLException::MalformedURLException(const MalformedURLException& e) : $IOException(e) {
}

void MalformedURLException::throw$() {
	throw *this;
}

$Class* MalformedURLException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedURLException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MalformedURLException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedURLException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.MalformedURLException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedURLException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedURLException);
	});
	return class$;
}

$Class* MalformedURLException::class$ = nullptr;

	} // net
} // java