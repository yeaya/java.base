#include <sun/net/www/protocol/http/EmptyInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void EmptyInputStream::init$() {
	$InputStream::init$();
}

int32_t EmptyInputStream::available() {
	return 0;
}

int32_t EmptyInputStream::read() {
	return -1;
}

EmptyInputStream::EmptyInputStream() {
}

$Class* EmptyInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EmptyInputStream, init$, void)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(EmptyInputStream, available, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(EmptyInputStream, read, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.EmptyInputStream",
		"java.io.InputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EmptyInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyInputStream);
	});
	return class$;
}

$Class* EmptyInputStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun