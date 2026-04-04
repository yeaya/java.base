#include <jdk/internal/jimage/NativeImageBuffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <jdk/internal/jimage/NativeImageBuffer$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $NativeImageBuffer$1 = ::jdk::internal::jimage::NativeImageBuffer$1;

namespace jdk {
	namespace internal {
		namespace jimage {

void NativeImageBuffer::init$() {
}

$ByteBuffer* NativeImageBuffer::getNativeMap($String* imagePath) {
	$init(NativeImageBuffer);
	$prepareNativeStatic(getNativeMap, $ByteBuffer*, $String* imagePath);
	$var($ByteBuffer, $ret, $invokeNativeStaticObject(imagePath));
	$finishNativeStatic();
	return $ret;
}

void NativeImageBuffer::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($NativeImageBuffer$1));
	}
}

NativeImageBuffer::NativeImageBuffer() {
}

$Class* NativeImageBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeImageBuffer, init$, void)},
		{"getNativeMap", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;", nullptr, $STATIC | $NATIVE, $staticMethod(NativeImageBuffer, getNativeMap, $ByteBuffer*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.NativeImageBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jimage.NativeImageBuffer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jimage.NativeImageBuffer$1"
	};
	$loadClass(NativeImageBuffer, name, initialize, &classInfo$$, NativeImageBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeImageBuffer);
	});
	return class$;
}

$Class* NativeImageBuffer::class$ = nullptr;

		} // jimage
	} // internal
} // jdk