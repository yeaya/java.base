#include <sun/nio/fs/NativeBuffers$1.h>

#include <java/lang/ThreadLocal.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <jcpp.h>

using $NativeBufferArray = $Array<::sun::nio::fs::NativeBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TerminatingThreadLocal = ::jdk::internal::misc::TerminatingThreadLocal;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _NativeBuffers$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NativeBuffers$1, init$, void)},
	{"threadTerminated", "([Lsun/nio/fs/NativeBuffer;)V", nullptr, $PROTECTED, $virtualMethod(NativeBuffers$1, threadTerminated, void, $NativeBufferArray*)},
	{"threadTerminated", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(NativeBuffers$1, threadTerminated, void, Object$*)},
	{}
};

$EnclosingMethodInfo _NativeBuffers$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.NativeBuffers",
	nullptr,
	nullptr
};

$InnerClassInfo _NativeBuffers$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.NativeBuffers$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeBuffers$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.NativeBuffers$1",
	"jdk.internal.misc.TerminatingThreadLocal",
	nullptr,
	nullptr,
	_NativeBuffers$1_MethodInfo_,
	"Ljdk/internal/misc/TerminatingThreadLocal<[Lsun/nio/fs/NativeBuffer;>;",
	&_NativeBuffers$1_EnclosingMethodInfo_,
	_NativeBuffers$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.NativeBuffers"
};

$Object* allocate$NativeBuffers$1($Class* clazz) {
	return $of($alloc(NativeBuffers$1));
}

void NativeBuffers$1::init$() {
	$TerminatingThreadLocal::init$();
}

void NativeBuffers$1::threadTerminated($NativeBufferArray* buffers) {
	$useLocalCurrentObjectStackCache();
	if (buffers != nullptr) {
		for (int32_t i = 0; i < 3; ++i) {
			$var($NativeBuffer, buffer, buffers->get(i));
			if (buffer != nullptr) {
				buffer->free();
				buffers->set(i, nullptr);
			}
		}
	}
}

void NativeBuffers$1::threadTerminated(Object$* buffers) {
	this->threadTerminated($cast($NativeBufferArray, buffers));
}

NativeBuffers$1::NativeBuffers$1() {
}

$Class* NativeBuffers$1::load$($String* name, bool initialize) {
	$loadClass(NativeBuffers$1, name, initialize, &_NativeBuffers$1_ClassInfo_, allocate$NativeBuffers$1);
	return class$;
}

$Class* NativeBuffers$1::class$ = nullptr;

		} // fs
	} // nio
} // sun