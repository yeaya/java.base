#include <java/util/concurrent/ConcurrentSkipListMap$KeyIterator.h>
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

void ConcurrentSkipListMap$KeyIterator::init$($ConcurrentSkipListMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$Iter::init$(this$0);
}

$Object* ConcurrentSkipListMap$KeyIterator::next() {
	$useLocalObjectStack();
	$var($ConcurrentSkipListMap$Node, n, nullptr);
	if (($assign(n, this->$ConcurrentSkipListMap$Iter::next$)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(n)->key);
	advance(n);
	return k;
}

ConcurrentSkipListMap$KeyIterator::ConcurrentSkipListMap$KeyIterator() {
}

$Class* ConcurrentSkipListMap$KeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$KeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(ConcurrentSkipListMap$KeyIterator, init$, void, $ConcurrentSkipListMap*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$KeyIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentSkipListMap$KeyIterator", "java.util.concurrent.ConcurrentSkipListMap", "KeyIterator", $FINAL},
		{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentSkipListMap$KeyIterator",
		"java.util.concurrent.ConcurrentSkipListMap$Iter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ConcurrentSkipListMap<TK;TV;>.Iter<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentSkipListMap"
	};
	$loadClass(ConcurrentSkipListMap$KeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentSkipListMap$KeyIterator);
	});
	return class$;
}

$Class* ConcurrentSkipListMap$KeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java