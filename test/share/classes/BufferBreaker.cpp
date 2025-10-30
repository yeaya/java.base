#include <BufferBreaker.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _BufferBreaker_FieldInfo_[] = {
	{"breakIt", "Z", nullptr, $PUBLIC, $field(BufferBreaker, breakIt)},
	{"buffer", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferBreaker, buffer)},
	{}
};

$MethodInfo _BufferBreaker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BufferBreaker::*)()>(&BufferBreaker::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BufferBreaker_ClassInfo_ = {
	$ACC_SUPER,
	"BufferBreaker",
	"java.io.InputStream",
	nullptr,
	_BufferBreaker_FieldInfo_,
	_BufferBreaker_MethodInfo_
};

$Object* allocate$BufferBreaker($Class* clazz) {
	return $of($alloc(BufferBreaker));
}

$bytes* BufferBreaker::buffer = nullptr;

void BufferBreaker::init$() {
	$InputStream::init$();
	this->breakIt = false;
}

int32_t BufferBreaker::read() {
	return u'x';
}

int32_t BufferBreaker::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t BufferBreaker::read($bytes* b, int32_t off, int32_t len) {
	if (this->breakIt) {
		$throwNew($IOException, "BREAK"_s);
	}
	if (len > $nc(BufferBreaker::buffer)->length) {
		len = $nc(BufferBreaker::buffer)->length;
	}
	$System::arraycopy(BufferBreaker::buffer, 0, b, off, len);
	return len;
}

int64_t BufferBreaker::skip(int64_t n) {
	return 0;
}

int32_t BufferBreaker::available() {
	return 0;
}

void clinit$BufferBreaker($Class* class$) {
	$assignStatic(BufferBreaker::buffer, $new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)u'c',
		(int8_t)u'd',
		(int8_t)u'e',
		(int8_t)u'f',
		(int8_t)u'g'
	}));
}

BufferBreaker::BufferBreaker() {
}

$Class* BufferBreaker::load$($String* name, bool initialize) {
	$loadClass(BufferBreaker, name, initialize, &_BufferBreaker_ClassInfo_, clinit$BufferBreaker, allocate$BufferBreaker);
	return class$;
}

$Class* BufferBreaker::class$ = nullptr;