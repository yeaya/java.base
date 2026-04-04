#include <java/util/Hashtable$KeySet.h>
#include <java/util/AbstractSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

void Hashtable$KeySet::init$($Hashtable* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* Hashtable$KeySet::iterator() {
	return this->this$0->getIterator(0);
}

int32_t Hashtable$KeySet::size() {
	return this->this$0->count;
}

bool Hashtable$KeySet::contains(Object$* o) {
	return this->this$0->containsKey(o);
}

bool Hashtable$KeySet::remove(Object$* o) {
	return this->this$0->remove(o) != nullptr;
}

void Hashtable$KeySet::clear() {
	this->this$0->clear();
}

Hashtable$KeySet::Hashtable$KeySet() {
}

$Class* Hashtable$KeySet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Hashtable;", nullptr, $FINAL | $SYNTHETIC, $field(Hashtable$KeySet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Hashtable;)V", nullptr, $PRIVATE, $method(Hashtable$KeySet, init$, void, $Hashtable*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Hashtable$KeySet, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$KeySet, contains, bool, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC, $virtualMethod(Hashtable$KeySet, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$KeySet, remove, bool, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Hashtable$KeySet, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Hashtable$KeySet", "java.util.Hashtable", "KeySet", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Hashtable$KeySet",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Hashtable"
	};
	$loadClass(Hashtable$KeySet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Hashtable$KeySet));
	});
	return class$;
}

$Class* Hashtable$KeySet::class$ = nullptr;

	} // util
} // java