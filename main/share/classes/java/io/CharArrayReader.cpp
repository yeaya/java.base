#include <java/io/CharArrayReader.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/Math.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _CharArrayReader_FieldInfo_[] = {
	{"buf", "[C", nullptr, $PROTECTED, $field(CharArrayReader, buf)},
	{"pos", "I", nullptr, $PROTECTED, $field(CharArrayReader, pos)},
	{"markedPos", "I", nullptr, $PROTECTED, $field(CharArrayReader, markedPos)},
	{"count", "I", nullptr, $PROTECTED, $field(CharArrayReader, count)},
	{}
};

$MethodInfo _CharArrayReader_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(static_cast<void(CharArrayReader::*)($chars*)>(&CharArrayReader::init$))},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(CharArrayReader::*)($chars*,int32_t,int32_t)>(&CharArrayReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(CharArrayReader::*)()>(&CharArrayReader::ensureOpen)), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CharArrayReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.CharArrayReader",
	"java.io.Reader",
	nullptr,
	_CharArrayReader_FieldInfo_,
	_CharArrayReader_MethodInfo_
};

$Object* allocate$CharArrayReader($Class* clazz) {
	return $of($alloc(CharArrayReader));
}

void CharArrayReader::init$($chars* buf) {
	$Reader::init$();
	this->markedPos = 0;
	$set(this, buf, buf);
	this->pos = 0;
	this->count = $nc(buf)->length;
}

void CharArrayReader::init$($chars* buf, int32_t offset, int32_t length) {
	$Reader::init$();
	this->markedPos = 0;
	if ((offset < 0) || (offset > $nc(buf)->length) || (length < 0) || ((offset + length) < 0)) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, buf, buf);
	this->pos = offset;
	this->count = $Math::min(offset + length, $nc(buf)->length);
	this->markedPos = offset;
}

void CharArrayReader::ensureOpen() {
	if (this->buf == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

int32_t CharArrayReader::read() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->pos >= this->count) {
			return -1;
		} else {
			return $nc(this->buf)->get(this->pos++);
		}
	}
}

int32_t CharArrayReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
		if (len == 0) {
			return 0;
		}
		if (this->pos >= this->count) {
			return -1;
		}
		int32_t avail = this->count - this->pos;
		if (len > avail) {
			len = avail;
		}
		if (len <= 0) {
			return 0;
		}
		$System::arraycopy(this->buf, this->pos, cbuf, off, len);
		this->pos += len;
		return len;
	}
}

int32_t CharArrayReader::read($CharBuffer* target) {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->pos >= this->count) {
			return -1;
		}
		int32_t avail = this->count - this->pos;
		int32_t len = $Math::min(avail, $nc(target)->remaining());
		$nc(target)->put(this->buf, this->pos, len);
		this->pos += len;
		return len;
	}
}

int64_t CharArrayReader::skip(int64_t n) {
	$synchronized(this->lock) {
		ensureOpen();
		int64_t avail = this->count - this->pos;
		if (n > avail) {
			n = avail;
		}
		if (n < 0) {
			return 0;
		}
		this->pos += n;
		return n;
	}
}

bool CharArrayReader::ready() {
	$synchronized(this->lock) {
		ensureOpen();
		return (this->count - this->pos) > 0;
	}
}

bool CharArrayReader::markSupported() {
	return true;
}

void CharArrayReader::mark(int32_t readAheadLimit) {
	$synchronized(this->lock) {
		ensureOpen();
		this->markedPos = this->pos;
	}
}

void CharArrayReader::reset() {
	$synchronized(this->lock) {
		ensureOpen();
		this->pos = this->markedPos;
	}
}

void CharArrayReader::close() {
	$synchronized(this->lock) {
		$set(this, buf, nullptr);
	}
}

CharArrayReader::CharArrayReader() {
}

$Class* CharArrayReader::load$($String* name, bool initialize) {
	$loadClass(CharArrayReader, name, initialize, &_CharArrayReader_ClassInfo_, allocate$CharArrayReader);
	return class$;
}

$Class* CharArrayReader::class$ = nullptr;

	} // io
} // java