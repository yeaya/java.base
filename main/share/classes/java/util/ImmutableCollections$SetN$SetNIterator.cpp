#include <java/util/ImmutableCollections$SetN$SetNIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ImmutableCollections$SetN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef REVERSE
#undef SALT32L

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$SetN = ::java::util::ImmutableCollections$SetN;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _ImmutableCollections$SetN$SetNIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ImmutableCollections$SetN;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$SetN$SetNIterator, this$0)},
	{"remaining", "I", nullptr, $PRIVATE, $field(ImmutableCollections$SetN$SetNIterator, remaining)},
	{"idx", "I", nullptr, $PRIVATE, $field(ImmutableCollections$SetN$SetNIterator, idx)},
	{}
};

$MethodInfo _ImmutableCollections$SetN$SetNIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ImmutableCollections$SetN;)V", nullptr, 0, $method(static_cast<void(ImmutableCollections$SetN$SetNIterator::*)($ImmutableCollections$SetN*)>(&ImmutableCollections$SetN$SetNIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$InnerClassInfo _ImmutableCollections$SetN$SetNIterator_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$SetN", "java.util.ImmutableCollections", "SetN", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$SetN$SetNIterator", "java.util.ImmutableCollections$SetN", "SetNIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ImmutableCollections$SetN$SetNIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$SetN$SetNIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImmutableCollections$SetN$SetNIterator_FieldInfo_,
	_ImmutableCollections$SetN$SetNIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ImmutableCollections$SetN$SetNIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$SetN$SetNIterator($Class* clazz) {
	return $of($alloc(ImmutableCollections$SetN$SetNIterator));
}

void ImmutableCollections$SetN$SetNIterator::init$($ImmutableCollections$SetN* this$0) {
	$set(this, this$0, this$0);
	this->remaining = this$0->size$;
	$init($ImmutableCollections);
	this->idx = (int32_t)((int64_t)((uint64_t)($ImmutableCollections::SALT32L * $nc(this$0->elements)->length) >> 32));
}

bool ImmutableCollections$SetN$SetNIterator::hasNext() {
	return this->remaining > 0;
}

$Object* ImmutableCollections$SetN$SetNIterator::next() {
	if (this->remaining > 0) {
		$var($Object, element, nullptr);
		int32_t idx = this->idx;
		int32_t len = $nc(this->this$0->elements)->length;
		do {
			$init($ImmutableCollections);
			if ($ImmutableCollections::REVERSE) {
				if (++idx >= len) {
					idx = 0;
				}
			} else if (--idx < 0) {
				idx = len - 1;
			}
		} while (($assign(element, $nc(this->this$0->elements)->get(idx))) == nullptr);
		this->idx = idx;
		--this->remaining;
		return $of(element);
	} else {
		$throwNew($NoSuchElementException);
	}
}

ImmutableCollections$SetN$SetNIterator::ImmutableCollections$SetN$SetNIterator() {
}

$Class* ImmutableCollections$SetN$SetNIterator::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$SetN$SetNIterator, name, initialize, &_ImmutableCollections$SetN$SetNIterator_ClassInfo_, allocate$ImmutableCollections$SetN$SetNIterator);
	return class$;
}

$Class* ImmutableCollections$SetN$SetNIterator::class$ = nullptr;

	} // util
} // java