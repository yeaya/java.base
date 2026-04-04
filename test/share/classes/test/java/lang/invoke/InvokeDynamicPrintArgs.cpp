#include <test/java/lang/invoke/InvokeDynamicPrintArgs.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/ConstantCallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/Policy.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <test/java/lang/invoke/InvokeDynamicPrintArgs$PrintingCallSite.h>
#include <test/java/lang/invoke/InvokeDynamicPrintArgs$TestPolicy.h>
#include <jcpp.h>

#undef EXPECT_OUTPUT
#undef TYPE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $ConstantCallSite = ::java::lang::invoke::ConstantCallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Policy = ::java::security::Policy;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $InvokeDynamicPrintArgs$PrintingCallSite = ::test::java::lang::invoke::InvokeDynamicPrintArgs$PrintingCallSite;
using $InvokeDynamicPrintArgs$TestPolicy = ::test::java::lang::invoke::InvokeDynamicPrintArgs$TestPolicy;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$PrintStream* InvokeDynamicPrintArgs::oldOut = nullptr;
$ByteArrayOutputStream* InvokeDynamicPrintArgs::buf = nullptr;
$StringArray* InvokeDynamicPrintArgs::EXPECT_OUTPUT = nullptr;
bool InvokeDynamicPrintArgs::doPrint = false;

void InvokeDynamicPrintArgs::init$() {
}

void InvokeDynamicPrintArgs::main($StringArray* av) {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	if ($nc(av)->length > 0 && $nc(av->get(0))->equals("--check-output"_s)) {
		openBuf();
	}
	if (av->length > 0 && $nc(av->get(0))->equals("--security-manager"_s)) {
		setSM();
	}
	$nc($System::out)->println("Printing some argument lists, starting with a empty one:"_s);
	$$nc(INDY_nothing())->invokeExact($$new($ObjectArray, 0));
	$$nc(INDY_bar())->invokeExact($$new($ObjectArray, {"bar arg"_s, $$of(1)}));
	$$nc(INDY_bar2())->invokeExact($$new($ObjectArray, {"bar2 arg"_s, $$of(222)}));
	$$nc(INDY_baz())->invokeExact($$new($ObjectArray, {"baz arg"_s, $$of(2), $$of(3.14)}));
	$$nc(INDY_foo())->invokeExact($$new($ObjectArray, {"foo arg"_s}));
	$System::out->println("Done printing argument lists."_s);
	closeBuf();
	checkConstantRefs();
}

void InvokeDynamicPrintArgs::checkConstantRefs() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$var($Object, var$0, MT_bsm());
	assertEquals(var$0, $($$nc(MH_bsm())->type()));
	$var($Object, var$1, MT_bsm2());
	assertEquals(var$1, $($$nc(MH_bsm2())->type()));
	$var($Object, var$2, MT_bsm());
	assertEquals(var$2, $($$nc(non_MH_bsm())->type()));
}

void InvokeDynamicPrintArgs::assertEquals(Object$* exp, Object$* act) {
	$init(InvokeDynamicPrintArgs);
	if ($equals(exp, act) || (exp != nullptr && $of(exp)->equals(act))) {
		return;
	}
	$throwNew($AssertionError, $$of($str({"not equal: "_s, exp, ", "_s, act})));
}

void InvokeDynamicPrintArgs::setSM() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Policy::setPolicy($$new($InvokeDynamicPrintArgs$TestPolicy));
	$System::setSecurityManager($$new($SecurityManager));
}

void InvokeDynamicPrintArgs::openBuf() {
	$init(InvokeDynamicPrintArgs);
	$assignStatic(InvokeDynamicPrintArgs::oldOut, $System::out);
	$assignStatic(InvokeDynamicPrintArgs::buf, $new($ByteArrayOutputStream));
	$System::setOut($$new($PrintStream, InvokeDynamicPrintArgs::buf));
}

