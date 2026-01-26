#include <SignatureTest.h>

#include <SignatureTest$Inner1$Inner11.h>
#include <SignatureTest$Inner1.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $SignatureTest$Inner1 = ::SignatureTest$Inner1;
using $SignatureTest$Inner1$Inner11 = ::SignatureTest$Inner1$Inner11;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _SignatureTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SignatureTest, init$, void)},
	{"f", "(LSignatureTest$Inner1$Inner11;)V", "(LSignatureTest<Ljava/lang/String;>.Inner1.Inner11;)V", $PUBLIC, $virtualMethod(SignatureTest, f, void, $SignatureTest$Inner1$Inner11*)},
	{"g", "(LSignatureTest$Inner1;)V", "(LSignatureTest<Ljava/lang/String;>.Inner1;)V", $PUBLIC, $virtualMethod(SignatureTest, g, void, $SignatureTest$Inner1*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SignatureTest, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SignatureTest_InnerClassesInfo_[] = {
	{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
	{}
};

$ClassInfo _SignatureTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SignatureTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SignatureTest_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_SignatureTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SignatureTest$Inner1,SignatureTest$Inner1$Inner11"
};

$Object* allocate$SignatureTest($Class* clazz) {
	return $of($alloc(SignatureTest));
}

void SignatureTest::init$() {
}

void SignatureTest::f($SignatureTest$Inner1$Inner11* x) {
}

void SignatureTest::g($SignatureTest$Inner1* x) {
}

void SignatureTest::main($StringArray* args) {
	$load(SignatureTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* clazz = SignatureTest::class$;
	{
		$var($MethodArray, arr$, $nc(clazz)->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$nc($System::out)->println();
				$nc($System::out)->println($($nc(m)->toString()));
				$nc($System::out)->println($($nc(m)->toGenericString()));
				$nc($System::out)->println($($of($nc(m)->getGenericParameterTypes())));
			}
		}
	}
}

SignatureTest::SignatureTest() {
}

$Class* SignatureTest::load$($String* name, bool initialize) {
	$loadClass(SignatureTest, name, initialize, &_SignatureTest_ClassInfo_, allocate$SignatureTest);
	return class$;
}

$Class* SignatureTest::class$ = nullptr;