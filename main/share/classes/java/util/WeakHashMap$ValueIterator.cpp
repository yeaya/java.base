#include <java/util/WeakHashMap$ValueIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _WeakHashMap$ValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/WeakHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakHashMap$ValueIterator, this$0)},
	{}
};

$MethodInfo _WeakHashMap$ValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/WeakHashMap;)V", nullptr, $PRIVATE, $method(static_cast<void(WeakHashMap$ValueIterator::*)($WeakHashMap*)>(&WeakHashMap$ValueIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{}
};

$InnerClassInfo _WeakHashMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$ValueIterator", "java.util.WeakHashMap", "ValueIterator", $PRIVATE},
	{"java.util.WeakHashMap$HashIterator", "java.util.WeakHashMap", "HashIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _WeakHashMap$ValueIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.WeakHashMap$ValueIterator",
	"java.util.WeakHashMap$HashIterator",
	nullptr,
	_WeakHashMap$ValueIterator_FieldInfo_,
	_WeakHashMap$ValueIterator_MethodInfo_,
	"Ljava/util/WeakHashMap<TK;TV;>.HashIterator<TV;>;",
	nullptr,
	_WeakHashMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$ValueIterator($Class* clazz) {
	return $of($alloc(WeakHashMap$ValueIterator));
}

void WeakHashMap$ValueIterator::init$($WeakHashMap* this$0) {
	$set(this, this$0, this$0);
	$WeakHashMap$HashIterator::init$(this$0);
}

$Object* WeakHashMap$ValueIterator::next() {
	return $of($nc($(nextEntry()))->value);
}

WeakHashMap$ValueIterator::WeakHashMap$ValueIterator() {
}

$Class* WeakHashMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$ValueIterator, name, initialize, &_WeakHashMap$ValueIterator_ClassInfo_, allocate$WeakHashMap$ValueIterator);
	return class$;
}

$Class* WeakHashMap$ValueIterator::class$ = nullptr;

	} // util
} // java