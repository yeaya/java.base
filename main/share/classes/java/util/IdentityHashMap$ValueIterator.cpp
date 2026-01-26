#include <java/util/IdentityHashMap$ValueIterator.h>

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

$FieldInfo _IdentityHashMap$ValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$ValueIterator, this$0)},
	{}
};

$MethodInfo _IdentityHashMap$ValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$ValueIterator, init$, void, $IdentityHashMap*)},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(IdentityHashMap$ValueIterator, next, $Object*)},
	{}
};

$InnerClassInfo _IdentityHashMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$ValueIterator", "java.util.IdentityHashMap", "ValueIterator", $PRIVATE},
	{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$ValueIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$ValueIterator",
	"java.util.IdentityHashMap$IdentityHashMapIterator",
	nullptr,
	_IdentityHashMap$ValueIterator_FieldInfo_,
	_IdentityHashMap$ValueIterator_MethodInfo_,
	"Ljava/util/IdentityHashMap<TK;TV;>.IdentityHashMapIterator<TV;>;",
	nullptr,
	_IdentityHashMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$ValueIterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$ValueIterator));
}

void IdentityHashMap$ValueIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$IdentityHashMap$IdentityHashMapIterator::init$(this$0);
}

$Object* IdentityHashMap$ValueIterator::next() {
	return $of($nc(this->traversalTable)->get(nextIndex() + 1));
}

IdentityHashMap$ValueIterator::IdentityHashMap$ValueIterator() {
}

$Class* IdentityHashMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$ValueIterator, name, initialize, &_IdentityHashMap$ValueIterator_ClassInfo_, allocate$IdentityHashMap$ValueIterator);
	return class$;
}

$Class* IdentityHashMap$ValueIterator::class$ = nullptr;

	} // util
} // java