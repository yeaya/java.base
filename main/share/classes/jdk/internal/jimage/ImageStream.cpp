#include <jdk/internal/jimage/ImageStream.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageStream_FieldInfo_[] = {
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(ImageStream, buffer)},
	{}
};

$MethodInfo _ImageStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)()>(&ImageStream::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)(int32_t)>(&ImageStream::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)($bytes*)>(&ImageStream::init$))},
	{"<init>", "(Ljava/nio/ByteOrder;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)($ByteOrder*)>(&ImageStream::init$))},
	{"<init>", "(ILjava/nio/ByteOrder;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)(int32_t,$ByteOrder*)>(&ImageStream::init$))},
	{"<init>", "([BLjava/nio/ByteOrder;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)($bytes*,$ByteOrder*)>(&ImageStream::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageStream::*)($ByteBuffer*)>(&ImageStream::init$))},
	{"align", "(I)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"ensure", "(I)V", nullptr, $PUBLIC},
	{"get", "()I", nullptr, $PUBLIC},
	{"get", "([BII)V", nullptr, $PUBLIC},
	{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"getBytes", "()[B", nullptr, $PUBLIC},
	{"getInt", "()I", nullptr, $PUBLIC},
	{"getLong", "()J", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"getShort", "()I", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"hasByte", "()Z", nullptr, $PUBLIC},
	{"hasBytes", "(I)Z", nullptr, $PUBLIC},
	{"put", "(B)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"put", "(I)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"put", "([BII)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"put", "(Ljdk/internal/jimage/ImageStream;)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"putInt", "(I)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"putLong", "(J)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"putShort", "(S)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"putShort", "(I)Ljdk/internal/jimage/ImageStream;", nullptr, $PUBLIC},
	{"setPosition", "(I)V", nullptr, $PUBLIC},
	{"skip", "(I)V", nullptr, $PUBLIC},
	{"toArray", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.ImageStream",
	"java.lang.Object",
	nullptr,
	_ImageStream_FieldInfo_,
	_ImageStream_MethodInfo_
};

$Object* allocate$ImageStream($Class* clazz) {
	return $of($alloc(ImageStream));
}

void ImageStream::init$() {
	ImageStream::init$(1024, $($ByteOrder::nativeOrder()));
}

void ImageStream::init$(int32_t size) {
	ImageStream::init$(size, $($ByteOrder::nativeOrder()));
}

void ImageStream::init$($bytes* bytes) {
	ImageStream::init$(bytes, $($ByteOrder::nativeOrder()));
}

void ImageStream::init$($ByteOrder* byteOrder) {
	ImageStream::init$(1024, byteOrder);
}

void ImageStream::init$(int32_t size, $ByteOrder* byteOrder) {
	$set(this, buffer, $ByteBuffer::allocate(size));
	$nc(this->buffer)->order($cast($ByteOrder, $Objects::requireNonNull(byteOrder)));
}

void ImageStream::init$($bytes* bytes, $ByteOrder* byteOrder) {
	$set(this, buffer, $ByteBuffer::wrap($cast($bytes, $Objects::requireNonNull(bytes))));
	$nc(this->buffer)->order($cast($ByteOrder, $Objects::requireNonNull(byteOrder)));
}

void ImageStream::init$($ByteBuffer* buffer) {
	$set(this, buffer, $cast($ByteBuffer, $Objects::requireNonNull(buffer)));
}

ImageStream* ImageStream::align(int32_t alignment) {
	int32_t padding = (int32_t)((getSize() - 1) & (uint32_t)(($sl(1, alignment)) - 1));
	for (int32_t i = 0; i < padding; ++i) {
		put((int8_t)0);
	}
	return this;
}

void ImageStream::ensure(int32_t needs) {
	$useLocalCurrentObjectStackCache();
	if (needs < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"Bad value: "_s, $$str(needs)}));
	}
	if (needs > $nc(this->buffer)->remaining()) {
		$var($bytes, bytes, $cast($bytes, $nc(this->buffer)->array()));
		$var($ByteOrder, byteOrder, $nc(this->buffer)->order());
		int32_t position = $nc(this->buffer)->position();
		int32_t newSize = needs <= $nc(bytes)->length ? $nc(bytes)->length << 1 : position + needs;
		$set(this, buffer, $ByteBuffer::allocate(newSize));
		$nc(this->buffer)->order(byteOrder);
		$nc(this->buffer)->put(bytes, 0, position);
	}
}

bool ImageStream::hasByte() {
	return $nc(this->buffer)->remaining() != 0;
}

bool ImageStream::hasBytes(int32_t needs) {
	return needs <= $nc(this->buffer)->remaining();
}

void ImageStream::skip(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if (n < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"skip value = "_s, $$str(n)}));
	}
	$nc(this->buffer)->position($nc(this->buffer)->position() + n);
}

int32_t ImageStream::get() {
	return (int32_t)($nc(this->buffer)->get() & (uint32_t)255);
}

void ImageStream::get($bytes* bytes, int32_t offset, int32_t size) {
	$nc(this->buffer)->get(bytes, offset, size);
}

int32_t ImageStream::getShort() {
	return $nc(this->buffer)->getShort();
}

int32_t ImageStream::getInt() {
	return $nc(this->buffer)->getInt();
}

int64_t ImageStream::getLong() {
	return $nc(this->buffer)->getLong();
}

ImageStream* ImageStream::put(int8_t byt) {
	ensure(1);
	$nc(this->buffer)->put(byt);
	return this;
}

ImageStream* ImageStream::put(int32_t byt) {
	return put((int8_t)byt);
}

ImageStream* ImageStream::put($bytes* bytes, int32_t offset, int32_t size) {
	ensure(size);
	$nc(this->buffer)->put(bytes, offset, size);
	return this;
}

ImageStream* ImageStream::put(ImageStream* stream) {
	$var($bytes, var$0, $cast($bytes, $nc($nc(stream)->buffer)->array()));
	put(var$0, 0, $nc(stream->buffer)->position());
	return this;
}

ImageStream* ImageStream::putShort(int16_t value) {
	ensure(2);
	$nc(this->buffer)->putShort(value);
	return this;
}

ImageStream* ImageStream::putShort(int32_t value) {
	return putShort((int16_t)value);
}

ImageStream* ImageStream::putInt(int32_t value) {
	ensure(4);
	$nc(this->buffer)->putInt(value);
	return this;
}

ImageStream* ImageStream::putLong(int64_t value) {
	ensure(8);
	$nc(this->buffer)->putLong(value);
	return this;
}

$ByteBuffer* ImageStream::getBuffer() {
	return this->buffer;
}

int32_t ImageStream::getPosition() {
	return $nc(this->buffer)->position();
}

int32_t ImageStream::getSize() {
	return $nc(this->buffer)->position();
}

$bytes* ImageStream::getBytes() {
	return $cast($bytes, $nc(this->buffer)->array());
}

void ImageStream::setPosition(int32_t offset) {
	$nc(this->buffer)->position(offset);
}

$bytes* ImageStream::toArray() {
	$var($bytes, var$0, $cast($bytes, $nc(this->buffer)->array()));
	return $Arrays::copyOf(var$0, $nc(this->buffer)->position());
}

ImageStream::ImageStream() {
}

$Class* ImageStream::load$($String* name, bool initialize) {
	$loadClass(ImageStream, name, initialize, &_ImageStream_ClassInfo_, allocate$ImageStream);
	return class$;
}

$Class* ImageStream::class$ = nullptr;

		} // jimage
	} // internal
} // jdk