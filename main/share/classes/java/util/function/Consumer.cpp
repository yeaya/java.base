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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Consumer$$Lambda$lambda$andThen$0>());
	}
	Consumer* inst$ = nullptr;
	Consumer* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Consumer$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Consumer$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(Consumer$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo Consumer$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(Consumer$$Lambda$lambda$andThen$0, init$, void, Consumer*, Consumer*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Consumer$$Lambda$lambda$andThen$0, accept, void, Object$*)},
	{}
};
$ClassInfo Consumer$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Consumer$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Consumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(Consumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Consumer$$Lambda$lambda$andThen$0::class$ = nullptr;

$CompoundAttribute _Consumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _Consumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Consumer, accept, void, Object$*)},
	{"andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", "(Ljava/util/function/Consumer<-TT;>;)Ljava/util/function/Consumer<TT;>;", $PUBLIC, $virtualMethod(Consumer, andThen, Consumer*, Consumer*)},
	{"lambda$andThen$0", "(Ljava/util/function/Consumer;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Consumer, lambda$andThen$0, void, Consumer*, Object$*)},
	{}
};

$ClassInfo _Consumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.Consumer",
	nullptr,
	nullptr,
	nullptr,
	_Consumer_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Consumer_Annotations_
};

$Object* allocate$Consumer($Class* clazz) {
	return $of($alloc(Consumer));
}

Consumer* Consumer::andThen(Consumer* after) {
	$Objects::requireNonNull(after);
	return static_cast<Consumer*>($new(Consumer$$Lambda$lambda$andThen$0, this, after));
}

void Consumer::lambda$andThen$0(Consumer* after, Object$* t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* Consumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Consumer$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return Consumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(Consumer, name, initialize, &_Consumer_ClassInfo_, allocate$Consumer);
	return class$;
}

$Class* Consumer::class$ = nullptr;

		} // function
	} // util
} // java