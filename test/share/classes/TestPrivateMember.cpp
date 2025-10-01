#include <TestPrivateMember.h>

#include <TestPrivateMemberPackageSibling.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestPrivateMember::*)()>(&TestPrivateMember::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestPrivateMember::main)), "java.lang.Throwable"},
	{"test", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
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
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var(TestPrivateMember, t, $new(TestPrivateMember));
	t->test();
}

void TestPrivateMember::init$() {
}

void TestPrivateMember::test() {
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	try {
		$load($TestPrivateMemberPackageSibling);
		$Class* checkInittedHolder = $TestPrivateMemberPackageSibling::class$;
		$var($MethodHandle, mh, $nc(lookup)->findStatic(checkInittedHolder, "checkInitted"_s, mt));
		$throwNew($RuntimeException, "IllegalAccessException not thrown"_s);
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, e, $catch());
		$init($System);
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