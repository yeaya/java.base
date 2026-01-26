#include <ReadZeroBytes.h>

#include <ThrowingInputStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ThrowingInputStream = ::ThrowingInputStream;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadZeroBytes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReadZeroBytes, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadZeroBytes, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadZeroBytes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadZeroBytes",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadZeroBytes_MethodInfo_
};

$Object* allocate$ReadZeroBytes($Class* clazz) {
	return $of($alloc(ReadZeroBytes));
}

void ReadZeroBytes::init$() {
}

void ReadZeroBytes::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedInputStream, in, $new($BufferedInputStream, $$new($ThrowingInputStream)));
	in->read($$new($bytes, 0), 0, 0);
}

ReadZeroBytes::ReadZeroBytes() {
}

$Class* ReadZeroBytes::load$($String* name, bool initialize) {
	$loadClass(ReadZeroBytes, name, initialize, &_ReadZeroBytes_ClassInfo_, allocate$ReadZeroBytes);
	return class$;
}

$Class* ReadZeroBytes::class$ = nullptr;