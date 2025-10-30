#include <java/util/function/DoubleUnaryOperator.h>

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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
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

class DoubleUnaryOperator$$Lambda$lambda$compose$0 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$(DoubleUnaryOperator* inst, DoubleUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual double applyAsDouble(double v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoubleUnaryOperator$$Lambda$lambda$compose$0>());
	}
	DoubleUnaryOperator* inst$ = nullptr;
	DoubleUnaryOperator* before = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoubleUnaryOperator$$Lambda$lambda$compose$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$compose$0, inst$)},
	{"before", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$compose$0, before)},
	{}
};
$MethodInfo DoubleUnaryOperator$$Lambda$lambda$compose$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleUnaryOperator$$Lambda$lambda$compose$0::*)(DoubleUnaryOperator*,DoubleUnaryOperator*)>(&DoubleUnaryOperator$$Lambda$lambda$compose$0::init$))},
	{"applyAsDouble", "(D)D", nullptr, $PUBLIC},
	{}
};
$ClassInfo DoubleUnaryOperator$$Lambda$lambda$compose$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoubleUnaryOperator$$Lambda$lambda$compose$0",
	"java.lang.Object",
	"java.util.function.DoubleUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* DoubleUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class DoubleUnaryOperator$$Lambda$lambda$andThen$1$1 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$(DoubleUnaryOperator* inst, DoubleUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual double applyAsDouble(double t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoubleUnaryOperator$$Lambda$lambda$andThen$1$1>());
	}
	DoubleUnaryOperator* inst$ = nullptr;
	DoubleUnaryOperator* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
	{"after", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
	{}
};
$MethodInfo DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::*)(DoubleUnaryOperator*,DoubleUnaryOperator*)>(&DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::init$))},
	{"applyAsDouble", "(D)D", nullptr, $PUBLIC},
	{}
};
$ClassInfo DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoubleUnaryOperator$$Lambda$lambda$andThen$1$1",
	"java.lang.Object",
	"java.util.function.DoubleUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class DoubleUnaryOperator$$Lambda$lambda$identity$2$2 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$() {
	}
	virtual double applyAsDouble(double t) override {
		 return DoubleUnaryOperator::lambda$identity$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoubleUnaryOperator$$Lambda$lambda$identity$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DoubleUnaryOperator$$Lambda$lambda$identity$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleUnaryOperator$$Lambda$lambda$identity$2$2::*)()>(&DoubleUnaryOperator$$Lambda$lambda$identity$2$2::init$))},
	{"applyAsDouble", "(D)D", nullptr, $PUBLIC},
	{}
};
$ClassInfo DoubleUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoubleUnaryOperator$$Lambda$lambda$identity$2$2",
	"java.lang.Object",
	"java.util.function.DoubleUnaryOperator",
	nullptr,
	methodInfos
};
$Class* DoubleUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;

$CompoundAttribute _DoubleUnaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleUnaryOperator_MethodInfo_[] = {
	{"andThen", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC},
	{"applyAsDouble", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"compose", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC},
	{"identity", "()Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DoubleUnaryOperator*(*)()>(&DoubleUnaryOperator::identity))},
	{"lambda$andThen$1", "(Ljava/util/function/DoubleUnaryOperator;D)D", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<double(DoubleUnaryOperator::*)(DoubleUnaryOperator*,double)>(&DoubleUnaryOperator::lambda$andThen$1))},
	{"lambda$compose$0", "(Ljava/util/function/DoubleUnaryOperator;D)D", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<double(DoubleUnaryOperator::*)(DoubleUnaryOperator*,double)>(&DoubleUnaryOperator::lambda$compose$0))},
	{"lambda$identity$2", "(D)D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<double(*)(double)>(&DoubleUnaryOperator::lambda$identity$2))},
	{}
};

$ClassInfo _DoubleUnaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleUnaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_DoubleUnaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleUnaryOperator_Annotations_
};

$Object* allocate$DoubleUnaryOperator($Class* clazz) {
	return $of($alloc(DoubleUnaryOperator));
}

DoubleUnaryOperator* DoubleUnaryOperator::compose(DoubleUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return static_cast<DoubleUnaryOperator*>($new(DoubleUnaryOperator$$Lambda$lambda$compose$0, this, before));
}

DoubleUnaryOperator* DoubleUnaryOperator::andThen(DoubleUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return static_cast<DoubleUnaryOperator*>($new(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, this, after));
}

DoubleUnaryOperator* DoubleUnaryOperator::identity() {
	return static_cast<DoubleUnaryOperator*>($new(DoubleUnaryOperator$$Lambda$lambda$identity$2$2));
}

double DoubleUnaryOperator::lambda$identity$2(double t) {
	return t;
}

double DoubleUnaryOperator::lambda$andThen$1(DoubleUnaryOperator* after, double t) {
	return $nc(after)->applyAsDouble(applyAsDouble(t));
}

double DoubleUnaryOperator::lambda$compose$0(DoubleUnaryOperator* before, double v) {
	return applyAsDouble($nc(before)->applyAsDouble(v));
}

$Class* DoubleUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DoubleUnaryOperator$$Lambda$lambda$compose$0::classInfo$.name)) {
			return DoubleUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$.name)) {
			return DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals(DoubleUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$.name)) {
			return DoubleUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$loadClass(DoubleUnaryOperator, name, initialize, &_DoubleUnaryOperator_ClassInfo_, allocate$DoubleUnaryOperator);
	return class$;
}

$Class* DoubleUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java