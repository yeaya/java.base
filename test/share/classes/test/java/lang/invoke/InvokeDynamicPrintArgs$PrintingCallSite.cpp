#include <test/java/lang/invoke/InvokeDynamicPrintArgs$PrintingCallSite.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/ConstantCallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <test/java/lang/invoke/InvokeDynamicPrintArgs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ConstantCallSite = ::java::lang::invoke::ConstantCallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $InvokeDynamicPrintArgs = ::test::java::lang::invoke::InvokeDynamicPrintArgs;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

void InvokeDynamicPrintArgs$PrintingCallSite::init$($MethodHandles$Lookup* caller, $String* name, $MethodType* type, $ObjectArray* staticArgs) {
	$ConstantCallSite::init$(type, $(MH_createTarget()));
	$set(this, caller, caller);
	$set(this, name, name);
	$set(this, staticArgs, staticArgs);
}

$MethodHandle* InvokeDynamicPrintArgs$PrintingCallSite::createTarget() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $$nc($$nc($MethodHandles::lookup())->bind(this, "runTarget"_s, $($MethodType::genericMethodType(0, true))))->asType($(type()));
	} catch ($ReflectiveOperationException& ex) {
		$throwNew($RuntimeException, ex);
	}
	$shouldNotReachHere();
}

$Object* InvokeDynamicPrintArgs$PrintingCallSite::runTarget($ObjectArray* dynamicArgs) {
	$useLocalObjectStack();
	$var($List, bsmInfo, $new($ArrayList, $($Arrays::asList($$new($ObjectArray, {
		this->caller,
		this->name,
		$(type())
	})))));
	bsmInfo->addAll($($Arrays::asList(this->staticArgs)));
	$InvokeDynamicPrintArgs::printArgs(bsmInfo, dynamicArgs);
	return nullptr;
}

$MethodHandle* InvokeDynamicPrintArgs$PrintingCallSite::MH_createTarget() {
	$init(InvokeDynamicPrintArgs$PrintingCallSite);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$InvokeDynamicPrintArgs::shouldNotCallThis();
	$Class* var$0 = $$nc($MethodHandles::lookup())->lookupClass();
	$var($String, var$1, "createTarget"_s);
	$load($MethodHandle);
	return $$nc($MethodHandles::lookup())->findVirtual(var$0, var$1, $($MethodType::methodType($MethodHandle::class$)));
}

InvokeDynamicPrintArgs$PrintingCallSite::InvokeDynamicPrintArgs$PrintingCallSite() {
}

$Class* InvokeDynamicPrintArgs$PrintingCallSite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"caller", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $FINAL, $field(InvokeDynamicPrintArgs$PrintingCallSite, caller)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(InvokeDynamicPrintArgs$PrintingCallSite, name)},
		{"staticArgs", "[Ljava/lang/Object;", nullptr, $FINAL, $field(InvokeDynamicPrintArgs$PrintingCallSite, staticArgs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(InvokeDynamicPrintArgs$PrintingCallSite, init$, void, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*), "java.lang.Throwable"},
		{"MH_createTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs$PrintingCallSite, MH_createTarget, $MethodHandle*), "java.lang.ReflectiveOperationException"},
		{"createTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(InvokeDynamicPrintArgs$PrintingCallSite, createTarget, $MethodHandle*)},
		{"runTarget", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(InvokeDynamicPrintArgs$PrintingCallSite, runTarget, $Object*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.InvokeDynamicPrintArgs$PrintingCallSite", "test.java.lang.invoke.InvokeDynamicPrintArgs", "PrintingCallSite", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.lang.invoke.InvokeDynamicPrintArgs$PrintingCallSite",
		"java.lang.invoke.ConstantCallSite",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"test.java.lang.invoke.InvokeDynamicPrintArgs"
	};
	$loadClass(InvokeDynamicPrintArgs$PrintingCallSite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvokeDynamicPrintArgs$PrintingCallSite);
	});
	return class$;
}

$Class* InvokeDynamicPrintArgs$PrintingCallSite::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test