#include <NonPublicStaticInitializer.h>
#include <TestedInterface.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $TestedInterface = ::TestedInterface;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

void NonPublicStaticInitializer::init$() {
}

void NonPublicStaticInitializer::main($StringArray* args) {
	$useLocalObjectStack();
	$load(NonPublicStaticInitializer);
	$beforeCallerSensitive();
	$load($TestedInterface);
	$var($MethodArray, m, $TestedInterface::class$->getMethods());
	for (int32_t i = 0; i < $nc(m)->length; ++i) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Found: "_s);
		var$0->append($($Modifier::toString($nc(m->get(i))->getModifiers())));
		var$0->append(" "_s);
		var$0->append($($nc(m->get(i))->getName()));
		$nc($System::out)->println($$str(var$0));
		if ($$nc($nc(m->get(i))->getName())->equals("<clinit>"_s)) {
			$throwNew($Exception, "Shouldn\'t have found <clinit>"_s);
		}
	}
}

NonPublicStaticInitializer::NonPublicStaticInitializer() {
}

$Class* NonPublicStaticInitializer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonPublicStaticInitializer, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonPublicStaticInitializer, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonPublicStaticInitializer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonPublicStaticInitializer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicStaticInitializer);
	});
	return class$;
}

$Class* NonPublicStaticInitializer::class$ = nullptr;