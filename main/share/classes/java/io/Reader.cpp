#include <java/io/Reader.h>

#include <java/io/IOException.h>
#include <java/io/Reader$1.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Readable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef TRANSFER_BUFFER_SIZE

using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $Reader$1 = ::java::io::Reader$1;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Readable = ::java::lang::Readable;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _Reader_FieldInfo_[] = {
	{"TRANSFER_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Reader, TRANSFER_BUFFER_SIZE)},
	{"lock", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(Reader, lock)},
	{"maxSkipBufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Reader, maxSkipBufferSize)},
	{"skipBuffer", "[C", nullptr, $PRIVATE, $field(Reader, skipBuffer)},
	{}
};

$MethodInfo _Reader_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Reader::*)()>(&Reader::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(Reader::*)(Object$*)>(&Reader::init$))},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"nullReader", "()Ljava/io/Reader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Reader*(*)()>(&Reader::nullReader))},
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([C)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transferTo", "(Ljava/io/Writer;)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Reader_InnerClassesInfo_[] = {
	{"java.io.Reader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.Reader",
	"java.lang.Object",
	"java.lang.Readable,java.io.Closeable",
	_Reader_FieldInfo_,
	_Reader_MethodInfo_,
	nullptr,
	nullptr,
	_Reader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.Reader$1"
};

$Object* allocate$Reader($Class* clazz) {
	return $of($alloc(Reader));
}

int32_t Reader::hashCode() {
	 return this->$Readable::hashCode();
}

bool Reader::equals(Object$* obj) {
	 return this->$Readable::equals(obj);
}

$Object* Reader::clone() {
	 return this->$Readable::clone();
}

$String* Reader::toString() {
	 return this->$Readable::toString();
}

void Reader::finalize() {
	this->$Readable::finalize();
}

Reader* Reader::nullReader() {
	$init(Reader);
	return $new($Reader$1);
}

void Reader::init$() {
	$set(this, skipBuffer, nullptr);
	$set(this, lock, this);
}

void Reader::init$(Object$* lock) {
	$set(this, skipBuffer, nullptr);
	if (lock == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, lock, lock);
}

int32_t Reader::read($CharBuffer* target) {
	if ($nc(target)->isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	int32_t nread = 0;
	if ($nc(target)->hasArray()) {
		$var($chars, cbuf, $cast($chars, target->array()));
		int32_t pos = target->position();
		int32_t rem = $Math::max(target->limit() - pos, 0);
		int32_t off = target->arrayOffset() + pos;
		nread = this->read(cbuf, off, rem);
		if (nread > 0) {
			target->position(pos + nread);
		}
	} else {
		int32_t len = target->remaining();
		$var($chars, cbuf, $new($chars, len));
		nread = read(cbuf, 0, len);
		if (nread > 0) {
			target->put(cbuf, 0, nread);
		}
	}
	return nread;
}

int32_t Reader::read() {
	$var($chars, cb, $new($chars, 1));
	if (read(cb, 0, 1) == -1) {
		return -1;
	} else {
		return cb->get(0);
	}
}

int32_t Reader::read($chars* cbuf) {
	return read(cbuf, 0, $nc(cbuf)->length);
}

int64_t Reader::skip(int64_t n) {
	if (n < (int64_t)0) {
		$throwNew($IllegalArgumentException, "skip value is negative"_s);
	}
	int32_t nn = (int32_t)$Math::min(n, (int64_t)Reader::maxSkipBufferSize);
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
		return n - r;
	}
}

bool Reader::ready() {
	return false;
}

bool Reader::markSupported() {
	return false;
}

void Reader::mark(int32_t readAheadLimit) {
	$throwNew($IOException, "mark() not supported"_s);
}

void Reader::reset() {
	$throwNew($IOException, "reset() not supported"_s);
}

int64_t Reader::transferTo($Writer* out) {
	$Objects::requireNonNull($of(out), "out"_s);
	int64_t transferred = 0;
	$var($chars, buffer, $new($chars, Reader::TRANSFER_BUFFER_SIZE));
	int32_t nRead = 0;
	while ((nRead = read(buffer, 0, Reader::TRANSFER_BUFFER_SIZE)) >= 0) {
		$nc(out)->write(buffer, 0, nRead);
		transferred += nRead;
	}
	return transferred;
}

Reader::Reader() {
}

$Class* Reader::load$($String* name, bool initialize) {
	$loadClass(Reader, name, initialize, &_Reader_ClassInfo_, allocate$Reader);
	return class$;
}

$Class* Reader::class$ = nullptr;

	} // io
} // java