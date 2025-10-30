#include <java/util/WeakHashMap$KeyIterator.h>

#include <java/util/WeakHashMap$Entry.h>
#include <java/util/WeakHashMap$HashIterator.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakHashMap$Entry = ::java::util::WeakHashMap$Entry;
using $WeakHashMap$HashIterator = ::java::util::WeakHashMap$HashIterator;

namespace java {
	namespace util {

$FieldInfo _WeakHashMap$KeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/WeakHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakHashMap$KeyIterator, this$0)},
	{}
};

$MethodInfo _WeakHashMap$KeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/WeakHashMap;)V", nullptr, $PRIVATE, $method(static_cast<void(WeakHashMap$KeyIterator::*)($WeakHashMap*)>(&WeakHashMap$KeyIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{}
};

$InnerClassInfo _WeakHashMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$KeyIterator", "java.util.WeakHashMap", "KeyIterator", $PRIVATE},
	{"java.util.WeakHashMap$HashIterator", "java.util.WeakHashMap", "HashIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _WeakHashMap$KeyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.WeakHashMap$KeyIterator",
	"java.util.WeakHashMap$HashIterator",
	nullptr,
	_WeakHashMap$KeyIterator_FieldInfo_,
	_WeakHashMap$KeyIterator_MethodInfo_,
	"Ljava/util/WeakHashMap<TK;TV;>.HashIterator<TK;>;",
	nullptr,
	_WeakHashMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$KeyIterator($Class* clazz) {
	return $of($alloc(WeakHashMap$KeyIterator));
}

void WeakHashMap$KeyIterator::init$($WeakHashMap* this$0) {
	$set(this, this$0, this$0);
	$WeakHashMap$HashIterator::init$(this$0);
}

$Object* WeakHashMap$KeyIterator::next() {
	return $of($nc($(nextEntry()))->getKey());
}

WeakHashMap$KeyIterator::WeakHashMap$KeyIterator() {
}

$Class* WeakHashMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$KeyIterator, name, initialize, &_WeakHashMap$KeyIterator_ClassInfo_, allocate$WeakHashMap$KeyIterator);
	return class$;
}

$Class* WeakHashMap$KeyIterator::class$ = nullptr;

	} // util
} // java