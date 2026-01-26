#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapEntryIterator.h>

#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <jcpp.h>

#undef DISTINCT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;
using $ConcurrentSkipListMap$SubMap = ::java::util::concurrent::ConcurrentSkipListMap$SubMap;
using $ConcurrentSkipListMap$SubMap$SubMapIter = ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$SubMap$SubMapEntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$SubMap$SubMapEntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;)V", nullptr, 0, $method(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, init$, void, $ConcurrentSkipListMap$SubMap*)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, characteristics, int32_t)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, next, $Object*)},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$SubMap$SubMapEntryIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap", "java.util.concurrent.ConcurrentSkipListMap", "SubMap", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapEntryIterator", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapEntryIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapIter", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$SubMap$SubMapEntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapEntryIterator",
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_FieldInfo_,
	_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap$SubMap<TK;TV;>.SubMapIter<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$SubMap$SubMapEntryIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$SubMap$SubMapEntryIterator));
}

void ConcurrentSkipListMap$SubMap$SubMapEntryIterator::init$($ConcurrentSkipListMap$SubMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$SubMap$SubMapIter::init$(this$0);
}

$Object* ConcurrentSkipListMap$SubMap$SubMapEntryIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentSkipListMap$Node, n, this->$ConcurrentSkipListMap$SubMap$SubMapIter::next$);
	$var($Object, v, this->nextValue);
	advance();
	return $of($new($AbstractMap$SimpleImmutableEntry, $nc(n)->key, v));
}

int32_t ConcurrentSkipListMap$SubMap$SubMapEntryIterator::characteristics() {
	return $Spliterator::DISTINCT;
}

ConcurrentSkipListMap$SubMap$SubMapEntryIterator::ConcurrentSkipListMap$SubMap$SubMapEntryIterator() {
}

$Class* ConcurrentSkipListMap$SubMap$SubMapEntryIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, name, initialize, &_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_ClassInfo_, allocate$ConcurrentSkipListMap$SubMap$SubMapEntryIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$SubMap$SubMapEntryIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java