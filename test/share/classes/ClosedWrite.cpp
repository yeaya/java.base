#include <ClosedWrite.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedWrite::*)()>(&ClosedWrite::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedWrite::main)), "java.lang.Exception"},
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
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	os->connect(is);
	os->close();
	try {
		os->write(10);
		$throwNew($RuntimeException, "No IOException upon write on closed Stream"_s);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($System);
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