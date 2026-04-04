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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
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
		$nc(inst$)->accept($of(t));
	}
	$Consumer* inst$ = nullptr;
};
$Class* PrimitiveIterator$OfLong$$Lambda$accept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrimitiveIterator$OfLong$$Lambda$accept, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(PrimitiveIterator$OfLong$$Lambda$accept, init$, void, $Consumer*)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfLong$$Lambda$accept, accept, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.PrimitiveIterator$OfLong$$Lambda$accept",
		"java.lang.Object",
		"java.util.function.LongConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrimitiveIterator$OfLong$$Lambda$accept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveIterator$OfLong$$Lambda$accept);
	});
	return class$;
}
$Class* PrimitiveIterator$OfLong$$Lambda$accept::class$ = nullptr;

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
		forEachRemaining($cast($LongConsumer, $$new(PrimitiveIterator$OfLong$$Lambda$accept, action)));
	}
}

void PrimitiveIterator$OfLong::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

$Class* PrimitiveIterator$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.PrimitiveIterator$OfLong$$Lambda$accept")) {
			return PrimitiveIterator$OfLong$$Lambda$accept::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfLong, forEachRemaining, void, $LongConsumer*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Long;>;)V", $PUBLIC, $virtualMethod(PrimitiveIterator$OfLong, forEachRemaining, void, $Consumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrimitiveIterator$OfLong, forEachRemaining, void, Object$*)},
		{"next", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfLong, next, $Object*)},
		{"nextLong", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrimitiveIterator$OfLong, nextLong, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.PrimitiveIterator$OfLong", "java.util.PrimitiveIterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.PrimitiveIterator$OfLong",
		nullptr,
		"java.util.PrimitiveIterator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/PrimitiveIterator<Ljava/lang/Long;Ljava/util/function/LongConsumer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.PrimitiveIterator"
	};
	$loadClass(PrimitiveIterator$OfLong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveIterator$OfLong);
	});
	return class$;
}

$Class* PrimitiveIterator$OfLong::class$ = nullptr;

	} // util
} // java