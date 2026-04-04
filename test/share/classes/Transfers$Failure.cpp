#include <Transfers$Failure.h>
#include <Transfers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Transfers$Failure::init$($Exception* x) {
	$RuntimeException::init$(x);
}

void Transfers$Failure::init$($String* s) {
	$RuntimeException::init$(s);
}

Transfers$Failure::Transfers$Failure() {
}

Transfers$Failure::Transfers$Failure(const Transfers$Failure& e) : $RuntimeException(e) {
}

void Transfers$Failure::throw$() {
	throw *this;
}

$Class* Transfers$Failure::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(Transfers$Failure, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Transfers$Failure, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$Failure", "Transfers", "Failure", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Transfers$Failure",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Transfers"
	};
	$loadClass(Transfers$Failure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$Failure);
	});
	return class$;
}

$Class* Transfers$Failure::class$ = nullptr;