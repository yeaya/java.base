#include <java/util/IdentityHashMap$KeyIterator.h>

#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$IdentityHashMapIterator = ::java::util::IdentityHashMap$IdentityHashMapIterator;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$KeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$KeyIterator, this$0)},
	{}
};

$MethodInfo _IdentityHashMap$KeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$KeyIterator, init$, void, $IdentityHashMap*)},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(IdentityHashMap$KeyIterator, next, $Object*)},
	{}
};

$InnerClassInfo _IdentityHashMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$KeyIterator", "java.util.IdentityHashMap", "KeyIterator", $PRIVATE},
	{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$KeyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$KeyIterator",
	"java.util.IdentityHashMap$IdentityHashMapIterator",
	nullptr,
	_IdentityHashMap$KeyIterator_FieldInfo_,
	_IdentityHashMap$KeyIterator_MethodInfo_,
	"Ljava/util/IdentityHashMap<TK;TV;>.IdentityHashMapIterator<TK;>;",
	nullptr,
	_IdentityHashMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$KeyIterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$KeyIterator));
}

void IdentityHashMap$KeyIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$IdentityHashMap$IdentityHashMapIterator::init$(this$0);
}

$Object* IdentityHashMap$KeyIterator::next() {
	return $of($IdentityHashMap::unmaskNull($nc(this->traversalTable)->get(nextIndex())));
}

IdentityHashMap$KeyIterator::IdentityHashMap$KeyIterator() {
}

$Class* IdentityHashMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$KeyIterator, name, initialize, &_IdentityHashMap$KeyIterator_ClassInfo_, allocate$IdentityHashMap$KeyIterator);
	return class$;
}

$Class* IdentityHashMap$KeyIterator::class$ = nullptr;

	} // util
} // java