void InvokeDynamicPrintArgs::closeBuf() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	if (InvokeDynamicPrintArgs::buf == nullptr) {
		return;
	}
	$nc($System::out)->flush();
	$System::setOut(InvokeDynamicPrintArgs::oldOut);
	$var($StringArray, haveLines, $$new($String, $($nc(InvokeDynamicPrintArgs::buf)->toByteArray()))->split("[\n\r]+"_s));
	{
		$var($StringArray, arr$, haveLines);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, line, arr$->get(i$));
			$System::out->println(line);
		}
	}
	$var($Iterator, iter, $$nc($Arrays::asList(haveLines))->iterator());
	{
		$var($StringArray, arr$, InvokeDynamicPrintArgs::EXPECT_OUTPUT);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, want, arr$->get(i$));
			{
				$var($String, have, $nc(iter)->hasNext() ? $cast($String, iter->next()) : "[EOF]"_s);
				if ($nc(want)->equals(have)) {
					continue;
				}
				$nc($System::err)->println($$str({"want line: "_s, want}));
				$System::err->println($$str({"have line: "_s, have}));
				$throwNew($AssertionError, $$of($str({"unexpected output: "_s, have})));
			}
		}
	}
	if ($nc(iter)->hasNext()) {
		$throwNew($AssertionError, $$of($str({"unexpected output: "_s, $$cast($String, iter->next())})));
	}
}

void InvokeDynamicPrintArgs::printArgs(Object$* bsmInfo, $ObjectArray* args) {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$var($String, message, $str({bsmInfo, $($Arrays::deepToString(args))}));
	if (InvokeDynamicPrintArgs::doPrint) {
		$nc($System::out)->println(message);
	}
}

$MethodHandle* InvokeDynamicPrintArgs::MH_printArgs() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$Class* var$0 = $$nc($MethodHandles::lookup())->lookupClass();
	$var($String, var$1, "printArgs"_s);
	return $$nc($MethodHandles::lookup())->findStatic(var$0, var$1, $($MethodType::methodType($Void::TYPE, $Object::class$, $$new($ClassArray, {$getClass($ObjectArray)}))));
}

$CallSite* InvokeDynamicPrintArgs::bsm($MethodHandles$Lookup* caller, $String* name, $MethodType* type) {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$var($Object, bsmInfo, $Arrays::asList($$new($ObjectArray, {
		caller,
		name,
		type
	})));
	return $new($ConstantCallSite, $($$nc($$nc($$nc(MH_printArgs())->bindTo(bsmInfo))->asCollector($getClass($ObjectArray), $nc(type)->parameterCount()))->asType(type)));
}

$MethodType* InvokeDynamicPrintArgs::MT_bsm() {
	$init(InvokeDynamicPrintArgs);
	shouldNotCallThis();
	$load($CallSite);
	$load($MethodHandles$Lookup);
	$load($MethodType);
	return $MethodType::methodType($CallSite::class$, $MethodHandles$Lookup::class$, $$new($ClassArray, {
		$String::class$,
		$MethodType::class$
	}));
}

$MethodHandle* InvokeDynamicPrintArgs::MH_bsm() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$Class* var$0 = $$nc($MethodHandles::lookup())->lookupClass();
	$var($String, var$1, "bsm"_s);
	return $$nc($MethodHandles::lookup())->findStatic(var$0, var$1, $(MT_bsm()));
}

$MethodHandle* InvokeDynamicPrintArgs::non_MH_bsm() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* var$0 = $$nc($MethodHandles::lookup())->lookupClass();
	$var($String, var$1, "bsm"_s);
	return $$nc($MethodHandles::lookup())->findStatic(var$0, var$1, $(MT_bsm()));
}

$CallSite* InvokeDynamicPrintArgs::bsm2($MethodHandles$Lookup* caller, $String* name, $MethodType* type, $ObjectArray* arg) {
	$init(InvokeDynamicPrintArgs);
	return $new($InvokeDynamicPrintArgs$PrintingCallSite, caller, name, type, arg);
}

