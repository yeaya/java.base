#include <jdk/internal/jimage/ImageHeader.h>

#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/jimage/ImageStream.h>
#include <jcpp.h>

#undef HEADER_SLOTS
#undef MAGIC
#undef MAJOR_VERSION
#undef MINOR_VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $Objects = ::java::util::Objects;
using $ImageStream = ::jdk::internal::jimage::ImageStream;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageHeader_FieldInfo_[] = {
	{"MAGIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageHeader, MAGIC)},
	{"MAJOR_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageHeader, MAJOR_VERSION)},
	{"MINOR_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageHeader, MINOR_VERSION)},
	{"HEADER_SLOTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageHeader, HEADER_SLOTS)},
	{"magic", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, magic)},
	{"majorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, majorVersion)},
	{"minorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, minorVersion)},
	{"flags", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, flags)},
	{"resourceCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, resourceCount)},
	{"tableLength", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, tableLength)},
	{"locationsSize", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, locationsSize)},
	{"stringsSize", "I", nullptr, $PRIVATE | $FINAL, $field(ImageHeader, stringsSize)},
	{}
};

$MethodInfo _ImageHeader_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(ImageHeader, init$, void, int32_t, int32_t, int32_t, int32_t)},
	{"<init>", "(IIIIIIII)V", nullptr, $PUBLIC, $method(ImageHeader, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"getFlags", "()I", nullptr, $PUBLIC, $method(ImageHeader, getFlags, int32_t)},
	{"getHeaderSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageHeader, getHeaderSize, int32_t)},
	{"getIndexSize", "()I", nullptr, $PUBLIC, $method(ImageHeader, getIndexSize, int32_t)},
	{"getLocationsOffset", "()I", nullptr, 0, $method(ImageHeader, getLocationsOffset, int32_t)},
	{"getLocationsSize", "()I", nullptr, $PUBLIC, $method(ImageHeader, getLocationsSize, int32_t)},
	{"getMagic", "()I", nullptr, $PUBLIC, $method(ImageHeader, getMagic, int32_t)},
	{"getMajorVersion", "()I", nullptr, $PUBLIC, $method(ImageHeader, getMajorVersion, int32_t)},
	{"getMinorVersion", "()I", nullptr, $PUBLIC, $method(ImageHeader, getMinorVersion, int32_t)},
	{"getOffsetsOffset", "()I", nullptr, 0, $method(ImageHeader, getOffsetsOffset, int32_t)},
	{"getOffsetsSize", "()I", nullptr, $PUBLIC, $method(ImageHeader, getOffsetsSize, int32_t)},
	{"getRedirectOffset", "()I", nullptr, 0, $method(ImageHeader, getRedirectOffset, int32_t)},
	{"getRedirectSize", "()I", nullptr, $PUBLIC, $method(ImageHeader, getRedirectSize, int32_t)},
	{"getResourceCount", "()I", nullptr, $PUBLIC, $method(ImageHeader, getResourceCount, int32_t)},
	{"getStringsOffset", "()I", nullptr, 0, $method(ImageHeader, getStringsOffset, int32_t)},
	{"getStringsSize", "()I", nullptr, $PUBLIC, $method(ImageHeader, getStringsSize, int32_t)},
	{"getTableLength", "()I", nullptr, $PUBLIC, $method(ImageHeader, getTableLength, int32_t)},
	{"readFrom", "(Ljava/nio/IntBuffer;)Ljdk/internal/jimage/ImageHeader;", nullptr, $STATIC, $staticMethod(ImageHeader, readFrom, ImageHeader*, $IntBuffer*)},
	{"writeTo", "(Ljdk/internal/jimage/ImageStream;)V", nullptr, $PUBLIC, $method(ImageHeader, writeTo, void, $ImageStream*)},
	{"writeTo", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(ImageHeader, writeTo, void, $ByteBuffer*)},
	{}
};

$ClassInfo _ImageHeader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.ImageHeader",
	"java.lang.Object",
	nullptr,
	_ImageHeader_FieldInfo_,
	_ImageHeader_MethodInfo_
};

$Object* allocate$ImageHeader($Class* clazz) {
	return $of($alloc(ImageHeader));
}

void ImageHeader::init$(int32_t resourceCount, int32_t tableCount, int32_t locationsSize, int32_t stringsSize) {
	ImageHeader::init$(ImageHeader::MAGIC, ImageHeader::MAJOR_VERSION, ImageHeader::MINOR_VERSION, 0, resourceCount, tableCount, locationsSize, stringsSize);
}

void ImageHeader::init$(int32_t magic, int32_t majorVersion, int32_t minorVersion, int32_t flags, int32_t resourceCount, int32_t tableLength, int32_t locationsSize, int32_t stringsSize) {
	this->magic = magic;
	this->majorVersion = majorVersion;
	this->minorVersion = minorVersion;
	this->flags = flags;
	this->resourceCount = resourceCount;
	this->tableLength = tableLength;
	this->locationsSize = locationsSize;
	this->stringsSize = stringsSize;
}

int32_t ImageHeader::getHeaderSize() {
	return ImageHeader::HEADER_SLOTS * 4;
}

ImageHeader* ImageHeader::readFrom($IntBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(buffer);
	if (buffer->capacity() != ImageHeader::HEADER_SLOTS) {
		$throwNew($InternalError, $$str({"jimage header not the correct size: "_s, $$str(buffer->capacity())}));
	}
	int32_t magic = buffer->get(0);
	int32_t version = buffer->get(1);
	int32_t majorVersion = (int32_t)((uint32_t)version >> 16);
	int32_t minorVersion = (int32_t)(version & (uint32_t)0x0000FFFF);
	int32_t flags = buffer->get(2);
	int32_t resourceCount = buffer->get(3);
	int32_t tableLength = buffer->get(4);
	int32_t locationsSize = buffer->get(5);
	int32_t stringsSize = buffer->get(6);
	return $new(ImageHeader, magic, majorVersion, minorVersion, flags, resourceCount, tableLength, locationsSize, stringsSize);
}

void ImageHeader::writeTo($ImageStream* stream) {
	$Objects::requireNonNull(stream);
	stream->ensure(getHeaderSize());
	writeTo($(stream->getBuffer()));
}

void ImageHeader::writeTo($ByteBuffer* buffer) {
	$Objects::requireNonNull(buffer);
	buffer->putInt(this->magic);
	buffer->putInt((this->majorVersion << 16) | this->minorVersion);
	buffer->putInt(this->flags);
	buffer->putInt(this->resourceCount);
	buffer->putInt(this->tableLength);
	buffer->putInt(this->locationsSize);
	buffer->putInt(this->stringsSize);
}

int32_t ImageHeader::getMagic() {
	return this->magic;
}

int32_t ImageHeader::getMajorVersion() {
	return this->majorVersion;
}

int32_t ImageHeader::getMinorVersion() {
	return this->minorVersion;
}

int32_t ImageHeader::getFlags() {
	return this->flags;
}

int32_t ImageHeader::getResourceCount() {
	return this->resourceCount;
}

int32_t ImageHeader::getTableLength() {
	return this->tableLength;
}

int32_t ImageHeader::getRedirectSize() {
	return this->tableLength * 4;
}

int32_t ImageHeader::getOffsetsSize() {
	return this->tableLength * 4;
}

int32_t ImageHeader::getLocationsSize() {
	return this->locationsSize;
}

int32_t ImageHeader::getStringsSize() {
	return this->stringsSize;
}

int32_t ImageHeader::getIndexSize() {
	int32_t var$3 = getHeaderSize();
	int32_t var$2 = var$3 + getRedirectSize();
	int32_t var$1 = var$2 + getOffsetsSize();
	int32_t var$0 = var$1 + getLocationsSize();
	return var$0 + getStringsSize();
}

int32_t ImageHeader::getRedirectOffset() {
	return getHeaderSize();
}

int32_t ImageHeader::getOffsetsOffset() {
	int32_t var$0 = getRedirectOffset();
	return var$0 + getRedirectSize();
}

int32_t ImageHeader::getLocationsOffset() {
	int32_t var$0 = getOffsetsOffset();
	return var$0 + getOffsetsSize();
}

int32_t ImageHeader::getStringsOffset() {
	int32_t var$0 = getLocationsOffset();
	return var$0 + getLocationsSize();
}

ImageHeader::ImageHeader() {
}

$Class* ImageHeader::load$($String* name, bool initialize) {
	$loadClass(ImageHeader, name, initialize, &_ImageHeader_ClassInfo_, allocate$ImageHeader);
	return class$;
}

$Class* ImageHeader::class$ = nullptr;

		} // jimage
	} // internal
} // jdk