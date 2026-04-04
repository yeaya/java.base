#include <jdk/internal/jimage/BasicImageReader.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/security/AccessController.h>
#include <java/util/Objects.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/jimage/BasicImageReader$1.h>
#include <jdk/internal/jimage/BasicImageReader$2.h>
#include <jdk/internal/jimage/ImageBufferCache.h>
#include <jdk/internal/jimage/ImageHeader.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageStringsReader.h>
#include <jdk/internal/jimage/NativeImageBuffer.h>
#include <jdk/internal/jimage/decompressor/Decompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef IS_64_BIT
#undef MAGIC
#undef MAJOR_VERSION
#undef MAP_ALL
#undef MAX_VALUE
#undef MINOR_VERSION
#undef READ
#undef READ_ONLY
#undef USE_JVM_MAP

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $AccessController = ::java::security::AccessController;
using $Objects = ::java::util::Objects;
using $IntFunction = ::java::util::function::IntFunction;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntStream = ::java::util::stream::IntStream;
using $BasicImageReader$1 = ::jdk::internal::jimage::BasicImageReader$1;
using $BasicImageReader$2 = ::jdk::internal::jimage::BasicImageReader$2;
using $ImageBufferCache = ::jdk::internal::jimage::ImageBufferCache;
using $ImageHeader = ::jdk::internal::jimage::ImageHeader;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageStringsReader = ::jdk::internal::jimage::ImageStringsReader;
using $NativeImageBuffer = ::jdk::internal::jimage::NativeImageBuffer;
using $Decompressor = ::jdk::internal::jimage::decompressor::Decompressor;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;

namespace jdk {
	namespace internal {
		namespace jimage {

class BasicImageReader$$Lambda$lambda$getEntryNames$0 : public $IntPredicate {
	$class(BasicImageReader$$Lambda$lambda$getEntryNames$0, $NO_CLASS_INIT, $IntPredicate)
public:
	void init$() {
	}
	virtual bool test(int32_t o) override {
		 return BasicImageReader::lambda$getEntryNames$0(o);
	}
};
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicImageReader$$Lambda$lambda$getEntryNames$0, init$, void)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(BasicImageReader$$Lambda$lambda$getEntryNames$0, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$0",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicImageReader$$Lambda$lambda$getEntryNames$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicImageReader$$Lambda$lambda$getEntryNames$0);
	});
	return class$;
}
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$0::class$ = nullptr;

class BasicImageReader$$Lambda$lambda$getEntryNames$1$1 : public $IntFunction {
	$class(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(BasicImageReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t o) override {
		 return $of($nc(inst$)->lambda$getEntryNames$1(o));
	}
	BasicImageReader* inst$ = nullptr;
};
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jimage/BasicImageReader;)V", nullptr, $PUBLIC, $method(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, init$, void, BasicImageReader*)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$1$1",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicImageReader$$Lambda$lambda$getEntryNames$1$1);
	});
	return class$;
}
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$1$1::class$ = nullptr;

class BasicImageReader$$Lambda$lambda$getEntryNames$2$2 : public $IntFunction {
	$class(BasicImageReader$$Lambda$lambda$getEntryNames$2$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return BasicImageReader::lambda$getEntryNames$2(x$0);
	}
};
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicImageReader$$Lambda$lambda$getEntryNames$2$2, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader$$Lambda$lambda$getEntryNames$2$2, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$2$2",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicImageReader$$Lambda$lambda$getEntryNames$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicImageReader$$Lambda$lambda$getEntryNames$2$2);
	});
	return class$;
}
$Class* BasicImageReader$$Lambda$lambda$getEntryNames$2$2::class$ = nullptr;

class BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3 : public $ResourceDecompressor$StringsProvider {
	$class(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, $NO_CLASS_INIT, $ResourceDecompressor$StringsProvider)
public:
	void init$(BasicImageReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $String* getString(int32_t strOffset) override {
		 return $nc(inst$)->lambda$getResourceBuffer$3(strOffset);
	}
	BasicImageReader* inst$ = nullptr;
};
$Class* BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jimage/BasicImageReader;)V", nullptr, $PUBLIC, $method(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, init$, void, BasicImageReader*)},
		{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, getString, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3",
		"java.lang.Object",
		"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3);
	});
	return class$;
}
$Class* BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3::class$ = nullptr;

