#include <java/io/StringBufferInputStream.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {
$CompoundAttribute _StringBufferInputStream_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _StringBufferInputStream_FieldInfo_[] = {
	{"buffer", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StringBufferInputStream, buffer)},
	{"pos", "I", nullptr, $PROTECTED, $field(StringBufferInputStream, pos)},
	{"count", "I", nullptr, $PROTECTED, $field(StringBufferInputStream, count)},
	{}
};

$MethodInfo _StringBufferInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringBufferInputStream::*)($String*)>(&StringBufferInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"skip", "(J)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _StringBufferInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.StringBufferInputStream",
	"java.io.InputStream",
	nullptr,
	_StringBufferInputStream_FieldInfo_,
	_StringBufferInputStream_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_StringBufferInputStream_Annotations_
};

$Object* allocate$StringBufferInputStream($Class* clazz) {
	return $of($alloc(StringBufferInputStream));
}

void StringBufferInputStream::init$($String* s) {
	$InputStream::init$();
	$set(this, buffer, s);
	this->count = $nc(s)->length();
}

int32_t StringBufferInputStream::read() {
	$synchronized(this) {
		return (this->pos < this->count) ? ((int32_t)($nc(this->buffer)->charAt(this->pos++) & (uint32_t)255)) : -1;
	}
}

int32_t StringBufferInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (b == nullptr) {
			$throwNew($NullPointerException);
		} else if ((off < 0) || (off > $nc(b)->length) || (len < 0) || ((off + len) > $nc(b)->length) || ((off + len) < 0)) {
			$throwNew($IndexOutOfBoundsException);
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
		$nc(this->buffer)->getBytes(this->pos, this->pos + len, b, off);
		this->pos += len;
		return len;
	}
}

int64_t StringBufferInputStream::skip(int64_t n) {
	$synchronized(this) {
		if (n < 0) {
			return 0;
		}
		if (n > this->count - this->pos) {
			n = this->count - this->pos;
		}
		this->pos += n;
		return n;
	}
}

int32_t StringBufferInputStream::available() {
	$synchronized(this) {
		return this->count - this->pos;
	}
}

void StringBufferInputStream::reset() {
	$synchronized(this) {
		this->pos = 0;
	}
}

StringBufferInputStream::StringBufferInputStream() {
}

$Class* StringBufferInputStream::load$($String* name, bool initialize) {
	$loadClass(StringBufferInputStream, name, initialize, &_StringBufferInputStream_ClassInfo_, allocate$StringBufferInputStream);
	return class$;
}

$Class* StringBufferInputStream::class$ = nullptr;

	} // io
} // java