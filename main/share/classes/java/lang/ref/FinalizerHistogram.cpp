#include <java/lang/ref/FinalizerHistogram.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/FinalizerHistogram$Entry.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/ToIntFunction.h>
#include <jcpp.h>

using $FinalizerHistogram$EntryArray = $Array<::java::lang::ref::FinalizerHistogram$Entry>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Finalizer = ::java::lang::ref::Finalizer;
using $FinalizerHistogram$Entry = ::java::lang::ref::FinalizerHistogram$Entry;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $ToIntFunction = ::java::util::function::ToIntFunction;

namespace java {
	namespace lang {
		namespace ref {

class FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0 : public $Consumer {
	$class(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* countMap) {
		$set(this, countMap, countMap);
	}
	virtual void accept(Object$* r) override {
		FinalizerHistogram::lambda$getFinalizerHistogram$0(countMap, $cast($Reference, r));
	}
	$Map* countMap = nullptr;
};
$Class* FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"countMap", "Ljava/util/Map;", nullptr, $PUBLIC, $field(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, countMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, init$, void, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ref.FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0);
	});
	return class$;
}
$Class* FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0::class$ = nullptr;

class FinalizerHistogram$$Lambda$getInstanceCount$1 : public $ToIntFunction {
	$class(FinalizerHistogram$$Lambda$getInstanceCount$1, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$) override {
		 return $sure($FinalizerHistogram$Entry, inst$)->getInstanceCount();
	}
};
$Class* FinalizerHistogram$$Lambda$getInstanceCount$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizerHistogram$$Lambda$getInstanceCount$1, init$, void)},
		{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(FinalizerHistogram$$Lambda$getInstanceCount$1, applyAsInt, int32_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ref.FinalizerHistogram$$Lambda$getInstanceCount$1",
		"java.lang.Object",
		"java.util.function.ToIntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(FinalizerHistogram$$Lambda$getInstanceCount$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogram$$Lambda$getInstanceCount$1);
	});
	return class$;
}
$Class* FinalizerHistogram$$Lambda$getInstanceCount$1::class$ = nullptr;

class FinalizerHistogram$$Lambda$Entry$2 : public $Function {
	$class(FinalizerHistogram$$Lambda$Entry$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* className) override {
		 return $new($FinalizerHistogram$Entry, $cast($String, className));
	}
};
$Class* FinalizerHistogram$$Lambda$Entry$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizerHistogram$$Lambda$Entry$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FinalizerHistogram$$Lambda$Entry$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ref.FinalizerHistogram$$Lambda$Entry$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(FinalizerHistogram$$Lambda$Entry$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogram$$Lambda$Entry$2);
	});
	return class$;
}
$Class* FinalizerHistogram$$Lambda$Entry$2::class$ = nullptr;

void FinalizerHistogram::init$() {
}

$FinalizerHistogram$EntryArray* FinalizerHistogram::getFinalizerHistogram() {
	$useLocalObjectStack();
	$var($Map, countMap, $new($HashMap));
	$var($ReferenceQueue, queue, $Finalizer::getQueue());
	$nc(queue)->forEach($$new(FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0, countMap));
	$var($FinalizerHistogram$EntryArray, fhe, $cast($FinalizerHistogram$EntryArray, $$nc(countMap->values())->toArray($$new($FinalizerHistogram$EntryArray, countMap->size()))));
	$Arrays::sort(fhe, $($$nc($Comparator::comparingInt($$new(FinalizerHistogram$$Lambda$getInstanceCount$1)))->reversed()));
	return fhe;
}

void FinalizerHistogram::lambda$getFinalizerHistogram$0($Map* countMap, $Reference* r) {
	$useLocalObjectStack();
	$var($Object, referent, $nc(r)->get());
	if (referent != nullptr) {
		$var($Object, var$0, referent->getClass()->getName());
		$$sure($FinalizerHistogram$Entry, $nc(countMap)->computeIfAbsent(var$0, $$new(FinalizerHistogram$$Lambda$Entry$2)))->increment();
		$assign(referent, nullptr);
	}
}

FinalizerHistogram::FinalizerHistogram() {
}

$Class* FinalizerHistogram::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.ref.FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0")) {
			return FinalizerHistogram$$Lambda$lambda$getFinalizerHistogram$0::load$(name, initialize);
		}
		if (name->equals("java.lang.ref.FinalizerHistogram$$Lambda$getInstanceCount$1")) {
			return FinalizerHistogram$$Lambda$getInstanceCount$1::load$(name, initialize);
		}
		if (name->equals("java.lang.ref.FinalizerHistogram$$Lambda$Entry$2")) {
			return FinalizerHistogram$$Lambda$Entry$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FinalizerHistogram, init$, void)},
		{"getFinalizerHistogram", "()[Ljava/lang/ref/FinalizerHistogram$Entry;", nullptr, $STATIC, $staticMethod(FinalizerHistogram, getFinalizerHistogram, $FinalizerHistogram$EntryArray*)},
		{"lambda$getFinalizerHistogram$0", "(Ljava/util/Map;Ljava/lang/ref/Reference;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FinalizerHistogram, lambda$getFinalizerHistogram$0, void, $Map*, $Reference*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.FinalizerHistogram$Entry", "java.lang.ref.FinalizerHistogram", "Entry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ref.FinalizerHistogram",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ref.FinalizerHistogram$Entry"
	};
	$loadClass(FinalizerHistogram, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogram);
	});
	return class$;
}

$Class* FinalizerHistogram::class$ = nullptr;

		} // ref
	} // lang
} // java