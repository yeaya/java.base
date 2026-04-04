#include <java/lang/ThreadLocal$SuppliedThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Objects = ::java::util::Objects;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace lang {

void ThreadLocal$SuppliedThreadLocal::init$($Supplier* supplier) {
	$ThreadLocal::init$();
	$set(this, supplier, $cast($Supplier, $Objects::requireNonNull(supplier)));
}

$Object* ThreadLocal$SuppliedThreadLocal::initialValue() {
	return $nc(this->supplier)->get();
}

ThreadLocal$SuppliedThreadLocal::ThreadLocal$SuppliedThreadLocal() {
}

$Class* ThreadLocal$SuppliedThreadLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"supplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT;>;", $PRIVATE | $FINAL, $field(ThreadLocal$SuppliedThreadLocal, supplier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+TT;>;)V", 0, $method(ThreadLocal$SuppliedThreadLocal, init$, void, $Supplier*)},
		{"initialValue", "()Ljava/lang/Object;", "()TT;", $PROTECTED, $virtualMethod(ThreadLocal$SuppliedThreadLocal, initialValue, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ThreadLocal$SuppliedThreadLocal", "java.lang.ThreadLocal", "SuppliedThreadLocal", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ThreadLocal$SuppliedThreadLocal",
		"java.lang.ThreadLocal",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ThreadLocal<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ThreadLocal"
	};
	$loadClass(ThreadLocal$SuppliedThreadLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadLocal$SuppliedThreadLocal);
	});
	return class$;
}

$Class* ThreadLocal$SuppliedThreadLocal::class$ = nullptr;

	} // lang
} // java