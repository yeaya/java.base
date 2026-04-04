#include <BufferBreaker.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	if (len > BufferBreaker::buffer->length) {
		len = BufferBreaker::buffer->length;
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

void BufferBreaker::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"breakIt", "Z", nullptr, $PUBLIC, $field(BufferBreaker, breakIt)},
		{"buffer", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferBreaker, buffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BufferBreaker, init$, void)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(BufferBreaker, available, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(BufferBreaker, read, int32_t)},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(BufferBreaker, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(BufferBreaker, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(BufferBreaker, skip, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BufferBreaker",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferBreaker, name, initialize, &classInfo$$, BufferBreaker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BufferBreaker);
	});
	return class$;
}

$Class* BufferBreaker::class$ = nullptr;