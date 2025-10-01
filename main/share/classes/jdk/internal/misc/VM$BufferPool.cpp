#include <jdk/internal/misc/VM$BufferPool.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VM = ::jdk::internal::misc::VM;

namespace jdk {
	namespace internal {
		namespace misc {

$MethodInfo _VM$BufferPool_MethodInfo_[] = {
	{"getCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryUsed", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalCapacity", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VM$BufferPool_InnerClassesInfo_[] = {
	{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VM$BufferPool_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.misc.VM$BufferPool",
	nullptr,
	nullptr,
	nullptr,
	_VM$BufferPool_MethodInfo_,
	nullptr,
	nullptr,
	_VM$BufferPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.VM"
};

$Object* allocate$VM$BufferPool($Class* clazz) {
	return $of($alloc(VM$BufferPool));
}

$Class* VM$BufferPool::load$($String* name, bool initialize) {
	$loadClass(VM$BufferPool, name, initialize, &_VM$BufferPool_ClassInfo_, allocate$VM$BufferPool);
	return class$;
}

$Class* VM$BufferPool::class$ = nullptr;

		} // misc
	} // internal
} // jdk