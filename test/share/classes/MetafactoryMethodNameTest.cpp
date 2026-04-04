#include <MetafactoryMethodNameTest.h>
#include <MetafactoryMethodNameTest$C.h>
#include <MetafactoryMethodNameTest$I.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FLAG_SERIALIZABLE
#undef TYPE

using $MetafactoryMethodNameTest$C = ::MetafactoryMethodNameTest$C;
using $MetafactoryMethodNameTest$I = ::MetafactoryMethodNameTest$I;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;

$MethodHandles$Lookup* MetafactoryMethodNameTest::lookup = nullptr;
$MethodType* MetafactoryMethodNameTest::toI = nullptr;
$MethodType* MetafactoryMethodNameTest::toVoid = nullptr;
$MethodHandle* MetafactoryMethodNameTest::mh = nullptr;
$Class* MetafactoryMethodNameTest::lce = nullptr;

void MetafactoryMethodNameTest::init$() {
}

void MetafactoryMethodNameTest::main($StringArray* args) {
	$init(MetafactoryMethodNameTest);
	goodName("x"_s);
	goodName("xy"_s);
	goodName("]"_s);
	goodName("x]"_s);
	goodName("]y"_s);
	goodName("x]y"_s);
	goodName("&"_s);
	goodName("x&"_s);
	goodName("&y"_s);
	goodName("x&y"_s);
	badName("."_s);
	badName("x."_s);
	badName(".y"_s);
	badName("x.y"_s);
	badName(";"_s);
	badName("x;"_s);
	badName(";y"_s);
	badName("x;y"_s);
	badName("["_s);
	badName("x["_s);
	badName("[y"_s);
	badName("x[y"_s);
	badName("/"_s);
	badName("x/"_s);
	badName("/y"_s);
	badName("x/y"_s);
	badName("<"_s);
	badName("x<"_s);
	badName("<y"_s);
	badName("x<y"_s);
	badName(">"_s);
	badName("x>"_s);
	badName(">y"_s);
	badName("x>y"_s);
	badName(""_s);
	badName("<init>"_s);
	badName("<clinit>"_s);
}

$MethodType* MetafactoryMethodNameTest::mt($Class* ret, $ClassArray* params) {
	$init(MetafactoryMethodNameTest);
	return $MethodType::methodType(ret, params);
}

$MethodHandle* MetafactoryMethodNameTest::smh($Class* c, $String* name, $MethodType* desc) {
	$init(MetafactoryMethodNameTest);
	$beforeCallerSensitive();
	try {
		return $$nc($MethodHandles::lookup())->findStatic(c, name, desc);
	} catch ($ReflectiveOperationException& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

$ObjectArray* MetafactoryMethodNameTest::arr($ObjectArray* args) {
	$init(MetafactoryMethodNameTest);
	return args;
}

void MetafactoryMethodNameTest::goodName($String* name) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	succeedMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::toVoid);
	succeedAltMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, $(arr($$new($ObjectArray, {
		MetafactoryMethodNameTest::toVoid,
		MetafactoryMethodNameTest::mh,
		MetafactoryMethodNameTest::toVoid,
		$($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE))
	}))));
}

void MetafactoryMethodNameTest::badName($String* name) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	failMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::lce);
	failAltMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, $(arr($$new($ObjectArray, {
		MetafactoryMethodNameTest::toVoid,
		MetafactoryMethodNameTest::mh,
		MetafactoryMethodNameTest::toVoid,
		$($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE))
	}))), MetafactoryMethodNameTest::lce);
}

$CallSite* MetafactoryMethodNameTest::succeedMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	try {
		return $LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable& t) {
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
			lookup,
			name,
			capType,
			desc,
			impl,
			checked
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryMethodNameTest::failMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked, $Class* expectedExceptionType) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	try {
		$LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable& t) {
		if ($nc(expectedExceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$(expectedExceptionType->getName()),
				lookup,
				name,
				capType,
				desc,
				impl,
				checked
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($nc(expectedExceptionType)->getName()),
		lookup,
		name,
		capType,
		desc,
		impl,
		checked
	})));
	$throwNew($AssertionError, $of(msg));
}

