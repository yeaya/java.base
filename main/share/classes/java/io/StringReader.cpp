#include <java/io/StringReader.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/Math.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _StringReader_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringReader, str)},
	{"length", "I", nullptr, $PRIVATE, $field(StringReader, length)},
	{"next", "I", nullptr, $PRIVATE, $field(StringReader, next)},
	{"mark", "I", nullptr, $PRIVATE, $field(StringReader, mark$)},
	{}
};

$MethodInfo _StringReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringReader::*)($String*)>(&StringReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringReader::*)()>(&StringReader::ensureOpen)), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _StringReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.StringReader",
	"java.io.Reader",
	nullptr,
	_StringReader_FieldInfo_,
	_StringReader_MethodInfo_
};

$Object* allocate$StringReader($Class* clazz) {
	return $of($alloc(StringReader));
}

void StringReader::init$($String* s) {
	$Reader::init$();
	this->next = 0;
	this->mark$ = 0;
	$set(this, str, s);
	this->length = $nc(s)->length();
}

void StringReader::ensureOpen() {
	if (this->str == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

int32_t StringReader::read() {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->next >= this->length) {
			return -1;
		}
		return $nc(this->str)->charAt(this->next++);
	}
}

int32_t StringReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		ensureOpen();
		$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
		if (len == 0) {
			return 0;
		}
		if (this->next >= this->length) {
			return -1;
		}
		int32_t n = $Math::min(this->length - this->next, len);
		$nc(this->str)->getChars(this->next, this->next + n, cbuf, off);
		this->next += n;
		return n;
	}
}

int64_t StringReader::skip(int64_t n) {
	$synchronized(this->lock) {
		ensureOpen();
		if (this->next >= this->length) {
			return 0;
		}
		int64_t r = $Math::min((int64_t)(this->length - this->next), n);
		r = $Math::max((int64_t)(-this->next), r);
		this->next += r;
		return r;
	}
}

bool StringReader::ready() {
	$synchronized(this->lock) {
		ensureOpen();
		return true;
	}
}

bool StringReader::markSupported() {
	return true;
}

void StringReader::mark(int32_t readAheadLimit) {
	if (readAheadLimit < 0) {
		$throwNew($IllegalArgumentException, "Read-ahead limit < 0"_s);
	}
	$synchronized(this->lock) {
		ensureOpen();
		this->mark$ = this->next;
	}
}

void StringReader::reset() {
	$synchronized(this->lock) {
		ensureOpen();
		this->next = this->mark$;
	}
}

void StringReader::close() {
	$synchronized(this->lock) {
		$set(this, str, nullptr);
	}
}

StringReader::StringReader() {
}

$Class* StringReader::load$($String* name, bool initialize) {
	$loadClass(StringReader, name, initialize, &_StringReader_ClassInfo_, allocate$StringReader);
	return class$;
}

$Class* StringReader::class$ = nullptr;

	} // io
} // java