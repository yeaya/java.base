#include <PublicConstructor.h>

#include <java/lang/StackTraceElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;

$MethodInfo _PublicConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PublicConstructor, init$, void)},
	{"assertEquals", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(PublicConstructor, assertEquals, void, $String*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(PublicConstructor, main, void, $StringArray*)},
	{"testConstructor", "()V", nullptr, $STATIC, $staticMethod(PublicConstructor, testConstructor, void)},
	{"testConstructorWithModule", "()V", nullptr, $STATIC, $staticMethod(PublicConstructor, testConstructorWithModule, void)},
	{}
};

$ClassInfo _PublicConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PublicConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PublicConstructor_MethodInfo_
};

$Object* allocate$PublicConstructor($Class* clazz) {
	return $of($alloc(PublicConstructor));
}

void PublicConstructor::init$() {
}

void PublicConstructor::main($StringArray* args) {
	testConstructor();
	testConstructorWithModule();
}

void PublicConstructor::testConstructor() {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElement, ste, $new($StackTraceElement, "com.acme.Widget"_s, "frobnicate"_s, "Widget.java"_s, 42));
	bool var$2 = $nc($(ste->getClassName()))->equals("com.acme.Widget"_s);
	bool var$1 = var$2 && $nc($(ste->getFileName()))->equals("Widget.java"_s);
	bool var$0 = var$1 && $nc($(ste->getMethodName()))->equals("frobnicate"_s);
	if (!(var$0 && ste->getLineNumber() == 42)) {
		$throwNew($RuntimeException, "1"_s);
	}
	if (ste->isNativeMethod()) {
		$throwNew($RuntimeException, "2"_s);
	}
	assertEquals($(ste->toString()), "com.acme.Widget.frobnicate(Widget.java:42)"_s);
	$var($StackTraceElement, ste1, $new($StackTraceElement, "com.acme.Widget"_s, "frobnicate"_s, "Widget.java"_s, -2));
	if (!ste1->isNativeMethod()) {
		$throwNew($RuntimeException, "3"_s);
	}
	assertEquals($(ste1->toString()), "com.acme.Widget.frobnicate(Native Method)"_s);
}

void PublicConstructor::testConstructorWithModule() {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElement, ste, $new($StackTraceElement, "app"_s, "jdk.module"_s, "9.0"_s, "com.acme.Widget"_s, "frobnicate"_s, "Widget.java"_s, 42));
	bool var$5 = $nc($(ste->getClassName()))->equals("com.acme.Widget"_s);
	bool var$4 = var$5 && $nc($(ste->getModuleName()))->equals("jdk.module"_s);
	bool var$3 = var$4 && $nc($(ste->getModuleVersion()))->equals("9.0"_s);
	bool var$2 = var$3 && $nc($(ste->getClassLoaderName()))->equals("app"_s);
	bool var$1 = var$2 && $nc($(ste->getFileName()))->equals("Widget.java"_s);
	bool var$0 = var$1 && $nc($(ste->getMethodName()))->equals("frobnicate"_s);
	if (!(var$0 && ste->getLineNumber() == 42)) {
		$throwNew($RuntimeException, "3"_s);
	}
	if (ste->isNativeMethod()) {
		$throwNew($RuntimeException, "4"_s);
	}
	assertEquals($(ste->toString()), "app/jdk.module@9.0/com.acme.Widget.frobnicate(Widget.java:42)"_s);
}

void PublicConstructor::assertEquals($String* s, $String* expected) {
	if (!$nc(s)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Expected: "_s, expected, " but found: "_s, s}));
	}
}

PublicConstructor::PublicConstructor() {
}

$Class* PublicConstructor::load$($String* name, bool initialize) {
	$loadClass(PublicConstructor, name, initialize, &_PublicConstructor_ClassInfo_, allocate$PublicConstructor);
	return class$;
}

$Class* PublicConstructor::class$ = nullptr;