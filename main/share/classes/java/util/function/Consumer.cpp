#include <java/util/function/Consumer.h>
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

class Consumer$$Lambda$lambda$andThen$0 : public Consumer {
	$class(Consumer$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, Consumer)
public:
	void init$(Consumer* inst, Consumer* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->lambda$andThen$0(after, t);
	}
	Consumer* inst$ = nullptr;
	Consumer* after = nullptr;
};
$Class* Consumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Consumer$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(Consumer$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(Consumer$$Lambda$lambda$andThen$0, init$, void, Consumer*, Consumer*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Consumer$$Lambda$lambda$andThen$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Consumer$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Consumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Consumer$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* Consumer$$Lambda$lambda$andThen$0::class$ = nullptr;

Consumer* Consumer::andThen(Consumer* after) {
	$Objects::requireNonNull(after);
	return $new(Consumer$$Lambda$lambda$andThen$0, this, after);
}

void Consumer::lambda$andThen$0(Consumer* after, Object$* t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* Consumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.Consumer$$Lambda$lambda$andThen$0")) {
			return Consumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Consumer, accept, void, Object$*)},
		{"andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", "(Ljava/util/function/Consumer<-TT;>;)Ljava/util/function/Consumer<TT;>;", $PUBLIC, $virtualMethod(Consumer, andThen, Consumer*, Consumer*)},
		{"lambda$andThen$0", "(Ljava/util/function/Consumer;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Consumer, lambda$andThen$0, void, Consumer*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.Consumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Consumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Consumer);
	});
	return class$;
}

$Class* Consumer::class$ = nullptr;

		} // function
	} // util
} // java