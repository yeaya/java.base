#include <java/io/BufferedReader.h>

#include <java/io/BufferedReader$1.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef INVALIDATED
#undef NONNULL
#undef ORDERED
#undef UNMARKED

using $BufferedReader$1 = ::java::io::BufferedReader$1;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace io {

$FieldInfo _BufferedReader_FieldInfo_[] = {
	{"in", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(BufferedReader, in)},
	{"cb", "[C", nullptr, $PRIVATE, $field(BufferedReader, cb)},
	{"nChars", "I", nullptr, $PRIVATE, $field(BufferedReader, nChars)},
	{"nextChar", "I", nullptr, $PRIVATE, $field(BufferedReader, nextChar)},
	{"INVALIDATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedReader, INVALIDATED)},
	{"UNMARKED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedReader, UNMARKED)},
	{"markedChar", "I", nullptr, $PRIVATE, $field(BufferedReader, markedChar)},
	{"readAheadLimit", "I", nullptr, $PRIVATE, $field(BufferedReader, readAheadLimit)},
	{"skipLF", "Z", nullptr, $PRIVATE, $field(BufferedReader, skipLF)},
	{"markedSkipLF", "Z", nullptr, $PRIVATE, $field(BufferedReader, markedSkipLF)},
	{"defaultCharBufferSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferedReader, defaultCharBufferSize)},
	{"defaultExpectedLineLength", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferedReader, defaultExpectedLineLength)},
	{}
};

$MethodInfo _BufferedReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;I)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedReader::*)($Reader*,int32_t)>(&BufferedReader::init$))},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedReader::*)($Reader*)>(&BufferedReader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedReader::*)()>(&BufferedReader::ensureOpen)), "java.io.IOException"},
	{"fill", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedReader::*)()>(&BufferedReader::fill)), "java.io.IOException"},
	{"lines", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read1", "([CII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BufferedReader::*)($chars*,int32_t,int32_t)>(&BufferedReader::read1)), "java.io.IOException"},
	{"readLine", "(Z[Z)Ljava/lang/String;", nullptr, 0, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _BufferedReader_InnerClassesInfo_[] = {
	{"java.io.BufferedReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.BufferedReader",
	"java.io.Reader",
	nullptr,
	_BufferedReader_FieldInfo_,
	_BufferedReader_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.BufferedReader$1"
};

$Object* allocate$BufferedReader($Class* clazz) {
	return $of($alloc(BufferedReader));
}

int32_t BufferedReader::defaultCharBufferSize = 0;
int32_t BufferedReader::defaultExpectedLineLength = 0;

void BufferedReader::init$($Reader* in, int32_t sz) {
	$Reader::init$(in);
	this->markedChar = BufferedReader::UNMARKED;
	this->readAheadLimit = 0;
	this->skipLF = false;
	this->markedSkipLF = false;
	if (sz <= 0) {
		$throwNew($IllegalArgumentException, "Buffer size <= 0"_s);
	}
	$set(this, in, in);
	$set(this, cb, $new($chars, sz));
	this->nextChar = (this->nChars = 0);
}

void BufferedReader::init$($Reader* in) {
	BufferedReader::init$(in, BufferedReader::defaultCharBufferSize);
}

void BufferedReader::ensureOpen() {
	if (this->in == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void BufferedReader::fill() {
	int32_t dst = 0;
	if (this->markedChar <= BufferedReader::UNMARKED) {
		dst = 0;
	} else {
		int32_t delta = this->nextChar - this->markedChar;
		if (delta >= this->readAheadLimit) {
			this->markedChar = BufferedReader::INVALIDATED;
			this->readAheadLimit = 0;
			dst = 0;
		} else {
			if (this->readAheadLimit <= $nc(this->cb)->length) {
				$System::arraycopy(this->cb, this->markedChar, this->cb, 0, delta);
				this->markedChar = 0;
				dst = delta;
			} else {
				$var($chars, ncb, $new($chars, this->readAheadLimit));
				$System::arraycopy(this->cb, this->markedChar, ncb, 0, delta);
				$set(this, cb, ncb);
				this->markedChar = 0;
				dst = delta;
			}
			this->nextChar = (this->nChars = delta);
		}
	}
	int32_t n = 0;
	do {
		n = $nc(this->in)->read(this->cb, dst, $nc(this->cb)->length - dst);
	} while (n == 0);
	if (n > 0) {
		this->nChars = dst + n;
		this->nextChar = dst;
	}
}

int32_t BufferedReader::read() {
	$synchronized(this->lock) {
		ensureOpen();
		for (;;) {
			if (this->nextChar >= this->nChars) {
				fill();
				if (this->nextChar >= this->nChars) {
					return -1;
				}
			}
			if (this->skipLF) {
				this->skipLF = false;
				if ($nc(this->cb)->get(this->nextChar) == u'\n') {
					++this->nextChar;
					continue;
				}
			}
			return $nc(this->cb)->get(this->nextChar++);
		}
	}
}

int32_t BufferedReader::read1($chars* cbuf, int32_t off, int32_t len) {
	if (this->nextChar >= this->nChars) {
		if (len >= $nc(this->cb)->length && this->markedChar <= BufferedReader::UNMARKED && !this->skipLF) {
			return $nc(this->in)->read(cbuf, off, len);
		}
		fill();
	}
	if (this->nextChar >= this->nChars) {
		return -1;
	}
	if (this->skipLF) {
		this->skipLF = false;
		if ($nc(this->cb)->get(this->nextChar) == u'\n') {
			++this->nextChar;
			if (this->nextChar >= this->nChars) {
				fill();
			}
			if (this->nextChar >= this->nChars) {
				return -1;
			}
		}
	}
	int32_t n = $Math::min(len, this->nChars - this->nextChar);
	$System::arraycopy(this->cb, this->nextChar, cbuf, off, n);
	this->nextChar += n;
	return n;
}

int32_t BufferedReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
		if (len == 0) {
			return 0;
		}
		int32_t n = read1(cbuf, off, len);
		if (n <= 0) {
			return n;
		}
		while ((n < len) && $nc(this->in)->ready()) {
			int32_t n1 = read1(cbuf, off + n, len - n);
			if (n1 <= 0) {
				break;
			}
			n += n1;
		}
		return n;
	}
}

$String* BufferedReader::readLine(bool ignoreLF, $booleans* term) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, nullptr);
	int32_t startChar = 0;
	$synchronized(this->lock) {
		ensureOpen();
		bool omitLF = ignoreLF || this->skipLF;
		if (term != nullptr) {
			term->set(0, false);
		}
		for (;;) {
			if (this->nextChar >= this->nChars) {
				fill();
			}
			if (this->nextChar >= this->nChars) {
				if (s != nullptr && s->length() > 0) {
					return s->toString();
				} else {
					return nullptr;
				}
			}
			bool eol = false;
			char16_t c = (char16_t)0;
			int32_t i = 0;
			if (omitLF && ($nc(this->cb)->get(this->nextChar) == u'\n')) {
				++this->nextChar;
			}
			this->skipLF = false;
			omitLF = false;
			bool charLoop$break = false;
			for (i = this->nextChar; i < this->nChars; ++i) {
				c = $nc(this->cb)->get(i);
				if ((c == u'\n') || (c == u'\r')) {
					if (term != nullptr) {
						term->set(0, true);
					}
					eol = true;
					charLoop$break = true;
					break;
				}
			}
			startChar = this->nextChar;
			this->nextChar = i;
			if (eol) {
				$var($String, str, nullptr);
				if (s == nullptr) {
					$assign(str, $new($String, this->cb, startChar, i - startChar));
				} else {
					$nc(s)->append(this->cb, startChar, i - startChar);
					$assign(str, s->toString());
				}
				++this->nextChar;
				if (c == u'\r') {
					this->skipLF = true;
				}
				return str;
			}
			if (s == nullptr) {
				$assign(s, $new($StringBuilder, BufferedReader::defaultExpectedLineLength));
			}
			$nc(s)->append(this->cb, startChar, i - startChar);
		}
	}
}

