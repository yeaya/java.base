#include <ModInvTime.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _ModInvTime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModInvTime::*)()>(&ModInvTime::init$))},
	{"check", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($BigInteger*,$BigInteger*,$BigInteger*)>(&ModInvTime::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ModInvTime::main)), "java.lang.InterruptedException"},
	{}
};

$ClassInfo _ModInvTime_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ModInvTime",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ModInvTime_MethodInfo_
};

$Object* allocate$ModInvTime($Class* clazz) {
	return $of($alloc(ModInvTime));
}

void ModInvTime::init$() {
}

void ModInvTime::main($StringArray* args) {
	$var($BigInteger, prime, $new($BigInteger, "39402006196394479212279040100143613805079739270465446667946905279627659399113263569398956308152294913554433653942643"_s));
	$var($BigInteger, s, $new($BigInteger, "9552729729729327851382626410162104591956625415831952158766936536163093322096473638446154604799898109762512409920799"_s));
	$init($System);
	$nc($System::out)->format("int length: %d, modulus length: %d%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(s->bitLength()))),
		$($of($Integer::valueOf(prime->bitLength())))
	}));
	$nc($System::out)->println("Computing modular inverse ..."_s);
	$var($BigInteger, mi, s->modInverse(prime));
	$nc($System::out)->format("Modular inverse: %s%n"_s, $$new($ObjectArray, {$of(mi)}));
	check(s, prime, mi);
	$var($BigInteger, ns, s->negate());
	$var($BigInteger, nmi, $nc(ns)->modInverse(prime));
	$nc($System::out)->format("Modular inverse of negation: %s%n"_s, $$new($ObjectArray, {$of(nmi)}));
	check(ns, prime, nmi);
}

void ModInvTime::check($BigInteger* val, $BigInteger* mod, $BigInteger* inv) {
	$var($BigInteger, r, $nc($($nc(inv)->multiply(val)))->remainder(mod));
	if ($nc(r)->signum() == -1) {
		$assign(r, r->add(mod));
	}
	if (!$nc(r)->equals($BigInteger::ONE)) {
		$throwNew($RuntimeException, "Numerically incorrect modular inverse"_s);
	}
}

ModInvTime::ModInvTime() {
}

$Class* ModInvTime::load$($String* name, bool initialize) {
	$loadClass(ModInvTime, name, initialize, &_ModInvTime_ClassInfo_, allocate$ModInvTime);
	return class$;
}

$Class* ModInvTime::class$ = nullptr;