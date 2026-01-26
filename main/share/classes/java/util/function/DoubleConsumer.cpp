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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoubleConsumer$$Lambda$lambda$andThen$0>());
	}
	DoubleConsumer* inst$ = nullptr;
	DoubleConsumer* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoubleConsumer$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleConsumer$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/DoubleConsumer;", nullptr, $PUBLIC, $field(DoubleConsumer$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo DoubleConsumer$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoubleConsumer;Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC, $method(DoubleConsumer$$Lambda$lambda$andThen$0, init$, void, DoubleConsumer*, DoubleConsumer*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoubleConsumer$$Lambda$lambda$andThen$0, accept, void, double)},
	{}
};
$ClassInfo DoubleConsumer$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoubleConsumer$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	fieldInfos,
	methodInfos
};
$Class* DoubleConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(DoubleConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoubleConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

$CompoundAttribute _DoubleConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleConsumer_MethodInfo_[] = {
	{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleConsumer, accept, void, double)},
	{"andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;", nullptr, $PUBLIC, $virtualMethod(DoubleConsumer, andThen, DoubleConsumer*, DoubleConsumer*)},
	{"lambda$andThen$0", "(Ljava/util/function/DoubleConsumer;D)V", nullptr, $PRIVATE | $SYNTHETIC, $method(DoubleConsumer, lambda$andThen$0, void, DoubleConsumer*, double)},
	{}
};

$ClassInfo _DoubleConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleConsumer",
	nullptr,
	nullptr,
	nullptr,
	_DoubleConsumer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleConsumer_Annotations_
};

$Object* allocate$DoubleConsumer($Class* clazz) {
	return $of($alloc(DoubleConsumer));
}

DoubleConsumer* DoubleConsumer::andThen(DoubleConsumer* after) {
	$Objects::requireNonNull(after);
	return static_cast<DoubleConsumer*>($new(DoubleConsumer$$Lambda$lambda$andThen$0, this, after));
}

void DoubleConsumer::lambda$andThen$0(DoubleConsumer* after, double t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* DoubleConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DoubleConsumer$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return DoubleConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(DoubleConsumer, name, initialize, &_DoubleConsumer_ClassInfo_, allocate$DoubleConsumer);
	return class$;
}

$Class* DoubleConsumer::class$ = nullptr;

		} // function
	} // util
} // java