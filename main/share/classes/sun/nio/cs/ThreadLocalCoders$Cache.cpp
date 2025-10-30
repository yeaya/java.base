#include <sun/nio/cs/ThreadLocalCoders$Cache.h>

#include <java/lang/ThreadLocal.h>
#include <sun/nio/cs/ThreadLocalCoders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocalCoders = ::sun::nio::cs::ThreadLocalCoders;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ThreadLocalCoders$Cache_FieldInfo_[] = {
	{"cache", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<[Ljava/lang/Object;>;", $PRIVATE, $field(ThreadLocalCoders$Cache, cache)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ThreadLocalCoders$Cache, size)},
	{}
};

$MethodInfo _ThreadLocalCoders$Cache_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ThreadLocalCoders$Cache::*)(int32_t)>(&ThreadLocalCoders$Cache::init$))},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT},
	{"forName", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"hasName", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $ABSTRACT},
	{"moveToFront", "([Ljava/lang/Object;I)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadLocalCoders$Cache::*)($ObjectArray*,int32_t)>(&ThreadLocalCoders$Cache::moveToFront))},
	{}
};

$InnerClassInfo _ThreadLocalCoders$Cache_InnerClassesInfo_[] = {
	{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ThreadLocalCoders$Cache_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.ThreadLocalCoders$Cache",
	"java.lang.Object",
	nullptr,
	_ThreadLocalCoders$Cache_FieldInfo_,
	_ThreadLocalCoders$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadLocalCoders$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ThreadLocalCoders"
};

$Object* allocate$ThreadLocalCoders$Cache($Class* clazz) {
	return $of($alloc(ThreadLocalCoders$Cache));
}

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
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, oa, $cast($ObjectArray, $nc(this->cache)->get()));
	if (oa == nullptr) {
		$assign(oa, $new($ObjectArray, this->size));
		$nc(this->cache)->set(oa);
	} else {
		for (int32_t i = 0; i < $nc(oa)->length; ++i) {
			$var($Object0, ob, oa->get(i));
			if (ob == nullptr) {
				continue;
			}
			if (hasName(ob, name)) {
				if (i > 0) {
					moveToFront(oa, i);
				}
				return $of(ob);
			}
		}
	}
	$var($Object, ob, create(name));
	$nc(oa)->set(oa->length - 1, ob);
	moveToFront(oa, oa->length - 1);
	return $of(ob);
}

ThreadLocalCoders$Cache::ThreadLocalCoders$Cache() {
}

$Class* ThreadLocalCoders$Cache::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalCoders$Cache, name, initialize, &_ThreadLocalCoders$Cache_ClassInfo_, allocate$ThreadLocalCoders$Cache);
	return class$;
}

$Class* ThreadLocalCoders$Cache::class$ = nullptr;

		} // cs
	} // nio
} // sun