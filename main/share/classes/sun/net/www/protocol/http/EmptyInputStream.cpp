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

$MethodInfo _EmptyInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(EmptyInputStream, init$, void)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(EmptyInputStream, available, int32_t)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(EmptyInputStream, read, int32_t)},
	{}
};

$ClassInfo _EmptyInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.EmptyInputStream",
	"java.io.InputStream",
	nullptr,
	nullptr,
	_EmptyInputStream_MethodInfo_
};

$Object* allocate$EmptyInputStream($Class* clazz) {
	return $of($alloc(EmptyInputStream));
}

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
	$loadClass(EmptyInputStream, name, initialize, &_EmptyInputStream_ClassInfo_, allocate$EmptyInputStream);
	return class$;
}

$Class* EmptyInputStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun