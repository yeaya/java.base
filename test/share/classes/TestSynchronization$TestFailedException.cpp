#include <TestSynchronization$TestFailedException.h>
#include <TestSynchronization.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

$Method* TestSynchronization$TestFailedException::getMethod() {
	return this->m;
}

void TestSynchronization$TestFailedException::init$($Method* m) {
	$Exception::init$();
	$set(this, m, m);
}

TestSynchronization$TestFailedException::TestSynchronization$TestFailedException() {
}

TestSynchronization$TestFailedException::TestSynchronization$TestFailedException(const TestSynchronization$TestFailedException& e) : $Exception(e) {
}

void TestSynchronization$TestFailedException::throw$() {
	throw *this;
}

$Class* TestSynchronization$TestFailedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m", "Ljava/lang/reflect/Method;", nullptr, $FINAL, $field(TestSynchronization$TestFailedException, m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(TestSynchronization$TestFailedException, init$, void, $Method*)},
		{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(TestSynchronization$TestFailedException, getMethod, $Method*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestSynchronization$TestFailedException", "TestSynchronization", "TestFailedException", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestSynchronization$TestFailedException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestSynchronization"
	};
	$loadClass(TestSynchronization$TestFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSynchronization$TestFailedException);
	});
	return class$;
}

$Class* TestSynchronization$TestFailedException::class$ = nullptr;