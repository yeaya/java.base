#include <FlushAfterClose.h>

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

$MethodInfo _FlushAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlushAfterClose::*)()>(&FlushAfterClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FlushAfterClose::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _FlushAfterClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FlushAfterClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FlushAfterClose_MethodInfo_
};

$Object* allocate$FlushAfterClose($Class* clazz) {
	return $of($alloc(FlushAfterClose));
}

void FlushAfterClose::init$() {
}

void FlushAfterClose::main($StringArray* argv) {
	$var($PipedReader, pr, $new($PipedReader));
	$var($PipedWriter, pw, $new($PipedWriter, pr));
	pw->close();
	try {
		pw->flush();
		$throwNew($Exception, "Should not allow flush after close"_s);
	} catch ($IOException&) {
		$catch();
	}
}

FlushAfterClose::FlushAfterClose() {
}

$Class* FlushAfterClose::load$($String* name, bool initialize) {
	$loadClass(FlushAfterClose, name, initialize, &_FlushAfterClose_ClassInfo_, allocate$FlushAfterClose);
	return class$;
}

$Class* FlushAfterClose::class$ = nullptr;