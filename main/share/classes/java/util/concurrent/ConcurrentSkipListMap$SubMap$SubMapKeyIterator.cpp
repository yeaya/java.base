#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapKeyIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <jcpp.h>

#undef ORDERED
#undef DISTINCT
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

$FieldInfo _ConcurrentSkipListMap$SubMap$SubMapKeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$SubMap$SubMapKeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$SubMap$SubMapKeyIterator::*)($ConcurrentSkipListMap$SubMap*)>(&ConcurrentSkipListMap$SubMap$SubMapKeyIterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $FINAL},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$SubMap$SubMapKeyIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap", "java.util.concurrent.ConcurrentSkipListMap", "SubMap", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapKeyIterator", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapKeyIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapIter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$SubMap$SubMapKeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapKeyIterator",
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_FieldInfo_,
	_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap$SubMap<TK;TV;>.SubMapIter<TK;>;",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$SubMap$SubMapKeyIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$SubMap$SubMapKeyIterator));
}

void ConcurrentSkipListMap$SubMap$SubMapKeyIterator::init$($ConcurrentSkipListMap$SubMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$SubMap$SubMapIter::init$(this$0);
}

$Object* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::next() {
	$var($ConcurrentSkipListMap$Node, n, this->$ConcurrentSkipListMap$SubMap$SubMapIter::next$);
	advance();
	return $of($nc(n)->key);
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
	$loadClass(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, name, initialize, &_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_ClassInfo_, allocate$ConcurrentSkipListMap$SubMap$SubMapKeyIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$SubMap$SubMapKeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java