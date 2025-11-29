#include <java/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator.h>

#include <java/util/Comparator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Index.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $ConcurrentSkipListMap$Index = ::java::util::concurrent::ConcurrentSkipListMap$Index;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$CSLMSpliterator_FieldInfo_[] = {
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TK;>;", $FINAL, $field(ConcurrentSkipListMap$CSLMSpliterator, comparator)},
	{"fence", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentSkipListMap$CSLMSpliterator, fence)},
	{"row", "Ljava/util/concurrent/ConcurrentSkipListMap$Index;", "Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;", 0, $field(ConcurrentSkipListMap$CSLMSpliterator, row)},
	{"current", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$CSLMSpliterator, current)},
	{"est", "J", nullptr, 0, $field(ConcurrentSkipListMap$CSLMSpliterator, est)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$CSLMSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Comparator;Ljava/util/concurrent/ConcurrentSkipListMap$Index;Ljava/util/concurrent/ConcurrentSkipListMap$Node;Ljava/lang/Object;J)V", "(Ljava/util/Comparator<-TK;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;TK;J)V", 0, $method(static_cast<void(ConcurrentSkipListMap$CSLMSpliterator::*)($Comparator*,$ConcurrentSkipListMap$Index*,$ConcurrentSkipListMap$Node*,Object$*,int64_t)>(&ConcurrentSkipListMap$CSLMSpliterator::init$))},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(ConcurrentSkipListMap$CSLMSpliterator::*)()>(&ConcurrentSkipListMap$CSLMSpliterator::estimateSize))},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$CSLMSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator", "java.util.concurrent.ConcurrentSkipListMap", "CSLMSpliterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$CSLMSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator",
	"java.lang.Object",
	nullptr,
	_ConcurrentSkipListMap$CSLMSpliterator_FieldInfo_,
	_ConcurrentSkipListMap$CSLMSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentSkipListMap$CSLMSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$CSLMSpliterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$CSLMSpliterator));
}

void ConcurrentSkipListMap$CSLMSpliterator::init$($Comparator* comparator, $ConcurrentSkipListMap$Index* row, $ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est) {
	$set(this, comparator, comparator);
	$set(this, row, row);
	$set(this, current, origin);
	$set(this, fence, fence);
	this->est = est;
}

int64_t ConcurrentSkipListMap$CSLMSpliterator::estimateSize() {
	return this->est;
}

ConcurrentSkipListMap$CSLMSpliterator::ConcurrentSkipListMap$CSLMSpliterator() {
}

$Class* ConcurrentSkipListMap$CSLMSpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$CSLMSpliterator, name, initialize, &_ConcurrentSkipListMap$CSLMSpliterator_ClassInfo_, allocate$ConcurrentSkipListMap$CSLMSpliterator);
	return class$;
}

$Class* ConcurrentSkipListMap$CSLMSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java