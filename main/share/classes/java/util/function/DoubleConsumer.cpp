#include <java/util/function/DoubleConsumer.h>
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

class DoubleConsumer$$Lambda$lambda$andThen$0 : public DoubleConsumer {
	$class(DoubleConsumer$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, DoubleConsumer)
public:
	void init$(DoubleConsumer* inst, DoubleConsumer* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual void accept(double t) override {
		$nc(inst$)->lambda$andThen$0(after, t);
	}
	DoubleConsumer* inst$ = nullptr;
	DoubleConsumer* after = nullptr;
};
$Class* DoubleConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleConsumer$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/DoubleConsumer;", nullptr, $PUBLIC, $field(DoubleConsumer$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/DoubleConsumer;Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC, $method(DoubleConsumer$$Lambda$lambda$andThen$0, init$, void, DoubleConsumer*, DoubleConsumer*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoubleConsumer$$Lambda$lambda$andThen$0, accept, void, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.DoubleConsumer$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.DoubleConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoubleConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleConsumer$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* DoubleConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

DoubleConsumer* DoubleConsumer::andThen(DoubleConsumer* after) {
	$Objects::requireNonNull(after);
	return $new(DoubleConsumer$$Lambda$lambda$andThen$0, this, after);
}

void DoubleConsumer::lambda$andThen$0(DoubleConsumer* after, double t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* DoubleConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.DoubleConsumer$$Lambda$lambda$andThen$0")) {
			return DoubleConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleConsumer, accept, void, double)},
		{"andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;", nullptr, $PUBLIC, $virtualMethod(DoubleConsumer, andThen, DoubleConsumer*, DoubleConsumer*)},
		{"lambda$andThen$0", "(Ljava/util/function/DoubleConsumer;D)V", nullptr, $PRIVATE | $SYNTHETIC, $method(DoubleConsumer, lambda$andThen$0, void, DoubleConsumer*, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleConsumer);
	});
	return class$;
}

$Class* DoubleConsumer::class$ = nullptr;

		} // function
	} // util
} // java