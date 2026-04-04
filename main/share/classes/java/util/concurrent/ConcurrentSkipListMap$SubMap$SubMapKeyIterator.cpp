#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapKeyIterator.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <jcpp.h>

#undef DISTINCT
#undef ORDERED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;
using $ConcurrentSkipListMap$SubMap = ::java::util::concurrent::ConcurrentSkipListMap$SubMap;
using $ConcurrentSkipListMap$SubMap$SubMapIter = ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentSkipListMap$SubMap$SubMapKeyIterator::init$($ConcurrentSkipListMap$SubMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$SubMap$SubMapIter::init$(this$0);
}

$Object* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::next() {
	$var($ConcurrentSkipListMap$Node, n, this->$ConcurrentSkipListMap$SubMap$SubMapIter::next$);
	advance();
	return $nc(n)->key;
}

int32_t ConcurrentSkipListMap$SubMap$SubMapKeyIterator::characteristics() {
	return ($Spliterator::DISTINCT | $Spliterator::ORDERED) | $Spliterator::SORTED;
}

$Comparator* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::getComparator() {
	return this->this$0->comparator();
}

ConcurrentSkipListMap$SubMap$SubMapKeyIterator::ConcurrentSkipListMap$SubMap$SubMapKeyIterator() {
}

$Class* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;)V", nullptr, 0, $method(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, init$, void, $ConcurrentSkipListMap$SubMap*)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, characteristics, int32_t)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, getComparator, $Comparator*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentSkipListMap$SubMap", "java.util.concurrent.ConcurrentSkipListMap", "SubMap", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapKeyIterator", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapKeyIterator", $FINAL},
		{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapIter", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapKeyIterator",
		"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ConcurrentSkipListMap$SubMap<TK;TV;>.SubMapIter<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentSkipListMap"
	};
	$loadClass(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentSkipListMap$SubMap$SubMapKeyIterator));
	});
	return class$;
}

$Class* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java