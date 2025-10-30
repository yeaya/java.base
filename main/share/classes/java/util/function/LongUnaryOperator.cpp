#include <java/util/function/LongUnaryOperator.h>

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
using $Long = ::java::lang::Long;
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

class LongUnaryOperator$$Lambda$lambda$compose$0 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$(LongUnaryOperator* inst, LongUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual int64_t applyAsLong(int64_t v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongUnaryOperator$$Lambda$lambda$compose$0>());
	}
	LongUnaryOperator* inst$ = nullptr;
	LongUnaryOperator* before = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongUnaryOperator$$Lambda$lambda$compose$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$compose$0, inst$)},
	{"before", "Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$compose$0, before)},
	{}
};
$MethodInfo LongUnaryOperator$$Lambda$lambda$compose$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongUnaryOperator;Ljava/util/function/LongUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(LongUnaryOperator$$Lambda$lambda$compose$0::*)(LongUnaryOperator*,LongUnaryOperator*)>(&LongUnaryOperator$$Lambda$lambda$compose$0::init$))},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongUnaryOperator$$Lambda$lambda$compose$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongUnaryOperator$$Lambda$lambda$compose$0",
	"java.lang.Object",
	"java.util.function.LongUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* LongUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$loadClass(LongUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class LongUnaryOperator$$Lambda$lambda$andThen$1$1 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$(LongUnaryOperator* inst, LongUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual int64_t applyAsLong(int64_t t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongUnaryOperator$$Lambda$lambda$andThen$1$1>());
	}
	LongUnaryOperator* inst$ = nullptr;
	LongUnaryOperator* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongUnaryOperator$$Lambda$lambda$andThen$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
	{"after", "Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
	{}
};
$MethodInfo LongUnaryOperator$$Lambda$lambda$andThen$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongUnaryOperator;Ljava/util/function/LongUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(LongUnaryOperator$$Lambda$lambda$andThen$1$1::*)(LongUnaryOperator*,LongUnaryOperator*)>(&LongUnaryOperator$$Lambda$lambda$andThen$1$1::init$))},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongUnaryOperator$$Lambda$lambda$andThen$1$1",
	"java.lang.Object",
	"java.util.function.LongUnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* LongUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$loadClass(LongUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class LongUnaryOperator$$Lambda$lambda$identity$2$2 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(int64_t t) override {
		 return LongUnaryOperator::lambda$identity$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongUnaryOperator$$Lambda$lambda$identity$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LongUnaryOperator$$Lambda$lambda$identity$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LongUnaryOperator$$Lambda$lambda$identity$2$2::*)()>(&LongUnaryOperator$$Lambda$lambda$identity$2$2::init$))},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongUnaryOperator$$Lambda$lambda$identity$2$2",
	"java.lang.Object",
	"java.util.function.LongUnaryOperator",
	nullptr,
	methodInfos
};
$Class* LongUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$loadClass(LongUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;

$CompoundAttribute _LongUnaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongUnaryOperator_MethodInfo_[] = {
	{"andThen", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"compose", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC},
	{"identity", "()Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongUnaryOperator*(*)()>(&LongUnaryOperator::identity))},
	{"lambda$andThen$1", "(Ljava/util/function/LongUnaryOperator;J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(LongUnaryOperator::*)(LongUnaryOperator*,int64_t)>(&LongUnaryOperator::lambda$andThen$1))},
	{"lambda$compose$0", "(Ljava/util/function/LongUnaryOperator;J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(LongUnaryOperator::*)(LongUnaryOperator*,int64_t)>(&LongUnaryOperator::lambda$compose$0))},
	{"lambda$identity$2", "(J)J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int64_t(*)(int64_t)>(&LongUnaryOperator::lambda$identity$2))},
	{}
};

$ClassInfo _LongUnaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongUnaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_LongUnaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongUnaryOperator_Annotations_
};

$Object* allocate$LongUnaryOperator($Class* clazz) {
	return $of($alloc(LongUnaryOperator));
}

LongUnaryOperator* LongUnaryOperator::compose(LongUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return static_cast<LongUnaryOperator*>($new(LongUnaryOperator$$Lambda$lambda$compose$0, this, before));
}

LongUnaryOperator* LongUnaryOperator::andThen(LongUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return static_cast<LongUnaryOperator*>($new(LongUnaryOperator$$Lambda$lambda$andThen$1$1, this, after));
}

LongUnaryOperator* LongUnaryOperator::identity() {
	return static_cast<LongUnaryOperator*>($new(LongUnaryOperator$$Lambda$lambda$identity$2$2));
}

int64_t LongUnaryOperator::lambda$identity$2(int64_t t) {
	return t;
}

int64_t LongUnaryOperator::lambda$andThen$1(LongUnaryOperator* after, int64_t t) {
	return $nc(after)->applyAsLong(applyAsLong(t));
}

int64_t LongUnaryOperator::lambda$compose$0(LongUnaryOperator* before, int64_t v) {
	return applyAsLong($nc(before)->applyAsLong(v));
}

$Class* LongUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LongUnaryOperator$$Lambda$lambda$compose$0::classInfo$.name)) {
			return LongUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals(LongUnaryOperator$$Lambda$lambda$andThen$1$1::classInfo$.name)) {
			return LongUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals(LongUnaryOperator$$Lambda$lambda$identity$2$2::classInfo$.name)) {
			return LongUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$loadClass(LongUnaryOperator, name, initialize, &_LongUnaryOperator_ClassInfo_, allocate$LongUnaryOperator);
	return class$;
}

$Class* LongUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java