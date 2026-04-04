#include <jdk/internal/misc/VM$BufferPoolsHolder.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jdk/internal/misc/VM.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

#undef BUFFER_POOLS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace jdk {
	namespace internal {
		namespace misc {

$List* VM$BufferPoolsHolder::BUFFER_POOLS = nullptr;

void VM$BufferPoolsHolder::init$() {
}

void VM$BufferPoolsHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($ArrayList, bufferPools, $new($ArrayList, 3));
		bufferPools->add($($$nc($SharedSecrets::getJavaNioAccess())->getDirectBufferPool()));
		bufferPools->add($($FileChannelImpl::getMappedBufferPool()));
		bufferPools->add($($FileChannelImpl::getSyncMappedBufferPool()));
		$assignStatic(VM$BufferPoolsHolder::BUFFER_POOLS, $Collections::unmodifiableList(bufferPools));
	}
}

VM$BufferPoolsHolder::VM$BufferPoolsHolder() {
}

$Class* VM$BufferPoolsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BUFFER_POOLS", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/misc/VM$BufferPool;>;", $STATIC | $FINAL, $staticField(VM$BufferPoolsHolder, BUFFER_POOLS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(VM$BufferPoolsHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.VM$BufferPoolsHolder", "jdk.internal.misc.VM", "BufferPoolsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.misc.VM$BufferPoolsHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.VM"
	};
	$loadClass(VM$BufferPoolsHolder, name, initialize, &classInfo$$, VM$BufferPoolsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VM$BufferPoolsHolder);
	});
	return class$;
}

$Class* VM$BufferPoolsHolder::class$ = nullptr;

		} // misc
	} // internal
} // jdk