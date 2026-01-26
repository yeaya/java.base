#include <ThrowingInputStream.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ThrowingInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThrowingInputStream, init$, void)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ThrowingInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ThrowingInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _ThrowingInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"ThrowingInputStream",
	"java.io.InputStream",
	nullptr,
	nullptr,
	_ThrowingInputStream_MethodInfo_
};

$Object* allocate$ThrowingInputStream($Class* clazz) {
	return $of($alloc(ThrowingInputStream));
}

void ThrowingInputStream::init$() {
	$InputStream::init$();
}

int32_t ThrowingInputStream::read() {
	return 0;
}

int32_t ThrowingInputStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($RuntimeException, "Read invoked for len == 0"_s);
	$shouldNotReachHere();
}

ThrowingInputStream::ThrowingInputStream() {
}

$Class* ThrowingInputStream::load$($String* name, bool initialize) {
	$loadClass(ThrowingInputStream, name, initialize, &_ThrowingInputStream_ClassInfo_, allocate$ThrowingInputStream);
	return class$;
}

$Class* ThrowingInputStream::class$ = nullptr;