$MethodType* InvokeDynamicPrintArgs::MT_bsm2() {
	$init(InvokeDynamicPrintArgs);
	shouldNotCallThis();
	$load($CallSite);
	$load($MethodHandles$Lookup);
	$load($MethodType);
	return $MethodType::methodType($CallSite::class$, $MethodHandles$Lookup::class$, $$new($ClassArray, {
		$String::class$,
		$MethodType::class$,
		$getClass($ObjectArray)
	}));
}

$MethodHandle* InvokeDynamicPrintArgs::MH_bsm2() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$Class* var$0 = $$nc($MethodHandles::lookup())->lookupClass();
	$var($String, var$1, "bsm2"_s);
	return $$nc($MethodHandles::lookup())->findStatic(var$0, var$1, $(MT_bsm2()));
}

$MethodHandle* InvokeDynamicPrintArgs::INDY_nothing() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$var($Object, var$0, $MethodHandles::lookup());
	$var($Object, var$1, "nothing"_s);
	return $$cast($CallSite, $$nc(MH_bsm())->invoke($$new($ObjectArray, {var$0, var$1, $($MethodType::methodType($Void::TYPE))})))->dynamicInvoker();
}

$MethodHandle* InvokeDynamicPrintArgs::INDY_foo() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$var($Object, var$0, $MethodHandles::lookup());
	$var($Object, var$1, "foo"_s);
	return $$cast($CallSite, $$nc(MH_bsm())->invoke($$new($ObjectArray, {var$0, var$1, $($MethodType::methodType($Void::TYPE, $String::class$))})))->dynamicInvoker();
}

$MethodHandle* InvokeDynamicPrintArgs::INDY_bar() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$var($Object, var$0, $MethodHandles::lookup());
	$var($Object, var$1, "bar"_s);
	return $$cast($CallSite, $$nc(MH_bsm2())->invoke($$new($ObjectArray, {var$0, var$1, $($MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), $Void::class$, "void type!"_s, $$of(1), $$of(234.5f), $$of(67.5), $$of((int64_t)89)})))->dynamicInvoker();
}

$MethodHandle* InvokeDynamicPrintArgs::INDY_bar2() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$var($Object, var$0, $MethodHandles::lookup());
	$var($Object, var$1, "bar2"_s);
	return $$cast($CallSite, $$nc(MH_bsm2())->invoke($$new($ObjectArray, {var$0, var$1, $($MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), $Void::class$, "void type!"_s, $$of(1), $$of(234.5f), $$of(67.5), $$of((int64_t)89)})))->dynamicInvoker();
}

$MethodHandle* InvokeDynamicPrintArgs::INDY_baz() {
	$init(InvokeDynamicPrintArgs);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$var($Object, var$0, $MethodHandles::lookup());
	$var($Object, var$1, "baz"_s);
	return $$cast($CallSite, $$nc(MH_bsm2())->invoke($$new($ObjectArray, {var$0, var$1, $($MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {
		$Integer::TYPE,
		$Double::TYPE
	}))), $$of(1234.5)})))->dynamicInvoker();
}

void InvokeDynamicPrintArgs::shouldNotCallThis() {
	$init(InvokeDynamicPrintArgs);
	if ($System::getProperty("InvokeDynamicPrintArgs.allow-untransformed"_s) != nullptr) {
		return;
	}
	$throwNew($AssertionError, $of("this code should be statically transformed away by Indify"_s));
}

void InvokeDynamicPrintArgs::clinit$($Class* clazz) {
	$assignStatic(InvokeDynamicPrintArgs::EXPECT_OUTPUT, $new($StringArray, {
		"Printing some argument lists, starting with a empty one:"_s,
		"[test.java.lang.invoke.InvokeDynamicPrintArgs, nothing, ()void][]"_s,
		"[test.java.lang.invoke.InvokeDynamicPrintArgs, bar, (String,int)void, class java.lang.Void, void type!, 1, 234.5, 67.5, 89][bar arg, 1]"_s,
		"[test.java.lang.invoke.InvokeDynamicPrintArgs, bar2, (String,int)void, class java.lang.Void, void type!, 1, 234.5, 67.5, 89][bar2 arg, 222]"_s,
		"[test.java.lang.invoke.InvokeDynamicPrintArgs, baz, (String,int,double)void, 1234.5][baz arg, 2, 3.14]"_s,
		"[test.java.lang.invoke.InvokeDynamicPrintArgs, foo, (String)void][foo arg]"_s,
		"Done printing argument lists."_s
	}));
	InvokeDynamicPrintArgs::doPrint = true;
}

