#include <java/util/EnumMap$ValueIterator.h>

#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EnumMapIterator = ::java::util::EnumMap$EnumMapIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _EnumMap$ValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$ValueIterator, this$0)},
	{}
};

$MethodInfo _EnumMap$ValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(EnumMap$ValueIterator, init$, void, $EnumMap*)},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(EnumMap$ValueIterator, next, $Object*)},
	{}
};

$InnerClassInfo _EnumMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.EnumMap$ValueIterator", "java.util.EnumMap", "ValueIterator", $PRIVATE},
	{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _EnumMap$ValueIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumMap$ValueIterator",
	"java.util.EnumMap$EnumMapIterator",
	nullptr,
	_EnumMap$ValueIterator_FieldInfo_,
	_EnumMap$ValueIterator_MethodInfo_,
	"Ljava/util/EnumMap<TK;TV;>.EnumMapIterator<TV;>;",
	nullptr,
	_EnumMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$ValueIterator($Class* clazz) {
	return $of($alloc(EnumMap$ValueIterator));
}

void EnumMap$ValueIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$EnumMap$EnumMapIterator::init$(this$0);
}

$Object* EnumMap$ValueIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->lastReturnedIndex = this->index++;
	return $of(this->this$0->unmaskNull($nc(this->this$0->vals)->get(this->lastReturnedIndex)));
}

EnumMap$ValueIterator::EnumMap$ValueIterator() {
}

$Class* EnumMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(EnumMap$ValueIterator, name, initialize, &_EnumMap$ValueIterator_ClassInfo_, allocate$EnumMap$ValueIterator);
	return class$;
}

$Class* EnumMap$ValueIterator::class$ = nullptr;

	} // util
} // java