#include <java/util/concurrent/ConcurrentSkipListMap$KeyIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ConcurrentSkipListMap$KeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$KeyIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$KeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$KeyIterator::*)($ConcurrentSkipListMap*)>(&ConcurrentSkipListMap$KeyIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$KeyIterator", "java.util.concurrent.ConcurrentSkipListMap", "KeyIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$KeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$KeyIterator",
	"java.util.concurrent.ConcurrentSkipListMap$Iter",
	nullptr,
	_ConcurrentSkipListMap$KeyIterator_FieldInfo_,
	_ConcurrentSkipListMap$KeyIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap<TK;TV;>.Iter<TK;>;",
	nullptr,
	_ConcurrentSkipListMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$KeyIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$KeyIterator));
}

void ConcurrentSkipListMap$KeyIterator::init$($ConcurrentSkipListMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$Iter::init$(this$0);
}

$Object* ConcurrentSkipListMap$KeyIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentSkipListMap$Node, n, nullptr);
	if (($assign(n, this->$ConcurrentSkipListMap$Iter::next$)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(n)->key);
	advance(n);
	return $of(k);
}

ConcurrentSkipListMap$KeyIterator::ConcurrentSkipListMap$KeyIterator() {
}

$Class* ConcurrentSkipListMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$KeyIterator, name, initialize, &_ConcurrentSkipListMap$KeyIterator_ClassInfo_, allocate$ConcurrentSkipListMap$KeyIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$KeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java