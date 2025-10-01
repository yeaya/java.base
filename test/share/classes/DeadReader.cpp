#include <DeadReader.h>

#include <LazyReader.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LazyReader = ::LazyReader;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DeadReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeadReader::*)()>(&DeadReader::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeadReader::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DeadReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeadReader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DeadReader_MethodInfo_
};

$Object* allocate$DeadReader($Class* clazz) {
	return $of($alloc(DeadReader));
}

void DeadReader::init$() {
}

void DeadReader::main($StringArray* argv) {
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	is->connect(os);
	$var($LazyReader, lr, $new($LazyReader, is));
	os->write($$new($bytes, 1000));
	lr->start();
	while (lr->isAlive()) {
		$Thread::sleep(100);
	}
	try {
		os->write(27);
		$throwNew($Exception, "Test failed: shouldn\'t be able to write"_s);
	} catch ($IOException&) {
		$catch();
	}
}

DeadReader::DeadReader() {
}

$Class* DeadReader::load$($String* name, bool initialize) {
	$loadClass(DeadReader, name, initialize, &_DeadReader_ClassInfo_, allocate$DeadReader);
	return class$;
}

$Class* DeadReader::class$ = nullptr;