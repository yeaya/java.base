#include <MyInputStream.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MyInputStream_FieldInfo_[] = {
	{"readctr", "I", nullptr, $PRIVATE, $field(MyInputStream, readctr)},
	{"endoffile", "J", nullptr, $PRIVATE, $field(MyInputStream, endoffile)},
	{}
};

$MethodInfo _MyInputStream_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(MyInputStream, init$, void, int64_t)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream, available, int32_t)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream, read, int32_t)},
	{}
};

$ClassInfo _MyInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"MyInputStream",
	"java.io.InputStream",
	nullptr,
	_MyInputStream_FieldInfo_,
	_MyInputStream_MethodInfo_
};

$Object* allocate$MyInputStream($Class* clazz) {
	return $of($alloc(MyInputStream));
}

void MyInputStream::init$(int64_t endoffile) {
	$InputStream::init$();
	this->readctr = 0;
	this->endoffile = endoffile;
}

int32_t MyInputStream::read() {
	if (this->readctr == this->endoffile) {
		return -1;
	} else {
		++this->readctr;
		return 0;
	}
}

int32_t MyInputStream::available() {
	return 0;
}

MyInputStream::MyInputStream() {
}

$Class* MyInputStream::load$($String* name, bool initialize) {
	$loadClass(MyInputStream, name, initialize, &_MyInputStream_ClassInfo_, allocate$MyInputStream);
	return class$;
}

$Class* MyInputStream::class$ = nullptr;