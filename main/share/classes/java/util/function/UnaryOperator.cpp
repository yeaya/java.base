#include <java/util/function/UnaryOperator.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace function {

class UnaryOperator$$Lambda$lambda$identity$0 : public UnaryOperator {
	$class(UnaryOperator$$Lambda$lambda$identity$0, $NO_CLASS_INIT, UnaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return UnaryOperator::lambda$identity$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UnaryOperator$$Lambda$lambda$identity$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UnaryOperator$$Lambda$lambda$identity$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnaryOperator$$Lambda$lambda$identity$0::*)()>(&UnaryOperator$$Lambda$lambda$identity$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UnaryOperator$$Lambda$lambda$identity$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.UnaryOperator$$Lambda$lambda$identity$0",
	"java.lang.Object",
	"java.util.function.UnaryOperator",
	nullptr,
	methodInfos
};
$Class* UnaryOperator$$Lambda$lambda$identity$0::load$($String* name, bool initialize) {
	$loadClass(UnaryOperator$$Lambda$lambda$identity$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UnaryOperator$$Lambda$lambda$identity$0::class$ = nullptr;
$CompoundAttribute _UnaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _UnaryOperator_MethodInfo_[] = {
	{"identity", "()Ljava/util/function/UnaryOperator;", "<T:Ljava/lang/Object;>()Ljava/util/function/UnaryOperator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<UnaryOperator*(*)()>(&UnaryOperator::identity))},
	{"lambda$identity$0", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(Object$*)>(&UnaryOperator::lambda$identity$0))},
	{}
};

$ClassInfo _UnaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.UnaryOperator",
	nullptr,
	"java.util.function.Function",
	nullptr,
	_UnaryOperator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Function<TT;TT;>;",
	nullptr,
	nullptr,
	_UnaryOperator_Annotations_
};

$Object* allocate$UnaryOperator($Class* clazz) {
	return $of($alloc(UnaryOperator));
}

UnaryOperator* UnaryOperator::identity() {
	$init(UnaryOperator);
	return static_cast<UnaryOperator*>($new(UnaryOperator$$Lambda$lambda$identity$0));
}

$Object* UnaryOperator::lambda$identity$0(Object$* t) {
	$init(UnaryOperator);
	return $of(t);
}

$Class* UnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UnaryOperator$$Lambda$lambda$identity$0::classInfo$.name)) {
			return UnaryOperator$$Lambda$lambda$identity$0::load$(name, initialize);
		}
	}
	$loadClass(UnaryOperator, name, initialize, &_UnaryOperator_ClassInfo_, allocate$UnaryOperator);
	return class$;
}

$Class* UnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java