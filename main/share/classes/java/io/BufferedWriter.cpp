#include <java/io/BufferedWriter.h>

#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _BufferedWriter_FieldInfo_[] = {
	{"out", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(BufferedWriter, out)},
	{"cb", "[C", nullptr, $PRIVATE, $field(BufferedWriter, cb)},
	{"nChars", "I", nullptr, $PRIVATE, $field(BufferedWriter, nChars)},
	{"nextChar", "I", nullptr, $PRIVATE, $field(BufferedWriter, nextChar)},
	{"defaultCharBufferSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferedWriter, defaultCharBufferSize)},
	{}
};

$MethodInfo _BufferedWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedWriter::*)($Writer*)>(&BufferedWriter::init$))},
	{"<init>", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedWriter::*)($Writer*,int32_t)>(&BufferedWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedWriter::*)()>(&BufferedWriter::ensureOpen)), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flushBuffer", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"min", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BufferedWriter::*)(int32_t,int32_t)>(&BufferedWriter::min))},
	{"newLine", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _BufferedWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.BufferedWriter",
	"java.io.Writer",
	nullptr,
	_BufferedWriter_FieldInfo_,
	_BufferedWriter_MethodInfo_
};

$Object* allocate$BufferedWriter($Class* clazz) {
	return $of($alloc(BufferedWriter));
}

int32_t BufferedWriter::defaultCharBufferSize = 0;

void BufferedWriter::init$($Writer* out) {
	BufferedWriter::init$(out, BufferedWriter::defaultCharBufferSize);
}

void BufferedWriter::init$($Writer* out, int32_t sz) {
	$Writer::init$(out);
	if (sz <= 0) {
		$throwNew($IllegalArgumentException, "Buffer size <= 0"_s);
	}
	$set(this, out, out);
	$set(this, cb, $new($chars, sz));
	this->nChars = sz;
	this->nextChar = 0;
}

void BufferedWriter::ensureOpen() {
	if (this->out == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void BufferedWriter::flushBuffer() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->nextChar == 0) {
			return;
		}
		$nc(this->out)->write(this->cb, 0, this->nextChar);
		this->nextChar = 0;
	}
}

void BufferedWriter::write(int32_t c) {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->nextChar >= this->nChars) {
			flushBuffer();
		}
		$nc(this->cb)->set(this->nextChar++, (char16_t)c);
	}
}

int32_t BufferedWriter::min(int32_t a, int32_t b) {
	if (a < b) {
		return a;
	}
	return b;
}

void BufferedWriter::write($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		if ((off < 0) || (off > $nc(cbuf)->length) || (len < 0) || ((off + len) > $nc(cbuf)->length) || ((off + len) < 0)) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return;
		}
		if (len >= this->nChars) {
			flushBuffer();
			$nc(this->out)->write(cbuf, off, len);
			return;
		}
		int32_t b = off;
		int32_t t = off + len;
		while (b < t) {
			int32_t d = min(this->nChars - this->nextChar, t - b);
			$System::arraycopy(cbuf, b, this->cb, this->nextChar, d);
			b += d;
			this->nextChar += d;
			if (this->nextChar >= this->nChars) {
				flushBuffer();
			}
		}
	}
}

void BufferedWriter::write($String* s, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		int32_t b = off;
		int32_t t = off + len;
		while (b < t) {
			int32_t d = min(this->nChars - this->nextChar, t - b);
			$nc(s)->getChars(b, b + d, this->cb, this->nextChar);
			b += d;
			this->nextChar += d;
			if (this->nextChar >= this->nChars) {
				flushBuffer();
			}
		}
	}
}

void BufferedWriter::newLine() {
	write($($System::lineSeparator()));
}

void BufferedWriter::flush() {
	$synchronized(this->lock) {
		flushBuffer();
		$nc(this->out)->flush();
	}
}

void BufferedWriter::close() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->out == nullptr) {
			return;
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Writer, w, this->out);
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							flushBuffer();
						} catch ($Throwable& t$) {
							if (w != nullptr) {
								try {
									w->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						if (w != nullptr) {
							w->close();
						}
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$set(this, out, nullptr);
				$set(this, cb, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$BufferedWriter($Class* class$) {
	BufferedWriter::defaultCharBufferSize = 8192;
}

BufferedWriter::BufferedWriter() {
}

$Class* BufferedWriter::load$($String* name, bool initialize) {
	$loadClass(BufferedWriter, name, initialize, &_BufferedWriter_ClassInfo_, clinit$BufferedWriter, allocate$BufferedWriter);
	return class$;
}

$Class* BufferedWriter::class$ = nullptr;

	} // io
} // java