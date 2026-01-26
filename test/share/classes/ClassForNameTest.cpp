#include <ClassForNameTest.h>

#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NAME

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

$FieldInfo _ClassForNameTest_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ClassForNameTest, NAME)},
	{}
};

$MethodInfo _ClassForNameTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassForNameTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassForNameTest, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$ClassInfo _ClassForNameTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClassForNameTest",
	"java.lang.Object",
	nullptr,
	_ClassForNameTest_FieldInfo_,
	_ClassForNameTest_MethodInfo_
};

$Object* allocate$ClassForNameTest($Class* clazz) {
	return $of($alloc(ClassForNameTest));
}

$String* ClassForNameTest::NAME = nullptr;

void ClassForNameTest::init$() {
}

void ClassForNameTest::main($StringArray* args) {
	$init(ClassForNameTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($MethodType, mt, $MethodType::methodType($Class::class$, $String::class$));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->findStatic($Class::class$, "forName"_s, mt));
		$Class::forName(ClassForNameTest::NAME);
		$nc(mh)->invoke($$new($ObjectArray, {$of(ClassForNameTest::NAME)}));
		$nc($(mh->bindTo(ClassForNameTest::NAME)))->invoke($$new($ObjectArray, 0));
		mh->invokeWithArguments($($Arrays::asList($$new($StringArray, {ClassForNameTest::NAME}))));
		mh->invokeWithArguments($$new($ObjectArray, {$of(ClassForNameTest::NAME)}));
		$Class* cls = $cast($Class, mh->invokeExact($$new($ObjectArray, {$of(ClassForNameTest::NAME)})));
	}
	{
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$load($ObjectArray);
		$var($MethodType, mt, $MethodType::methodType($Object::class$, $Object::class$, $$new($ClassArray, {$getClass($ObjectArray)})));
		$load($Method);
		$var($MethodHandle, mh, $nc($($nc($($MethodHandles::lookup()))->findVirtual($Method::class$, "invoke"_s, mt)))->bindTo(fnMethod));
		$nc(fnMethod)->invoke(nullptr, $$new($ObjectArray, {$of(ClassForNameTest::NAME)}));
		$nc($($nc($($nc(mh)->bindTo(nullptr)))->bindTo($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))))->invoke($$new($ObjectArray, 0));
		mh->invoke($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))}));
		mh->invokeWithArguments($$new($ObjectArray, {
			($Object*)nullptr,
			$of($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))
		}));
		mh->invokeWithArguments($($Arrays::asList($$new($ObjectArray2, {
			($ObjectArray*)nullptr,
			$$new($ObjectArray, {$of(ClassForNameTest::NAME)})
		}))));
		$var($Object, obj, mh->invokeExact($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))})));
	}
	{
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$load($ObjectArray);
		$var($MethodType, mt, $MethodType::methodType($Object::class$, $Object::class$, $$new($ClassArray, {$getClass($ObjectArray)})));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->bind(fnMethod, "invoke"_s, mt));
		$nc($($nc($($nc(mh)->bindTo(nullptr)))->bindTo($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))))->invoke($$new($ObjectArray, 0));
		mh->invoke($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))}));
		mh->invokeWithArguments($$new($ObjectArray, {
			($Object*)nullptr,
			$of(ClassForNameTest::NAME)
		}));
		mh->invokeWithArguments($($Arrays::asList($$new($StringArray, {
			($String*)nullptr,
			ClassForNameTest::NAME
		}))));
		$var($Object, obj, mh->invokeExact($$new($ObjectArray, {($Object*)nullptr, $of($$new($ObjectArray, {$of(ClassForNameTest::NAME)}))})));
	}
	{
		$var($Method, fnMethod, $Class::class$->getMethod("forName"_s, $$new($ClassArray, {$String::class$})));
		$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->unreflect(fnMethod));
		$nc($($nc(mh)->bindTo(ClassForNameTest::NAME)))->invoke($$new($ObjectArray, 0));
		mh->invoke($$new($ObjectArray, {$of(ClassForNameTest::NAME)}));
		mh->invokeWithArguments($$new($ObjectArray, {$of(ClassForNameTest::NAME)}));
		mh->invokeWithArguments($($Arrays::asList($$new($StringArray, {ClassForNameTest::NAME}))));
		$Class* cls = $cast($Class, mh->invokeExact($$new($ObjectArray, {$of(ClassForNameTest::NAME)})));
	}
	$nc($System::out)->println("TEST PASSED"_s);
}

void clinit$ClassForNameTest($Class* class$) {
	$assignStatic(ClassForNameTest::NAME, ClassForNameTest::class$->getName());
}

ClassForNameTest::ClassForNameTest() {
}

$Class* ClassForNameTest::load$($String* name, bool initialize) {
	$loadClass(ClassForNameTest, name, initialize, &_ClassForNameTest_ClassInfo_, clinit$ClassForNameTest, allocate$ClassForNameTest);
	return class$;
}

$Class* ClassForNameTest::class$ = nullptr;