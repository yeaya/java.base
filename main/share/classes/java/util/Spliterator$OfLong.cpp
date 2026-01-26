#include <java/util/Spliterator$OfLong.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/Tripwire.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

#undef ENABLED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Tripwire = ::java::util::Tripwire;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

class Spliterator$OfLong$$Lambda$accept : public $LongConsumer {
	$class(Spliterator$OfLong$$Lambda$accept, $NO_CLASS_INIT, $LongConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int64_t t) override {
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Spliterator$OfLong$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Spliterator$OfLong$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Spliterator$OfLong$$Lambda$accept, inst$)},
	{}
};
$MethodInfo Spliterator$OfLong$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(Spliterator$OfLong$$Lambda$accept, init$, void, $Consumer*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(Spliterator$OfLong$$Lambda$accept, accept, void, int64_t)},
	{}
};
$ClassInfo Spliterator$OfLong$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Spliterator$OfLong$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	fieldInfos,
	methodInfos
};
$Class* Spliterator$OfLong$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(Spliterator$OfLong$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Spliterator$OfLong$$Lambda$accept::class$ = nullptr;

$MethodInfo _Spliterator$OfLong_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $virtualMethod(Spliterator$OfLong, forEachRemaining, void, $LongConsumer*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Long;>;)V", $PUBLIC, $virtualMethod(Spliterator$OfLong, forEachRemaining, void, $Consumer*)},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterator$OfLong, forEachRemaining, void, Object$*)},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator$OfLong, tryAdvance, bool, $LongConsumer*)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/Long;>;)Z", $PUBLIC, $virtualMethod(Spliterator$OfLong, tryAdvance, bool, $Consumer*)},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterator$OfLong, tryAdvance, bool, Object$*)},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Spliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterator$OfLong_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Spliterator$OfLong",
	nullptr,
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_Spliterator$OfLong_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;Ljava/util/Spliterator$OfLong;>;",
	nullptr,
	_Spliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterator"
};

$Object* allocate$Spliterator$OfLong($Class* clazz) {
	return $of($alloc(Spliterator$OfLong));
}

void Spliterator$OfLong::forEachRemaining($LongConsumer* action) {
	do {
	} while (tryAdvance(action));
}

bool Spliterator$OfLong::tryAdvance($Consumer* action) {
	if ($instanceOf($LongConsumer, action)) {
		return tryAdvance($cast($LongConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfLong.tryAdvance((LongConsumer) action::accept)"_s);
		}
		return tryAdvance(static_cast<$LongConsumer*>($$new(Spliterator$OfLong$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfLong::forEachRemaining($Consumer* action) {
	if ($instanceOf($LongConsumer, action)) {
		forEachRemaining($cast($LongConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfLong.forEachRemaining((LongConsumer) action::accept)"_s);
		}
		forEachRemaining(static_cast<$LongConsumer*>($$new(Spliterator$OfLong$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfLong::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

bool Spliterator$OfLong::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

$Class* Spliterator$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Spliterator$OfLong$$Lambda$accept::classInfo$.name)) {
			return Spliterator$OfLong$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(Spliterator$OfLong, name, initialize, &_Spliterator$OfLong_ClassInfo_, allocate$Spliterator$OfLong);
	return class$;
}

$Class* Spliterator$OfLong::class$ = nullptr;

	} // util
} // java