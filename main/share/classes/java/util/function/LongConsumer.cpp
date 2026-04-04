#include <java/util/function/LongConsumer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace function {

class LongConsumer$$Lambda$lambda$andThen$0 : public LongConsumer {
	$class(LongConsumer$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, LongConsumer)
public:
	void init$(LongConsumer* inst, LongConsumer* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual void accept(int64_t t) override {
		$nc(inst$)->lambda$andThen$0(after, t);
	}
	LongConsumer* inst$ = nullptr;
	LongConsumer* after = nullptr;
};
$Class* LongConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongConsumer$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/LongConsumer;", nullptr, $PUBLIC, $field(LongConsumer$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongConsumer;Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $method(LongConsumer$$Lambda$lambda$andThen$0, init$, void, LongConsumer*, LongConsumer*)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(LongConsumer$$Lambda$lambda$andThen$0, accept, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongConsumer$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.LongConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongConsumer$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* LongConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

LongConsumer* LongConsumer::andThen(LongConsumer* after) {
	$Objects::requireNonNull(after);
	return $new(LongConsumer$$Lambda$lambda$andThen$0, this, after);
}

void LongConsumer::lambda$andThen$0(LongConsumer* after, int64_t t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* LongConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.LongConsumer$$Lambda$lambda$andThen$0")) {
			return LongConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongConsumer, accept, void, int64_t)},
		{"andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;", nullptr, $PUBLIC, $virtualMethod(LongConsumer, andThen, LongConsumer*, LongConsumer*)},
		{"lambda$andThen$0", "(Ljava/util/function/LongConsumer;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(LongConsumer, lambda$andThen$0, void, LongConsumer*, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongConsumer);
	});
	return class$;
}

$Class* LongConsumer::class$ = nullptr;

		} // function
	} // util
} // java