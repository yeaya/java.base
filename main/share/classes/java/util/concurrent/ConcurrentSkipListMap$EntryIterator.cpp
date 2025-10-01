#include <java/util/concurrent/ConcurrentSkipListMap$EntryIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Iter.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$Iter = ::java::util::concurrent::ConcurrentSkipListMap$Iter;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$EntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$EntryIterator, this$0)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$EntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$EntryIterator::*)($ConcurrentSkipListMap*)>(&ConcurrentSkipListMap$EntryIterator::init$))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$EntryIterator", "java.util.concurrent.ConcurrentSkipListMap", "EntryIterator", $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$EntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$EntryIterator",
	"java.util.concurrent.ConcurrentSkipListMap$Iter",
	nullptr,
	_ConcurrentSkipListMap$EntryIterator_FieldInfo_,
	_ConcurrentSkipListMap$EntryIterator_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentSkipListMap<TK;TV;>.Iter<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentSkipListMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$EntryIterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$EntryIterator));
}

void ConcurrentSkipListMap$EntryIterator::init$($ConcurrentSkipListMap* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentSkipListMap$Iter::init$(this$0);
}

$Object* ConcurrentSkipListMap$EntryIterator::next() {
	$var($ConcurrentSkipListMap$Node, n, nullptr);
	if (($assign(n, this->$ConcurrentSkipListMap$Iter::next$)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(n)->key);
	$var($Object, v, this->nextValue);
	advance(n);
	return $of($new($AbstractMap$SimpleImmutableEntry, k, v));
}

ConcurrentSkipListMap$EntryIterator::ConcurrentSkipListMap$EntryIterator() {
}

$Class* ConcurrentSkipListMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$EntryIterator, name, initialize, &_ConcurrentSkipListMap$EntryIterator_ClassInfo_, allocate$ConcurrentSkipListMap$EntryIterator);
	return class$;
}

$Class* ConcurrentSkipListMap$EntryIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java