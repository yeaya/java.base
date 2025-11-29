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

$FieldInfo _TestSynchronization$TestFailedException_FieldInfo_[] = {
	{"m", "Ljava/lang/reflect/Method;", nullptr, $FINAL, $field(TestSynchronization$TestFailedException, m)},
	{}
};

$MethodInfo _TestSynchronization$TestFailedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSynchronization$TestFailedException::*)($Method*)>(&TestSynchronization$TestFailedException::init$))},
	{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestSynchronization$TestFailedException_InnerClassesInfo_[] = {
	{"TestSynchronization$TestFailedException", "TestSynchronization", "TestFailedException", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestSynchronization$TestFailedException_ClassInfo_ = {
	$ACC_SUPER,
	"TestSynchronization$TestFailedException",
	"java.lang.Exception",
	nullptr,
	_TestSynchronization$TestFailedException_FieldInfo_,
	_TestSynchronization$TestFailedException_MethodInfo_,
	nullptr,
	nullptr,
	_TestSynchronization$TestFailedException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestSynchronization"
};

$Object* allocate$TestSynchronization$TestFailedException($Class* clazz) {
	return $of($alloc(TestSynchronization$TestFailedException));
}

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
	$loadClass(TestSynchronization$TestFailedException, name, initialize, &_TestSynchronization$TestFailedException_ClassInfo_, allocate$TestSynchronization$TestFailedException);
	return class$;
}

$Class* TestSynchronization$TestFailedException::class$ = nullptr;