#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/EnumMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;

namespace java {
	namespace util {

void EnumMap$EnumMapIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	this->index = 0;
	this->lastReturnedIndex = -1;
}

bool EnumMap$EnumMapIterator::hasNext() {
	while (this->index < $nc(this->this$0->vals)->length && this->this$0->vals->get(this->index) == nullptr) {
		++this->index;
	}
	return this->index != this->this$0->vals->length;
}

void EnumMap$EnumMapIterator::remove() {
	checkLastReturnedIndex();
	if ($nc(this->this$0->vals)->get(this->lastReturnedIndex) != nullptr) {
		this->this$0->vals->set(this->lastReturnedIndex, nullptr);
		--this->this$0->size$;
	}
	this->lastReturnedIndex = -1;
}

void EnumMap$EnumMapIterator::checkLastReturnedIndex() {
	if (this->lastReturnedIndex < 0) {
		$throwNew($IllegalStateException);
	}
}

EnumMap$EnumMapIterator::EnumMap$EnumMapIterator() {
}

$Class* EnumMap$EnumMapIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EnumMapIterator, this$0)},
		{"index", "I", nullptr, 0, $field(EnumMap$EnumMapIterator, index)},
		{"lastReturnedIndex", "I", nullptr, 0, $field(EnumMap$EnumMapIterator, lastReturnedIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(EnumMap$EnumMapIterator, init$, void, $EnumMap*)},
		{"checkLastReturnedIndex", "()V", nullptr, $PRIVATE, $method(EnumMap$EnumMapIterator, checkLastReturnedIndex, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(EnumMap$EnumMapIterator, hasNext, bool)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(EnumMap$EnumMapIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.EnumMap$EnumMapIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumMap"
	};
	$loadClass(EnumMap$EnumMapIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumMap$EnumMapIterator);
	});
	return class$;
}

$Class* EnumMap$EnumMapIterator::class$ = nullptr;

	} // util
} // java