$String* BufferedReader::readLine() {
	return readLine(false, nullptr);
}

int64_t BufferedReader::skip(int64_t n) {
	if (n < (int64_t)0) {
		$throwNew($IllegalArgumentException, "skip value is negative"_s);
	}
	$synchronized(this->lock) {
		ensureOpen();
		int64_t r = n;
		while (r > 0) {
			if (this->nextChar >= this->nChars) {
				fill();
			}
			if (this->nextChar >= this->nChars) {
				break;
			}
			if (this->skipLF) {
				this->skipLF = false;
				if ($nc(this->cb)->get(this->nextChar) == u'\n') {
					++this->nextChar;
				}
			}
			int64_t d = this->nChars - this->nextChar;
			if (r <= d) {
				this->nextChar += r;
				r = 0;
				break;
			} else {
				r -= d;
				this->nextChar = this->nChars;
			}
		}
		return n - r;
	}
}

bool BufferedReader::ready() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->skipLF) {
			if (this->nextChar >= this->nChars && $nc(this->in)->ready()) {
				fill();
			}
			if (this->nextChar < this->nChars) {
				if ($nc(this->cb)->get(this->nextChar) == u'\n') {
					++this->nextChar;
				}
				this->skipLF = false;
			}
		}
		return (this->nextChar < this->nChars) || $nc(this->in)->ready();
	}
}

bool BufferedReader::markSupported() {
	return true;
}

void BufferedReader::mark(int32_t readAheadLimit) {
	if (readAheadLimit < 0) {
		$throwNew($IllegalArgumentException, "Read-ahead limit < 0"_s);
	}
	$synchronized(this->lock) {
		ensureOpen();
		this->readAheadLimit = readAheadLimit;
		this->markedChar = this->nextChar;
		this->markedSkipLF = this->skipLF;
	}
}

void BufferedReader::reset() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->markedChar < 0) {
			$throwNew($IOException, (this->markedChar == BufferedReader::INVALIDATED) ? "Mark invalid"_s : "Stream not marked"_s);
		}
		this->nextChar = this->markedChar;
		this->skipLF = this->markedSkipLF;
	}
}

void BufferedReader::close() {
	$synchronized(this->lock) {
		if (this->in == nullptr) {
			return;
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->in)->close();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, in, nullptr);
				$set(this, cb, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Stream* BufferedReader::lines() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, $new($BufferedReader$1, this));
	return $StreamSupport::stream($($Spliterators::spliteratorUnknownSize(iter, $Spliterator::ORDERED | $Spliterator::NONNULL)), false);
}

void clinit$BufferedReader($Class* class$) {
	BufferedReader::defaultCharBufferSize = 8192;
	BufferedReader::defaultExpectedLineLength = 80;
}

BufferedReader::BufferedReader() {
}

$Class* BufferedReader::load$($String* name, bool initialize) {
	$loadClass(BufferedReader, name, initialize, &_BufferedReader_ClassInfo_, clinit$BufferedReader, allocate$BufferedReader);
	return class$;
}

$Class* BufferedReader::class$ = nullptr;

	} // io
} // java