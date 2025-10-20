#include <WriteAfterClose.h>

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

$MethodInfo _WriteAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriteAfterClose::*)()>(&WriteAfterClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriteAfterClose::main)), "java.lang.Exception"},
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
	} catch ($IOException&) {
		$catch();
	}
}

WriteAfterClose::WriteAfterClose() {
}

$Class* WriteAfterClose::load$($String* name, bool initialize) {
	$loadClass(WriteAfterClose, name, initialize, &_WriteAfterClose_ClassInfo_, allocate$WriteAfterClose);
	return class$;
}

$Class* WriteAfterClose::class$ = nullptr;