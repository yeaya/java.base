#include <ABCInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ABCInputStream_FieldInfo_[] = {
	{"len", "I", nullptr, 0, $field(ABCInputStream, len)},
	{"chunk", "I", nullptr, 0, $field(ABCInputStream, chunk)},
	{"count", "I", nullptr, 0, $field(ABCInputStream, count)},
	{"next", "C", nullptr, 0, $field(ABCInputStream, next)},
	{}
};

$MethodInfo _ABCInputStream_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(ABCInputStream, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, 0, $method(ABCInputStream, init$, void, int32_t, int32_t)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ABCInputStream, available, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ABCInputStream, close, void), "java.io.IOException"},
	{"firstChar", "()C", nullptr, $STATIC, $staticMethod(ABCInputStream, firstChar, char16_t)},
	{"nextChar", "(C)C", nullptr, $STATIC, $staticMethod(ABCInputStream, nextChar, char16_t, char16_t)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ABCInputStream, read, int32_t)},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ABCInputStream, read, int32_t, $bytes*, int32_t, int32_t)},
	{}
};

$ClassInfo _ABCInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ABCInputStream",
	"java.io.InputStream",
	nullptr,
	_ABCInputStream_FieldInfo_,
	_ABCInputStream_MethodInfo_
};

$Object* allocate$ABCInputStream($Class* clazz) {
	return $of($alloc(ABCInputStream));
}

void ABCInputStream::init$(int32_t len) {
	ABCInputStream::init$(len, len);
}

void ABCInputStream::init$(int32_t len, int32_t chunk) {
	$InputStream::init$();
	this->count = 0;
	this->next = firstChar();
	this->len = len;
	this->chunk = chunk;
}

char16_t ABCInputStream::firstChar() {
	$init(ABCInputStream);
	return u'a';
}

char16_t ABCInputStream::nextChar(char16_t c) {
	$init(ABCInputStream);
	if (c == u'z') {
		return u'0';
	} else if (c == u'9') {
		return u'a';
	} else {
		return (char16_t)(c + 1);
	}
}

int32_t ABCInputStream::read() {
	if (this->count >= this->len) {
		return -1;
	}
	char16_t c = this->next;
	this->next = nextChar(c);
	++this->count;
	return (int8_t)c;
}

int32_t ABCInputStream::read($bytes* buf, int32_t off, int32_t len) {
	int32_t n = (len > this->chunk) ? this->chunk : len;
	for (int32_t i = off; i < off + n; ++i) {
		int32_t c = read();
		if (c == -1) {
			if (i > off) {
				return i - off;
			} else {
				return -1;
			}
		}
		$nc(buf)->set(i, (int8_t)c);
	}
	return n;
}

int32_t ABCInputStream::available() {
	int32_t remaining = this->len - this->count;
	return (remaining > this->chunk) ? this->chunk : remaining;
}

void ABCInputStream::close() {
	if (this->len == 0) {
		$throwNew($IOException, "Already closed"_s);
	}
	this->len = 0;
}

ABCInputStream::ABCInputStream() {
}

$Class* ABCInputStream::load$($String* name, bool initialize) {
	$loadClass(ABCInputStream, name, initialize, &_ABCInputStream_ClassInfo_, allocate$ABCInputStream);
	return class$;
}

$Class* ABCInputStream::class$ = nullptr;