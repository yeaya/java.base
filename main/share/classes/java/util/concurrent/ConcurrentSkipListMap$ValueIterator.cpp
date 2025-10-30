#include <java/util/concurrent/ConcurrentSkipListMap$ValueIterator.h>

#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Iter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$Iter = ::java::util::concurrent::ConcurrentSkipListMap$Iter;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$ValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$ValueIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$ValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$ValueIterator::*)($ConcurrentSkipListMap*)>(&ConcurrentSkipListMap$ValueIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$ValueIterator", "java.util.concurrent.ConcurrentSkipListMap", "ValueIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$ValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$ValueIterator",
	"java.util.concurrent.ConcurrentSkipListMap$Iter",
	nullptr,
	_ConcurrentSkipListMap$ValueIterator_FieldInfo_,
	_ConcurrentSkipListMap$ValueIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap<TK;TV;>.Iter<TV;>;",
	nullptr,
	_ConcurrentSkipListMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$ValueIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$ValueIterator));
}

void ConcurrentSkipListMap$ValueIterator::init$($ConcurrentSkipListMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$Iter::init$(this$0);
}

$Object* ConcurrentSkipListMap$ValueIterator::next() {
	$var($Object, v, nullptr);
	if (($assign(v, this->nextValue)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	advance(this->$ConcurrentSkipListMap$Iter::next$);
	return $of(v);
}

ConcurrentSkipListMap$ValueIterator::ConcurrentSkipListMap$ValueIterator() {
}

$Class* ConcurrentSkipListMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$ValueIterator, name, initialize, &_ConcurrentSkipListMap$ValueIterator_ClassInfo_, allocate$ConcurrentSkipListMap$ValueIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$ValueIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java