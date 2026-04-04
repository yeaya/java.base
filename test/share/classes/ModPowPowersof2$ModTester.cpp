#include <ModPowPowersof2$ModTester.h>
#include <ModPowPowersof2.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

void ModPowPowersof2$ModTester::init$() {
}

void ModPowPowersof2$ModTester::main($StringArray* args) {
	$useLocalObjectStack();
	$var($BigInteger, two, $BigInteger::valueOf(2));
	$var($BigInteger, four, $BigInteger::valueOf(4));
	two->modPow(two, $($BigInteger::valueOf(4)));
	two->modPow(two, $($BigInteger::valueOf(8)));
	two->modPow(four, $($BigInteger::valueOf(8)));
	$nc($System::out)->println("success"_s);
}

ModPowPowersof2$ModTester::ModPowPowersof2$ModTester() {
}

$Class* ModPowPowersof2$ModTester::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModPowPowersof2$ModTester, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModPowPowersof2$ModTester, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ModPowPowersof2$ModTester", "ModPowPowersof2", "ModTester", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ModPowPowersof2$ModTester",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ModPowPowersof2"
	};
	$loadClass(ModPowPowersof2$ModTester, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModPowPowersof2$ModTester);
	});
	return class$;
}

$Class* ModPowPowersof2$ModTester::class$ = nullptr;