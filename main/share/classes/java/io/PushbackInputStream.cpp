#include <java/io/PushbackInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {

$FieldInfo _PushbackInputStream_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PROTECTED, $field(PushbackInputStream, buf)},
	{"pos", "I", nullptr, $PROTECTED, $field(PushbackInputStream, pos)},
	{}
};

$MethodInfo _PushbackInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;I)V", nullptr, $PUBLIC, $method(PushbackInputStream, init$, void, $InputStream*, int32_t)},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(PushbackInputStream, init$, void, $InputStream*)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PushbackInputStream, close, void), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(PushbackInputStream, ensureOpen, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PushbackInputStream, mark, void, int32_t)},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PushbackInputStream, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{"unread", "(I)V", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, unread, void, int32_t), "java.io.IOException"},
	{"unread", "([BII)V", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, unread, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"unread", "([B)V", nullptr, $PUBLIC, $virtualMethod(PushbackInputStream, unread, void, $bytes*), "java.io.IOException"},
	{}
};

$ClassInfo _PushbackInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PushbackInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_PushbackInputStream_FieldInfo_,
	_PushbackInputStream_MethodInfo_
};

$Object* allocate$PushbackInputStream($Class* clazz) {
	return $of($alloc(PushbackInputStream));
}

void PushbackInputStream::ensureOpen() {
	if (this->in == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void PushbackInputStream::init$($InputStream* in, int32_t size) {
	$FilterInputStream::init$(in);
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "size <= 0"_s);
	}
	$set(this, buf, $new($bytes, size));
	this->pos = size;
}

void PushbackInputStream::init$($InputStream* in) {
	PushbackInputStream::init$(in, 1);
}

int32_t PushbackInputStream::read() {
	ensureOpen();
	if (this->pos < $nc(this->buf)->length) {
		return (int32_t)($nc(this->buf)->get(this->pos++) & (uint32_t)255);
	}
	return $FilterInputStream::read();
}

int32_t PushbackInputStream::read($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if (b == nullptr) {
		$throwNew($NullPointerException);
	} else if (off < 0 || len < 0 || len > $nc(b)->length - off) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return 0;
	}
	int32_t avail = $nc(this->buf)->length - this->pos;
	if (avail > 0) {
		if (len < avail) {
			avail = len;
		}
		$System::arraycopy(this->buf, this->pos, b, off, avail);
		this->pos += avail;
		off += avail;
		len -= avail;
	}
	if (len > 0) {
		len = $FilterInputStream::read(b, off, len);
		if (len == -1) {
			return avail == 0 ? -1 : avail;
		}
		return avail + len;
	}
	return avail;
}

void PushbackInputStream::unread(int32_t b) {
	ensureOpen();
	if (this->pos == 0) {
		$throwNew($IOException, "Push back buffer is full"_s);
	}
	$nc(this->buf)->set(--this->pos, (int8_t)b);
}

void PushbackInputStream::unread($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if (len > this->pos) {
		$throwNew($IOException, "Push back buffer is full"_s);
	}
	this->pos -= len;
	$System::arraycopy(b, off, this->buf, this->pos, len);
}

void PushbackInputStream::unread($bytes* b) {
	unread(b, 0, $nc(b)->length);
}

int32_t PushbackInputStream::available() {
	ensureOpen();
	int32_t n = $nc(this->buf)->length - this->pos;
	int32_t avail = $FilterInputStream::available();
	return n > ($Integer::MAX_VALUE - avail) ? $Integer::MAX_VALUE : n + avail;
}

int64_t PushbackInputStream::skip(int64_t n) {
	ensureOpen();
	if (n <= 0) {
		return 0;
	}
	int64_t pskip = $nc(this->buf)->length - this->pos;
	if (pskip > 0) {
		if (n < pskip) {
			pskip = n;
		}
		this->pos += pskip;
		n -= pskip;
	}
	if (n > 0) {
		pskip += $FilterInputStream::skip(n);
	}
	return pskip;
}

bool PushbackInputStream::markSupported() {
	return false;
}

void PushbackInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
	}
}

void PushbackInputStream::reset() {
	$synchronized(this) {
		$throwNew($IOException, "mark/reset not supported"_s);
	}
}

void PushbackInputStream::close() {
	$synchronized(this) {
		if (this->in == nullptr) {
			return;
		}
		$nc(this->in)->close();
		$set(this, in, nullptr);
		$set(this, buf, nullptr);
	}
}

PushbackInputStream::PushbackInputStream() {
}

$Class* PushbackInputStream::load$($String* name, bool initialize) {
	$loadClass(PushbackInputStream, name, initialize, &_PushbackInputStream_ClassInfo_, allocate$PushbackInputStream);
	return class$;
}

$Class* PushbackInputStream::class$ = nullptr;

	} // io
} // java