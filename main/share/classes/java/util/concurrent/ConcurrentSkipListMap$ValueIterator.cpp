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

namespace java {
	namespace util {
		namespace concurrent {

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
	return v;
}

ConcurrentSkipListMap$ValueIterator::ConcurrentSkipListMap$ValueIterator() {
}

$Class* ConcurrentSkipListMap$ValueIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$ValueIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(ConcurrentSkipListMap$ValueIterator, init$, void, $ConcurrentSkipListMap*)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$ValueIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentSkipListMap$ValueIterator", "java.util.concurrent.ConcurrentSkipListMap", "ValueIterator", $FINAL},
		{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentSkipListMap$ValueIterator",
		"java.util.concurrent.ConcurrentSkipListMap$Iter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ConcurrentSkipListMap<TK;TV;>.Iter<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentSkipListMap"
	};
	$loadClass(ConcurrentSkipListMap$ValueIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentSkipListMap$ValueIterator);
	});
	return class$;
}

$Class* ConcurrentSkipListMap$ValueIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java