bool BasicImageReader::IS_64_BIT = false;
bool BasicImageReader::USE_JVM_MAP = false;
bool BasicImageReader::MAP_ALL = false;

bool BasicImageReader::isSystemProperty($String* key, $String* value, $String* def) {
	$init(BasicImageReader);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($$new($BasicImageReader$1, value, key, def)))->booleanValue();
}

void BasicImageReader::init$($Path* path, $ByteOrder* byteOrder) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$set(this, imagePath, $cast($Path, $Objects::requireNonNull(path)));
	$set(this, byteOrder, $cast($ByteOrder, $Objects::requireNonNull(byteOrder)));
	$set(this, name, $nc(this->imagePath)->toString());
	$var($ByteBuffer, map, nullptr);
	if (BasicImageReader::USE_JVM_MAP && BasicImageReader::class$->getClassLoader() == nullptr) {
		$assign(map, $NativeImageBuffer::getNativeMap(this->name));
	} else {
		$assign(map, nullptr);
	}
	if (map != nullptr && BasicImageReader::MAP_ALL) {
		$set(this, channel, nullptr);
	} else {
		$init($StandardOpenOption);
		$set(this, channel, $FileChannel::open(this->imagePath, $$new($OpenOptionArray, {$StandardOpenOption::READ})));
		$AccessController::doPrivileged($$new($BasicImageReader$2, this));
	}
	if (BasicImageReader::MAP_ALL && map == nullptr) {
		$init($FileChannel$MapMode);
		$assign(map, $nc(this->channel)->map($FileChannel$MapMode::READ_ONLY, 0, $nc(this->channel)->size()));
	}
	$var($ByteBuffer, headerBuffer, map);
	int32_t headerSize = $ImageHeader::getHeaderSize();
	if (headerBuffer == nullptr) {
		$assign(headerBuffer, $ByteBuffer::allocateDirect(headerSize));
		if ($nc(this->channel)->read(headerBuffer, 0) == headerSize) {
			$nc(headerBuffer)->rewind();
		} else {
			$throwNew($IOException, $$str({"\""_s, this->name, "\" is not an image file"_s}));
		}
	} else if (headerBuffer->capacity() < headerSize) {
		$throwNew($IOException, $$str({"\""_s, this->name, "\" is not an image file"_s}));
	}
	$set(this, header, readHeader($(intBuffer(headerBuffer, 0, headerSize))));
	this->indexSize = $nc(this->header)->getIndexSize();
	if (map == nullptr) {
		$init($FileChannel$MapMode);
		$assign(map, $nc(this->channel)->map($FileChannel$MapMode::READ_ONLY, 0, this->indexSize));
	}
	$set(this, memoryMap, $nc(map)->asReadOnlyBuffer());
	if ($nc(this->memoryMap)->capacity() < this->indexSize) {
		$throwNew($IOException, $$str({"The image file \""_s, this->name, "\" is corrupted"_s}));
	}
	$var($ByteBuffer, var$0, this->memoryMap);
	int32_t var$1 = this->header->getRedirectOffset();
	$set(this, redirect, intBuffer(var$0, var$1, this->header->getRedirectSize()));
	$var($ByteBuffer, var$2, this->memoryMap);
	int32_t var$3 = this->header->getOffsetsOffset();
	$set(this, offsets, intBuffer(var$2, var$3, this->header->getOffsetsSize()));
	$var($ByteBuffer, var$4, this->memoryMap);
	int32_t var$5 = this->header->getLocationsOffset();
	$set(this, locations, slice(var$4, var$5, this->header->getLocationsSize()));
	$var($ByteBuffer, var$6, this->memoryMap);
	int32_t var$7 = this->header->getStringsOffset();
	$set(this, strings, slice(var$6, var$7, this->header->getStringsSize()));
	$set(this, stringsReader, $new($ImageStringsReader, this));
	$set(this, decompressor, $new($Decompressor));
}

void BasicImageReader::init$($Path* imagePath) {
	BasicImageReader::init$(imagePath, $($ByteOrder::nativeOrder()));
}

BasicImageReader* BasicImageReader::open($Path* imagePath) {
	$init(BasicImageReader);
	return $new(BasicImageReader, imagePath, $($ByteOrder::nativeOrder()));
}

$ImageHeader* BasicImageReader::getHeader() {
	return this->header;
}

