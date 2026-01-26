#include <MyOutputStream.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MyOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MyOutputStream, init$, void)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(MyOutputStream, write, void, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _MyOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"MyOutputStream",
	"java.io.OutputStream",
	nullptr,
	nullptr,
	_MyOutputStream_MethodInfo_
};

$Object* allocate$MyOutputStream($Class* clazz) {
	return $of($alloc(MyOutputStream));
}

void MyOutputStream::init$() {
	$OutputStream::init$();
}

void MyOutputStream::write(int32_t b) {
}

MyOutputStream::MyOutputStream() {
}

$Class* MyOutputStream::load$($String* name, bool initialize) {
	$loadClass(MyOutputStream, name, initialize, &_MyOutputStream_ClassInfo_, allocate$MyOutputStream);
	return class$;
}

$Class* MyOutputStream::class$ = nullptr;