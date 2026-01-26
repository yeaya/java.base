#include <java/util/HashMap$HashMapSpliterator.h>

#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace java {
	namespace util {

$FieldInfo _HashMap$HashMapSpliterator_FieldInfo_[] = {
	{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<TK;TV;>;", $FINAL, $field(HashMap$HashMapSpliterator, map)},
	{"current", "Ljava/util/HashMap$Node;", "Ljava/util/HashMap$Node<TK;TV;>;", 0, $field(HashMap$HashMapSpliterator, current)},
	{"index", "I", nullptr, 0, $field(HashMap$HashMapSpliterator, index)},
	{"fence", "I", nullptr, 0, $field(HashMap$HashMapSpliterator, fence)},
	{"est", "I", nullptr, 0, $field(HashMap$HashMapSpliterator, est)},
	{"expectedModCount", "I", nullptr, 0, $field(HashMap$HashMapSpliterator, expectedModCount)},
	{}
};

$MethodInfo _HashMap$HashMapSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/HashMap;IIII)V", "(Ljava/util/HashMap<TK;TV;>;IIII)V", 0, $method(HashMap$HashMapSpliterator, init$, void, $HashMap*, int32_t, int32_t, int32_t, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(HashMap$HashMapSpliterator, estimateSize, int64_t)},
	{"getFence", "()I", nullptr, $FINAL, $method(HashMap$HashMapSpliterator, getFence, int32_t)},
	{}
};

$InnerClassInfo _HashMap$HashMapSpliterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$HashMapSpliterator", "java.util.HashMap", "HashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _HashMap$HashMapSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.HashMap$HashMapSpliterator",
	"java.lang.Object",
	nullptr,
	_HashMap$HashMapSpliterator_FieldInfo_,
	_HashMap$HashMapSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_HashMap$HashMapSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$HashMapSpliterator($Class* clazz) {
	return $of($alloc(HashMap$HashMapSpliterator));
}

void HashMap$HashMapSpliterator::init$($HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$set(this, map, m);
	this->index = origin;
	this->fence = fence;
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t HashMap$HashMapSpliterator::getFence() {
	$useLocalCurrentObjectStackCache();
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		$var($HashMap, m, this->map);
		this->est = $nc(m)->size$;
		this->expectedModCount = m->modCount;
		$var($HashMap$NodeArray, tab, m->table);
		hi = (this->fence = (tab == nullptr) ? 0 : $nc(tab)->length);
	}
	return hi;
}

int64_t HashMap$HashMapSpliterator::estimateSize() {
	getFence();
	return (int64_t)this->est;
}

HashMap$HashMapSpliterator::HashMap$HashMapSpliterator() {
}

$Class* HashMap$HashMapSpliterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$HashMapSpliterator, name, initialize, &_HashMap$HashMapSpliterator_ClassInfo_, allocate$HashMap$HashMapSpliterator);
	return class$;
}

$Class* HashMap$HashMapSpliterator::class$ = nullptr;

	} // util
} // java