$ImageHeader* BasicImageReader::readHeader($IntBuffer* buffer) {
	$useLocalObjectStack();
	$var($ImageHeader, result, $ImageHeader::readFrom(buffer));
	if ($nc(result)->getMagic() != $ImageHeader::MAGIC) {
		$throwNew($IOException, $$str({"\""_s, this->name, "\" is not an image file"_s}));
	}
	bool var$0 = result->getMajorVersion() != $ImageHeader::MAJOR_VERSION;
	if (var$0 || result->getMinorVersion() != $ImageHeader::MINOR_VERSION) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("The image file \""_s);
		var$1->append(this->name);
		var$1->append("\" is not the correct version. Major: "_s);
		var$1->append(result->getMajorVersion());
		var$1->append(". Minor: "_s);
		var$1->append(result->getMinorVersion());
		$throwNew($IOException, $$str(var$1));
	}
	return result;
}

$ByteBuffer* BasicImageReader::slice($ByteBuffer* buffer, int32_t position, int32_t capacity) {
	$init(BasicImageReader);
	$synchronized(buffer) {
		buffer->limit(position + capacity);
		buffer->position(position);
		return buffer->slice();
	}
}

$IntBuffer* BasicImageReader::intBuffer($ByteBuffer* buffer, int32_t offset, int32_t size) {
	$useLocalObjectStack();
	return $$nc($$nc(slice(buffer, offset, size))->order(this->byteOrder))->asIntBuffer();
}

void BasicImageReader::releaseByteBuffer($ByteBuffer* buffer) {
	$init(BasicImageReader);
	$Objects::requireNonNull(buffer);
	if (!BasicImageReader::MAP_ALL) {
		$ImageBufferCache::releaseBuffer(buffer);
	}
}

$String* BasicImageReader::getName() {
	return this->name;
}

$ByteOrder* BasicImageReader::getByteOrder() {
	return this->byteOrder;
}

$Path* BasicImageReader::getImagePath() {
	return this->imagePath;
}

void BasicImageReader::close() {
	if (this->channel != nullptr) {
		this->channel->close();
	}
}

$ImageStringsReader* BasicImageReader::getStrings() {
	return this->stringsReader;
}

$ImageLocation* BasicImageReader::findLocation($String* module, $String* name) {
	int32_t index = getLocationIndex(module, name);
	if (index < 0) {
		return nullptr;
	}
	$var($longs, attributes, getAttributes($nc(this->offsets)->get(index)));
	if (!$ImageLocation::verify(module, name, attributes, this->stringsReader)) {
		return nullptr;
	}
	return $new($ImageLocation, attributes, this->stringsReader);
}

$ImageLocation* BasicImageReader::findLocation($String* name) {
	int32_t index = getLocationIndex(name);
	if (index < 0) {
		return nullptr;
	}
	$var($longs, attributes, getAttributes($nc(this->offsets)->get(index)));
	if (!$ImageLocation::verify(name, attributes, this->stringsReader)) {
		return nullptr;
	}
	return $new($ImageLocation, attributes, this->stringsReader);
}

bool BasicImageReader::verifyLocation($String* module, $String* name) {
	int32_t index = getLocationIndex(module, name);
	if (index < 0) {
		return false;
	}
	int32_t locationOffset = $nc(this->offsets)->get(index);
	return $ImageLocation::verify(module, name, this->locations, locationOffset, this->stringsReader);
}

int32_t BasicImageReader::getLocationIndex($String* name) {
	int32_t count = $nc(this->header)->getTableLength();
	int32_t index = $nc(this->redirect)->get($mod($ImageStringsReader::hashCode(name), count));
	if (index < 0) {
		return -index - 1;
	} else if (index > 0) {
		return $mod($ImageStringsReader::hashCode(name, index), count);
	} else {
		return -1;
	}
}

int32_t BasicImageReader::getLocationIndex($String* module, $String* name) {
	int32_t count = $nc(this->header)->getTableLength();
	int32_t index = $nc(this->redirect)->get($mod($ImageStringsReader::hashCode(module, name), count));
	if (index < 0) {
		return -index - 1;
	} else if (index > 0) {
		return $mod($ImageStringsReader::hashCode(module, name, index), count);
	} else {
		return -1;
	}
}

