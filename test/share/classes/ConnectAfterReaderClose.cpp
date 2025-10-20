#include <ConnectAfterReaderClose.h>

#include <java/io/IOException.h>
#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
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
using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ConnectAfterReaderClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConnectAfterReaderClose::*)()>(&ConnectAfterReaderClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ConnectAfterReaderClose::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ConnectAfterReaderClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ConnectAfterReaderClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ConnectAfterReaderClose_MethodInfo_
};

$Object* allocate$ConnectAfterReaderClose($Class* clazz) {
	return $of($alloc(ConnectAfterReaderClose));
}

void ConnectAfterReaderClose::init$() {
}

void ConnectAfterReaderClose::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedReader, pr, $new($PipedReader));
	pr->close();
	try {
		$var($PipedWriter, pw, $new($PipedWriter, pr));
		$throwNew($Exception, "Should not allow connect after close"_s);
	} catch ($IOException&) {
		$catch();
	}
}

ConnectAfterReaderClose::ConnectAfterReaderClose() {
}

$Class* ConnectAfterReaderClose::load$($String* name, bool initialize) {
	$loadClass(ConnectAfterReaderClose, name, initialize, &_ConnectAfterReaderClose_ClassInfo_, allocate$ConnectAfterReaderClose);
	return class$;
}

$Class* ConnectAfterReaderClose::class$ = nullptr;