#include <java/util/function/LongPredicate.h>

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

class LongPredicate$$Lambda$lambda$and$0 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst, LongPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$and$0(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongPredicate$$Lambda$lambda$and$0>());
	}
	LongPredicate* inst$ = nullptr;
	LongPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongPredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$and$0, inst$)},
	{"other", "Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$and$0, other)},
	{}
};
$MethodInfo LongPredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongPredicate;Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(LongPredicate$$Lambda$lambda$and$0::*)(LongPredicate*,LongPredicate*)>(&LongPredicate$$Lambda$lambda$and$0::init$))},
	{"test", "(J)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongPredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongPredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.function.LongPredicate",
	fieldInfos,
	methodInfos
};
$Class* LongPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(LongPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class LongPredicate$$Lambda$lambda$negate$1$1 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$negate$1(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongPredicate$$Lambda$lambda$negate$1$1>());
	}
	LongPredicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongPredicate$$Lambda$lambda$negate$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$negate$1$1, inst$)},
	{}
};
$MethodInfo LongPredicate$$Lambda$lambda$negate$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(LongPredicate$$Lambda$lambda$negate$1$1::*)(LongPredicate*)>(&LongPredicate$$Lambda$lambda$negate$1$1::init$))},
	{"test", "(J)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongPredicate$$Lambda$lambda$negate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongPredicate$$Lambda$lambda$negate$1$1",
	"java.lang.Object",
	"java.util.function.LongPredicate",
	fieldInfos,
	methodInfos
};
$Class* LongPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$loadClass(LongPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class LongPredicate$$Lambda$lambda$or$2$2 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst, LongPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$or$2(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongPredicate$$Lambda$lambda$or$2$2>());
	}
	LongPredicate* inst$ = nullptr;
	LongPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongPredicate$$Lambda$lambda$or$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$or$2$2, inst$)},
	{"other", "Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$or$2$2, other)},
	{}
};
$MethodInfo LongPredicate$$Lambda$lambda$or$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/LongPredicate;Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(LongPredicate$$Lambda$lambda$or$2$2::*)(LongPredicate*,LongPredicate*)>(&LongPredicate$$Lambda$lambda$or$2$2::init$))},
	{"test", "(J)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongPredicate$$Lambda$lambda$or$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.LongPredicate$$Lambda$lambda$or$2$2",
	"java.lang.Object",
	"java.util.function.LongPredicate",
	fieldInfos,
	methodInfos
};
$Class* LongPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$loadClass(LongPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

$CompoundAttribute _LongPredicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongPredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;", nullptr, $PUBLIC},
	{"lambda$and$0", "(Ljava/util/function/LongPredicate;J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(LongPredicate::*)(LongPredicate*,int64_t)>(&LongPredicate::lambda$and$0))},
	{"lambda$negate$1", "(J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(LongPredicate::*)(int64_t)>(&LongPredicate::lambda$negate$1))},
	{"lambda$or$2", "(Ljava/util/function/LongPredicate;J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(LongPredicate::*)(LongPredicate*,int64_t)>(&LongPredicate::lambda$or$2))},
	{"negate", "()Ljava/util/function/LongPredicate;", nullptr, $PUBLIC},
	{"or", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;", nullptr, $PUBLIC},
	{"test", "(J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPredicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongPredicate",
	nullptr,
	nullptr,
	nullptr,
	_LongPredicate_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongPredicate_Annotations_
};

$Object* allocate$LongPredicate($Class* clazz) {
	return $of($alloc(LongPredicate));
}

LongPredicate* LongPredicate::and$(LongPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<LongPredicate*>($new(LongPredicate$$Lambda$lambda$and$0, this, other));
}

LongPredicate* LongPredicate::negate() {
	return static_cast<LongPredicate*>($new(LongPredicate$$Lambda$lambda$negate$1$1, this));
}

LongPredicate* LongPredicate::or$(LongPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<LongPredicate*>($new(LongPredicate$$Lambda$lambda$or$2$2, this, other));
}

bool LongPredicate::lambda$or$2(LongPredicate* other, int64_t value) {
	bool var$0 = test(value);
	return var$0 || $nc(other)->test(value);
}

bool LongPredicate::lambda$negate$1(int64_t value) {
	return !test(value);
}

bool LongPredicate::lambda$and$0(LongPredicate* other, int64_t value) {
	bool var$0 = test(value);
	return var$0 && $nc(other)->test(value);
}

$Class* LongPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LongPredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return LongPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(LongPredicate$$Lambda$lambda$negate$1$1::classInfo$.name)) {
			return LongPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals(LongPredicate$$Lambda$lambda$or$2$2::classInfo$.name)) {
			return LongPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$loadClass(LongPredicate, name, initialize, &_LongPredicate_ClassInfo_, allocate$LongPredicate);
	return class$;
}

$Class* LongPredicate::class$ = nullptr;

		} // function
	} // util
} // java