#include <jdk/internal/jimage/NativeImageBuffer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/jimage/NativeImageBuffer$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NativeImageBuffer$1 = ::jdk::internal::jimage::NativeImageBuffer$1;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _NativeImageBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeImageBuffer::*)()>(&NativeImageBuffer::init$))},
	{"getNativeMap", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;", nullptr, $STATIC | $NATIVE, $method(static_cast<$ByteBuffer*(*)($String*)>(&NativeImageBuffer::getNativeMap))},
	{}
};

#define _METHOD_INDEX_getNativeMap 1

$InnerClassInfo _NativeImageBuffer_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.NativeImageBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeImageBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.NativeImageBuffer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeImageBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_NativeImageBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.NativeImageBuffer$1"
};

$Object* allocate$NativeImageBuffer($Class* clazz) {
	return $of($alloc(NativeImageBuffer));
}

void NativeImageBuffer::init$() {
}

$ByteBuffer* NativeImageBuffer::getNativeMap($String* imagePath) {
	$init(NativeImageBuffer);
	$var($ByteBuffer, $ret, nullptr);
	$prepareNativeStatic(NativeImageBuffer, getNativeMap, $ByteBuffer*, $String* imagePath);
	$assign($ret, $invokeNativeStatic(NativeImageBuffer, getNativeMap, imagePath));
	$finishNativeStatic();
	return $ret;
}

void clinit$NativeImageBuffer($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NativeImageBuffer$1)));
	}
}

NativeImageBuffer::NativeImageBuffer() {
}

$Class* NativeImageBuffer::load$($String* name, bool initialize) {
	$loadClass(NativeImageBuffer, name, initialize, &_NativeImageBuffer_ClassInfo_, clinit$NativeImageBuffer, allocate$NativeImageBuffer);
	return class$;
}

$Class* NativeImageBuffer::class$ = nullptr;

		} // jimage
	} // internal
} // jdk