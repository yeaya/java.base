#include <java/io/PushbackReader.h>

#include <java/io/FilterReader.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $FilterReader = ::java::io::FilterReader;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _PushbackReader_FieldInfo_[] = {
	{"buf", "[C", nullptr, $PRIVATE, $field(PushbackReader, buf)},
	{"pos", "I", nullptr, $PRIVATE, $field(PushbackReader, pos)},
	{}
};

$MethodInfo _PushbackReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;I)V", nullptr, $PUBLIC, $method(PushbackReader, init$, void, $Reader*, int32_t)},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(PushbackReader, init$, void, $Reader*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, close, void), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(PushbackReader, ensureOpen, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, mark, void, int32_t), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(PushbackReader, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(PushbackReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(PushbackReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(PushbackReader, ready, bool), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(PushbackReader, skip, int64_t, int64_t), "java.io.IOException"},
	{"unread", "(I)V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, unread, void, int32_t), "java.io.IOException"},
	{"unread", "([CII)V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, unread, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"unread", "([C)V", nullptr, $PUBLIC, $virtualMethod(PushbackReader, unread, void, $chars*), "java.io.IOException"},
	{}
};

$ClassInfo _PushbackReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PushbackReader",
	"java.io.FilterReader",
	nullptr,
	_PushbackReader_FieldInfo_,
	_PushbackReader_MethodInfo_
};

$Object* allocate$PushbackReader($Class* clazz) {
	return $of($alloc(PushbackReader));
}

void PushbackReader::init$($Reader* in, int32_t size) {
	$FilterReader::init$(in);
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "size <= 0"_s);
	}
	$set(this, buf, $new($chars, size));
	this->pos = size;
}

void PushbackReader::init$($Reader* in) {
	PushbackReader::init$(in, 1);
}

void PushbackReader::ensureOpen() {
	if (this->buf == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

int32_t PushbackReader::read() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->pos < $nc(this->buf)->length) {
			return $nc(this->buf)->get(this->pos++);
		} else {
			return $FilterReader::read();
		}
	}
}

int32_t PushbackReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		try {
			$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
			if (len == 0) {
				return 0;
			}
			int32_t avail = $nc(this->buf)->length - this->pos;
			if (avail > 0) {
				if (len < avail) {
					avail = len;
				}
				$System::arraycopy(this->buf, this->pos, cbuf, off, avail);
				this->pos += avail;
				off += avail;
				len -= avail;
			}
			if (len > 0) {
				len = $FilterReader::read(cbuf, off, len);
				if (len == -1) {
					return (avail == 0) ? -1 : avail;
				}
				return avail + len;
			}
			return avail;
		} catch ($ArrayIndexOutOfBoundsException& e) {
			$throwNew($IndexOutOfBoundsException);
		}
	}
	$shouldNotReachHere();
}

void PushbackReader::unread(int32_t c) {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->pos == 0) {
			$throwNew($IOException, "Pushback buffer overflow"_s);
		}
		$nc(this->buf)->set(--this->pos, (char16_t)c);
	}
}

void PushbackReader::unread($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		if (len > this->pos) {
			$throwNew($IOException, "Pushback buffer overflow"_s);
		}
		this->pos -= len;
		$System::arraycopy(cbuf, off, this->buf, this->pos, len);
	}
}

void PushbackReader::unread($chars* cbuf) {
	unread(cbuf, 0, $nc(cbuf)->length);
}

bool PushbackReader::ready() {
	$synchronized(this->lock) {
		ensureOpen();
		return (this->pos < $nc(this->buf)->length) || $FilterReader::ready();
	}
}

void PushbackReader::mark(int32_t readAheadLimit) {
	$throwNew($IOException, "mark/reset not supported"_s);
}

void PushbackReader::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

bool PushbackReader::markSupported() {
	return false;
}

void PushbackReader::close() {
	$synchronized(this->lock) {
		$FilterReader::close();
		$set(this, buf, nullptr);
	}
}

int64_t PushbackReader::skip(int64_t n) {
	if (n < (int64_t)0) {
		$throwNew($IllegalArgumentException, "skip value is negative"_s);
	}
	$synchronized(this->lock) {
		ensureOpen();
		int32_t avail = $nc(this->buf)->length - this->pos;
		if (avail > 0) {
			if (n <= avail) {
				this->pos += n;
				return n;
			} else {
				this->pos = $nc(this->buf)->length;
				n -= avail;
			}
		}
		return avail + $FilterReader::skip(n);
	}
}

PushbackReader::PushbackReader() {
}

$Class* PushbackReader::load$($String* name, bool initialize) {
	$loadClass(PushbackReader, name, initialize, &_PushbackReader_ClassInfo_, allocate$PushbackReader);
	return class$;
}

$Class* PushbackReader::class$ = nullptr;

	} // io
} // java