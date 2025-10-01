#include <java/util/JumboEnumSet$EnumSetIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/JumboEnumSet.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $JumboEnumSet = ::java::util::JumboEnumSet;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _JumboEnumSet$EnumSetIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/JumboEnumSet;", nullptr, $FINAL | $SYNTHETIC, $field(JumboEnumSet$EnumSetIterator, this$0)},
	{"unseen", "J", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, unseen)},
	{"unseenIndex", "I", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, unseenIndex)},
	{"lastReturned", "J", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, lastReturned)},
	{"lastReturnedIndex", "I", nullptr, 0, $field(JumboEnumSet$EnumSetIterator, lastReturnedIndex)},
	{}
};

$MethodInfo _JumboEnumSet$EnumSetIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/JumboEnumSet;)V", nullptr, 0, $method(static_cast<void(JumboEnumSet$EnumSetIterator::*)($JumboEnumSet*)>(&JumboEnumSet$EnumSetIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Enum;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JumboEnumSet$EnumSetIterator_InnerClassesInfo_[] = {
	{"java.util.JumboEnumSet$EnumSetIterator", "java.util.JumboEnumSet", "EnumSetIterator", $PRIVATE},
	{}
};

$ClassInfo _JumboEnumSet$EnumSetIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.JumboEnumSet$EnumSetIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_JumboEnumSet$EnumSetIterator_FieldInfo_,
	_JumboEnumSet$EnumSetIterator_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_JumboEnumSet$EnumSetIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.JumboEnumSet"
};

$Object* allocate$JumboEnumSet$EnumSetIterator($Class* clazz) {
	return $of($alloc(JumboEnumSet$EnumSetIterator));
}

void JumboEnumSet$EnumSetIterator::init$($JumboEnumSet* this$0) {
	$set(this, this$0, this$0);
	this->unseenIndex = 0;
	this->lastReturned = 0;
	this->lastReturnedIndex = 0;
	this->unseen = $nc(this$0->elements)->get(0);
}

bool JumboEnumSet$EnumSetIterator::hasNext() {
	while (this->unseen == 0 && this->unseenIndex < $nc(this->this$0->elements)->length - 1) {
		this->unseen = $nc(this->this$0->elements)->get(++this->unseenIndex);
	}
	return this->unseen != 0;
}

$Object* JumboEnumSet$EnumSetIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->lastReturned = (int64_t)(this->unseen & (uint64_t)-this->unseen);
	this->lastReturnedIndex = this->unseenIndex;
	this->unseen -= this->lastReturned;
	return $of($nc(this->this$0->universe)->get((this->lastReturnedIndex << 6) + $Long::numberOfTrailingZeros(this->lastReturned)));
}

void JumboEnumSet$EnumSetIterator::remove() {
	if (this->lastReturned == 0) {
		$throwNew($IllegalStateException);
	}
	int64_t oldElements = $nc(this->this$0->elements)->get(this->lastReturnedIndex);
	(*$nc(this->this$0->elements))[this->lastReturnedIndex] &= (uint64_t)~this->lastReturned;
	if (oldElements != $nc(this->this$0->elements)->get(this->lastReturnedIndex)) {
		--this->this$0->size$;
	}
	this->lastReturned = 0;
}

JumboEnumSet$EnumSetIterator::JumboEnumSet$EnumSetIterator() {
}

$Class* JumboEnumSet$EnumSetIterator::load$($String* name, bool initialize) {
	$loadClass(JumboEnumSet$EnumSetIterator, name, initialize, &_JumboEnumSet$EnumSetIterator_ClassInfo_, allocate$JumboEnumSet$EnumSetIterator);
	return class$;
}

$Class* JumboEnumSet$EnumSetIterator::class$ = nullptr;

	} // util
} // java