$StringArray* BasicImageReader::getEntryNames() {
	$useLocalObjectStack();
	$var($ints, attributeOffsets, $new($ints, $nc(this->offsets)->capacity()));
	this->offsets->get(attributeOffsets);
	return $cast($StringArray, $$nc($$nc($$nc($$nc($IntStream::of(attributeOffsets))->filter($$new(BasicImageReader$$Lambda$lambda$getEntryNames$0)))->mapToObj($$new(BasicImageReader$$Lambda$lambda$getEntryNames$1$1, this)))->sorted())->toArray($$new(BasicImageReader$$Lambda$lambda$getEntryNames$2$2)));
}

$ImageLocation* BasicImageReader::getLocation(int32_t offset) {
	return $ImageLocation::readFrom(this, offset);
}

$longs* BasicImageReader::getAttributes(int32_t offset) {
	if (offset < 0 || offset >= $nc(this->locations)->limit()) {
		$throwNew($IndexOutOfBoundsException, "offset"_s);
	}
	return $ImageLocation::decompress(this->locations, offset);
}

$String* BasicImageReader::getString(int32_t offset) {
	if (offset < 0 || offset >= $nc(this->strings)->limit()) {
		$throwNew($IndexOutOfBoundsException, "offset"_s);
	}
	return $ImageStringsReader::stringFromByteBuffer(this->strings, offset);
}

int32_t BasicImageReader::match(int32_t offset, $String* string, int32_t stringOffset) {
	if (offset < 0 || offset >= $nc(this->strings)->limit()) {
		$throwNew($IndexOutOfBoundsException, "offset"_s);
	}
	return $ImageStringsReader::stringFromByteBufferMatches(this->strings, offset, string, stringOffset);
}

$bytes* BasicImageReader::getBufferBytes($ByteBuffer* buffer) {
	$Objects::requireNonNull(buffer);
	$var($bytes, bytes, $new($bytes, buffer->limit()));
	buffer->get(bytes);
	return bytes;
}

$ByteBuffer* BasicImageReader::readBuffer(int64_t offset, int64_t size) {
	$useLocalObjectStack();
	if (offset < 0 || $Integer::MAX_VALUE <= offset) {
		$throwNew($IndexOutOfBoundsException, $$str({"Bad offset: "_s, $$str(offset)}));
	}
	if (size < 0 || $Integer::MAX_VALUE <= size) {
		$throwNew($IndexOutOfBoundsException, $$str({"Bad size: "_s, $$str(size)}));
	}
	if (BasicImageReader::MAP_ALL) {
		$var($ByteBuffer, buffer, slice(this->memoryMap, (int32_t)offset, (int32_t)size));
		$init($ByteOrder);
		$nc(buffer)->order($ByteOrder::BIG_ENDIAN);
		return buffer;
	} else {
		if (this->channel == nullptr) {
			$throwNew($InternalError, "Image file channel not open"_s);
		}
		$var($ByteBuffer, buffer, $ImageBufferCache::getBuffer(size));
		int32_t read = 0;
		try {
			read = $nc(this->channel)->read(buffer, offset);
			$nc(buffer)->rewind();
		} catch ($IOException& ex) {
			$ImageBufferCache::releaseBuffer(buffer);
			$throwNew($RuntimeException, ex);
		}
		if (read != size) {
			$ImageBufferCache::releaseBuffer(buffer);
			$throwNew($RuntimeException, $$str({"Short read: "_s, $$str(read), " instead of "_s, $$str(size), " bytes"_s}));
		}
		return buffer;
	}
}

$bytes* BasicImageReader::getResource($String* name) {
	$Objects::requireNonNull(name);
	$var($ImageLocation, location, findLocation(name));
	return location != nullptr ? getResource(location) : ($bytes*)nullptr;
}

$bytes* BasicImageReader::getResource($ImageLocation* loc) {
	$useLocalObjectStack();
	$var($ByteBuffer, buffer, getResourceBuffer(loc));
	if (buffer != nullptr) {
		$var($bytes, bytes, getBufferBytes(buffer));
		$ImageBufferCache::releaseBuffer(buffer);
		return bytes;
	}
	return nullptr;
}

$ByteBuffer* BasicImageReader::getResourceBuffer($ImageLocation* loc) {
	$useLocalObjectStack();
	$Objects::requireNonNull(loc);
	int64_t offset = loc->getContentOffset() + this->indexSize;
	int64_t compressedSize = loc->getCompressedSize();
	int64_t uncompressedSize = loc->getUncompressedSize();
	if (compressedSize < 0 || $Integer::MAX_VALUE < compressedSize) {
		$throwNew($IndexOutOfBoundsException, $$str({"Bad compressed size: "_s, $$str(compressedSize)}));
	}
	if (uncompressedSize < 0 || $Integer::MAX_VALUE < uncompressedSize) {
		$throwNew($IndexOutOfBoundsException, $$str({"Bad uncompressed size: "_s, $$str(uncompressedSize)}));
	}
	if (compressedSize == 0) {
		return readBuffer(offset, uncompressedSize);
	} else {
		$var($ByteBuffer, buffer, readBuffer(offset, compressedSize));
		if (buffer != nullptr) {
			$var($bytes, bytesIn, getBufferBytes(buffer));
			$ImageBufferCache::releaseBuffer(buffer);
			$var($bytes, bytesOut, nullptr);
			try {
				$assign(bytesOut, $nc(this->decompressor)->decompressResource(this->byteOrder, $$new(BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3, this), bytesIn));
			} catch ($IOException& ex) {
				$throwNew($RuntimeException, ex);
			}
			return $ByteBuffer::wrap(bytesOut);
		}
	}
	return nullptr;
}

$InputStream* BasicImageReader::getResourceStream($ImageLocation* loc) {
	$Objects::requireNonNull(loc);
	$var($bytes, bytes, getResource(loc));
	return $new($ByteArrayInputStream, bytes);
}

$String* BasicImageReader::lambda$getResourceBuffer$3(int32_t strOffset) {
	return getString(strOffset);
}

$StringArray* BasicImageReader::lambda$getEntryNames$2(int32_t x$0) {
	$init(BasicImageReader);
	return $new($StringArray, x$0);
}

$String* BasicImageReader::lambda$getEntryNames$1(int32_t o) {
	return $$nc($ImageLocation::readFrom(this, o))->getFullName();
}

bool BasicImageReader::lambda$getEntryNames$0(int32_t o) {
	$init(BasicImageReader);
	return o != 0;
}

void BasicImageReader::clinit$($Class* clazz) {
	BasicImageReader::IS_64_BIT = BasicImageReader::isSystemProperty("sun.arch.data.model"_s, "64"_s, "32"_s);
	BasicImageReader::USE_JVM_MAP = BasicImageReader::isSystemProperty("jdk.image.use.jvm.map"_s, "true"_s, "true"_s);
	BasicImageReader::MAP_ALL = BasicImageReader::isSystemProperty("jdk.image.map.all"_s, "true"_s, BasicImageReader::IS_64_BIT ? "true"_s : "false"_s);
}

BasicImageReader::BasicImageReader() {
}

$Class* BasicImageReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$0")) {
			return BasicImageReader$$Lambda$lambda$getEntryNames$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$1$1")) {
			return BasicImageReader$$Lambda$lambda$getEntryNames$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getEntryNames$2$2")) {
			return BasicImageReader$$Lambda$lambda$getEntryNames$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.jimage.BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3")) {
			return BasicImageReader$$Lambda$lambda$getResourceBuffer$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"IS_64_BIT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicImageReader, IS_64_BIT)},
		{"USE_JVM_MAP", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicImageReader, USE_JVM_MAP)},
		{"MAP_ALL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicImageReader, MAP_ALL)},
		{"imagePath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, imagePath)},
		{"byteOrder", "Ljava/nio/ByteOrder;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, byteOrder)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, name)},
		{"memoryMap", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, memoryMap)},
		{"channel", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, channel)},
		{"header", "Ljdk/internal/jimage/ImageHeader;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, header)},
		{"indexSize", "J", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, indexSize)},
		{"redirect", "Ljava/nio/IntBuffer;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, redirect)},
		{"offsets", "Ljava/nio/IntBuffer;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, offsets)},
		{"locations", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, locations)},
		{"strings", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, strings)},
		{"stringsReader", "Ljdk/internal/jimage/ImageStringsReader;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, stringsReader)},
		{"decompressor", "Ljdk/internal/jimage/decompressor/Decompressor;", nullptr, $PRIVATE | $FINAL, $field(BasicImageReader, decompressor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;Ljava/nio/ByteOrder;)V", nullptr, $PROTECTED, $method(BasicImageReader, init$, void, $Path*, $ByteOrder*), "java.io.IOException"},
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PROTECTED, $method(BasicImageReader, init$, void, $Path*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, close, void), "java.io.IOException"},
		{"findLocation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, findLocation, $ImageLocation*, $String*, $String*)},
		{"findLocation", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, findLocation, $ImageLocation*, $String*)},
		{"getAttributes", "(I)[J", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getAttributes, $longs*, int32_t)},
		{"getBufferBytes", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PRIVATE, $method(BasicImageReader, getBufferBytes, $bytes*, $ByteBuffer*)},
		{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getByteOrder, $ByteOrder*)},
		{"getEntryNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getEntryNames, $StringArray*)},
		{"getHeader", "()Ljdk/internal/jimage/ImageHeader;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getHeader, $ImageHeader*)},
		{"getImagePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getImagePath, $Path*)},
		{"getLocation", "(I)Ljdk/internal/jimage/ImageLocation;", nullptr, 0, $virtualMethod(BasicImageReader, getLocation, $ImageLocation*, int32_t)},
		{"getLocationIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getLocationIndex, int32_t, $String*)},
		{"getLocationIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(BasicImageReader, getLocationIndex, int32_t, $String*, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getName, $String*)},
		{"getResource", "(Ljava/lang/String;)[B", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getResource, $bytes*, $String*)},
		{"getResource", "(Ljdk/internal/jimage/ImageLocation;)[B", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getResource, $bytes*, $ImageLocation*)},
		{"getResourceBuffer", "(Ljdk/internal/jimage/ImageLocation;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getResourceBuffer, $ByteBuffer*, $ImageLocation*)},
		{"getResourceStream", "(Ljdk/internal/jimage/ImageLocation;)Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getResourceStream, $InputStream*, $ImageLocation*)},
		{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getString, $String*, int32_t)},
		{"getStrings", "()Ljdk/internal/jimage/ImageStringsReader;", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, getStrings, $ImageStringsReader*)},
		{"intBuffer", "(Ljava/nio/ByteBuffer;II)Ljava/nio/IntBuffer;", nullptr, $PRIVATE, $method(BasicImageReader, intBuffer, $IntBuffer*, $ByteBuffer*, int32_t, int32_t)},
		{"isSystemProperty", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BasicImageReader, isSystemProperty, bool, $String*, $String*, $String*)},
		{"lambda$getEntryNames$0", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicImageReader, lambda$getEntryNames$0, bool, int32_t)},
		{"lambda$getEntryNames$1", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(BasicImageReader, lambda$getEntryNames$1, $String*, int32_t)},
		{"lambda$getEntryNames$2", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicImageReader, lambda$getEntryNames$2, $StringArray*, int32_t)},
		{"lambda$getResourceBuffer$3", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(BasicImageReader, lambda$getResourceBuffer$3, $String*, int32_t)},
		{"match", "(ILjava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, match, int32_t, int32_t, $String*, int32_t)},
		{"open", "(Ljava/nio/file/Path;)Ljdk/internal/jimage/BasicImageReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicImageReader, open, BasicImageReader*, $Path*), "java.io.IOException"},
		{"readBuffer", "(JJ)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(BasicImageReader, readBuffer, $ByteBuffer*, int64_t, int64_t)},
		{"readHeader", "(Ljava/nio/IntBuffer;)Ljdk/internal/jimage/ImageHeader;", nullptr, $PRIVATE, $method(BasicImageReader, readHeader, $ImageHeader*, $IntBuffer*), "java.io.IOException"},
		{"releaseByteBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicImageReader, releaseByteBuffer, void, $ByteBuffer*)},
		{"slice", "(Ljava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $staticMethod(BasicImageReader, slice, $ByteBuffer*, $ByteBuffer*, int32_t, int32_t)},
		{"verifyLocation", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(BasicImageReader, verifyLocation, bool, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.BasicImageReader$2", nullptr, nullptr, 0},
		{"jdk.internal.jimage.BasicImageReader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jimage.BasicImageReader",
		"java.lang.Object",
		"java.lang.AutoCloseable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jimage.BasicImageReader$2,jdk.internal.jimage.BasicImageReader$1"
	};
	$loadClass(BasicImageReader, name, initialize, &classInfo$$, BasicImageReader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicImageReader);
	});
	return class$;
}

$Class* BasicImageReader::class$ = nullptr;

		} // jimage
	} // internal
} // jdk