#include <NotConnected.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NotConnected_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotConnected::*)()>(&NotConnected::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NotConnected::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NotConnected_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NotConnected",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NotConnected_MethodInfo_
};

$Object* allocate$NotConnected($Class* clazz) {
	return $of($alloc(NotConnected));
}

void NotConnected::init$() {
}

void NotConnected::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedInputStream, i, $new($PipedInputStream));
	$var($PipedOutputStream, o, $new($PipedOutputStream));
	bool readPassed = false;
	bool writePassed = false;
	try {
		i->read();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		readPassed = true;
	}
	try {
		o->write(10);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		writePassed = true;
	}
	if (!readPassed || !writePassed) {
		$throwNew($Exception, "Test failed: IOException not thrown"_s);
	}
}

NotConnected::NotConnected() {
}

$Class* NotConnected::load$($String* name, bool initialize) {
	$loadClass(NotConnected, name, initialize, &_NotConnected_ClassInfo_, allocate$NotConnected);
	return class$;
}

$Class* NotConnected::class$ = nullptr;