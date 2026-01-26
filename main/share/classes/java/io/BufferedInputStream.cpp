#include <java/io/BufferedInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#undef BUF_OFFSET
#undef DEFAULT_BUFFER_SIZE
#undef MAX_VALUE
#undef U

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace io {

$FieldInfo _BufferedInputStream_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferedInputStream, DEFAULT_BUFFER_SIZE)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferedInputStream, U)},
	{"BUF_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferedInputStream, BUF_OFFSET)},
	{"buf", "[B", nullptr, $PROTECTED | $VOLATILE, $field(BufferedInputStream, buf)},
	{"count", "I", nullptr, $PROTECTED, $field(BufferedInputStream, count)},
	{"pos", "I", nullptr, $PROTECTED, $field(BufferedInputStream, pos)},
	{"markpos", "I", nullptr, $PROTECTED, $field(BufferedInputStream, markpos)},
	{"marklimit", "I", nullptr, $PROTECTED, $field(BufferedInputStream, marklimit)},
	{}
};

$MethodInfo _BufferedInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(BufferedInputStream, init$, void, $InputStream*)},
	{"<init>", "(Ljava/io/InputStream;I)V", nullptr, $PUBLIC, $method(BufferedInputStream, init$, void, $InputStream*, int32_t)},
	{"available", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BufferedInputStream, close, void), "java.io.IOException"},
	{"fill", "()V", nullptr, $PRIVATE, $method(BufferedInputStream, fill, void), "java.io.IOException"},
	{"getBufIfOpen", "()[B", nullptr, $PRIVATE, $method(BufferedInputStream, getBufIfOpen, $bytes*), "java.io.IOException"},
	{"getInIfOpen", "()Ljava/io/InputStream;", nullptr, $PRIVATE, $method(BufferedInputStream, getInIfOpen, $InputStream*), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, mark, void, int32_t)},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferedInputStream, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"read1", "([BII)I", nullptr, $PRIVATE, $method(BufferedInputStream, read1, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _BufferedInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.BufferedInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_BufferedInputStream_FieldInfo_,
	_BufferedInputStream_MethodInfo_
};

$Object* allocate$BufferedInputStream($Class* clazz) {
	return $of($alloc(BufferedInputStream));
}

int32_t BufferedInputStream::DEFAULT_BUFFER_SIZE = 0;
$Unsafe* BufferedInputStream::U = nullptr;
int64_t BufferedInputStream::BUF_OFFSET = 0;

$InputStream* BufferedInputStream::getInIfOpen() {
	$var($InputStream, input, this->in);
	if (input == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
	return input;
}

$bytes* BufferedInputStream::getBufIfOpen() {
	$var($bytes, buffer, this->buf);
	if (buffer == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
	return buffer;
}

void BufferedInputStream::init$($InputStream* in) {
	BufferedInputStream::init$(in, BufferedInputStream::DEFAULT_BUFFER_SIZE);
}

void BufferedInputStream::init$($InputStream* in, int32_t size) {
	$FilterInputStream::init$(in);
	this->markpos = -1;
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "Buffer size <= 0"_s);
	}
	$set(this, buf, $new($bytes, size));
}

void BufferedInputStream::fill() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buffer, getBufIfOpen());
	if (this->markpos < 0) {
		this->pos = 0;
	} else if (this->pos >= $nc(buffer)->length) {
		if (this->markpos > 0) {
			int32_t sz = this->pos - this->markpos;
			$System::arraycopy(buffer, this->markpos, buffer, 0, sz);
			this->pos = sz;
			this->markpos = 0;
		} else if (buffer->length >= this->marklimit) {
			this->markpos = -1;
			this->pos = 0;
		} else {
			int32_t nsz = $ArraysSupport::newLength(this->pos, 1, this->pos);
			if (nsz > this->marklimit) {
				nsz = this->marklimit;
			}
			$var($bytes, nbuf, $new($bytes, nsz));
			$System::arraycopy(buffer, 0, nbuf, 0, this->pos);
			if (!$nc(BufferedInputStream::U)->compareAndSetReference(this, BufferedInputStream::BUF_OFFSET, buffer, nbuf)) {
				$throwNew($IOException, "Stream closed"_s);
			}
			$assign(buffer, nbuf);
		}
	}
	this->count = this->pos;
	int32_t n = $nc($(getInIfOpen()))->read(buffer, this->pos, $nc(buffer)->length - this->pos);
	if (n > 0) {
		this->count = n + this->pos;
	}
}

