#include <java/io/ByteArrayOutputStream.h>

#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace io {

$CompoundAttribute _ByteArrayOutputStream_MethodAnnotations_toString10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ByteArrayOutputStream_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PROTECTED, $field(ByteArrayOutputStream, buf)},
	{"count", "I", nullptr, $PROTECTED, $field(ByteArrayOutputStream, count)},
	{}
};

$MethodInfo _ByteArrayOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ByteArrayOutputStream, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ByteArrayOutputStream, init$, void, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ByteArrayOutputStream, close, void), "java.io.IOException"},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(ByteArrayOutputStream, ensureCapacity, void, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, reset, void)},
	{"size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, size, int32_t)},
	{"toByteArray", "()[B", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, toByteArray, $bytes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, toString, $String*)},
	{"toString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, toString, $String*, $String*), "java.io.UnsupportedEncodingException"},
	{"toString", "(Ljava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, toString, $String*, $Charset*)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(ByteArrayOutputStream, toString, $String*, int32_t), nullptr, nullptr, _ByteArrayOutputStream_MethodAnnotations_toString10},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, write, void, int32_t)},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, write, void, $bytes*, int32_t, int32_t)},
	{"writeBytes", "([B)V", nullptr, $PUBLIC, $virtualMethod(ByteArrayOutputStream, writeBytes, void, $bytes*)},
	{"writeTo", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ByteArrayOutputStream, writeTo, void, $OutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _ByteArrayOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.ByteArrayOutputStream",
	"java.io.OutputStream",
	nullptr,
	_ByteArrayOutputStream_FieldInfo_,
	_ByteArrayOutputStream_MethodInfo_
};

$Object* allocate$ByteArrayOutputStream($Class* clazz) {
	return $of($alloc(ByteArrayOutputStream));
}

void ByteArrayOutputStream::init$() {
	ByteArrayOutputStream::init$(32);
}

void ByteArrayOutputStream::init$(int32_t size) {
	$useLocalCurrentObjectStackCache();
	$OutputStream::init$();
	if (size < 0) {
		$throwNew($IllegalArgumentException, $$str({"Negative initial size: "_s, $$str(size)}));
	}
	$set(this, buf, $new($bytes, size));
}

void ByteArrayOutputStream::ensureCapacity(int32_t minCapacity) {
	int32_t oldCapacity = $nc(this->buf)->length;
	int32_t minGrowth = minCapacity - oldCapacity;
	if (minGrowth > 0) {
		$set(this, buf, $Arrays::copyOf(this->buf, $ArraysSupport::newLength(oldCapacity, minGrowth, oldCapacity)));
	}
}

void ByteArrayOutputStream::write(int32_t b) {
	$synchronized(this) {
		ensureCapacity(this->count + 1);
		$nc(this->buf)->set(this->count, (int8_t)b);
		this->count += 1;
	}
}

void ByteArrayOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$Objects::checkFromIndexSize(off, len, $nc(b)->length);
		ensureCapacity(this->count + len);
		$System::arraycopy(b, off, this->buf, this->count, len);
		this->count += len;
	}
}

void ByteArrayOutputStream::writeBytes($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void ByteArrayOutputStream::writeTo($OutputStream* out) {
	$synchronized(this) {
		$nc(out)->write(this->buf, 0, this->count);
	}
}

void ByteArrayOutputStream::reset() {
	$synchronized(this) {
		this->count = 0;
	}
}

$bytes* ByteArrayOutputStream::toByteArray() {
	$synchronized(this) {
		return $Arrays::copyOf(this->buf, this->count);
	}
}

int32_t ByteArrayOutputStream::size() {
	$synchronized(this) {
		return this->count;
	}
}

$String* ByteArrayOutputStream::toString() {
	$synchronized(this) {
		return $new($String, this->buf, 0, this->count);
	}
}

$String* ByteArrayOutputStream::toString($String* charsetName) {
	$synchronized(this) {
		return $new($String, this->buf, 0, this->count, charsetName);
	}
}

$String* ByteArrayOutputStream::toString($Charset* charset) {
	$synchronized(this) {
		return $new($String, this->buf, 0, this->count, charset);
	}
}

$String* ByteArrayOutputStream::toString(int32_t hibyte) {
	$synchronized(this) {
		return $new($String, this->buf, hibyte, 0, this->count);
	}
}

void ByteArrayOutputStream::close() {
}

ByteArrayOutputStream::ByteArrayOutputStream() {
}

$Class* ByteArrayOutputStream::load$($String* name, bool initialize) {
	$loadClass(ByteArrayOutputStream, name, initialize, &_ByteArrayOutputStream_ClassInfo_, allocate$ByteArrayOutputStream);
	return class$;
}

$Class* ByteArrayOutputStream::class$ = nullptr;

	} // io
} // java