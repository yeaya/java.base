#include <jdk/internal/misc/VM$BufferPool.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

$Class* VM$BufferPool::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VM$BufferPool, getCount, int64_t)},
		{"getMemoryUsed", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VM$BufferPool, getMemoryUsed, int64_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VM$BufferPool, getName, $String*)},
		{"getTotalCapacity", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VM$BufferPool, getTotalCapacity, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.misc.VM$BufferPool",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.VM"
	};
	$loadClass(VM$BufferPool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VM$BufferPool);
	});
	return class$;
}

$Class* VM$BufferPool::class$ = nullptr;

		} // misc
	} // internal
} // jdk