#include <Equals2.h>
#include <Equals2A.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Equals2A = ::Equals2A;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

void Equals2::init$() {
	$Equals2A::init$();
}

Equals2* Equals2::m() {
	return this;
}

void Equals2::main($StringArray* args) {
	$init(Equals2);
	$var(Equals2, e, $new(Equals2));
	e->returnType();
}

void Equals2::returnType() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* c = this->getClass();
	$var($MethodArray, ma, c->getMethods());
	$var($Method, m0, nullptr);
	$var($Method, m1, nullptr);
	for (int32_t i = 0; i < $nc(ma)->length; ++i) {
		if ($$nc($nc(ma->get(i))->getName())->equals("m"_s)) {
			if (m0 == nullptr) {
				$assign(m0, ma->get(i));
				continue;
			} else {
				$assign(m1, ma->get(i));
				break;
			}
		}
	}
	if (m0 == nullptr || m1 == nullptr) {
		$throwNew($RuntimeException, "Can\'t find bridge methods"_s);
	}
	if ($nc(m0)->equals(m1)) {
		$throwNew($RuntimeException, "Return types not compared"_s);
	}
	$nc($System::out)->println($$str({"\""_s, m0, "\" and \""_s, m1, "\" are different"_s}));
}

Equals2::Equals2() {
}

$Class* Equals2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Equals2, init$, void)},
		{"m", "()LEquals2;", nullptr, $PUBLIC, $virtualMethod(Equals2, m, Equals2*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Equals2, main, void, $StringArray*)},
		{"returnType", "()V", nullptr, $PRIVATE, $method(Equals2, returnType, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Equals2",
		"Equals2A",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Equals2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Equals2);
	});
	return class$;
}

$Class* Equals2::class$ = nullptr;