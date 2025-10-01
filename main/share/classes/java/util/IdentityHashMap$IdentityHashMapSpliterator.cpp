#include <java/util/IdentityHashMap$IdentityHashMapSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$IdentityHashMapSpliterator_FieldInfo_[] = {
	{"map", "Ljava/util/IdentityHashMap;", "Ljava/util/IdentityHashMap<TK;TV;>;", $FINAL, $field(IdentityHashMap$IdentityHashMapSpliterator, map)},
	{"index", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, index)},
	{"fence", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, fence)},
	{"est", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, est)},
	{"expectedModCount", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, expectedModCount)},
	{}
};

$MethodInfo _IdentityHashMap$IdentityHashMapSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;IIII)V", "(Ljava/util/IdentityHashMap<TK;TV;>;IIII)V", 0, $method(static_cast<void(IdentityHashMap$IdentityHashMapSpliterator::*)($IdentityHashMap*,int32_t,int32_t,int32_t,int32_t)>(&IdentityHashMap$IdentityHashMapSpliterator::init$))},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(IdentityHashMap$IdentityHashMapSpliterator::*)()>(&IdentityHashMap$IdentityHashMapSpliterator::estimateSize))},
	{"getFence", "()I", nullptr, $FINAL, $method(static_cast<int32_t(IdentityHashMap$IdentityHashMapSpliterator::*)()>(&IdentityHashMap$IdentityHashMapSpliterator::getFence))},
	{}
};

$InnerClassInfo _IdentityHashMap$IdentityHashMapSpliterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$IdentityHashMapSpliterator", "java.util.IdentityHashMap", "IdentityHashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _IdentityHashMap$IdentityHashMapSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$IdentityHashMapSpliterator",
	"java.lang.Object",
	nullptr,
	_IdentityHashMap$IdentityHashMapSpliterator_FieldInfo_,
	_IdentityHashMap$IdentityHashMapSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_IdentityHashMap$IdentityHashMapSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$IdentityHashMapSpliterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$IdentityHashMapSpliterator));
}

void IdentityHashMap$IdentityHashMapSpliterator::init$($IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$set(this, map, map);
	this->index = origin;
	this->fence = fence;
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t IdentityHashMap$IdentityHashMapSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		this->est = $nc(this->map)->size$;
		this->expectedModCount = $nc(this->map)->modCount;
		hi = (this->fence = $nc($nc(this->map)->table)->length);
	}
	return hi;
}

int64_t IdentityHashMap$IdentityHashMapSpliterator::estimateSize() {
	getFence();
	return (int64_t)this->est;
}

IdentityHashMap$IdentityHashMapSpliterator::IdentityHashMap$IdentityHashMapSpliterator() {
}

$Class* IdentityHashMap$IdentityHashMapSpliterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$IdentityHashMapSpliterator, name, initialize, &_IdentityHashMap$IdentityHashMapSpliterator_ClassInfo_, allocate$IdentityHashMap$IdentityHashMapSpliterator);
	return class$;
}

$Class* IdentityHashMap$IdentityHashMapSpliterator::class$ = nullptr;

	} // util
} // java