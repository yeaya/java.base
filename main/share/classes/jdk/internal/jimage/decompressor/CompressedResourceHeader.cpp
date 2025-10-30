#include <jdk/internal/jimage/decompressor/CompressedResourceHeader.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Objects.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jcpp.h>

#undef MAGIC
#undef SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Objects = ::java::util::Objects;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$FieldInfo _CompressedResourceHeader_FieldInfo_[] = {
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompressedResourceHeader, SIZE)},
	{"MAGIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompressedResourceHeader, MAGIC)},
	{"uncompressedSize", "J", nullptr, $PRIVATE | $FINAL, $field(CompressedResourceHeader, uncompressedSize)},
	{"compressedSize", "J", nullptr, $PRIVATE | $FINAL, $field(CompressedResourceHeader, compressedSize)},
	{"decompressorNameOffset", "I", nullptr, $PRIVATE | $FINAL, $field(CompressedResourceHeader, decompressorNameOffset)},
	{"contentOffset", "I", nullptr, $PRIVATE | $FINAL, $field(CompressedResourceHeader, contentOffset)},
	{"isTerminal", "Z", nullptr, $PRIVATE | $FINAL, $field(CompressedResourceHeader, isTerminal$)},
	{}
};

$MethodInfo _CompressedResourceHeader_MethodInfo_[] = {
	{"<init>", "(JJIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(CompressedResourceHeader::*)(int64_t,int64_t,int32_t,int32_t,bool)>(&CompressedResourceHeader::init$))},
	{"getBytes", "(Ljava/nio/ByteOrder;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(CompressedResourceHeader::*)($ByteOrder*)>(&CompressedResourceHeader::getBytes))},
	{"getContentOffset", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CompressedResourceHeader::*)()>(&CompressedResourceHeader::getContentOffset))},
	{"getDecompressorNameOffset", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CompressedResourceHeader::*)()>(&CompressedResourceHeader::getDecompressorNameOffset))},
	{"getResourceSize", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(CompressedResourceHeader::*)()>(&CompressedResourceHeader::getResourceSize))},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&CompressedResourceHeader::getSize))},
	{"getStoredContent", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(CompressedResourceHeader::*)($ResourceDecompressor$StringsProvider*)>(&CompressedResourceHeader::getStoredContent))},
	{"getUncompressedSize", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(CompressedResourceHeader::*)()>(&CompressedResourceHeader::getUncompressedSize))},
	{"isTerminal", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CompressedResourceHeader::*)()>(&CompressedResourceHeader::isTerminal))},
	{"readFromResource", "(Ljava/nio/ByteOrder;[B)Ljdk/internal/jimage/decompressor/CompressedResourceHeader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CompressedResourceHeader*(*)($ByteOrder*,$bytes*)>(&CompressedResourceHeader::readFromResource))},
	{}
};

$ClassInfo _CompressedResourceHeader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.CompressedResourceHeader",
	"java.lang.Object",
	nullptr,
	_CompressedResourceHeader_FieldInfo_,
	_CompressedResourceHeader_MethodInfo_
};

$Object* allocate$CompressedResourceHeader($Class* clazz) {
	return $of($alloc(CompressedResourceHeader));
}

void CompressedResourceHeader::init$(int64_t compressedSize, int64_t uncompressedSize, int32_t decompressorNameOffset, int32_t contentOffset, bool isTerminal) {
	this->compressedSize = compressedSize;
	this->uncompressedSize = uncompressedSize;
	this->decompressorNameOffset = decompressorNameOffset;
	this->contentOffset = contentOffset;
	this->isTerminal$ = isTerminal;
}

bool CompressedResourceHeader::isTerminal() {
	return this->isTerminal$;
}

int32_t CompressedResourceHeader::getDecompressorNameOffset() {
	return this->decompressorNameOffset;
}

int32_t CompressedResourceHeader::getContentOffset() {
	return this->contentOffset;
}

$String* CompressedResourceHeader::getStoredContent($ResourceDecompressor$StringsProvider* provider) {
	$Objects::requireNonNull(provider);
	if (this->contentOffset == -1) {
		return nullptr;
	}
	return provider->getString(this->contentOffset);
}

int64_t CompressedResourceHeader::getUncompressedSize() {
	return this->uncompressedSize;
}

int64_t CompressedResourceHeader::getResourceSize() {
	return this->compressedSize;
}

$bytes* CompressedResourceHeader::getBytes($ByteOrder* order) {
	$Objects::requireNonNull(order);
	$var($ByteBuffer, buffer, $ByteBuffer::allocate(CompressedResourceHeader::SIZE));
	$nc(buffer)->order(order);
	buffer->putInt(CompressedResourceHeader::MAGIC);
	buffer->putLong(this->compressedSize);
	buffer->putLong(this->uncompressedSize);
	buffer->putInt(this->decompressorNameOffset);
	buffer->putInt(this->contentOffset);
	buffer->put(this->isTerminal$ ? (int8_t)1 : (int8_t)0);
	return $cast($bytes, buffer->array());
}

int32_t CompressedResourceHeader::getSize() {
	return CompressedResourceHeader::SIZE;
}

CompressedResourceHeader* CompressedResourceHeader::readFromResource($ByteOrder* order, $bytes* resource) {
	$Objects::requireNonNull(order);
	$Objects::requireNonNull(resource);
	if (resource->length < getSize()) {
		return nullptr;
	}
	$var($ByteBuffer, buffer, $ByteBuffer::wrap(resource, 0, CompressedResourceHeader::SIZE));
	$nc(buffer)->order(order);
	int32_t magic = buffer->getInt();
	if (magic != CompressedResourceHeader::MAGIC) {
		return nullptr;
	}
	int64_t size = buffer->getLong();
	int64_t uncompressedSize = buffer->getLong();
	int32_t decompressorNameOffset = buffer->getInt();
	int32_t contentIndex = buffer->getInt();
	int8_t isTerminal = buffer->get();
	return $new(CompressedResourceHeader, size, uncompressedSize, decompressorNameOffset, contentIndex, isTerminal == 1);
}

CompressedResourceHeader::CompressedResourceHeader() {
}

$Class* CompressedResourceHeader::load$($String* name, bool initialize) {
	$loadClass(CompressedResourceHeader, name, initialize, &_CompressedResourceHeader_ClassInfo_, allocate$CompressedResourceHeader);
	return class$;
}

$Class* CompressedResourceHeader::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk