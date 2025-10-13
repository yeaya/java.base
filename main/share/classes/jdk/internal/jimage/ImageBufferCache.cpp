#include <jdk/internal/jimage/ImageBufferCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractMap$SimpleEntry.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Map$Entry.h>
#include <jdk/internal/jimage/ImageBufferCache$1.h>
#include <jdk/internal/jimage/ImageBufferCache$2.h>
#include <jcpp.h>

#undef CACHE
#undef DECREASING_CAPACITY_NULLS_LAST
#undef LARGE_BUFFER
#undef MAX_CACHED_BUFFERS
#undef MAX_VALUE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractMap$SimpleEntry = ::java::util::AbstractMap$SimpleEntry;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Map$Entry = ::java::util::Map$Entry;
using $ImageBufferCache$1 = ::jdk::internal::jimage::ImageBufferCache$1;
using $ImageBufferCache$2 = ::jdk::internal::jimage::ImageBufferCache$2;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageBufferCache_FieldInfo_[] = {
	{"MAX_CACHED_BUFFERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageBufferCache, MAX_CACHED_BUFFERS)},
	{"LARGE_BUFFER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageBufferCache, LARGE_BUFFER)},
	{"CACHE", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<[Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ImageBufferCache, CACHE)},
	{"DECREASING_CAPACITY_NULLS_LAST", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;>;", $PRIVATE | $STATIC, $staticField(ImageBufferCache, DECREASING_CAPACITY_NULLS_LAST)},
	{}
};

$MethodInfo _ImageBufferCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageBufferCache::*)()>(&ImageBufferCache::init$))},
	{"allocateBuffer", "(J)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)(int64_t)>(&ImageBufferCache::allocateBuffer))},
	{"getBuffer", "(J)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $method(static_cast<$ByteBuffer*(*)(int64_t)>(&ImageBufferCache::getBuffer))},
	{"getByteBuffer", "(Ljava/util/Map$Entry;)Ljava/nio/ByteBuffer;", "(Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;)Ljava/nio/ByteBuffer;", $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)($Map$Entry*)>(&ImageBufferCache::getByteBuffer))},
	{"getCapacity", "(Ljava/util/Map$Entry;)I", "(Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Map$Entry*)>(&ImageBufferCache::getCapacity))},
	{"newCacheEntry", "(Ljava/nio/ByteBuffer;)Ljava/util/Map$Entry;", "(Ljava/nio/ByteBuffer;)Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $method(static_cast<$Map$Entry*(*)($ByteBuffer*)>(&ImageBufferCache::newCacheEntry))},
	{"releaseBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $STATIC, $method(static_cast<void(*)($ByteBuffer*)>(&ImageBufferCache::releaseBuffer))},
	{}
};

$InnerClassInfo _ImageBufferCache_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageBufferCache$2", nullptr, nullptr, 0},
	{"jdk.internal.jimage.ImageBufferCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageBufferCache_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageBufferCache",
	"java.lang.Object",
	nullptr,
	_ImageBufferCache_FieldInfo_,
	_ImageBufferCache_MethodInfo_,
	nullptr,
	nullptr,
	_ImageBufferCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageBufferCache$2,jdk.internal.jimage.ImageBufferCache$1"
};

$Object* allocate$ImageBufferCache($Class* clazz) {
	return $of($alloc(ImageBufferCache));
}

$ThreadLocal* ImageBufferCache::CACHE = nullptr;
$Comparator* ImageBufferCache::DECREASING_CAPACITY_NULLS_LAST = nullptr;

void ImageBufferCache::init$() {
}

$ByteBuffer* ImageBufferCache::allocateBuffer(int64_t size) {
	$init(ImageBufferCache);
	return $ByteBuffer::allocateDirect((int32_t)((int64_t)((size + 4095) & (uint64_t)(int64_t)~4095)));
}

$ByteBuffer* ImageBufferCache::getBuffer(int64_t size) {
	$init(ImageBufferCache);
	if (size < 0 || $Integer::MAX_VALUE < size) {
		$throwNew($IndexOutOfBoundsException, "size"_s);
	}
	$var($ByteBuffer, result, nullptr);
	if (size > ImageBufferCache::LARGE_BUFFER) {
		$assign(result, allocateBuffer(size));
	} else {
		$var($Map$EntryArray, cache, $cast($Map$EntryArray, $nc(ImageBufferCache::CACHE)->get()));
		for (int32_t i = ImageBufferCache::MAX_CACHED_BUFFERS - 1; i >= 0; --i) {
			$var($Map$Entry, reference, $nc(cache)->get(i));
			if (reference != nullptr) {
				$var($ByteBuffer, buffer, getByteBuffer(reference));
				if (buffer != nullptr && size <= buffer->capacity()) {
					cache->set(i, nullptr);
					$assign(result, buffer);
					result->rewind();
					break;
				}
			}
		}
		if (result == nullptr) {
			$assign(result, allocateBuffer(size));
		}
	}
	$nc(result)->limit((int32_t)size);
	return result;
}

void ImageBufferCache::releaseBuffer($ByteBuffer* buffer) {
	$init(ImageBufferCache);
	if ($nc(buffer)->capacity() > ImageBufferCache::LARGE_BUFFER) {
		return;
	}
	$var($Map$EntryArray, cache, $cast($Map$EntryArray, $nc(ImageBufferCache::CACHE)->get()));
	for (int32_t i = 0; i < ImageBufferCache::MAX_CACHED_BUFFERS; ++i) {
		$var($Map$Entry, reference, $nc(cache)->get(i));
		if (reference != nullptr && getByteBuffer(reference) == nullptr) {
			cache->set(i, nullptr);
		}
	}
	$nc(cache)->set(ImageBufferCache::MAX_CACHED_BUFFERS, $(newCacheEntry(buffer)));
	$Arrays::sort(cache, ImageBufferCache::DECREASING_CAPACITY_NULLS_LAST);
	cache->set(ImageBufferCache::MAX_CACHED_BUFFERS, nullptr);
}

$Map$Entry* ImageBufferCache::newCacheEntry($ByteBuffer* bb) {
	$init(ImageBufferCache);
	$var($Object, var$0, $of($new($WeakReference, bb)));
	return $new($AbstractMap$SimpleEntry, var$0, $($Integer::valueOf($nc(bb)->capacity())));
}

int32_t ImageBufferCache::getCapacity($Map$Entry* e) {
	$init(ImageBufferCache);
	return e == nullptr ? 0 : $nc(($cast($Integer, $($nc(e)->getValue()))))->intValue();
}

$ByteBuffer* ImageBufferCache::getByteBuffer($Map$Entry* e) {
	$init(ImageBufferCache);
	return e == nullptr ? ($ByteBuffer*)nullptr : $cast($ByteBuffer, $nc(($cast($WeakReference, $($nc(e)->getKey()))))->get());
}

void clinit$ImageBufferCache($Class* class$) {
	$assignStatic(ImageBufferCache::CACHE, $new($ImageBufferCache$1));
	$assignStatic(ImageBufferCache::DECREASING_CAPACITY_NULLS_LAST, $new($ImageBufferCache$2));
}

ImageBufferCache::ImageBufferCache() {
}

$Class* ImageBufferCache::load$($String* name, bool initialize) {
	$loadClass(ImageBufferCache, name, initialize, &_ImageBufferCache_ClassInfo_, clinit$ImageBufferCache, allocate$ImageBufferCache);
	return class$;
}

$Class* ImageBufferCache::class$ = nullptr;

		} // jimage
	} // internal
} // jdk