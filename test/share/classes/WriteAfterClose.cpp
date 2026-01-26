#include <WriteAfterClose.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WriteAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WriteAfterClose, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WriteAfterClose, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _WriteAfterClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteAfterClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WriteAfterClose_MethodInfo_
};

$Object* allocate$WriteAfterClose($Class* clazz) {
	return $of($alloc(WriteAfterClose));
}

void WriteAfterClose::init$() {
}

void WriteAfterClose::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedInputStream, in, $new($PipedInputStream));
	$var($PipedOutputStream, out, $new($PipedOutputStream, in));
	in->close();
	try {
		out->write((int32_t)u'a');
		$throwNew($Exception, "Should not allow write after close"_s);
	} catch ($IOException& e) {
	}
}

WriteAfterClose::WriteAfterClose() {
}

$Class* WriteAfterClose::load$($String* name, bool initialize) {
	$loadClass(WriteAfterClose, name, initialize, &_WriteAfterClose_ClassInfo_, allocate$WriteAfterClose);
	return class$;
}

$Class* WriteAfterClose::class$ = nullptr;