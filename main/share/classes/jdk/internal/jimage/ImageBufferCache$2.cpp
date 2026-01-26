#include <jdk/internal/jimage/ImageBufferCache$2.h>

#include <java/util/Map$Entry.h>
#include <jdk/internal/jimage/ImageBufferCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $ImageBufferCache = ::jdk::internal::jimage::ImageBufferCache;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _ImageBufferCache$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ImageBufferCache$2, init$, void)},
	{"compare", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", "(Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;)I", $PUBLIC, $virtualMethod(ImageBufferCache$2, compare, int32_t, $Map$Entry*, $Map$Entry*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ImageBufferCache$2, compare, int32_t, Object$*, Object$*)},
	{}
};

$EnclosingMethodInfo _ImageBufferCache$2_EnclosingMethodInfo_ = {
	"jdk.internal.jimage.ImageBufferCache",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageBufferCache$2_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageBufferCache$2", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageBufferCache$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageBufferCache$2",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ImageBufferCache$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;>;",
	&_ImageBufferCache$2_EnclosingMethodInfo_,
	_ImageBufferCache$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageBufferCache"
};

$Object* allocate$ImageBufferCache$2($Class* clazz) {
	return $of($alloc(ImageBufferCache$2));
}

void ImageBufferCache$2::init$() {
}

int32_t ImageBufferCache$2::compare($Map$Entry* br1, $Map$Entry* br2) {
	int32_t var$0 = $ImageBufferCache::getCapacity(br1);
	return $Integer::compare(var$0, $ImageBufferCache::getCapacity(br2));
}

int32_t ImageBufferCache$2::compare(Object$* br1, Object$* br2) {
	return this->compare($cast($Map$Entry, br1), $cast($Map$Entry, br2));
}

ImageBufferCache$2::ImageBufferCache$2() {
}

$Class* ImageBufferCache$2::load$($String* name, bool initialize) {
	$loadClass(ImageBufferCache$2, name, initialize, &_ImageBufferCache$2_ClassInfo_, allocate$ImageBufferCache$2);
	return class$;
}

$Class* ImageBufferCache$2::class$ = nullptr;

		} // jimage
	} // internal
} // jdk