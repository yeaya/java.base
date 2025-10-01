#include <java/io/LineNumberReader.h>

#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EOL
#undef CHAR
#undef NONE
#undef EOF

using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _LineNumberReader_FieldInfo_[] = {
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberReader, NONE)},
	{"CHAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberReader, CHAR)},
	{"EOL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberReader, EOL)},
	{"EOF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberReader, EOF)},
	{"prevChar", "I", nullptr, $PRIVATE, $field(LineNumberReader, prevChar)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(LineNumberReader, lineNumber)},
	{"markedLineNumber", "I", nullptr, $PRIVATE, $field(LineNumberReader, markedLineNumber)},
	{"skipLF", "Z", nullptr, $PRIVATE, $field(LineNumberReader, skipLF)},
	{"markedSkipLF", "Z", nullptr, $PRIVATE, $field(LineNumberReader, markedSkipLF)},
	{"maxSkipBufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberReader, maxSkipBufferSize)},
	{"skipBuffer", "[C", nullptr, $PRIVATE, $field(LineNumberReader, skipBuffer)},
	{}
};

$MethodInfo _LineNumberReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(LineNumberReader::*)($Reader*)>(&LineNumberReader::init$))},
	{"<init>", "(Ljava/io/Reader;I)V", nullptr, $PUBLIC, $method(static_cast<void(LineNumberReader::*)($Reader*,int32_t)>(&LineNumberReader::init$))},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _LineNumberReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.LineNumberReader",
	"java.io.BufferedReader",
	nullptr,
	_LineNumberReader_FieldInfo_,
	_LineNumberReader_MethodInfo_
};

$Object* allocate$LineNumberReader($Class* clazz) {
	return $of($alloc(LineNumberReader));
}

void LineNumberReader::init$($Reader* in) {
	$BufferedReader::init$(in);
	this->prevChar = LineNumberReader::NONE;
	this->lineNumber = 0;
	$set(this, skipBuffer, nullptr);
}

void LineNumberReader::init$($Reader* in, int32_t sz) {
	$BufferedReader::init$(in, sz);
	this->prevChar = LineNumberReader::NONE;
	this->lineNumber = 0;
	$set(this, skipBuffer, nullptr);
}

void LineNumberReader::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

int32_t LineNumberReader::getLineNumber() {
	return this->lineNumber;
}

int32_t LineNumberReader::read() {
	$synchronized(this->lock) {
		int32_t c = $BufferedReader::read();
		if (this->skipLF) {
			if (c == u'\n') {
				c = $BufferedReader::read();
			}
			this->skipLF = false;
		}
		switch (c) {
		case u'\r':
			{
				this->skipLF = true;
			}
		case u'\n':
			{
				++this->lineNumber;
				this->prevChar = LineNumberReader::EOL;
				return u'\n';
			}
		case -1:
			{
				if (this->prevChar == LineNumberReader::CHAR) {
					++this->lineNumber;
				}
				this->prevChar = LineNumberReader::EOF;
				break;
			}
		default:
			{
				this->prevChar = LineNumberReader::CHAR;
				break;
			}
		}
		return c;
	}
}

int32_t LineNumberReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		int32_t n = $BufferedReader::read(cbuf, off, len);
		if (n == -1) {
			if (this->prevChar == LineNumberReader::CHAR) {
				++this->lineNumber;
			}
			this->prevChar = LineNumberReader::EOF;
			return -1;
		}
		for (int32_t i = off; i < off + n; ++i) {
			int32_t c = $nc(cbuf)->get(i);
			if (this->skipLF) {
				this->skipLF = false;
				if (c == u'\n') {
					continue;
				}
			}
			switch (c) {
			case u'\r':
				{
					this->skipLF = true;
				}
			case u'\n':
				{
					++this->lineNumber;
					break;
				}
			}
		}
		if (n > 0) {
			switch ((int32_t)$nc(cbuf)->get(off + n - 1)) {
			case u'\r':
				{}
			case u'\n':
				{
					this->prevChar = LineNumberReader::EOL;
					break;
				}
			default:
				{
					this->prevChar = LineNumberReader::CHAR;
					break;
				}
			}
		}
		return n;
	}
}

$String* LineNumberReader::readLine() {
	$synchronized(this->lock) {
		$var($booleans, term, $new($booleans, 1));
		$var($String, l, $BufferedReader::readLine(this->skipLF, term));
		this->skipLF = false;
		if (l != nullptr) {
			++this->lineNumber;
			this->prevChar = term->get(0) ? LineNumberReader::EOL : LineNumberReader::EOF;
		} else {
			if (this->prevChar == LineNumberReader::CHAR) {
				++this->lineNumber;
			}
			this->prevChar = LineNumberReader::EOF;
		}
		return l;
	}
}

int64_t LineNumberReader::skip(int64_t n) {
	if (n < 0) {
		$throwNew($IllegalArgumentException, "skip() value is negative"_s);
	}
	int32_t nn = (int32_t)$Math::min(n, (int64_t)LineNumberReader::maxSkipBufferSize);
	$synchronized(this->lock) {
		if ((this->skipBuffer == nullptr) || ($nc(this->skipBuffer)->length < nn)) {
			$set(this, skipBuffer, $new($chars, nn));
		}
		int64_t r = n;
		while (r > 0) {
			int32_t nc = read(this->skipBuffer, 0, (int32_t)$Math::min(r, (int64_t)nn));
			if (nc == -1) {
				break;
			}
			r -= nc;
		}
		if (n - r > 0) {
			this->prevChar = LineNumberReader::NONE;
		}
		return n - r;
	}
}

void LineNumberReader::mark(int32_t readAheadLimit) {
	$synchronized(this->lock) {
		if (this->skipLF) {
			++readAheadLimit;
		}
		$BufferedReader::mark(readAheadLimit);
		this->markedLineNumber = this->lineNumber;
		this->markedSkipLF = this->skipLF;
	}
}

void LineNumberReader::reset() {
	$synchronized(this->lock) {
		$BufferedReader::reset();
		this->lineNumber = this->markedLineNumber;
		this->skipLF = this->markedSkipLF;
	}
}

LineNumberReader::LineNumberReader() {
}

$Class* LineNumberReader::load$($String* name, bool initialize) {
	$loadClass(LineNumberReader, name, initialize, &_LineNumberReader_ClassInfo_, allocate$LineNumberReader);
	return class$;
}

$Class* LineNumberReader::class$ = nullptr;

	} // io
} // java