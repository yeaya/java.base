#include <TestPrivateMember.h>

#include <TestPrivateMemberPackageSibling.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $TestPrivateMemberPackageSibling = ::TestPrivateMemberPackageSibling;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _TestPrivateMember_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestPrivateMember, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(TestPrivateMember, main, void, $StringArray*), "java.lang.Throwable"},
	{"test", "()V", nullptr, $PUBLIC, $virtualMethod(TestPrivateMember, test, void), "java.lang.Throwable"},
	{}
};

$ClassInfo _TestPrivateMember_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestPrivateMember",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestPrivateMember_MethodInfo_
};

$Object* allocate$TestPrivateMember($Class* clazz) {
	return $of($alloc(TestPrivateMember));
}

void TestPrivateMember::main($StringArray* args) {
	$load(TestPrivateMember);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var(TestPrivateMember, t, $new(TestPrivateMember));
	t->test();
}

void TestPrivateMember::init$() {
}

void TestPrivateMember::test() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	try {
		$load($TestPrivateMemberPackageSibling);
		$Class* checkInittedHolder = $TestPrivateMemberPackageSibling::class$;
		$var($MethodHandle, mh, $nc(lookup)->findStatic(checkInittedHolder, "checkInitted"_s, mt));
		$throwNew($RuntimeException, "IllegalAccessException not thrown"_s);
	} catch ($IllegalAccessException& e) {
		$nc($System::out)->println($$str({"Expected exception: "_s, $(e->getMessage())}));
	}
}

TestPrivateMember::TestPrivateMember() {
}

$Class* TestPrivateMember::load$($String* name, bool initialize) {
	$loadClass(TestPrivateMember, name, initialize, &_TestPrivateMember_ClassInfo_, allocate$TestPrivateMember);
	return class$;
}

$Class* TestPrivateMember::class$ = nullptr;