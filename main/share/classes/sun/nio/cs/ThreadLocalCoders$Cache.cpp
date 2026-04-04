#include <sun/nio/cs/ThreadLocalCoders$Cache.h>
#include <java/lang/ThreadLocal.h>
#include <sun/nio/cs/ThreadLocalCoders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace sun {
	namespace nio {
		namespace cs {

void ThreadLocalCoders$Cache::init$(int32_t size) {
	$set(this, cache, $new($ThreadLocal));
	this->size = size;
}

void ThreadLocalCoders$Cache::moveToFront($ObjectArray* oa, int32_t i) {
	$var($Object0, ob, $nc(oa)->get(i));
	for (int32_t j = i; j > 0; --j) {
		oa->set(j, oa->get(j - 1));
	}
	oa->set(0, ob);
}

$Object* ThreadLocalCoders$Cache::forName(Object$* name) {
	$useLocalObjectStack();
	$var($ObjectArray, oa, $cast($ObjectArray, $nc(this->cache)->get()));
	if (oa == nullptr) {
		$assign(oa, $new($ObjectArray, this->size));
		this->cache->set(oa);
	} else {
		for (int32_t i = 0; i < oa->length; ++i) {
			$var($Object0, ob, oa->get(i));
			if (ob == nullptr) {
				continue;
			}
			if (hasName(ob, name)) {
				if (i > 0) {
					moveToFront(oa, i);
				}
				return ob;
			}
		}
	}
	$var($Object, ob, create(name));
	$nc(oa)->set($nc(oa)->length - 1, ob);
	moveToFront(oa, oa->length - 1);
	return ob;
}

ThreadLocalCoders$Cache::ThreadLocalCoders$Cache() {
}

$Class* ThreadLocalCoders$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<[Ljava/lang/Object;>;", $PRIVATE, $field(ThreadLocalCoders$Cache, cache)},
		{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ThreadLocalCoders$Cache, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ThreadLocalCoders$Cache, init$, void, int32_t)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(ThreadLocalCoders$Cache, create, $Object*, Object$*)},
		{"forName", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(ThreadLocalCoders$Cache, forName, $Object*, Object$*)},
		{"hasName", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $ABSTRACT, $virtualMethod(ThreadLocalCoders$Cache, hasName, bool, Object$*, Object$*)},
		{"moveToFront", "([Ljava/lang/Object;I)V", nullptr, $PRIVATE, $method(ThreadLocalCoders$Cache, moveToFront, void, $ObjectArray*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.nio.cs.ThreadLocalCoders$Cache",
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
		"sun.nio.cs.ThreadLocalCoders"
	};
	$loadClass(ThreadLocalCoders$Cache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadLocalCoders$Cache);
	});
	return class$;
}

$Class* ThreadLocalCoders$Cache::class$ = nullptr;

		} // cs
	} // nio
} // sun