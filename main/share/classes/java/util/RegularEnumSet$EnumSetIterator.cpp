#include <java/util/RegularEnumSet$EnumSetIterator.h>

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
#include <java/util/NoSuchElementException.h>
#include <java/util/RegularEnumSet.h>
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
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $RegularEnumSet = ::java::util::RegularEnumSet;

namespace java {
	namespace util {

$FieldInfo _RegularEnumSet$EnumSetIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/RegularEnumSet;", nullptr, $FINAL | $SYNTHETIC, $field(RegularEnumSet$EnumSetIterator, this$0)},
	{"unseen", "J", nullptr, 0, $field(RegularEnumSet$EnumSetIterator, unseen)},
	{"lastReturned", "J", nullptr, 0, $field(RegularEnumSet$EnumSetIterator, lastReturned)},
	{}
};

$MethodInfo _RegularEnumSet$EnumSetIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/RegularEnumSet;)V", nullptr, 0, $method(static_cast<void(RegularEnumSet$EnumSetIterator::*)($RegularEnumSet*)>(&RegularEnumSet$EnumSetIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Enum;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RegularEnumSet$EnumSetIterator_InnerClassesInfo_[] = {
	{"java.util.RegularEnumSet$EnumSetIterator", "java.util.RegularEnumSet", "EnumSetIterator", $PRIVATE},
	{}
};

$ClassInfo _RegularEnumSet$EnumSetIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.RegularEnumSet$EnumSetIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_RegularEnumSet$EnumSetIterator_FieldInfo_,
	_RegularEnumSet$EnumSetIterator_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_RegularEnumSet$EnumSetIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.RegularEnumSet"
};

$Object* allocate$RegularEnumSet$EnumSetIterator($Class* clazz) {
	return $of($alloc(RegularEnumSet$EnumSetIterator));
}

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
	this->lastReturned = (int64_t)(this->unseen & (uint64_t)-this->unseen);
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
	$loadClass(RegularEnumSet$EnumSetIterator, name, initialize, &_RegularEnumSet$EnumSetIterator_ClassInfo_, allocate$RegularEnumSet$EnumSetIterator);
	return class$;
}

$Class* RegularEnumSet$EnumSetIterator::class$ = nullptr;

	} // util
} // java