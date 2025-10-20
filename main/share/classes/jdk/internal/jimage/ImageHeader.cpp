#include <jdk/internal/jimage/ImageHeader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Buffer = ::java::nio::Buffer;
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
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(ImageHeader::*)(int32_t,int32_t,int32_t,int32_t)>(&ImageHeader::init$))},
	{"<init>", "(IIIIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(ImageHeader::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ImageHeader::init$))},
	{"getFlags", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getFlags))},
	{"getHeaderSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&ImageHeader::getHeaderSize))},
	{"getIndexSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getIndexSize))},
	{"getLocationsOffset", "()I", nullptr, 0, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getLocationsOffset))},
	{"getLocationsSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getLocationsSize))},
	{"getMagic", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getMagic))},
	{"getMajorVersion", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getMajorVersion))},
	{"getMinorVersion", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getMinorVersion))},
	{"getOffsetsOffset", "()I", nullptr, 0, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getOffsetsOffset))},
	{"getOffsetsSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getOffsetsSize))},
	{"getRedirectOffset", "()I", nullptr, 0, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getRedirectOffset))},
	{"getRedirectSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getRedirectSize))},
	{"getResourceCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getResourceCount))},
	{"getStringsOffset", "()I", nullptr, 0, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getStringsOffset))},
	{"getStringsSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getStringsSize))},
	{"getTableLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ImageHeader::*)()>(&ImageHeader::getTableLength))},
	{"readFrom", "(Ljava/nio/IntBuffer;)Ljdk/internal/jimage/ImageHeader;", nullptr, $STATIC, $method(static_cast<ImageHeader*(*)($IntBuffer*)>(&ImageHeader::readFrom))},
	{"writeTo", "(Ljdk/internal/jimage/ImageStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageHeader::*)($ImageStream*)>(&ImageHeader::writeTo))},
	{"writeTo", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageHeader::*)($ByteBuffer*)>(&ImageHeader::writeTo))},
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