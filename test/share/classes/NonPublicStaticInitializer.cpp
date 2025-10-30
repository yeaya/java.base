#include <NonPublicStaticInitializer.h>

#include <TestedInterface.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $TestedInterface = ::TestedInterface;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _NonPublicStaticInitializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonPublicStaticInitializer::*)()>(&NonPublicStaticInitializer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NonPublicStaticInitializer::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NonPublicStaticInitializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonPublicStaticInitializer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NonPublicStaticInitializer_MethodInfo_
};

$Object* allocate$NonPublicStaticInitializer($Class* clazz) {
	return $of($alloc(NonPublicStaticInitializer));
}

void NonPublicStaticInitializer::init$() {
}

void NonPublicStaticInitializer::main($StringArray* args) {
	$load(NonPublicStaticInitializer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestedInterface);
	$var($MethodArray, m, $TestedInterface::class$->getMethods());
	for (int32_t i = 0; i < $nc(m)->length; ++i) {
		$var($String, var$0, $$str({"Found: "_s, $($Modifier::toString($nc(m->get(i))->getModifiers())), " "_s}));
		$nc($System::out)->println($$concat(var$0, $($nc(m->get(i))->getName())));
		if ($nc($($nc(m->get(i))->getName()))->equals("<clinit>"_s)) {
			$throwNew($Exception, "Shouldn\'t have found <clinit>"_s);
		}
	}
}

NonPublicStaticInitializer::NonPublicStaticInitializer() {
}

$Class* NonPublicStaticInitializer::load$($String* name, bool initialize) {
	$loadClass(NonPublicStaticInitializer, name, initialize, &_NonPublicStaticInitializer_ClassInfo_, allocate$NonPublicStaticInitializer);
	return class$;
}

$Class* NonPublicStaticInitializer::class$ = nullptr;