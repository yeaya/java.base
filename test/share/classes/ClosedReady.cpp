#include <ClosedReady.h>

#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/StringReader.h>
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
using $PrintStream = ::java::io::PrintStream;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedReady_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedReady::*)()>(&ClosedReady::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedReady::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ClosedReady_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedReady",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedReady_MethodInfo_
};

$Object* allocate$ClosedReady($Class* clazz) {
	return $of($alloc(ClosedReady));
}

void ClosedReady::init$() {
}

void ClosedReady::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringReader, in, $new($StringReader, "aaaaaaaaaaaaaaa"_s));
	in->read();
	in->close();
	try {
		in->ready();
		$throwNew($RuntimeException, " No exception during read on closed stream"_s);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($System);
		$nc($System::err)->println("Test passed: IOException is thrown"_s);
	}
}

ClosedReady::ClosedReady() {
}

$Class* ClosedReady::load$($String* name, bool initialize) {
	$loadClass(ClosedReady, name, initialize, &_ClosedReady_ClassInfo_, allocate$ClosedReady);
	return class$;
}

$Class* ClosedReady::class$ = nullptr;