int32_t BufferedInputStream::read() {
	$synchronized(this) {
		if (this->pos >= this->count) {
			fill();
			if (this->pos >= this->count) {
				return -1;
			}
		}
		return (int32_t)($nc($(getBufIfOpen()))->get(this->pos++) & (uint32_t)255);
	}
}

int32_t BufferedInputStream::read1($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t avail = this->count - this->pos;
	if (avail <= 0) {
		if (len >= $nc($(getBufIfOpen()))->length && this->markpos < 0) {
			return $nc($(getInIfOpen()))->read(b, off, len);
		}
		fill();
		avail = this->count - this->pos;
		if (avail <= 0) {
			return -1;
		}
	}
	int32_t cnt = (avail < len) ? avail : len;
	$System::arraycopy($(getBufIfOpen()), this->pos, b, off, cnt);
	this->pos += cnt;
	return cnt;
}

int32_t BufferedInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		getBufIfOpen();
		if ((((off | len) | (off + len)) | ($nc(b)->length - (off + len))) < 0) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return 0;
		}
		int32_t n = 0;
		for (;;) {
			int32_t nread = read1(b, off + n, len - n);
			if (nread <= 0) {
				return (n == 0) ? nread : n;
			}
			n += nread;
			if (n >= len) {
				return n;
			}
			$var($InputStream, input, this->in);
			if (input != nullptr && input->available() <= 0) {
				return n;
			}
		}
	}
}

int64_t BufferedInputStream::skip(int64_t n) {
	$synchronized(this) {
		getBufIfOpen();
		if (n <= 0) {
			return 0;
		}
		int64_t avail = this->count - this->pos;
		if (avail <= 0) {
			if (this->markpos < 0) {
				return $nc($(getInIfOpen()))->skip(n);
			}
			fill();
			avail = this->count - this->pos;
			if (avail <= 0) {
				return 0;
			}
		}
		int64_t skipped = (avail < n) ? avail : n;
		this->pos += skipped;
		return skipped;
	}
}

int32_t BufferedInputStream::available() {
	$synchronized(this) {
		int32_t n = this->count - this->pos;
		int32_t avail = $nc($(getInIfOpen()))->available();
		return n > ($Integer::MAX_VALUE - avail) ? $Integer::MAX_VALUE : n + avail;
	}
}

void BufferedInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		this->marklimit = readlimit;
		this->markpos = this->pos;
	}
}

void BufferedInputStream::reset() {
	$synchronized(this) {
		getBufIfOpen();
		if (this->markpos < 0) {
			$throwNew($IOException, "Resetting to invalid mark"_s);
		}
		this->pos = this->markpos;
	}
}

bool BufferedInputStream::markSupported() {
	return true;
}

void BufferedInputStream::close() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buffer, nullptr);
	while (($assign(buffer, this->buf)) != nullptr) {
		if ($nc(BufferedInputStream::U)->compareAndSetReference(this, BufferedInputStream::BUF_OFFSET, buffer, nullptr)) {
			$var($InputStream, input, this->in);
			$set(this, in, nullptr);
			if (input != nullptr) {
				input->close();
			}
			return;
		}
	}
}

void clinit$BufferedInputStream($Class* class$) {
	BufferedInputStream::DEFAULT_BUFFER_SIZE = 8192;
	$assignStatic(BufferedInputStream::U, $Unsafe::getUnsafe());
	BufferedInputStream::BUF_OFFSET = $nc(BufferedInputStream::U)->objectFieldOffset(BufferedInputStream::class$, "buf"_s);
}

BufferedInputStream::BufferedInputStream() {
}

$Class* BufferedInputStream::load$($String* name, bool initialize) {
	$loadClass(BufferedInputStream, name, initialize, &_BufferedInputStream_ClassInfo_, clinit$BufferedInputStream, allocate$BufferedInputStream);
	return class$;
}

$Class* BufferedInputStream::class$ = nullptr;

	} // io
} // java