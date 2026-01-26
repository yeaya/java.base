#include <MyStringWriter.h>

#include <java/io/StringWriter.h>
#include <jcpp.h>

using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MyStringWriter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(MyStringWriter, init$, void, int32_t)},
	{}
};

$ClassInfo _MyStringWriter_ClassInfo_ = {
	$ACC_SUPER,
	"MyStringWriter",
	"java.io.StringWriter",
	nullptr,
	nullptr,
	_MyStringWriter_MethodInfo_
};

$Object* allocate$MyStringWriter($Class* clazz) {
	return $of($alloc(MyStringWriter));
}

void MyStringWriter::init$(int32_t bufsize) {
	$StringWriter::init$(bufsize);
}

MyStringWriter::MyStringWriter() {
}

$Class* MyStringWriter::load$($String* name, bool initialize) {
	$loadClass(MyStringWriter, name, initialize, &_MyStringWriter_ClassInfo_, allocate$MyStringWriter);
	return class$;
}

$Class* MyStringWriter::class$ = nullptr;