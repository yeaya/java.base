#include <sun/nio/ch/Util$1.h>

#include <java/lang/ThreadLocal.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>
#include <sun/nio/ch/Util$BufferCache.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $TerminatingThreadLocal = ::jdk::internal::misc::TerminatingThreadLocal;
using $Util = ::sun::nio::ch::Util;
using $Util$BufferCache = ::sun::nio::ch::Util$BufferCache;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Util$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Util$1, init$, void)},
	{"initialValue", "()Lsun/nio/ch/Util$BufferCache;", nullptr, $PROTECTED, $virtualMethod(Util$1, initialValue, $Object*)},
	{"threadTerminated", "(Lsun/nio/ch/Util$BufferCache;)V", nullptr, $PROTECTED, $virtualMethod(Util$1, threadTerminated, void, $Util$BufferCache*)},
	{"threadTerminated", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Util$1, threadTerminated, void, Object$*)},
	{}
};

$EnclosingMethodInfo _Util$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.Util",
	nullptr,
	nullptr
};

$InnerClassInfo _Util$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.Util$1", nullptr, nullptr, 0},
	{"sun.nio.ch.Util$BufferCache", "sun.nio.ch.Util", "BufferCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Util$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Util$1",
	"jdk.internal.misc.TerminatingThreadLocal",
	nullptr,
	nullptr,
	_Util$1_MethodInfo_,
	"Ljdk/internal/misc/TerminatingThreadLocal<Lsun/nio/ch/Util$BufferCache;>;",
	&_Util$1_EnclosingMethodInfo_,
	_Util$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Util"
};

$Object* allocate$Util$1($Class* clazz) {
	return $of($alloc(Util$1));
}

void Util$1::init$() {
	$TerminatingThreadLocal::init$();
}

$Object* Util$1::initialValue() {
	return $of($new($Util$BufferCache));
}

void Util$1::threadTerminated($Util$BufferCache* cache) {
	$useLocalCurrentObjectStackCache();
	while (!$nc(cache)->isEmpty()) {
		$var($ByteBuffer, bb, cache->removeFirst());
		$Util::free(bb);
	}
}

void Util$1::threadTerminated(Object$* cache) {
	this->threadTerminated($cast($Util$BufferCache, cache));
}

Util$1::Util$1() {
}

$Class* Util$1::load$($String* name, bool initialize) {
	$loadClass(Util$1, name, initialize, &_Util$1_ClassInfo_, allocate$Util$1);
	return class$;
}

$Class* Util$1::class$ = nullptr;

		} // ch
	} // nio
} // sun