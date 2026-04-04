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
	BiFunction* inst$ = nullptr;
	$Function* after = nullptr;
};
$Class* BiFunction$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiFunction$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(BiFunction$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiFunction;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(BiFunction$$Lambda$lambda$andThen$0, init$, void, BiFunction*, $Function*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BiFunction$$Lambda$lambda$andThen$0, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BiFunction$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BiFunction$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiFunction$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* BiFunction$$Lambda$lambda$andThen$0::class$ = nullptr;

BiFunction* BiFunction::andThen($Function* after) {
	$Objects::requireNonNull(after);
	return $new(BiFunction$$Lambda$lambda$andThen$0, this, after);
}

$Object* BiFunction::lambda$andThen$0($Function* after, Object$* t, Object$* u) {
	return $nc(after)->apply($(apply(t, u)));
}

$Class* BiFunction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.BiFunction$$Lambda$lambda$andThen$0")) {
			return BiFunction$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"andThen", "(Ljava/util/function/Function;)Ljava/util/function/BiFunction;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TR;+TV;>;)Ljava/util/function/BiFunction<TT;TU;TV;>;", $PUBLIC, $virtualMethod(BiFunction, andThen, BiFunction*, $Function*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TT;TU;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(BiFunction, apply, $Object*, Object$*, Object$*)},
		{"lambda$andThen$0", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(BiFunction, lambda$andThen$0, $Object*, $Function*, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.BiFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BiFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiFunction);
	});
	return class$;
}

$Class* BiFunction::class$ = nullptr;

		} // function
	} // util
} // java