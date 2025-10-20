#include <GetUnsafeTest.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NAME

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$FieldInfo _GetUnsafeTest_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetUnsafeTest, NAME)},
	{"isTestFailed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GetUnsafeTest, isTestFailed)},
	{}
};

$MethodInfo _GetUnsafeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUnsafeTest::*)()>(&GetUnsafeTest::init$))},
	{"fail", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GetUnsafeTest::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetUnsafeTest::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _GetUnsafeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetUnsafeTest",
	"java.lang.Object",
	nullptr,
	_GetUnsafeTest_FieldInfo_,
	_GetUnsafeTest_MethodInfo_
};

$Object* allocate$GetUnsafeTest($Class* clazz) {
	return $of($alloc(GetUnsafeTest));
}

$String* GetUnsafeTest::NAME = nullptr;
bool GetUnsafeTest::isTestFailed = false;

void GetUnsafeTest::init$() {
}

void GetUnsafeTest::fail() {
	$init(GetUnsafeTest);
	$useLocalCurrentObjectStackCache();
	GetUnsafeTest::isTestFailed = true;
	try {
		$throwNew($Exception);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$var($StackTraceElement, frame, $nc($(e->getStackTrace()))->get(1));
		$init($System);
		$nc($System::out)->printf("Failed at %s:%d\n"_s, $$new($ObjectArray, {
			$($of($nc(frame)->getFileName())),
			$($of($Integer::valueOf(frame->getLineNumber())))
		}));
	}
}

void GetUnsafeTest::main($StringArray* args) {
	$init(GetUnsafeTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$load($Class);
		$load($String);
		$var($MethodType, mt, $MethodType::methodType($Class::class$, $String::class$));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->findStatic($Class::class$, "forName"_s, mt));
		try {
			$Class::forName(GetUnsafeTest::NAME);
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invoke($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc($($nc(mh)->bindTo(GetUnsafeTest::NAME)))->invoke($$new($ObjectArray, 0));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($($Arrays::asList($$new($StringArray, {GetUnsafeTest::NAME}))));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$Class* cls = $cast($Class, $nc(mh)->invokeExact($$new($ObjectArray, {$of(GetUnsafeTest::NAME)})));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
	}
	{
		$load($Class);
		$load($String);
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$load($Object);
		$load($ObjectArray);
		$var($MethodType, mt, $MethodType::methodType($Object::class$, $Object::class$, $$new($ClassArray, {$getClass($ObjectArray)})));
		$load($Method);
		$var($MethodHandle, mh, $nc($($nc($($MethodHandles::lookup()))->findVirtual($Method::class$, "invoke"_s, mt)))->bindTo(fnMethod));
		try {
			$nc(fnMethod)->invoke(nullptr, $$new($ObjectArray, {$of(GetUnsafeTest::NAME)}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc($($nc($($nc(mh)->bindTo(nullptr)))->bindTo($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))))->invoke($$new($ObjectArray, 0));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invoke($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($$new($ObjectArray, {
				($Object*)nullptr,
				$of($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))
			}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($($Arrays::asList($$new($ObjectArray2, {
				($ObjectArray*)nullptr,
				$$new($ObjectArray, {$of(GetUnsafeTest::NAME)})
			}))));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$var($Object, obj, $nc(mh)->invokeExact($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))})));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
	}
	{
		$load($Class);
		$load($String);
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$load($Object);
		$load($ObjectArray);
		$var($MethodType, mt, $MethodType::methodType($Object::class$, $Object::class$, $$new($ClassArray, {$getClass($ObjectArray)})));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->bind(fnMethod, "invoke"_s, mt));
		try {
			$nc($($nc($($nc(mh)->bindTo(nullptr)))->bindTo($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))))->invoke($$new($ObjectArray, 0));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invoke($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($$new($ObjectArray, {
				($Object*)nullptr,
				$of(GetUnsafeTest::NAME)
			}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($($Arrays::asList($$new($StringArray, {
				($String*)nullptr,
				GetUnsafeTest::NAME
			}))));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$var($Object, obj, $nc(mh)->invokeExact($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}))})));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
	}
	{
		$load($Class);
		$load($String);
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->unreflect(fnMethod));
		try {
			$nc($($nc(mh)->bindTo(GetUnsafeTest::NAME)))->invoke($$new($ObjectArray, 0));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invoke($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($$new($ObjectArray, {$of(GetUnsafeTest::NAME)}));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$nc(mh)->invokeWithArguments($($Arrays::asList($$new($StringArray, {GetUnsafeTest::NAME}))));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
		try {
			$Class* cls = $cast($Class, $nc(mh)->invokeExact($$new($ObjectArray, {$of(GetUnsafeTest::NAME)})));
			fail();
		} catch ($Throwable&) {
			$catch();
		}
	}
	if (!GetUnsafeTest::isTestFailed) {
		$init($System);
		$nc($System::out)->println("TEST PASSED"_s);
	} else {
		$init($System);
		$nc($System::out)->println("TEST FAILED"_s);
		$System::exit(1);
	}
}

void clinit$GetUnsafeTest($Class* class$) {
	$assignStatic(GetUnsafeTest::NAME, "sun.misc.Unsafe"_s);
	GetUnsafeTest::isTestFailed = false;
}

GetUnsafeTest::GetUnsafeTest() {
}

$Class* GetUnsafeTest::load$($String* name, bool initialize) {
	$loadClass(GetUnsafeTest, name, initialize, &_GetUnsafeTest_ClassInfo_, clinit$GetUnsafeTest, allocate$GetUnsafeTest);
	return class$;
}

$Class* GetUnsafeTest::class$ = nullptr;