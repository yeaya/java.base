#include <MyOutputStream4LargeCopyWithMark.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MyOutputStream4LargeCopyWithMark_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MyOutputStream4LargeCopyWithMark::*)()>(&MyOutputStream4LargeCopyWithMark::init$))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MyOutputStream4LargeCopyWithMark_ClassInfo_ = {
	$ACC_SUPER,
	"MyOutputStream4LargeCopyWithMark",
	"java.io.OutputStream",
	nullptr,
	nullptr,
	_MyOutputStream4LargeCopyWithMark_MethodInfo_
};

$Object* allocate$MyOutputStream4LargeCopyWithMark($Class* clazz) {
	return $of($alloc(MyOutputStream4LargeCopyWithMark));
}

void MyOutputStream4LargeCopyWithMark::init$() {
	$OutputStream::init$();
}

void MyOutputStream4LargeCopyWithMark::write(int32_t b) {
}

void MyOutputStream4LargeCopyWithMark::write($bytes* b) {
}

void MyOutputStream4LargeCopyWithMark::write($bytes* b, int32_t off, int32_t len) {
}

MyOutputStream4LargeCopyWithMark::MyOutputStream4LargeCopyWithMark() {
}

$Class* MyOutputStream4LargeCopyWithMark::load$($String* name, bool initialize) {
	$loadClass(MyOutputStream4LargeCopyWithMark, name, initialize, &_MyOutputStream4LargeCopyWithMark_ClassInfo_, allocate$MyOutputStream4LargeCopyWithMark);
	return class$;
}

$Class* MyOutputStream4LargeCopyWithMark::class$ = nullptr;