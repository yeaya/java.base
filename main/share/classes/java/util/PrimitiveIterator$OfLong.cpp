#include <java/util/PrimitiveIterator$OfLong.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Tripwire.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

#undef ENABLED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator = ::java::util::PrimitiveIterator;
using $Tripwire = ::java::util::Tripwire;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

class PrimitiveIterator$OfLong$$Lambda$accept : public $LongConsumer {
	$class(PrimitiveIterator$OfLong$$Lambda$accept, $NO_CLASS_INIT, $LongConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int64_t t) override {
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrimitiveIterator$OfLong$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrimitiveIterator$OfLong$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrimitiveIterator$OfLong$$Lambda$accept, inst$)},
	{}
};
$MethodInfo PrimitiveIterator$OfLong$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(PrimitiveIterator$OfLong$$Lambda$accept::*)($Consumer*)>(&PrimitiveIterator$OfLong$$Lambda$accept::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrimitiveIterator$OfLong$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.PrimitiveIterator$OfLong$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	fieldInfos,
	methodInfos
};
$Class* PrimitiveIterator$OfLong$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(PrimitiveIterator$OfLong$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrimitiveIterator$OfLong$$Lambda$accept::class$ = nullptr;

$MethodInfo _PrimitiveIterator$OfLong_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Long;>;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"next", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PrimitiveIterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.PrimitiveIterator$OfLong", "java.util.PrimitiveIterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrimitiveIterator$OfLong_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.PrimitiveIterator$OfLong",
	nullptr,
	"java.util.PrimitiveIterator",
	nullptr,
	_PrimitiveIterator$OfLong_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/PrimitiveIterator<Ljava/lang/Long;Ljava/util/function/LongConsumer;>;",
	nullptr,
	_PrimitiveIterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.PrimitiveIterator"
};

$Object* allocate$PrimitiveIterator$OfLong($Class* clazz) {
	return $of($alloc(PrimitiveIterator$OfLong));
}

void PrimitiveIterator$OfLong::forEachRemaining($LongConsumer* action) {
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept(nextLong());
	}
}

$Object* PrimitiveIterator$OfLong::next() {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfLong.nextLong()"_s);
	}
	return $of($Long::valueOf(nextLong()));
}

void PrimitiveIterator$OfLong::forEachRemaining($Consumer* action) {
	if ($instanceOf($LongConsumer, action)) {
		forEachRemaining($cast($LongConsumer, action));
	} else {
		$Objects::requireNonNull(action);
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfLong.forEachRemainingLong(action::accept)"_s);
		}
		forEachRemaining(static_cast<$LongConsumer*>($$new(PrimitiveIterator$OfLong$$Lambda$accept, static_cast<$Consumer*>(action))));
	}
}

void PrimitiveIterator$OfLong::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

$Class* PrimitiveIterator$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrimitiveIterator$OfLong$$Lambda$accept::classInfo$.name)) {
			return PrimitiveIterator$OfLong$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(PrimitiveIterator$OfLong, name, initialize, &_PrimitiveIterator$OfLong_ClassInfo_, allocate$PrimitiveIterator$OfLong);
	return class$;
}

$Class* PrimitiveIterator$OfLong::class$ = nullptr;

	} // util
} // java