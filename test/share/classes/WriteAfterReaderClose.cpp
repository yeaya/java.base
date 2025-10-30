#include <WriteAfterReaderClose.h>

#include <java/io/IOException.h>
#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WriteAfterReaderClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriteAfterReaderClose::*)()>(&WriteAfterReaderClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriteAfterReaderClose::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WriteAfterReaderClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteAfterReaderClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WriteAfterReaderClose_MethodInfo_
};

$Object* allocate$WriteAfterReaderClose($Class* clazz) {
	return $of($alloc(WriteAfterReaderClose));
}

void WriteAfterReaderClose::init$() {
}

void WriteAfterReaderClose::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipedReader, pr, $new($PipedReader));
	$var($PipedWriter, pw, $new($PipedWriter, pr));
	pr->close();
	try {
		pw->write((int32_t)u'a');
		$throwNew($Exception, "Should not allow write after close"_s);
	} catch ($IOException& e) {
	}
}

WriteAfterReaderClose::WriteAfterReaderClose() {
}

$Class* WriteAfterReaderClose::load$($String* name, bool initialize) {
	$loadClass(WriteAfterReaderClose, name, initialize, &_WriteAfterReaderClose_ClassInfo_, allocate$WriteAfterReaderClose);
	return class$;
}

$Class* WriteAfterReaderClose::class$ = nullptr;