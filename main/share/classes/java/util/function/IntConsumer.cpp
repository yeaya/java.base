#include <java/util/function/IntConsumer.h>
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

class IntConsumer$$Lambda$lambda$andThen$0 : public IntConsumer {
	$class(IntConsumer$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, IntConsumer)
public:
	void init$(IntConsumer* inst, IntConsumer* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual void accept(int32_t t) override {
		$nc(inst$)->lambda$andThen$0(after, t);
	}
	IntConsumer* inst$ = nullptr;
	IntConsumer* after = nullptr;
};
$Class* IntConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntConsumer$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/IntConsumer;", nullptr, $PUBLIC, $field(IntConsumer$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntConsumer;Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $method(IntConsumer$$Lambda$lambda$andThen$0, init$, void, IntConsumer*, IntConsumer*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntConsumer$$Lambda$lambda$andThen$0, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntConsumer$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntConsumer$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* IntConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

IntConsumer* IntConsumer::andThen(IntConsumer* after) {
	$Objects::requireNonNull(after);
	return $new(IntConsumer$$Lambda$lambda$andThen$0, this, after);
}

void IntConsumer::lambda$andThen$0(IntConsumer* after, int32_t t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* IntConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.IntConsumer$$Lambda$lambda$andThen$0")) {
			return IntConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntConsumer, accept, void, int32_t)},
		{"andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;", nullptr, $PUBLIC, $virtualMethod(IntConsumer, andThen, IntConsumer*, IntConsumer*)},
		{"lambda$andThen$0", "(Ljava/util/function/IntConsumer;I)V", nullptr, $PRIVATE | $SYNTHETIC, $method(IntConsumer, lambda$andThen$0, void, IntConsumer*, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntConsumer);
	});
	return class$;
}

$Class* IntConsumer::class$ = nullptr;

		} // function
	} // util
} // java