#include <ModPowPowersof2$ModTester.h>

#include <ModPowPowersof2.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ModPowPowersof2 = ::ModPowPowersof2;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _ModPowPowersof2$ModTester_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModPowPowersof2$ModTester::*)()>(&ModPowPowersof2$ModTester::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ModPowPowersof2$ModTester::main))},
	{}
};

$InnerClassInfo _ModPowPowersof2$ModTester_InnerClassesInfo_[] = {
	{"ModPowPowersof2$ModTester", "ModPowPowersof2", "ModTester", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ModPowPowersof2$ModTester_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ModPowPowersof2$ModTester",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ModPowPowersof2$ModTester_MethodInfo_,
	nullptr,
	nullptr,
	_ModPowPowersof2$ModTester_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ModPowPowersof2"
};

$Object* allocate$ModPowPowersof2$ModTester($Class* clazz) {
	return $of($alloc(ModPowPowersof2$ModTester));
}

void ModPowPowersof2$ModTester::init$() {
}

void ModPowPowersof2$ModTester::main($StringArray* args) {
	$var($BigInteger, two, $BigInteger::valueOf((int64_t)2));
	$var($BigInteger, four, $BigInteger::valueOf((int64_t)4));
	$nc(two)->modPow(two, $($BigInteger::valueOf((int64_t)4)));
	two->modPow(two, $($BigInteger::valueOf((int64_t)8)));
	two->modPow(four, $($BigInteger::valueOf((int64_t)8)));
	$init($System);
	$nc($System::out)->println("success"_s);
}

ModPowPowersof2$ModTester::ModPowPowersof2$ModTester() {
}

$Class* ModPowPowersof2$ModTester::load$($String* name, bool initialize) {
	$loadClass(ModPowPowersof2$ModTester, name, initialize, &_ModPowPowersof2$ModTester_ClassInfo_, allocate$ModPowPowersof2$ModTester);
	return class$;
}

$Class* ModPowPowersof2$ModTester::class$ = nullptr;