#include <jdk/internal/jimage/ImageLocation.h>

#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/jimage/BasicImageReader.h>
#include <jdk/internal/jimage/ImageStream.h>
#include <jdk/internal/jimage/ImageStrings.h>
#include <jdk/internal/jimage/ImageStringsReader.h>
#include <jcpp.h>

#undef ATTRIBUTE_BASE
#undef ATTRIBUTE_COMPRESSED
#undef ATTRIBUTE_COUNT
#undef ATTRIBUTE_END
#undef ATTRIBUTE_EXTENSION
#undef ATTRIBUTE_MODULE
#undef ATTRIBUTE_OFFSET
#undef ATTRIBUTE_PARENT
#undef ATTRIBUTE_UNCOMPRESSED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $BasicImageReader = ::jdk::internal::jimage::BasicImageReader;
using $ImageStream = ::jdk::internal::jimage::ImageStream;
using $ImageStrings = ::jdk::internal::jimage::ImageStrings;
using $ImageStringsReader = ::jdk::internal::jimage::ImageStringsReader;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageLocation_FieldInfo_[] = {
	{"ATTRIBUTE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_END)},
	{"ATTRIBUTE_MODULE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_MODULE)},
	{"ATTRIBUTE_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_PARENT)},
	{"ATTRIBUTE_BASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_BASE)},
	{"ATTRIBUTE_EXTENSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_EXTENSION)},
	{"ATTRIBUTE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_OFFSET)},
	{"ATTRIBUTE_COMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_COMPRESSED)},
	{"ATTRIBUTE_UNCOMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_UNCOMPRESSED)},
	{"ATTRIBUTE_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageLocation, ATTRIBUTE_COUNT)},
	{"attributes", "[J", nullptr, $PROTECTED | $FINAL, $field(ImageLocation, attributes)},
	{"strings", "Ljdk/internal/jimage/ImageStrings;", nullptr, $PROTECTED | $FINAL, $field(ImageLocation, strings)},
	{}
};

$MethodInfo _ImageLocation_MethodInfo_[] = {
	{"<init>", "([JLjdk/internal/jimage/ImageStrings;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageLocation::*)($longs*,$ImageStrings*)>(&ImageLocation::init$))},
	{"buildName", "(ZZZ)Ljava/lang/String;", nullptr, 0},
	{"compress", "([J)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($longs*)>(&ImageLocation::compress))},
	{"decompress", "(Ljava/nio/ByteBuffer;I)[J", nullptr, $STATIC, $method(static_cast<$longs*(*)($ByteBuffer*,int32_t)>(&ImageLocation::decompress))},
	{"getAttribute", "(I)J", nullptr, 0},
	{"getAttributeString", "(I)Ljava/lang/String;", nullptr, 0},
	{"getBase", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBaseOffset", "()I", nullptr, $PUBLIC},
	{"getCompressedSize", "()J", nullptr, $PUBLIC},
	{"getContentOffset", "()J", nullptr, $PUBLIC},
	{"getExtension", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExtensionOffset", "()I", nullptr, $PUBLIC},
	{"getFullName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFullName", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getModule", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getModuleOffset", "()I", nullptr, $PUBLIC},
	{"getParent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParentOffset", "()I", nullptr, $PUBLIC},
	{"getStrings", "()Ljdk/internal/jimage/ImageStrings;", nullptr, 0},
	{"getUncompressedSize", "()J", nullptr, $PUBLIC},
	{"readFrom", "(Ljdk/internal/jimage/BasicImageReader;I)Ljdk/internal/jimage/ImageLocation;", nullptr, $STATIC, $method(static_cast<ImageLocation*(*)($BasicImageReader*,int32_t)>(&ImageLocation::readFrom))},
	{"readValue", "(ILjava/nio/ByteBuffer;II)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,$ByteBuffer*,int32_t,int32_t)>(&ImageLocation::readValue))},
	{"verify", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"verify", "(Ljava/lang/String;[JLjdk/internal/jimage/ImageStrings;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$longs*,$ImageStrings*)>(&ImageLocation::verify))},
	{"verify", "(Ljava/lang/String;Ljava/lang/String;Ljava/nio/ByteBuffer;ILjdk/internal/jimage/ImageStrings;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$String*,$ByteBuffer*,int32_t,$ImageStrings*)>(&ImageLocation::verify))},
	{"verify", "(Ljava/lang/String;Ljava/lang/String;[JLjdk/internal/jimage/ImageStrings;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$String*,$longs*,$ImageStrings*)>(&ImageLocation::verify))},
	{"verifyName", "(Ljava/lang/String;Ljava/lang/String;IIIIIILjdk/internal/jimage/ImageStrings;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$ImageStrings*)>(&ImageLocation::verifyName))},
	{}
};

$ClassInfo _ImageLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.ImageLocation",
	"java.lang.Object",
	nullptr,
	_ImageLocation_FieldInfo_,
	_ImageLocation_MethodInfo_
};

$Object* allocate$ImageLocation($Class* clazz) {
	return $of($alloc(ImageLocation));
}

void ImageLocation::init$($longs* attributes, $ImageStrings* strings) {
	$set(this, attributes, $cast($longs, $Objects::requireNonNull(attributes)));
	$set(this, strings, $cast($ImageStrings, $Objects::requireNonNull(strings)));
}

$ImageStrings* ImageLocation::getStrings() {
	return this->strings;
}

$longs* ImageLocation::decompress($ByteBuffer* bytes, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(bytes);
	$var($longs, attributes, $new($longs, ImageLocation::ATTRIBUTE_COUNT));
	int32_t limit = bytes->limit();
	while (offset < limit) {
		int32_t data = (int32_t)(bytes->get(offset++) & (uint32_t)255);
		if (data <= 7) {
			break;
		}
		int32_t kind = (int32_t)((uint32_t)data >> 3);
		if (ImageLocation::ATTRIBUTE_COUNT <= kind) {
			$throwNew($InternalError, $$str({"Invalid jimage attribute kind: "_s, $$str(kind)}));
		}
		int32_t length = ((int32_t)(data & (uint32_t)7)) + 1;
		attributes->set(kind, readValue(length, bytes, offset, limit));
		offset += length;
	}
	return attributes;
}

$bytes* ImageLocation::compress($longs* attributes) {
	$Objects::requireNonNull(attributes);
	$var($ImageStream, stream, $new($ImageStream, 16));
	for (int32_t kind = ImageLocation::ATTRIBUTE_END + 1; kind < ImageLocation::ATTRIBUTE_COUNT; ++kind) {
		int64_t value = attributes->get(kind);
		if (value != 0) {
			int32_t n = (63 - $Long::numberOfLeadingZeros(value)) >> 3;
			stream->put((kind << 3) | n);
			for (int32_t i = n; i >= 0; --i) {
				stream->put((int32_t)($sr(value, i << 3)));
			}
		}
	}
	stream->put(ImageLocation::ATTRIBUTE_END << 3);
	return stream->toArray();
}

bool ImageLocation::verify($String* name) {
	return verify(name, this->attributes, this->strings);
}

bool ImageLocation::verify($String* name, $longs* attributes, $ImageStrings* strings) {
	$Objects::requireNonNull(name);
	int32_t length = name->length();
	int32_t index = 0;
	int32_t moduleOffset = (int32_t)$nc(attributes)->get(ImageLocation::ATTRIBUTE_MODULE);
	if (moduleOffset != 0 && length >= 1) {
		int32_t moduleLen = $nc(strings)->match(moduleOffset, name, 1);
		index = moduleLen + 1;
		bool var$0 = moduleLen < 0 || length <= index || name->charAt(0) != u'/';
		if (var$0 || name->charAt(index++) != u'/') {
			return false;
		}
	}
	return verifyName(nullptr, name, index, length, 0, (int32_t)attributes->get(ImageLocation::ATTRIBUTE_PARENT), (int32_t)attributes->get(ImageLocation::ATTRIBUTE_BASE), (int32_t)attributes->get(ImageLocation::ATTRIBUTE_EXTENSION), strings);
}

bool ImageLocation::verify($String* module, $String* name, $ByteBuffer* locations, int32_t locationOffset, $ImageStrings* strings) {
	$useLocalCurrentObjectStackCache();
	int32_t moduleOffset = 0;
	int32_t parentOffset = 0;
	int32_t baseOffset = 0;
	int32_t extOffset = 0;
	int32_t limit = $nc(locations)->limit();
	while (locationOffset < limit) {
		int32_t data = (int32_t)(locations->get(locationOffset++) & (uint32_t)255);
		if (data <= 7) {
			break;
		}
		int32_t kind = (int32_t)((uint32_t)data >> 3);
		if (ImageLocation::ATTRIBUTE_COUNT <= kind) {
			$throwNew($InternalError, $$str({"Invalid jimage attribute kind: "_s, $$str(kind)}));
		}
		int32_t length = ((int32_t)(data & (uint32_t)7)) + 1;
		switch (kind) {
		case ImageLocation::ATTRIBUTE_MODULE:
			{
				moduleOffset = (int32_t)readValue(length, locations, locationOffset, limit);
				break;
			}
		case ImageLocation::ATTRIBUTE_BASE:
			{
				baseOffset = (int32_t)readValue(length, locations, locationOffset, limit);
				break;
			}
		case ImageLocation::ATTRIBUTE_PARENT:
			{
				parentOffset = (int32_t)readValue(length, locations, locationOffset, limit);
				break;
			}
		case ImageLocation::ATTRIBUTE_EXTENSION:
			{
				extOffset = (int32_t)readValue(length, locations, locationOffset, limit);
				break;
			}
		}
		locationOffset += length;
	}
	return verifyName(module, name, 0, $nc(name)->length(), moduleOffset, parentOffset, baseOffset, extOffset, strings);
}

int64_t ImageLocation::readValue(int32_t length, $ByteBuffer* buffer, int32_t offset, int32_t limit) {
	int64_t value = 0;
	for (int32_t j = 0; j < length; ++j) {
		value <<= 8;
		if (offset >= limit) {
			$throwNew($InternalError, "Missing jimage attribute data"_s);
		}
		value |= (int32_t)($nc(buffer)->get(offset++) & (uint32_t)255);
	}
	return value;
}

bool ImageLocation::verify($String* module, $String* name, $longs* attributes, $ImageStrings* strings) {
	$Objects::requireNonNull(module);
	$Objects::requireNonNull(name);
	return verifyName(module, name, 0, name->length(), (int32_t)$nc(attributes)->get(ImageLocation::ATTRIBUTE_MODULE), (int32_t)attributes->get(ImageLocation::ATTRIBUTE_PARENT), (int32_t)attributes->get(ImageLocation::ATTRIBUTE_BASE), (int32_t)attributes->get(ImageLocation::ATTRIBUTE_EXTENSION), strings);
}

bool ImageLocation::verifyName($String* module, $String* name, int32_t index, int32_t length, int32_t moduleOffset, int32_t parentOffset, int32_t baseOffset, int32_t extOffset, $ImageStrings* strings) {
	if (moduleOffset != 0) {
		int32_t var$0 = $nc(strings)->match(moduleOffset, module, 0);
		if (var$0 != $nc(module)->length()) {
			return false;
		}
	}
	if (parentOffset != 0) {
		int32_t parentLen = $nc(strings)->match(parentOffset, name, index);
		if (parentLen < 0) {
			return false;
		}
		index += parentLen;
		if (length <= index || $nc(name)->charAt(index++) != u'/') {
			return false;
		}
	}
	int32_t baseLen = $nc(strings)->match(baseOffset, name, index);
	if (baseLen < 0) {
		return false;
	}
	index += baseLen;
	if (extOffset != 0) {
		if (length <= index || $nc(name)->charAt(index++) != u'.') {
			return false;
		}
		int32_t extLen = strings->match(extOffset, name, index);
		if (extLen < 0) {
			return false;
		}
		index += extLen;
	}
	return length == index;
}

int64_t ImageLocation::getAttribute(int32_t kind) {
	$useLocalCurrentObjectStackCache();
	if (kind < ImageLocation::ATTRIBUTE_END || ImageLocation::ATTRIBUTE_COUNT <= kind) {
		$throwNew($InternalError, $$str({"Invalid jimage attribute kind: "_s, $$str(kind)}));
	}
	return $nc(this->attributes)->get(kind);
}

$String* ImageLocation::getAttributeString(int32_t kind) {
	$useLocalCurrentObjectStackCache();
	if (kind < ImageLocation::ATTRIBUTE_END || ImageLocation::ATTRIBUTE_COUNT <= kind) {
		$throwNew($InternalError, $$str({"Invalid jimage attribute kind: "_s, $$str(kind)}));
	}
	return $nc($(getStrings()))->get((int32_t)$nc(this->attributes)->get(kind));
}

$String* ImageLocation::getModule() {
	return getAttributeString(ImageLocation::ATTRIBUTE_MODULE);
}

int32_t ImageLocation::getModuleOffset() {
	return (int32_t)getAttribute(ImageLocation::ATTRIBUTE_MODULE);
}

$String* ImageLocation::getBase() {
	return getAttributeString(ImageLocation::ATTRIBUTE_BASE);
}

int32_t ImageLocation::getBaseOffset() {
	return (int32_t)getAttribute(ImageLocation::ATTRIBUTE_BASE);
}

$String* ImageLocation::getParent() {
	return getAttributeString(ImageLocation::ATTRIBUTE_PARENT);
}

int32_t ImageLocation::getParentOffset() {
	return (int32_t)getAttribute(ImageLocation::ATTRIBUTE_PARENT);
}

$String* ImageLocation::getExtension() {
	return getAttributeString(ImageLocation::ATTRIBUTE_EXTENSION);
}

int32_t ImageLocation::getExtensionOffset() {
	return (int32_t)getAttribute(ImageLocation::ATTRIBUTE_EXTENSION);
}

$String* ImageLocation::getFullName() {
	return getFullName(false);
}

$String* ImageLocation::getFullName(bool modulesPrefix) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder));
	if (getModuleOffset() != 0) {
		if (modulesPrefix) {
			builder->append("/modules"_s);
		}
		builder->append(u'/');
		builder->append($(getModule()));
		builder->append(u'/');
	}
	if (getParentOffset() != 0) {
		builder->append($(getParent()));
		builder->append(u'/');
	}
	builder->append($(getBase()));
	if (getExtensionOffset() != 0) {
		builder->append(u'.');
		builder->append($(getExtension()));
	}
	return builder->toString();
}

$String* ImageLocation::buildName(bool includeModule, bool includeParent, bool includeName) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder));
	if (includeModule && getModuleOffset() != 0) {
		builder->append("/modules/"_s);
		builder->append($(getModule()));
	}
	if (includeParent && getParentOffset() != 0) {
		builder->append(u'/');
		builder->append($(getParent()));
	}
	if (includeName) {
		if (includeModule || includeParent) {
			builder->append(u'/');
		}
		builder->append($(getBase()));
		if (getExtensionOffset() != 0) {
			builder->append(u'.');
			builder->append($(getExtension()));
		}
	}
	return builder->toString();
}

int64_t ImageLocation::getContentOffset() {
	return getAttribute(ImageLocation::ATTRIBUTE_OFFSET);
}

int64_t ImageLocation::getCompressedSize() {
	return getAttribute(ImageLocation::ATTRIBUTE_COMPRESSED);
}

int64_t ImageLocation::getUncompressedSize() {
	return getAttribute(ImageLocation::ATTRIBUTE_UNCOMPRESSED);
}

ImageLocation* ImageLocation::readFrom($BasicImageReader* reader, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(reader);
	$var($longs, attributes, reader->getAttributes(offset));
	$var($ImageStringsReader, strings, reader->getStrings());
	return $new(ImageLocation, attributes, strings);
}

ImageLocation::ImageLocation() {
}

$Class* ImageLocation::load$($String* name, bool initialize) {
	$loadClass(ImageLocation, name, initialize, &_ImageLocation_ClassInfo_, allocate$ImageLocation);
	return class$;
}

$Class* ImageLocation::class$ = nullptr;

		} // jimage
	} // internal
} // jdk