$CallSite* MetafactoryMethodNameTest::succeedAltMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	try {
		return $LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable& t) {
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
			lookup,
			name,
			capType,
			$($Arrays::asList(args))
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryMethodNameTest::failAltMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args, $Class* expectedExceptionType) {
	$init(MetafactoryMethodNameTest);
	$useLocalObjectStack();
	try {
		$LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable& t) {
		if ($nc(expectedExceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$(expectedExceptionType->getName()),
				lookup,
				name,
				capType,
				$($Arrays::asList(args))
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($nc(expectedExceptionType)->getName()),
		lookup,
		name,
		capType,
		$($Arrays::asList(args))
	})));
	$throwNew($AssertionError, $of(msg));
}

void MetafactoryMethodNameTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(MetafactoryMethodNameTest::lookup, $MethodHandles::lookup());
	$load($MetafactoryMethodNameTest$I);
	$assignStatic(MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::mt($MetafactoryMethodNameTest$I::class$, $$new($ClassArray, 0)));
	$assignStatic(MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mt($Void::TYPE, $$new($ClassArray, 0)));
	$load($MetafactoryMethodNameTest$C);
	$assignStatic(MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::smh($MetafactoryMethodNameTest$C::class$, "m"_s, MetafactoryMethodNameTest::toVoid));
	$load($LambdaConversionException);
	$assignStatic(MetafactoryMethodNameTest::lce, $LambdaConversionException::class$);
}

MetafactoryMethodNameTest::MetafactoryMethodNameTest() {
}

$Class* MetafactoryMethodNameTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, lookup)},
		{"toI", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, toI)},
		{"toVoid", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, toVoid)},
		{"mh", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, mh)},
		{"lce", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, lce)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryMethodNameTest, init$, void)},
		{"arr", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $staticMethod(MetafactoryMethodNameTest, arr, $ObjectArray*, $ObjectArray*)},
		{"badName", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(MetafactoryMethodNameTest, badName, void, $String*)},
		{"failAltMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;Ljava/lang/Class<*>;)V", $STATIC, $staticMethod(MetafactoryMethodNameTest, failAltMFLinkage, void, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*, $Class*)},
		{"failMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)V", $STATIC, $staticMethod(MetafactoryMethodNameTest, failMFLinkage, void, $MethodHandles$Lookup*, $String*, $MethodType*, $MethodType*, $MethodHandle*, $MethodType*, $Class*)},
		{"goodName", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(MetafactoryMethodNameTest, goodName, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MetafactoryMethodNameTest, main, void, $StringArray*)},
		{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $STATIC | $TRANSIENT, $staticMethod(MetafactoryMethodNameTest, mt, $MethodType*, $Class*, $ClassArray*)},
		{"smh", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", $STATIC, $staticMethod(MetafactoryMethodNameTest, smh, $MethodHandle*, $Class*, $String*, $MethodType*)},
		{"succeedAltMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $staticMethod(MetafactoryMethodNameTest, succeedAltMFLinkage, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*)},
		{"succeedMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $staticMethod(MetafactoryMethodNameTest, succeedMFLinkage, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $MethodType*, $MethodHandle*, $MethodType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryMethodNameTest$I", "MetafactoryMethodNameTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"MetafactoryMethodNameTest$C", "MetafactoryMethodNameTest", "C", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryMethodNameTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MetafactoryMethodNameTest$I,MetafactoryMethodNameTest$C"
	};
	$loadClass(MetafactoryMethodNameTest, name, initialize, &classInfo$$, MetafactoryMethodNameTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryMethodNameTest);
	});
	return class$;
}

$Class* MetafactoryMethodNameTest::class$ = nullptr;