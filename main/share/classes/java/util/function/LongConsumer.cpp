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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongConsumer$$Lambda$lambda$andThen$0>());
	}
	LongConsumer* inst$ = nullptr;
	LongConsumer* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongConsumer$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongConsumer$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/LongConsumer;", nullptr, $PUBLIC, $field(LongConsumer$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo LongConsumer$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongConsumer;Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(LongConsumer$$Lambda$lambda$andThen$0::*)(LongConsumer*,LongConsumer*)>(&LongConsumer$$Lambda$lambda$andThen$0::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongConsumer$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongConsumer$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	fieldInfos,
	methodInfos
};
$Class* LongConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(LongConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

$CompoundAttribute _LongConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongConsumer_MethodInfo_[] = {
	{"accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;", nullptr, $PUBLIC},
	{"lambda$andThen$0", "(Ljava/util/function/LongConsumer;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(LongConsumer::*)(LongConsumer*,int64_t)>(&LongConsumer::lambda$andThen$0))},
	{}
};

$ClassInfo _LongConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongConsumer",
	nullptr,
	nullptr,
	nullptr,
	_LongConsumer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongConsumer_Annotations_
};

$Object* allocate$LongConsumer($Class* clazz) {
	return $of($alloc(LongConsumer));
}

LongConsumer* LongConsumer::andThen(LongConsumer* after) {
	$Objects::requireNonNull(after);
	return static_cast<LongConsumer*>($new(LongConsumer$$Lambda$lambda$andThen$0, this, after));
}

void LongConsumer::lambda$andThen$0(LongConsumer* after, int64_t t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* LongConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LongConsumer$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return LongConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(LongConsumer, name, initialize, &_LongConsumer_ClassInfo_, allocate$LongConsumer);
	return class$;
}

$Class* LongConsumer::class$ = nullptr;

		} // function
	} // util
} // java