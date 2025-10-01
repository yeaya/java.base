#include <java/util/function/IntUnaryOperator.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace function {

class IntUnaryOperator$$Lambda$lambda$compose$0 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$(IntUnaryOperator* inst, IntUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual int32_t applyAsInt(int32_t v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntUnaryOperator$$Lambda$lambda$compose$0>());
	}
	IntUnaryOperator* inst$ = nullptr;
	IntUnaryOperator* before = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntUnaryOperator$$Lambda$lambda$compose$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$compose$0, inst$)},
	{"before", "Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$compose$0, before)},
	{}
};
$MethodInfo IntUnaryOperator$$Lambda$lambda$compose$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntUnaryOperator;Ljava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(IntUnaryOperator$$Lambda$lambda$compose$0::*)(IntUnaryOperator*,IntUnaryOperator*)>(&IntUnaryOperator$$Lambda$lambda$compose$0::init$))},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntUnaryOperator$$Lambda$lambda$compose$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntUnaryOperator$$Lambda$lambda$compose$0",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* IntUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$loadClass(IntUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class IntUnaryOperator$$Lambda$lambda$andThen$1$1 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$(IntUnaryOperator* inst, IntUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual int32_t applyAsInt(int32_t t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntUnaryOperator$$Lambda$lambda$andThen$1$1>());
	}
	IntUnaryOperator* inst$ = nullptr;
	IntUnaryOperator* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntUnaryOperator$$Lambda$lambda$andThen$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
	{"after", "Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
	{}
};
$MethodInfo IntUnaryOperator$$Lambda$lambda$andThen$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntUnaryOperator;Ljava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(IntUnaryOperator$$Lambda$lambda$andThen$1$1::*)(IntUnaryOperator*,IntUnaryOperator*)>(&IntUnaryOperator$$Lambda$lambda$andThen$1$1::init$))},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntUnaryOperator$$Lambda$lambda$andThen$1$1",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* IntUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$loadClass(IntUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class IntUnaryOperator$$Lambda$lambda$identity$2$2 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t t) override {
		 return IntUnaryOperator::lambda$identity$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntUnaryOperator$$Lambda$lambda$identity$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntUnaryOperator$$Lambda$lambda$identity$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntUnaryOperator$$Lambda$lambda$identity$2$2::*)()>(&IntUnaryOperator$$Lambda$lambda$identity$2$2::init$))},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntUnaryOperator$$Lambda$lambda$identity$2$2",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	nullptr,
	methodInfos
};
$Class* IntUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$loadClass(IntUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;
$CompoundAttribute _IntUnaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _IntUnaryOperator_MethodInfo_[] = {
	{"andThen", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"compose", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC},
	{"identity", "()Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntUnaryOperator*(*)()>(&IntUnaryOperator::identity))},
	{"lambda$andThen$1", "(Ljava/util/function/IntUnaryOperator;I)I", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int32_t(IntUnaryOperator::*)(IntUnaryOperator*,int32_t)>(&IntUnaryOperator::lambda$andThen$1))},
	{"lambda$compose$0", "(Ljava/util/function/IntUnaryOperator;I)I", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int32_t(IntUnaryOperator::*)(IntUnaryOperator*,int32_t)>(&IntUnaryOperator::lambda$compose$0))},
	{"lambda$identity$2", "(I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(int32_t)>(&IntUnaryOperator::lambda$identity$2))},
	{}
};

$ClassInfo _IntUnaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntUnaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_IntUnaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntUnaryOperator_Annotations_
};

$Object* allocate$IntUnaryOperator($Class* clazz) {
	return $of($alloc(IntUnaryOperator));
}

IntUnaryOperator* IntUnaryOperator::compose(IntUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return static_cast<IntUnaryOperator*>($new(IntUnaryOperator$$Lambda$lambda$compose$0, this, before));
}

IntUnaryOperator* IntUnaryOperator::andThen(IntUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return static_cast<IntUnaryOperator*>($new(IntUnaryOperator$$Lambda$lambda$andThen$1$1, this, after));
}

IntUnaryOperator* IntUnaryOperator::identity() {
	return static_cast<IntUnaryOperator*>($new(IntUnaryOperator$$Lambda$lambda$identity$2$2));
}

int32_t IntUnaryOperator::lambda$identity$2(int32_t t) {
	return t;
}

int32_t IntUnaryOperator::lambda$andThen$1(IntUnaryOperator* after, int32_t t) {
	return $nc(after)->applyAsInt(applyAsInt(t));
}

int32_t IntUnaryOperator::lambda$compose$0(IntUnaryOperator* before, int32_t v) {
	return applyAsInt($nc(before)->applyAsInt(v));
}

$Class* IntUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IntUnaryOperator$$Lambda$lambda$compose$0::classInfo$.name)) {
			return IntUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals(IntUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$.name)) {
			return IntUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals(IntUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$.name)) {
			return IntUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$loadClass(IntUnaryOperator, name, initialize, &_IntUnaryOperator_ClassInfo_, allocate$IntUnaryOperator);
	return class$;
}

$Class* IntUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java