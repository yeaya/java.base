#include <jdk/internal/jimage/ImageBufferCache$1.h>

#include <java/lang/ThreadLocal.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Map$Entry = ::java::util::Map$Entry;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _ImageBufferCache$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageBufferCache$1::*)()>(&ImageBufferCache$1::init$))},
	{"initialValue", "()[Ljava/util/Map$Entry;", "()[Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _ImageBufferCache$1_EnclosingMethodInfo_ = {
	"jdk.internal.jimage.ImageBufferCache",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageBufferCache$1_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageBufferCache$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageBufferCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageBufferCache$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_ImageBufferCache$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<[Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;>;",
	&_ImageBufferCache$1_EnclosingMethodInfo_,
	_ImageBufferCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageBufferCache"
};

$Object* allocate$ImageBufferCache$1($Class* clazz) {
	return $of($alloc(ImageBufferCache$1));
}

void ImageBufferCache$1::init$() {
	$ThreadLocal::init$();
}

$Object* ImageBufferCache$1::initialValue() {
	return $of($new($Map$EntryArray, 3 + 1));
}

ImageBufferCache$1::ImageBufferCache$1() {
}

$Class* ImageBufferCache$1::load$($String* name, bool initialize) {
	$loadClass(ImageBufferCache$1, name, initialize, &_ImageBufferCache$1_ClassInfo_, allocate$ImageBufferCache$1);
	return class$;
}

$Class* ImageBufferCache$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk