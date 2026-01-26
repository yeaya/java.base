#include <ClosedWrite.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedWrite, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedWrite, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ClosedWrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedWrite",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedWrite_MethodInfo_
};

$Object* allocate$ClosedWrite($Class* clazz) {
	return $of($alloc(ClosedWrite));
}

void ClosedWrite::init$() {
}

void ClosedWrite::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	os->connect(is);
	os->close();
	try {
		os->write(10);
		$throwNew($RuntimeException, "No IOException upon write on closed Stream"_s);
	} catch ($IOException& e) {
		$nc($System::err)->println("Test passed: IOException thrown"_s);
	}
}

ClosedWrite::ClosedWrite() {
}

$Class* ClosedWrite::load$($String* name, bool initialize) {
	$loadClass(ClosedWrite, name, initialize, &_ClosedWrite_ClassInfo_, allocate$ClosedWrite);
	return class$;
}

$Class* ClosedWrite::class$ = nullptr;