#include <java/util/concurrent/CompletionStage.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

class CompletionStage$$Lambda$lambda$exceptionallyAsync$1 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CompletionStage* inst, $Function* fn) {
		$set(this, inst$, inst);
		$set(this, fn, fn);
	}
	virtual $Object* apply(Object$* r, Object$* ex) override {
		 return $of($nc(inst$)->lambda$exceptionallyAsync$1(fn, r, $cast($Throwable, ex)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyAsync$1>());
	}
	CompletionStage* inst$ = nullptr;
	$Function* fn = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, inst$)},
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, fn)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, init$, void, CompletionStage*, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyAsync$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$1::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$1::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CompletionStage* inst, $Function* fn, $Executor* executor) {
		$set(this, inst$, inst);
		$set(this, fn, fn);
		$set(this, executor, executor);
	}
	virtual $Object* apply(Object$* r, Object$* ex) override {
		 return $of($nc(inst$)->lambda$exceptionallyAsync$3(fn, executor, r, $cast($Throwable, ex)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1>());
	}
	CompletionStage* inst$ = nullptr;
	$Function* fn = nullptr;
	$Executor* executor = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, inst$)},
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, fn)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, executor)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, init$, void, CompletionStage*, $Function*, $Executor*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CompletionStage* inst, $Function* fn) {
		$set(this, inst$, inst);
		$set(this, fn, fn);
	}
	virtual $Object* apply(Object$* r, Object$* ex) override {
		 return $of($nc(inst$)->lambda$exceptionallyCompose$4(fn, r, $cast($Throwable, ex)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2>());
	}
	CompletionStage* inst$ = nullptr;
	$Function* fn = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, inst$)},
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, fn)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, init$, void, CompletionStage*, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CompletionStage* inst, $Function* fn) {
		$set(this, inst$, inst);
		$set(this, fn, fn);
	}
	virtual $Object* apply(Object$* r, Object$* ex) override {
		 return $of($nc(inst$)->lambda$exceptionallyComposeAsync$6(fn, r, $cast($Throwable, ex)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3>());
	}
	CompletionStage* inst$ = nullptr;
	$Function* fn = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, inst$)},
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, fn)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, init$, void, CompletionStage*, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CompletionStage* inst, $Function* fn, $Executor* executor) {
		$set(this, inst$, inst);
		$set(this, fn, fn);
		$set(this, executor, executor);
	}
	virtual $Object* apply(Object$* r, Object$* ex) override {
		 return $of($nc(inst$)->lambda$exceptionallyComposeAsync$8(fn, executor, r, $cast($Throwable, ex)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4>());
	}
	CompletionStage* inst$ = nullptr;
	$Function* fn = nullptr;
	$Executor* executor = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, inst$)},
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, fn)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, executor)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, init$, void, CompletionStage*, $Function*, $Executor*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Function* fn) {
		$set(this, fn, fn);
	}
	virtual $Object* apply(Object$* r1, Object$* ex1) override {
		 return $of(CompletionStage::lambda$exceptionallyComposeAsync$5(fn, r1, $cast($Throwable, ex1)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5>());
	}
	$Function* fn = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::fieldInfos[2] = {
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, fn)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, init$, void, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::class$ = nullptr;

class CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6 : public $BiFunction {
	$class(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Function* fn) {
		$set(this, fn, fn);
	}
	virtual $Object* apply(Object$* r1, Object$* ex1) override {
		 return CompletionStage::lambda$exceptionallyAsync$0(fn, r1, $cast($Throwable, ex1));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6>());
	}
	$Function* fn = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::fieldInfos[2] = {
	{"fn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, fn)},
	{}
};
$MethodInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, init$, void, $Function*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::load$($String* name, bool initialize) {
	$loadClass(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::class$ = nullptr;

$MethodInfo _CompletionStage_MethodInfo_[] = {
	{"acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Consumer<-TT;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, acceptEither, CompletionStage*, CompletionStage*, $Consumer*)},
	{"acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Consumer<-TT;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, acceptEitherAsync, CompletionStage*, CompletionStage*, $Consumer*)},
	{"acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Consumer<-TT;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, acceptEitherAsync, CompletionStage*, CompletionStage*, $Consumer*, $Executor*)},
	{"applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Function<-TT;TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, applyToEither, CompletionStage*, CompletionStage*, $Function*)},
	{"applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Function<-TT;TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, applyToEitherAsync, CompletionStage*, CompletionStage*, $Function*)},
	{"applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TT;>;Ljava/util/function/Function<-TT;TU;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, applyToEitherAsync, CompletionStage*, CompletionStage*, $Function*, $Executor*)},
	{"exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+TT;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, exceptionally, CompletionStage*, $Function*)},
	{"exceptionallyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+TT;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(CompletionStage, exceptionallyAsync, CompletionStage*, $Function*)},
	{"exceptionallyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+TT;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(CompletionStage, exceptionallyAsync, CompletionStage*, $Function*, $Executor*)},
	{"exceptionallyCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+Ljava/util/concurrent/CompletionStage<TT;>;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(CompletionStage, exceptionallyCompose, CompletionStage*, $Function*)},
	{"exceptionallyComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+Ljava/util/concurrent/CompletionStage<TT;>;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(CompletionStage, exceptionallyComposeAsync, CompletionStage*, $Function*)},
	{"exceptionallyComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Function<Ljava/lang/Throwable;+Ljava/util/concurrent/CompletionStage<TT;>;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(CompletionStage, exceptionallyComposeAsync, CompletionStage*, $Function*, $Executor*)},
	{"handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/BiFunction<-TT;Ljava/lang/Throwable;+TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, handle, CompletionStage*, $BiFunction*)},
	{"handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/BiFunction<-TT;Ljava/lang/Throwable;+TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, handleAsync, CompletionStage*, $BiFunction*)},
	{"handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/BiFunction<-TT;Ljava/lang/Throwable;+TU;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, handleAsync, CompletionStage*, $BiFunction*, $Executor*)},
	{"lambda$exceptionallyAsync$0", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CompletionStage, lambda$exceptionallyAsync$0, $Object*, $Function*, Object$*, $Throwable*)},
	{"lambda$exceptionallyAsync$1", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompletionStage, lambda$exceptionallyAsync$1, CompletionStage*, $Function*, Object$*, $Throwable*)},
	{"lambda$exceptionallyAsync$3", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompletionStage, lambda$exceptionallyAsync$3, CompletionStage*, $Function*, $Executor*, Object$*, $Throwable*)},
	{"lambda$exceptionallyCompose$4", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompletionStage, lambda$exceptionallyCompose$4, CompletionStage*, $Function*, Object$*, $Throwable*)},
	{"lambda$exceptionallyComposeAsync$5", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CompletionStage, lambda$exceptionallyComposeAsync$5, CompletionStage*, $Function*, Object$*, $Throwable*)},
	{"lambda$exceptionallyComposeAsync$6", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompletionStage, lambda$exceptionallyComposeAsync$6, CompletionStage*, $Function*, Object$*, $Throwable*)},
	{"lambda$exceptionallyComposeAsync$8", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompletionStage, lambda$exceptionallyComposeAsync$8, CompletionStage*, $Function*, $Executor*, Object$*, $Throwable*)},
	{"runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterBoth, CompletionStage*, CompletionStage*, $Runnable*)},
	{"runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterBothAsync, CompletionStage*, CompletionStage*, $Runnable*)},
	{"runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterBothAsync, CompletionStage*, CompletionStage*, $Runnable*, $Executor*)},
	{"runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterEither, CompletionStage*, CompletionStage*, $Runnable*)},
	{"runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterEitherAsync, CompletionStage*, CompletionStage*, $Runnable*)},
	{"runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, runAfterEitherAsync, CompletionStage*, CompletionStage*, $Runnable*, $Executor*)},
	{"thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Consumer<-TT;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAccept, CompletionStage*, $Consumer*)},
	{"thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Consumer<-TT;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAcceptAsync, CompletionStage*, $Consumer*)},
	{"thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/Consumer<-TT;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAcceptAsync, CompletionStage*, $Consumer*, $Executor*)},
	{"thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiConsumer<-TT;-TU;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAcceptBoth, CompletionStage*, CompletionStage*, $BiConsumer*)},
	{"thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiConsumer<-TT;-TU;>;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAcceptBothAsync, CompletionStage*, CompletionStage*, $BiConsumer*)},
	{"thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiConsumer<-TT;-TU;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenAcceptBothAsync, CompletionStage*, CompletionStage*, $BiConsumer*, $Executor*)},
	{"thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenApply, CompletionStage*, $Function*)},
	{"thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenApplyAsync, CompletionStage*, $Function*)},
	{"thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TU;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenApplyAsync, CompletionStage*, $Function*, $Executor*)},
	{"thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiFunction<-TT;-TU;+TV;>;)Ljava/util/concurrent/CompletionStage<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenCombine, CompletionStage*, CompletionStage*, $BiFunction*)},
	{"thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiFunction<-TT;-TU;+TV;>;)Ljava/util/concurrent/CompletionStage<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenCombineAsync, CompletionStage*, CompletionStage*, $BiFunction*)},
	{"thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<+TU;>;Ljava/util/function/BiFunction<-TT;-TU;+TV;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenCombineAsync, CompletionStage*, CompletionStage*, $BiFunction*, $Executor*)},
	{"thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/concurrent/CompletionStage<TU;>;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenCompose, CompletionStage*, $Function*)},
	{"thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/concurrent/CompletionStage<TU;>;>;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenComposeAsync, CompletionStage*, $Function*)},
	{"thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/concurrent/CompletionStage<TU;>;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenComposeAsync, CompletionStage*, $Function*, $Executor*)},
	{"thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenRun, CompletionStage*, $Runnable*)},
	{"thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenRunAsync, CompletionStage*, $Runnable*)},
	{"thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, thenRunAsync, CompletionStage*, $Runnable*, $Executor*)},
	{"toCompletableFuture", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, toCompletableFuture, $CompletableFuture*)},
	{"whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, whenComplete, CompletionStage*, $BiConsumer*)},
	{"whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, whenCompleteAsync, CompletionStage*, $BiConsumer*)},
	{"whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionStage, whenCompleteAsync, CompletionStage*, $BiConsumer*, $Executor*)},
	{}
};

$ClassInfo _CompletionStage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.CompletionStage",
	nullptr,
	nullptr,
	nullptr,
	_CompletionStage_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$CompletionStage($Class* clazz) {
	return $of($alloc(CompletionStage));
}

CompletionStage* CompletionStage::exceptionallyAsync($Function* fn) {
	$useLocalCurrentObjectStackCache();
	return $nc($(handle(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyAsync$1, this, fn)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::exceptionallyAsync($Function* fn, $Executor* executor) {
	$useLocalCurrentObjectStackCache();
	return $nc($(handle(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1, this, fn, executor)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::exceptionallyCompose($Function* fn) {
	$useLocalCurrentObjectStackCache();
	return $nc($(handle(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2, this, fn)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::exceptionallyComposeAsync($Function* fn) {
	$useLocalCurrentObjectStackCache();
	return $nc($(handle(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3, this, fn)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::exceptionallyComposeAsync($Function* fn, $Executor* executor) {
	$useLocalCurrentObjectStackCache();
	return $nc($(handle(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4, this, fn, executor)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::lambda$exceptionallyComposeAsync$8($Function* fn, $Executor* executor, Object$* r, $Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	return (ex == nullptr) ? this : $nc($(this->handleAsync(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, fn)), executor)))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::lambda$exceptionallyComposeAsync$6($Function* fn, Object$* r, $Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	return (ex == nullptr) ? this : $nc($(this->handleAsync(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5, fn)))))->thenCompose($($Function::identity()));
}

CompletionStage* CompletionStage::lambda$exceptionallyComposeAsync$5($Function* fn, Object$* r1, $Throwable* ex1) {
	return $cast(CompletionStage, $nc(fn)->apply(ex1));
}

CompletionStage* CompletionStage::lambda$exceptionallyCompose$4($Function* fn, Object$* r, $Throwable* ex) {
	return (ex == nullptr) ? this : $cast(CompletionStage, $nc(fn)->apply(ex));
}

CompletionStage* CompletionStage::lambda$exceptionallyAsync$3($Function* fn, $Executor* executor, Object$* r, $Throwable* ex) {
	return (ex == nullptr) ? this : this->handleAsync(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, fn)), executor);
}

CompletionStage* CompletionStage::lambda$exceptionallyAsync$1($Function* fn, Object$* r, $Throwable* ex) {
	return (ex == nullptr) ? this : this->handleAsync(static_cast<$BiFunction*>($$new(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6, fn)));
}

$Object* CompletionStage::lambda$exceptionallyAsync$0($Function* fn, Object$* r1, $Throwable* ex1) {
	return $of($nc(fn)->apply(ex1));
}

$Class* CompletionStage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyAsync$1::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyAsync$1::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyAsync$3$1::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyCompose$4$2::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$6$3::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$8$4::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyComposeAsync$5$5::load$(name, initialize);
		}
		if (name->equals(CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::classInfo$.name)) {
			return CompletionStage$$Lambda$lambda$exceptionallyAsync$0$6::load$(name, initialize);
		}
	}
	$loadClass(CompletionStage, name, initialize, &_CompletionStage_ClassInfo_, allocate$CompletionStage);
	return class$;
}

$Class* CompletionStage::class$ = nullptr;

		} // concurrent
	} // util
} // java