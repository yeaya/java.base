#include <UnicodeConstructor.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void UnicodeConstructor::init$() {
}

void UnicodeConstructor::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($BigInteger, b1, $new($BigInteger, u"０"_s));
		$nc($System::err)->println($(b1->toString()));
		$var($BigInteger, b2, $new($BigInteger, u"１０１０"_s));
		$System::err->println($(b2->toString()));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($RuntimeException, "BigInteger is not accepting unicode initializers."_s);
	}
}

UnicodeConstructor::UnicodeConstructor() {
}

$Class* UnicodeConstructor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnicodeConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UnicodeConstructor, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UnicodeConstructor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UnicodeConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnicodeConstructor);
	});
	return class$;
}

$Class* UnicodeConstructor::class$ = nullptr;