#include <java/util/function/IntPredicate.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
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

class IntPredicate$$Lambda$lambda$and$0 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst, IntPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$and$0(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPredicate$$Lambda$lambda$and$0>());
	}
	IntPredicate* inst$ = nullptr;
	IntPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntPredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$and$0, inst$)},
	{"other", "Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$and$0, other)},
	{}
};
$MethodInfo IntPredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntPredicate;Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(IntPredicate$$Lambda$lambda$and$0::*)(IntPredicate*,IntPredicate*)>(&IntPredicate$$Lambda$lambda$and$0::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntPredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	fieldInfos,
	methodInfos
};
$Class* IntPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(IntPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class IntPredicate$$Lambda$lambda$negate$1$1 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$negate$1(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPredicate$$Lambda$lambda$negate$1$1>());
	}
	IntPredicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntPredicate$$Lambda$lambda$negate$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$negate$1$1, inst$)},
	{}
};
$MethodInfo IntPredicate$$Lambda$lambda$negate$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(IntPredicate$$Lambda$lambda$negate$1$1::*)(IntPredicate*)>(&IntPredicate$$Lambda$lambda$negate$1$1::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPredicate$$Lambda$lambda$negate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntPredicate$$Lambda$lambda$negate$1$1",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	fieldInfos,
	methodInfos
};
$Class* IntPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$loadClass(IntPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class IntPredicate$$Lambda$lambda$or$2$2 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst, IntPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$or$2(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPredicate$$Lambda$lambda$or$2$2>());
	}
	IntPredicate* inst$ = nullptr;
	IntPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntPredicate$$Lambda$lambda$or$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$or$2$2, inst$)},
	{"other", "Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$or$2$2, other)},
	{}
};
$MethodInfo IntPredicate$$Lambda$lambda$or$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntPredicate;Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(IntPredicate$$Lambda$lambda$or$2$2::*)(IntPredicate*,IntPredicate*)>(&IntPredicate$$Lambda$lambda$or$2$2::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPredicate$$Lambda$lambda$or$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.IntPredicate$$Lambda$lambda$or$2$2",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	fieldInfos,
	methodInfos
};
$Class* IntPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$loadClass(IntPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

$CompoundAttribute _IntPredicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _IntPredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;", nullptr, $PUBLIC},
	{"lambda$and$0", "(Ljava/util/function/IntPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(IntPredicate::*)(IntPredicate*,int32_t)>(&IntPredicate::lambda$and$0))},
	{"lambda$negate$1", "(I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(IntPredicate::*)(int32_t)>(&IntPredicate::lambda$negate$1))},
	{"lambda$or$2", "(Ljava/util/function/IntPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(IntPredicate::*)(IntPredicate*,int32_t)>(&IntPredicate::lambda$or$2))},
	{"negate", "()Ljava/util/function/IntPredicate;", nullptr, $PUBLIC},
	{"or", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;", nullptr, $PUBLIC},
	{"test", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPredicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntPredicate",
	nullptr,
	nullptr,
	nullptr,
	_IntPredicate_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntPredicate_Annotations_
};

$Object* allocate$IntPredicate($Class* clazz) {
	return $of($alloc(IntPredicate));
}

IntPredicate* IntPredicate::and$(IntPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<IntPredicate*>($new(IntPredicate$$Lambda$lambda$and$0, this, other));
}

IntPredicate* IntPredicate::negate() {
	return static_cast<IntPredicate*>($new(IntPredicate$$Lambda$lambda$negate$1$1, this));
}

IntPredicate* IntPredicate::or$(IntPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<IntPredicate*>($new(IntPredicate$$Lambda$lambda$or$2$2, this, other));
}

bool IntPredicate::lambda$or$2(IntPredicate* other, int32_t value) {
	bool var$0 = test(value);
	return var$0 || $nc(other)->test(value);
}

bool IntPredicate::lambda$negate$1(int32_t value) {
	return !test(value);
}

bool IntPredicate::lambda$and$0(IntPredicate* other, int32_t value) {
	bool var$0 = test(value);
	return var$0 && $nc(other)->test(value);
}

$Class* IntPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IntPredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return IntPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(IntPredicate$$Lambda$lambda$negate$1$1::classInfo$.name)) {
			return IntPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals(IntPredicate$$Lambda$lambda$or$2$2::classInfo$.name)) {
			return IntPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$loadClass(IntPredicate, name, initialize, &_IntPredicate_ClassInfo_, allocate$IntPredicate);
	return class$;
}

$Class* IntPredicate::class$ = nullptr;

		} // function
	} // util
} // java