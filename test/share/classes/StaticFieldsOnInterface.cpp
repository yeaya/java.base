#include <StaticFieldsOnInterface.h>
#include <StaticFieldsOnInterface$A.h>
#include <StaticFieldsOnInterface$C.h>
#include <StaticFieldsOnInterface$D.h>
#include <StaticFieldsOnInterface$Y.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $StaticFieldsOnInterface$A = ::StaticFieldsOnInterface$A;
using $StaticFieldsOnInterface$C = ::StaticFieldsOnInterface$C;
using $StaticFieldsOnInterface$D = ::StaticFieldsOnInterface$D;
using $StaticFieldsOnInterface$Y = ::StaticFieldsOnInterface$Y;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticFieldsOnInterface::init$() {
}

void StaticFieldsOnInterface::main($StringArray* args) {
	char16_t first = u'C';
	if ($nc(args)->length > 0) {
		first = $nc(args->get(0))->charAt(0);
	}
	$load($StaticFieldsOnInterface$A);
	assertOneField($StaticFieldsOnInterface$A::class$);
	if (first == u'D') {
		$load($StaticFieldsOnInterface$D);
		assertOneField($StaticFieldsOnInterface$D::class$);
		$load($StaticFieldsOnInterface$C);
		assertOneField($StaticFieldsOnInterface$C::class$);
	} else if (first == u'C') {
		$load($StaticFieldsOnInterface$C);
		assertOneField($StaticFieldsOnInterface$C::class$);
		$load($StaticFieldsOnInterface$D);
		assertOneField($StaticFieldsOnInterface$D::class$);
	} else {
		$load($StaticFieldsOnInterface$Y);
		assertOneField($StaticFieldsOnInterface$Y::class$);
	}
}

void StaticFieldsOnInterface::assertOneField($Class* c) {
	$useLocalObjectStack();
	$load(StaticFieldsOnInterface);
	$beforeCallerSensitive();
	int32_t nfs = $nc($($nc(c)->getFields()))->length;
	if (nfs != 1) {
		$throwNew($AssertionError, $$of($String::format("Class %s does not have exactly one field: %d"_s, $$new($ObjectArray, {
			$(c->getName()),
			$($Integer::valueOf(nfs))
		}))));
	}
}

StaticFieldsOnInterface::StaticFieldsOnInterface() {
}

$Class* StaticFieldsOnInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StaticFieldsOnInterface, init$, void)},
		{"assertOneField", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $STATIC, $staticMethod(StaticFieldsOnInterface, assertOneField, void, $Class*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticFieldsOnInterface, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$Y", "StaticFieldsOnInterface", "Y", $STATIC},
		{"StaticFieldsOnInterface$X", "StaticFieldsOnInterface", "X", $STATIC},
		{"StaticFieldsOnInterface$D", "StaticFieldsOnInterface", "D", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$C", "StaticFieldsOnInterface", "C", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$B", "StaticFieldsOnInterface", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StaticFieldsOnInterface",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"StaticFieldsOnInterface$Y,StaticFieldsOnInterface$X,StaticFieldsOnInterface$D,StaticFieldsOnInterface$C,StaticFieldsOnInterface$B,StaticFieldsOnInterface$A"
	};
	$loadClass(StaticFieldsOnInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticFieldsOnInterface);
	});
	return class$;
}

$Class* StaticFieldsOnInterface::class$ = nullptr;