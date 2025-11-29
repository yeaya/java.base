#include <java/util/ImmutableCollections$MapN$MapNIterator.h>

#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/KeyValueHolder.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef REVERSE
#undef SALT32L

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $KeyValueHolder = ::java::util::KeyValueHolder;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _ImmutableCollections$MapN$MapNIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ImmutableCollections$MapN;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$MapN$MapNIterator, this$0)},
	{"remaining", "I", nullptr, $PRIVATE, $field(ImmutableCollections$MapN$MapNIterator, remaining)},
	{"idx", "I", nullptr, $PRIVATE, $field(ImmutableCollections$MapN$MapNIterator, idx)},
	{}
};

$MethodInfo _ImmutableCollections$MapN$MapNIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ImmutableCollections$MapN;)V", nullptr, 0, $method(static_cast<void(ImmutableCollections$MapN$MapNIterator::*)($ImmutableCollections$MapN*)>(&ImmutableCollections$MapN$MapNIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"nextIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ImmutableCollections$MapN$MapNIterator::*)()>(&ImmutableCollections$MapN$MapNIterator::nextIndex))},
	{}
};

$InnerClassInfo _ImmutableCollections$MapN$MapNIterator_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$MapN", "java.util.ImmutableCollections", "MapN", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$MapN$MapNIterator", "java.util.ImmutableCollections$MapN", "MapNIterator", 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$MapN$MapNIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ImmutableCollections$MapN$MapNIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImmutableCollections$MapN$MapNIterator_FieldInfo_,
	_ImmutableCollections$MapN$MapNIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ImmutableCollections$MapN$MapNIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$MapN$MapNIterator($Class* clazz) {
	return $of($alloc(ImmutableCollections$MapN$MapNIterator));
}

void ImmutableCollections$MapN$MapNIterator::init$($ImmutableCollections$MapN* this$0) {
	$set(this, this$0, this$0);
	this->remaining = this$0->size$;
	$init($ImmutableCollections);
	this->idx = (int32_t)((int64_t)((uint64_t)($ImmutableCollections::SALT32L * ($nc(this$0->table)->length >> 1)) >> 32)) << 1;
}

bool ImmutableCollections$MapN$MapNIterator::hasNext() {
	return this->remaining > 0;
}

int32_t ImmutableCollections$MapN$MapNIterator::nextIndex() {
	int32_t idx = this->idx;
	$init($ImmutableCollections);
	if ($ImmutableCollections::REVERSE) {
		if ((idx += 2) >= $nc(this->this$0->table)->length) {
			idx = 0;
		}
	} else if ((idx -= 2) < 0) {
		idx = $nc(this->this$0->table)->length - 2;
	}
	return this->idx = idx;
}

$Object* ImmutableCollections$MapN$MapNIterator::next() {
	if (this->remaining > 0) {
		int32_t idx = 0;
		while ($nc(this->this$0->table)->get(idx = nextIndex()) == nullptr) {
		}
		$var($Map$Entry, e, $new($KeyValueHolder, $nc(this->this$0->table)->get(idx), $nc(this->this$0->table)->get(idx + 1)));
		--this->remaining;
		return $of(e);
	} else {
		$throwNew($NoSuchElementException);
	}
}

ImmutableCollections$MapN$MapNIterator::ImmutableCollections$MapN$MapNIterator() {
}

$Class* ImmutableCollections$MapN$MapNIterator::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$MapN$MapNIterator, name, initialize, &_ImmutableCollections$MapN$MapNIterator_ClassInfo_, allocate$ImmutableCollections$MapN$MapNIterator);
	return class$;
}

$Class* ImmutableCollections$MapN$MapNIterator::class$ = nullptr;

	} // util
} // java