#include <java/util/JumboEnumSet$EnumSetIterator.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/JumboEnumSet.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $JumboEnumSet = ::java::util::JumboEnumSet;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void JumboEnumSet$EnumSetIterator::init$($JumboEnumSet* this$0) {
	$set(this, this$0, this$0);
	this->unseenIndex = 0;
	this->lastReturned = 0;
	this->lastReturnedIndex = 0;
	this->unseen = $nc(this$0->elements)->get(0);
}

bool JumboEnumSet$EnumSetIterator::hasNext() {
	while (this->unseen == 0 && this->unseenIndex < $nc(this->this$0->elements)->length - 1) {
		this->unseen = this->this$0->elements->get(++this->unseenIndex);
	}
	return this->unseen != 0;
}

$Object* JumboEnumSet$EnumSetIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->lastReturned = this->unseen & -this->unseen;
	this->lastReturnedIndex = this->unseenIndex;
	this->unseen -= this->lastReturned;
	return $of($nc(this->this$0->universe)->get((this->lastReturnedIndex << 6) + $Long::numberOfTrailingZeros(this->lastReturned)));
}

void JumboEnumSet$EnumSetIterator::remove() {
	if (this->lastReturned == 0) {
		$throwNew($IllegalStateException);
	}
	int64_t oldElements = $nc(this->this$0->elements)->get(this->lastReturnedIndex);
	(*this->this$0->elements)[this->lastReturnedIndex] &= (uint64_t)~this->lastReturned;
	if (oldElements != this->this$0->elements->get(this->lastReturnedIndex)) {
		--this->this$0->size$;
	}
	this->lastReturned = 0;
}

JumboEnumSet$EnumSetIterator::JumboEnumSet$EnumSetIterator() {
}

$Class* JumboEnumSet$EnumSetIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/JumboEnumSet;", nullptr, $FINAL | $SYNTHETIC, $field(JumboEnumSet$EnumSetIterator, this$0)},
		{"unseen", "J", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, unseen)},
		{"unseenIndex", "I", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, unseenIndex)},
		{"lastReturned", "J", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, lastReturned)},
		{"lastReturnedIndex", "I", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, lastReturnedIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/JumboEnumSet;)V", nullptr, 0, $method(JumboEnumSet$EnumSetIterator, init$, void, $JumboEnumSet*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet$EnumSetIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Enum;", "()TE;", $PUBLIC, $virtualMethod(JumboEnumSet$EnumSetIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet$EnumSetIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.JumboEnumSet$EnumSetIterator", "java.util.JumboEnumSet", "EnumSetIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.JumboEnumSet$EnumSetIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.JumboEnumSet"
	};
	$loadClass(JumboEnumSet$EnumSetIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JumboEnumSet$EnumSetIterator);
	});
	return class$;
}

$Class* JumboEnumSet$EnumSetIterator::class$ = nullptr;

	} // util
} // java