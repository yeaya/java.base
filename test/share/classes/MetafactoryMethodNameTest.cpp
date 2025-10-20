#include <MetafactoryMethodNameTest.h>

#include <MetafactoryMethodNameTest$C.h>
#include <MetafactoryMethodNameTest$I.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FLAG_SERIALIZABLE
#undef TYPE

using $MetafactoryMethodNameTest$C = ::MetafactoryMethodNameTest$C;
using $MetafactoryMethodNameTest$I = ::MetafactoryMethodNameTest$I;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $List = ::java::util::List;

$FieldInfo _MetafactoryMethodNameTest_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, lookup)},
	{"toI", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, toI)},
	{"toVoid", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, toVoid)},
	{"mh", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, mh)},
	{"lce", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticField(MetafactoryMethodNameTest, lce)},
	{}
};

$MethodInfo _MetafactoryMethodNameTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryMethodNameTest::*)()>(&MetafactoryMethodNameTest::init$))},
	{"arr", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$ObjectArray*(*)($ObjectArray*)>(&MetafactoryMethodNameTest::arr))},
	{"badName", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&MetafactoryMethodNameTest::badName))},
	{"failAltMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*,$Class*)>(&MetafactoryMethodNameTest::failAltMFLinkage))},
	{"failMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($MethodHandles$Lookup*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*,$Class*)>(&MetafactoryMethodNameTest::failMFLinkage))},
	{"goodName", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&MetafactoryMethodNameTest::goodName))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MetafactoryMethodNameTest::main))},
	{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $STATIC | $TRANSIENT, $method(static_cast<$MethodType*(*)($Class*,$ClassArray*)>(&MetafactoryMethodNameTest::mt))},
	{"smh", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,$String*,$MethodType*)>(&MetafactoryMethodNameTest::smh))},
	{"succeedAltMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&MetafactoryMethodNameTest::succeedAltMFLinkage))},
	{"succeedMFLinkage", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*)>(&MetafactoryMethodNameTest::succeedMFLinkage))},
	{}
};

$InnerClassInfo _MetafactoryMethodNameTest_InnerClassesInfo_[] = {
	{"MetafactoryMethodNameTest$I", "MetafactoryMethodNameTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"MetafactoryMethodNameTest$C", "MetafactoryMethodNameTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryMethodNameTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryMethodNameTest",
	"java.lang.Object",
	nullptr,
	_MetafactoryMethodNameTest_FieldInfo_,
	_MetafactoryMethodNameTest_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryMethodNameTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MetafactoryMethodNameTest$I,MetafactoryMethodNameTest$C"
};

$Object* allocate$MetafactoryMethodNameTest($Class* clazz) {
	return $of($alloc(MetafactoryMethodNameTest));
}

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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $nc($($MethodHandles::lookup()))->findStatic(c, name, desc);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$ObjectArray* MetafactoryMethodNameTest::arr($ObjectArray* args) {
	$init(MetafactoryMethodNameTest);
	return args;
}

void MetafactoryMethodNameTest::goodName($String* name) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	succeedMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::toVoid);
	succeedAltMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, $(arr($$new($ObjectArray, {
		$of(MetafactoryMethodNameTest::toVoid),
		$of(MetafactoryMethodNameTest::mh),
		$of(MetafactoryMethodNameTest::toVoid),
		$($of($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE)))
	}))));
}

void MetafactoryMethodNameTest::badName($String* name) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	failMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::lce);
	failAltMFLinkage(MetafactoryMethodNameTest::lookup, name, MetafactoryMethodNameTest::toI, $(arr($$new($ObjectArray, {
		$of(MetafactoryMethodNameTest::toVoid),
		$of(MetafactoryMethodNameTest::mh),
		$of(MetafactoryMethodNameTest::toVoid),
		$($of($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE)))
	}))), MetafactoryMethodNameTest::lce);
}

$CallSite* MetafactoryMethodNameTest::succeedMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	try {
		return $LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
			$of(lookup),
			$of(name),
			$of(capType),
			$of(desc),
			$of(impl),
			$of(checked)
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryMethodNameTest::failMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked, $Class* expectedExceptionType) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	try {
		$LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($nc(expectedExceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$($of(expectedExceptionType->getName())),
				$of(lookup),
				$of(name),
				$of(capType),
				$of(desc),
				$of(impl),
				$of(checked)
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($of($nc(expectedExceptionType)->getName())),
		$of(lookup),
		$of(name),
		$of(capType),
		$of(desc),
		$of(impl),
		$of(checked)
	})));
	$throwNew($AssertionError, $of(msg));
}

$CallSite* MetafactoryMethodNameTest::succeedAltMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	try {
		return $LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
			$of(lookup),
			$of(name),
			$of(capType),
			$($of($Arrays::asList(args)))
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryMethodNameTest::failAltMFLinkage($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args, $Class* expectedExceptionType) {
	$init(MetafactoryMethodNameTest);
	$useLocalCurrentObjectStackCache();
	try {
		$LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($nc(expectedExceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$($of(expectedExceptionType->getName())),
				$of(lookup),
				$of(name),
				$of(capType),
				$($of($Arrays::asList(args)))
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($of($nc(expectedExceptionType)->getName())),
		$of(lookup),
		$of(name),
		$of(capType),
		$($of($Arrays::asList(args)))
	})));
	$throwNew($AssertionError, $of(msg));
}

void clinit$MetafactoryMethodNameTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(MetafactoryMethodNameTest::lookup, $MethodHandles::lookup());
	$load($MetafactoryMethodNameTest$I);
	$assignStatic(MetafactoryMethodNameTest::toI, MetafactoryMethodNameTest::mt($MetafactoryMethodNameTest$I::class$, $$new($ClassArray, 0)));
	$init($Void);
	$assignStatic(MetafactoryMethodNameTest::toVoid, MetafactoryMethodNameTest::mt($Void::TYPE, $$new($ClassArray, 0)));
	$load($MetafactoryMethodNameTest$C);
	$assignStatic(MetafactoryMethodNameTest::mh, MetafactoryMethodNameTest::smh($MetafactoryMethodNameTest$C::class$, "m"_s, MetafactoryMethodNameTest::toVoid));
	$load($LambdaConversionException);
	$assignStatic(MetafactoryMethodNameTest::lce, $LambdaConversionException::class$);
}

MetafactoryMethodNameTest::MetafactoryMethodNameTest() {
}

$Class* MetafactoryMethodNameTest::load$($String* name, bool initialize) {
	$loadClass(MetafactoryMethodNameTest, name, initialize, &_MetafactoryMethodNameTest_ClassInfo_, clinit$MetafactoryMethodNameTest, allocate$MetafactoryMethodNameTest);
	return class$;
}

$Class* MetafactoryMethodNameTest::class$ = nullptr;