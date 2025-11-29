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

$FieldInfo _EnumMap$EnumMapIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EnumMapIterator, this$0)},
	{"index", "I", nullptr, 0, $field(EnumMap$EnumMapIterator, index)},
	{"lastReturnedIndex", "I", nullptr, 0, $field(EnumMap$EnumMapIterator, lastReturnedIndex)},
	{}
};

$MethodInfo _EnumMap$EnumMapIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$EnumMapIterator::*)($EnumMap*)>(&EnumMap$EnumMapIterator::init$))},
	{"checkLastReturnedIndex", "()V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$EnumMapIterator::*)()>(&EnumMap$EnumMapIterator::checkLastReturnedIndex))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnumMap$EnumMapIterator_InnerClassesInfo_[] = {
	{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _EnumMap$EnumMapIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.EnumMap$EnumMapIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_EnumMap$EnumMapIterator_FieldInfo_,
	_EnumMap$EnumMapIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_EnumMap$EnumMapIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$EnumMapIterator($Class* clazz) {
	return $of($alloc(EnumMap$EnumMapIterator));
}

void EnumMap$EnumMapIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	this->index = 0;
	this->lastReturnedIndex = -1;
}

bool EnumMap$EnumMapIterator::hasNext() {
	while (this->index < $nc(this->this$0->vals)->length && $nc(this->this$0->vals)->get(this->index) == nullptr) {
		++this->index;
	}
	return this->index != $nc(this->this$0->vals)->length;
}

void EnumMap$EnumMapIterator::remove() {
	checkLastReturnedIndex();
	if ($nc(this->this$0->vals)->get(this->lastReturnedIndex) != nullptr) {
		$nc(this->this$0->vals)->set(this->lastReturnedIndex, nullptr);
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
	$loadClass(EnumMap$EnumMapIterator, name, initialize, &_EnumMap$EnumMapIterator_ClassInfo_, allocate$EnumMap$EnumMapIterator);
	return class$;
}

$Class* EnumMap$EnumMapIterator::class$ = nullptr;

	} // util
} // java