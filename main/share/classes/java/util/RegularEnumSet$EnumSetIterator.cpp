#include <java/util/RegularEnumSet$EnumSetIterator.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/RegularEnumSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $RegularEnumSet = ::java::util::RegularEnumSet;

namespace java {
	namespace util {

void RegularEnumSet$EnumSetIterator::init$($RegularEnumSet* this$0) {
	$set(this, this$0, this$0);
	this->lastReturned = 0;
	this->unseen = this$0->elements;
}

bool RegularEnumSet$EnumSetIterator::hasNext() {
	return this->unseen != 0;
}

$Object* RegularEnumSet$EnumSetIterator::next() {
	if (this->unseen == 0) {
		$throwNew($NoSuchElementException);
	}
	this->lastReturned = this->unseen & -this->unseen;
	this->unseen -= this->lastReturned;
	return $of($nc(this->this$0->universe)->get($Long::numberOfTrailingZeros(this->lastReturned)));
}

void RegularEnumSet$EnumSetIterator::remove() {
	if (this->lastReturned == 0) {
		$throwNew($IllegalStateException);
	}
	this->this$0->elements &= (uint64_t)~this->lastReturned;
	this->lastReturned = 0;
}

RegularEnumSet$EnumSetIterator::RegularEnumSet$EnumSetIterator() {
}

$Class* RegularEnumSet$EnumSetIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/RegularEnumSet;", nullptr, $FINAL | $SYNTHETIC, $field(RegularEnumSet$EnumSetIterator, this$0)},
		{"unseen", "J", nullptr, 0, $field(RegularEnumSet$EnumSetIterator, unseen)},
		{"lastReturned", "J", nullptr, 0, $field(RegularEnumSet$EnumSetIterator, lastReturned)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/RegularEnumSet;)V", nullptr, 0, $method(RegularEnumSet$EnumSetIterator, init$, void, $RegularEnumSet*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(RegularEnumSet$EnumSetIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Enum;", "()TE;", $PUBLIC, $virtualMethod(RegularEnumSet$EnumSetIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(RegularEnumSet$EnumSetIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.RegularEnumSet$EnumSetIterator", "java.util.RegularEnumSet", "EnumSetIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.RegularEnumSet$EnumSetIterator",
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
		"java.util.RegularEnumSet"
	};
	$loadClass(RegularEnumSet$EnumSetIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegularEnumSet$EnumSetIterator);
	});
	return class$;
}

$Class* RegularEnumSet$EnumSetIterator::class$ = nullptr;

	} // util
} // java