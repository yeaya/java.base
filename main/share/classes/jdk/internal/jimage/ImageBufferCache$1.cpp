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

namespace jdk {
	namespace internal {
		namespace jimage {

void ImageBufferCache$1::init$() {
	$ThreadLocal::init$();
}

$Object* ImageBufferCache$1::initialValue() {
	return $new($Map$EntryArray, 3 + 1);
}

ImageBufferCache$1::ImageBufferCache$1() {
}

$Class* ImageBufferCache$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImageBufferCache$1, init$, void)},
		{"initialValue", "()[Ljava/util/Map$Entry;", "()[Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;", $PROTECTED, $virtualMethod(ImageBufferCache$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jimage.ImageBufferCache",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageBufferCache$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jimage.ImageBufferCache$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<[Ljava/util/Map$Entry<Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;Ljava/lang/Integer;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.ImageBufferCache"
	};
	$loadClass(ImageBufferCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageBufferCache$1);
	});
	return class$;
}

$Class* ImageBufferCache$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk