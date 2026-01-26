#include <MyInputStream4CloseStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

#undef CLOSED
#undef OPEN

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MyInputStream4CloseStream_FieldInfo_[] = {
	{"OPEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MyInputStream4CloseStream, OPEN)},
	{"CLOSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MyInputStream4CloseStream, CLOSED)},
	{"status", "I", nullptr, $PRIVATE, $field(MyInputStream4CloseStream, status)},
	{}
};

$MethodInfo _MyInputStream4CloseStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MyInputStream4CloseStream, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(MyInputStream4CloseStream, close, void), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4CloseStream, read, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _MyInputStream4CloseStream_ClassInfo_ = {
	$ACC_SUPER,
	"MyInputStream4CloseStream",
	"java.io.InputStream",
	nullptr,
	_MyInputStream4CloseStream_FieldInfo_,
	_MyInputStream4CloseStream_MethodInfo_
};

$Object* allocate$MyInputStream4CloseStream($Class* clazz) {
	return $of($alloc(MyInputStream4CloseStream));
}

void MyInputStream4CloseStream::init$() {
	$InputStream::init$();
	this->status = MyInputStream4CloseStream::OPEN;
}

void MyInputStream4CloseStream::close() {
	if (this->status == MyInputStream4CloseStream::OPEN) {
		this->status = MyInputStream4CloseStream::CLOSED;
	} else {
		$throwNew($IOException);
	}
}

int32_t MyInputStream4CloseStream::read() {
	if (this->status == MyInputStream4CloseStream::CLOSED) {
		$throwNew($IOException);
	}
	return (int8_t)u'a';
}

MyInputStream4CloseStream::MyInputStream4CloseStream() {
}

$Class* MyInputStream4CloseStream::load$($String* name, bool initialize) {
	$loadClass(MyInputStream4CloseStream, name, initialize, &_MyInputStream4CloseStream_ClassInfo_, allocate$MyInputStream4CloseStream);
	return class$;
}

$Class* MyInputStream4CloseStream::class$ = nullptr;