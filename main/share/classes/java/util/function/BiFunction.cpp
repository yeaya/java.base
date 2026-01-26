#include <java/util/function/BiFunction.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace function {

class BiFunction$$Lambda$lambda$andThen$0 : public BiFunction {
	$class(BiFunction$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, BiFunction)
public:
	void init$(BiFunction* inst, $Function* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual $Object* apply(Object$* t, Object$* u) override {
		 return $nc(inst$)->lambda$andThen$0(after, t, u);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BiFunction$$Lambda$lambda$andThen$0>());
	}
	BiFunction* inst$ = nullptr;
	$Function* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BiFunction$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiFunction$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(BiFunction$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo BiFunction$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiFunction;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(BiFunction$$Lambda$lambda$andThen$0, init$, void, BiFunction*, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BiFunction$$Lambda$lambda$andThen$0, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo BiFunction$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BiFunction$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* BiFunction$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(BiFunction$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BiFunction$$Lambda$lambda$andThen$0::class$ = nullptr;

$CompoundAttribute _BiFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _BiFunction_MethodInfo_[] = {
	{"andThen", "(Ljava/util/function/Function;)Ljava/util/function/BiFunction;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TR;+TV;>;)Ljava/util/function/BiFunction<TT;TU;TV;>;", $PUBLIC, $virtualMethod(BiFunction, andThen, BiFunction*, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TT;TU;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(BiFunction, apply, $Object*, Object$*, Object$*)},
	{"lambda$andThen$0", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(BiFunction, lambda$andThen$0, $Object*, $Function*, Object$*, Object$*)},
	{}
};

$ClassInfo _BiFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.BiFunction",
	nullptr,
	nullptr,
	nullptr,
	_BiFunction_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_BiFunction_Annotations_
};

$Object* allocate$BiFunction($Class* clazz) {
	return $of($alloc(BiFunction));
}

BiFunction* BiFunction::andThen($Function* after) {
	$Objects::requireNonNull(after);
	return static_cast<BiFunction*>($new(BiFunction$$Lambda$lambda$andThen$0, this, after));
}

$Object* BiFunction::lambda$andThen$0($Function* after, Object$* t, Object$* u) {
	return $of($nc(after)->apply($(apply(t, u))));
}

$Class* BiFunction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BiFunction$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return BiFunction$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(BiFunction, name, initialize, &_BiFunction_ClassInfo_, allocate$BiFunction);
	return class$;
}

$Class* BiFunction::class$ = nullptr;

		} // function
	} // util
} // java