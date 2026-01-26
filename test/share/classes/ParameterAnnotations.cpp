#include <ParameterAnnotations.h>

#include <ParameterAnnotations$1.h>
#include <ParameterAnnotations$MyPolicy.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Policy.h>
#include <jcpp.h>

using $ParameterAnnotations$1 = ::ParameterAnnotations$1;
using $ParameterAnnotations$MyPolicy = ::ParameterAnnotations$MyPolicy;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;
using $SecurityManager = ::java::lang::SecurityManager;
using $Annotation = ::java::lang::annotation::Annotation;
using $Method = ::java::lang::reflect::Method;
using $Policy = ::java::security::Policy;

$NamedAttribute ParameterAnnotations_Attribute_var$0[] = {
	{"value", 's', "foo"},
	{}
};

$NamedAttribute ParameterAnnotations_Attribute_var$1[] = {
	{"value", 's', "bar"},
	{}
};

$ParameterAnnotation _ParameterAnnotations_MethodParamAnnotations_nop7[] = {
	{"LNamed;", ParameterAnnotations_Attribute_var$0, 0},
	{"LNamed;", ParameterAnnotations_Attribute_var$1, 1},
	{}
};

$FieldInfo _ParameterAnnotations_FieldInfo_[] = {
	{"passed", "I", nullptr, $VOLATILE, $field(ParameterAnnotations, passed)},
	{"failed", "I", nullptr, $VOLATILE, $field(ParameterAnnotations, failed)},
	{"thisClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(ParameterAnnotations, thisClass)},
	{}
};

$MethodInfo _ParameterAnnotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParameterAnnotations, init$, void)},
	{"check", "(Z)V", nullptr, 0, $virtualMethod(ParameterAnnotations, check, void, bool)},
	{"equal", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(ParameterAnnotations, equal, void, Object$*, Object$*)},
	{"fail", "()V", nullptr, 0, $virtualMethod(ParameterAnnotations, fail, void)},
	{"fail", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ParameterAnnotations, fail, void, $String*)},
	{"instanceMain", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, instanceMain, void, $StringArray*), "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParameterAnnotations, main, void, $StringArray*), "java.lang.Throwable"},
	{"nop", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, nop, void, Object$*, Object$*), nullptr, nullptr, nullptr, nullptr, _ParameterAnnotations_MethodParamAnnotations_nop7},
	{"pass", "()V", nullptr, 0, $virtualMethod(ParameterAnnotations, pass, void)},
	{"test", "([Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ParameterAnnotations, test, void, $StringArray*), "java.lang.Throwable"},
	{"test1", "()V", nullptr, 0, $virtualMethod(ParameterAnnotations, test1, void), "java.lang.Throwable"},
	{"unexpected", "(Ljava/lang/Throwable;)V", nullptr, 0, $virtualMethod(ParameterAnnotations, unexpected, void, $Throwable*)},
	{}
};

$InnerClassInfo _ParameterAnnotations_InnerClassesInfo_[] = {
	{"ParameterAnnotations$MyPolicy", "ParameterAnnotations", "MyPolicy", $STATIC},
	{"ParameterAnnotations$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParameterAnnotations",
	"java.lang.Object",
	nullptr,
	_ParameterAnnotations_FieldInfo_,
	_ParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ParameterAnnotations$MyPolicy,ParameterAnnotations$1"
};

$Object* allocate$ParameterAnnotations($Class* clazz) {
	return $of($alloc(ParameterAnnotations));
}

$Class* ParameterAnnotations::thisClass = nullptr;

void ParameterAnnotations::init$() {
	this->passed = 0;
	this->failed = 0;
}

void ParameterAnnotations::nop(Object$* foo, Object$* bar) {
}

void ParameterAnnotations::test($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	test1();
	$var($Policy, defaultPolicy, $Policy::getPolicy());
	$Policy::setPolicy($$new($ParameterAnnotations$MyPolicy, defaultPolicy));
	$System::setSecurityManager($$new($SecurityManager));
	{
		$var($Throwable, var$0, nullptr);
		try {
			test1();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$System::setSecurityManager(nullptr);
			$Policy::setPolicy(defaultPolicy);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ParameterAnnotations::test1() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($MethodArray, arr$, $nc(ParameterAnnotations::thisClass)->getMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				if ($nc($($nc(m)->getName()))->equals("nop"_s)) {
					$var($AnnotationArray2, ann, m->getParameterAnnotations());
					$var($Object, var$0, $of($Integer::valueOf($nc(ann)->length)));
					equal(var$0, $($Integer::valueOf(2)));
					$var($Annotation, foo, $nc($nc(ann)->get(0))->get(0));
					$var($Annotation, bar, $nc(ann->get(1))->get(0));
					equal($($nc(foo)->toString()), "@Named(\"foo\")"_s);
					equal($($nc(bar)->toString()), "@Named(\"bar\")"_s);
					check($nc(foo)->equals(foo));
					check(!$nc(foo)->equals(bar));
				}
			}
		}
	}
}

void ParameterAnnotations::pass() {
	++this->passed;
}

void ParameterAnnotations::fail() {
	++this->failed;
	$Thread::dumpStack();
}

void ParameterAnnotations::fail($String* msg) {
	$nc($System::err)->println(msg);
	fail();
}

void ParameterAnnotations::unexpected($Throwable* t) {
	++this->failed;
	$nc(t)->printStackTrace();
}

void ParameterAnnotations::check(bool cond) {
	if (cond) {
		pass();
	} else {
		fail();
	}
}

void ParameterAnnotations::equal(Object$* x, Object$* y) {
	if (x == nullptr ? y == nullptr : $nc($of(x))->equals(y)) {
		pass();
	} else {
		fail($$str({x, " not equal to "_s, y}));
	}
}

void ParameterAnnotations::main($StringArray* args) {
	$init(ParameterAnnotations);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($StringArray);
		$nc($($nc(ParameterAnnotations::thisClass)->getMethod("instanceMain"_s, $$new($ClassArray, {$getClass($StringArray)}))))->invoke($($nc(ParameterAnnotations::thisClass)->newInstance()), $$new($ObjectArray, {$of(args)}));
	} catch ($Throwable& e) {
		$throw($(e->getCause()));
	}
}

void ParameterAnnotations::instanceMain($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		test(args);
	} catch ($Throwable& t) {
		unexpected(t);
	}
	$nc($System::out)->printf("%nPassed = %d, failed = %d%n%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(this->passed))),
		$($of($Integer::valueOf(this->failed)))
	}));
	if (this->failed > 0) {
		$throwNew($AssertionError, $of("Some tests failed"_s));
	}
}

void clinit$ParameterAnnotations($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(ParameterAnnotations::thisClass, $of($$new($ParameterAnnotations$1))->getClass()->getEnclosingClass());
}

ParameterAnnotations::ParameterAnnotations() {
}

$Class* ParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(ParameterAnnotations, name, initialize, &_ParameterAnnotations_ClassInfo_, clinit$ParameterAnnotations, allocate$ParameterAnnotations);
	return class$;
}

$Class* ParameterAnnotations::class$ = nullptr;