#include <java/util/function/IntConsumer.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntConsumer$$Lambda$lambda$andThen$0>());
	}
	IntConsumer* inst$ = nullptr;
	IntConsumer* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntConsumer$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntConsumer$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/IntConsumer;", nullptr, $PUBLIC, $field(IntConsumer$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo IntConsumer$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntConsumer;Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(IntConsumer$$Lambda$lambda$andThen$0::*)(IntConsumer*,IntConsumer*)>(&IntConsumer$$Lambda$lambda$andThen$0::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntConsumer$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntConsumer$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* IntConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(IntConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;
$CompoundAttribute _IntConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _IntConsumer_MethodInfo_[] = {
	{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;", nullptr, $PUBLIC},
	{"lambda$andThen$0", "(Ljava/util/function/IntConsumer;I)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(IntConsumer::*)(IntConsumer*,int32_t)>(&IntConsumer::lambda$andThen$0))},
	{}
};

$ClassInfo _IntConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntConsumer",
	nullptr,
	nullptr,
	nullptr,
	_IntConsumer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntConsumer_Annotations_
};

$Object* allocate$IntConsumer($Class* clazz) {
	return $of($alloc(IntConsumer));
}

IntConsumer* IntConsumer::andThen(IntConsumer* after) {
	$Objects::requireNonNull(after);
	return static_cast<IntConsumer*>($new(IntConsumer$$Lambda$lambda$andThen$0, this, after));
}

void IntConsumer::lambda$andThen$0(IntConsumer* after, int32_t t) {
	accept(t);
	$nc(after)->accept(t);
}

$Class* IntConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IntConsumer$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return IntConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(IntConsumer, name, initialize, &_IntConsumer_ClassInfo_, allocate$IntConsumer);
	return class$;
}

$Class* IntConsumer::class$ = nullptr;

		} // function
	} // util
} // java