InvokeDynamicPrintArgs::InvokeDynamicPrintArgs() {
}

$Class* InvokeDynamicPrintArgs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oldOut", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(InvokeDynamicPrintArgs, oldOut)},
		{"buf", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $STATIC, $staticField(InvokeDynamicPrintArgs, buf)},
		{"EXPECT_OUTPUT", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InvokeDynamicPrintArgs, EXPECT_OUTPUT)},
		{"doPrint", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InvokeDynamicPrintArgs, doPrint)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvokeDynamicPrintArgs, init$, void)},
		{"INDY_bar", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, INDY_bar, $MethodHandle*), "java.lang.Throwable"},
		{"INDY_bar2", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, INDY_bar2, $MethodHandle*), "java.lang.Throwable"},
		{"INDY_baz", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, INDY_baz, $MethodHandle*), "java.lang.Throwable"},
		{"INDY_foo", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, INDY_foo, $MethodHandle*), "java.lang.Throwable"},
		{"INDY_nothing", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, INDY_nothing, $MethodHandle*), "java.lang.Throwable"},
		{"MH_bsm", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, MH_bsm, $MethodHandle*), "java.lang.ReflectiveOperationException"},
		{"MH_bsm2", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, MH_bsm2, $MethodHandle*), "java.lang.ReflectiveOperationException"},
		{"MH_printArgs", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, MH_printArgs, $MethodHandle*), "java.lang.ReflectiveOperationException"},
		{"MT_bsm", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, MT_bsm, $MethodType*)},
		{"MT_bsm2", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, MT_bsm2, $MethodType*)},
		{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, assertEquals, void, Object$*, Object$*)},
		{"bsm", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, bsm, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*), "java.lang.ReflectiveOperationException"},
		{"bsm2", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(InvokeDynamicPrintArgs, bsm2, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*), "java.lang.Throwable"},
		{"checkConstantRefs", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, checkConstantRefs, void), "java.lang.Throwable"},
		{"closeBuf", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, closeBuf, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(InvokeDynamicPrintArgs, main, void, $StringArray*), "java.lang.Throwable"},
		{"non_MH_bsm", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, non_MH_bsm, $MethodHandle*), "java.lang.ReflectiveOperationException"},
		{"openBuf", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, openBuf, void)},
		{"printArgs", "(Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(InvokeDynamicPrintArgs, printArgs, void, Object$*, $ObjectArray*)},
		{"setSM", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, setSM, void)},
		{"shouldNotCallThis", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(InvokeDynamicPrintArgs, shouldNotCallThis, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.InvokeDynamicPrintArgs$TestPolicy", "test.java.lang.invoke.InvokeDynamicPrintArgs", "TestPolicy", $STATIC},
		{"test.java.lang.invoke.InvokeDynamicPrintArgs$PrintingCallSite", "test.java.lang.invoke.InvokeDynamicPrintArgs", "PrintingCallSite", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.lang.invoke.InvokeDynamicPrintArgs",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"test.java.lang.invoke.InvokeDynamicPrintArgs$TestPolicy,test.java.lang.invoke.InvokeDynamicPrintArgs$PrintingCallSite"
	};
	$loadClass(InvokeDynamicPrintArgs, name, initialize, &classInfo$$, InvokeDynamicPrintArgs::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InvokeDynamicPrintArgs);
	});
	return class$;
}

$Class* InvokeDynamicPrintArgs::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test