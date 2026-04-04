#include <ModInvTime.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void ModInvTime::init$() {
}

void ModInvTime::main($StringArray* args) {
	$useLocalObjectStack();
	$var($BigInteger, prime, $new($BigInteger, "39402006196394479212279040100143613805079739270465446667946905279627659399113263569398956308152294913554433653942643"_s));
	$var($BigInteger, s, $new($BigInteger, "9552729729729327851382626410162104591956625415831952158766936536163093322096473638446154604799898109762512409920799"_s));
	$nc($System::out)->format("int length: %d, modulus length: %d%n"_s, $$new($ObjectArray, {
		$($Integer::valueOf(s->bitLength())),
		$($Integer::valueOf(prime->bitLength()))
	}));
	$System::out->println("Computing modular inverse ..."_s);
	$var($BigInteger, mi, s->modInverse(prime));
	$System::out->format("Modular inverse: %s%n"_s, $$new($ObjectArray, {mi}));
	check(s, prime, mi);
	$var($BigInteger, ns, s->negate());
	$var($BigInteger, nmi, ns->modInverse(prime));
	$System::out->format("Modular inverse of negation: %s%n"_s, $$new($ObjectArray, {nmi}));
	check(ns, prime, nmi);
}

void ModInvTime::check($BigInteger* val, $BigInteger* mod, $BigInteger* inv) {
	$useLocalObjectStack();
	$var($BigInteger, r, $($nc(inv)->multiply(val))->remainder(mod));
	if (r->signum() == -1) {
		$assign(r, r->add(mod));
	}
	if (!r->equals($BigInteger::ONE)) {
		$throwNew($RuntimeException, "Numerically incorrect modular inverse"_s);
	}
}

ModInvTime::ModInvTime() {
}

$Class* ModInvTime::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModInvTime, init$, void)},
		{"check", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModInvTime, check, void, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModInvTime, main, void, $StringArray*), "java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ModInvTime",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModInvTime, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModInvTime);
	});
	return class$;
}

$Class* ModInvTime::class$ = nullptr;