#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapValueIterator.h>

#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentSkipListMap$SubMap = ::java::util::concurrent::ConcurrentSkipListMap$SubMap;
using $ConcurrentSkipListMap$SubMap$SubMapIter = ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$SubMap$SubMapValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$SubMap$SubMapValueIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$SubMap$SubMapValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$SubMap$SubMapValueIterator::*)($ConcurrentSkipListMap$SubMap*)>(&ConcurrentSkipListMap$SubMap$SubMapValueIterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$SubMap$SubMapValueIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap", "java.util.concurrent.ConcurrentSkipListMap", "SubMap", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapValueIterator", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapValueIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapIter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$SubMap$SubMapValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapValueIterator",
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapValueIterator_FieldInfo_,
	_ConcurrentSkipListMap$SubMap$SubMapValueIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap$SubMap<TK;TV;>.SubMapIter<TV;>;",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$SubMap$SubMapValueIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$SubMap$SubMapValueIterator));
}

void ConcurrentSkipListMap$SubMap$SubMapValueIterator::init$($ConcurrentSkipListMap$SubMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$SubMap$SubMapIter::init$(this$0);
}

$Object* ConcurrentSkipListMap$SubMap$SubMapValueIterator::next() {
	$var($Object, v, this->nextValue);
	advance();
	return $of(v);
}

int32_t ConcurrentSkipListMap$SubMap$SubMapValueIterator::characteristics() {
	return 0;
}

ConcurrentSkipListMap$SubMap$SubMapValueIterator::ConcurrentSkipListMap$SubMap$SubMapValueIterator() {
}

$Class* ConcurrentSkipListMap$SubMap$SubMapValueIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$SubMap$SubMapValueIterator, name, initialize, &_ConcurrentSkipListMap$SubMap$SubMapValueIterator_ClassInfo_, allocate$ConcurrentSkipListMap$SubMap$SubMapValueIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$SubMap$SubMapValueIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java