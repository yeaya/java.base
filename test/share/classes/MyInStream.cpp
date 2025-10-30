#include <MyInStream.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MyInStream_FieldInfo_[] = {
	{"buf", "[C", nullptr, 0, $field(MyInStream, buf)},
	{"ctr", "I", nullptr, 0, $field(MyInStream, ctr)},
	{}
};

$MethodInfo _MyInStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MyInStream::*)()>(&MyInStream::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MyInStream_ClassInfo_ = {
	$ACC_SUPER,
	"MyInStream",
	"java.io.InputStream",
	nullptr,
	_MyInStream_FieldInfo_,
	_MyInStream_MethodInfo_
};

$Object* allocate$MyInStream($Class* clazz) {
	return $of($alloc(MyInStream));
}

void MyInStream::init$() {
	$InputStream::init$();
	$set(this, buf, $new($chars, {
		u'a',
		u'b',
		u'c',
		u'd',
		u'\n',
		u'e',
		u'f',
		u'\r',
		u'\n',
		u'g'
	}));
	this->ctr = 0;
}

int32_t MyInStream::read() {
	return ((this->ctr == 12) ? -1 : (int32_t)$nc(this->buf)->get(this->ctr++));
}

int32_t MyInStream::available() {
	return (10 - this->ctr);
}

MyInStream::MyInStream() {
}

$Class* MyInStream::load$($String* name, bool initialize) {
	$loadClass(MyInStream, name, initialize, &_MyInStream_ClassInfo_, allocate$MyInStream);
	return class$;
}

$Class* MyInStream::class$ = nullptr;