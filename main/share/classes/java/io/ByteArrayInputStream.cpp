#include <java/io/ByteArrayInputStream.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _ByteArrayInputStream_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PROTECTED, $field(ByteArrayInputStream, buf)},
	{"pos", "I", nullptr, $PROTECTED, $field(ByteArrayInputStream, pos)},
	{"mark", "I", nullptr, $PROTECTED, $field(ByteArrayInputStream, mark$)},
	{"count", "I", nullptr, $PROTECTED, $field(ByteArrayInputStream, count)},
	{}
};

$MethodInfo _ByteArrayInputStream_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayInputStream::*)($bytes*)>(&ByteArrayInputStream::init$))},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayInputStream::*)($bytes*,int32_t,int32_t)>(&ByteArrayInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"readAllBytes", "()[B", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"readNBytes", "([BII)I", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"skip", "(J)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"transferTo", "(Ljava/io/OutputStream;)J", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ByteArrayInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.ByteArrayInputStream",
	"java.io.InputStream",
	nullptr,
	_ByteArrayInputStream_FieldInfo_,
	_ByteArrayInputStream_MethodInfo_
};

$Object* allocate$ByteArrayInputStream($Class* clazz) {
	return $of($alloc(ByteArrayInputStream));
}

void ByteArrayInputStream::init$($bytes* buf) {
	$InputStream::init$();
	this->mark$ = 0;
	$set(this, buf, buf);
	this->pos = 0;
	this->count = $nc(buf)->length;
}

void ByteArrayInputStream::init$($bytes* buf, int32_t offset, int32_t length) {
	$InputStream::init$();
	this->mark$ = 0;
	$set(this, buf, buf);
	this->pos = offset;
	this->count = $Math::min(offset + length, $nc(buf)->length);
	this->mark$ = offset;
}

int32_t ByteArrayInputStream::read() {
	$synchronized(this) {
		return (this->pos < this->count) ? ((int32_t)($nc(this->buf)->get(this->pos++) & (uint32_t)255)) : -1;
	}
}

int32_t ByteArrayInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$Objects::checkFromIndexSize(off, len, $nc(b)->length);
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
		$System::arraycopy(this->buf, this->pos, b, off, len);
		this->pos += len;
		return len;
	}
}

$bytes* ByteArrayInputStream::readAllBytes() {
	$synchronized(this) {
		$var($bytes, result, $Arrays::copyOfRange(this->buf, this->pos, this->count));
		this->pos = this->count;
		return result;
	}
}

int32_t ByteArrayInputStream::readNBytes($bytes* b, int32_t off, int32_t len) {
	int32_t n = read(b, off, len);
	return n == -1 ? 0 : n;
}

int64_t ByteArrayInputStream::transferTo($OutputStream* out) {
	$synchronized(this) {
		int32_t len = this->count - this->pos;
		$nc(out)->write(this->buf, this->pos, len);
		this->pos = this->count;
		return len;
	}
}

int64_t ByteArrayInputStream::skip(int64_t n) {
	$synchronized(this) {
		int64_t k = this->count - this->pos;
		if (n < k) {
			k = n < 0 ? (int64_t)0 : n;
		}
		this->pos += k;
		return k;
	}
}

int32_t ByteArrayInputStream::available() {
	$synchronized(this) {
		return this->count - this->pos;
	}
}

bool ByteArrayInputStream::markSupported() {
	return true;
}

void ByteArrayInputStream::mark(int32_t readAheadLimit) {
	this->mark$ = this->pos;
}

void ByteArrayInputStream::reset() {
	$synchronized(this) {
		this->pos = this->mark$;
	}
}

void ByteArrayInputStream::close() {
}

ByteArrayInputStream::ByteArrayInputStream() {
}

$Class* ByteArrayInputStream::load$($String* name, bool initialize) {
	$loadClass(ByteArrayInputStream, name, initialize, &_ByteArrayInputStream_ClassInfo_, allocate$ByteArrayInputStream);
	return class$;
}

$Class* ByteArrayInputStream::class$ = nullptr;

	} // io
} // java