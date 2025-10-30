#include <MultipleConnect.h>

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

$MethodInfo _MultipleConnect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultipleConnect::*)()>(&MultipleConnect::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultipleConnect::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MultipleConnect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultipleConnect",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MultipleConnect_MethodInfo_
};

$Object* allocate$MultipleConnect($Class* clazz) {
	return $of($alloc(MultipleConnect));
}

void MultipleConnect::init$() {
}

void MultipleConnect::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedOutputStream, os2, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	os->connect(is);
	try {
		is->connect(os2);
		$throwNew($Exception, "Test failed: IOException expected"_s);
	} catch ($IOException& e) {
	}
}

MultipleConnect::MultipleConnect() {
}

$Class* MultipleConnect::load$($String* name, bool initialize) {
	$loadClass(MultipleConnect, name, initialize, &_MultipleConnect_ClassInfo_, allocate$MultipleConnect);
	return class$;
}

$Class* MultipleConnect::class$ = nullptr;