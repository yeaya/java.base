#include <SignatureTest.h>
#include <SignatureTest$Inner1$Inner11.h>
#include <SignatureTest$Inner1.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $SignatureTest$Inner1 = ::SignatureTest$Inner1;
using $SignatureTest$Inner1$Inner11 = ::SignatureTest$Inner1$Inner11;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

void SignatureTest::init$() {
}

void SignatureTest::f($SignatureTest$Inner1$Inner11* x) {
}

void SignatureTest::g($SignatureTest$Inner1* x) {
}

void SignatureTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(SignatureTest);
	$beforeCallerSensitive();
	$Class* clazz = SignatureTest::class$;
	{
		$var($MethodArray, arr$, clazz->getDeclaredMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$nc($System::out)->println();
				$System::out->println($($nc(m)->toString()));
				$System::out->println($(m->toGenericString()));
				$System::out->println($(m->getGenericParameterTypes()));
			}
		}
	}
}

SignatureTest::SignatureTest() {
}

$Class* SignatureTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SignatureTest, init$, void)},
		{"f", "(LSignatureTest$Inner1$Inner11;)V", "(LSignatureTest<Ljava/lang/String;>.Inner1.Inner11;)V", $PUBLIC, $virtualMethod(SignatureTest, f, void, $SignatureTest$Inner1$Inner11*)},
		{"g", "(LSignatureTest$Inner1;)V", "(LSignatureTest<Ljava/lang/String;>.Inner1;)V", $PUBLIC, $virtualMethod(SignatureTest, g, void, $SignatureTest$Inner1*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SignatureTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SignatureTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SignatureTest$Inner1,SignatureTest$Inner1$Inner11"
	};
	$loadClass(SignatureTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureTest);
	});
	return class$;
}

$Class* SignatureTest::class$ = nullptr;