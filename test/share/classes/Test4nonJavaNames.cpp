#include <Test4nonJavaNames.h>
#include <Test4nonJavaNames$Loader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

#undef CLASS_FILE
#undef CLASS_NAME

using $Test4nonJavaNames$Loader = ::Test4nonJavaNames$Loader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::lang::reflect::Proxy;

$String* Test4nonJavaNames::CLASS_NAME = nullptr;
$bytes* Test4nonJavaNames::CLASS_FILE = nullptr;

void Test4nonJavaNames::init$() {
}

void Test4nonJavaNames::main($StringArray* args) {
	$init(Test4nonJavaNames);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, l, $new($Test4nonJavaNames$Loader));
	$Class* i = $Class::forName(Test4nonJavaNames::CLASS_NAME, false, l);
	$nc($System::out)->println(i);
	$Class* p = $Proxy::getProxyClass($(i->getClassLoader()), $$new($ClassArray, {i}));
	$System::out->println(p);
}

void Test4nonJavaNames::clinit$($Class* clazz) {
	$assignStatic(Test4nonJavaNames::CLASS_NAME, "Test+Interface"_s);
	$assignStatic(Test4nonJavaNames::CLASS_FILE, $new($bytes, {
		(int8_t)202,
		(int8_t)254,
		(int8_t)186,
		(int8_t)190,
		0,
		0,
		0,
		49,
		0,
		7,
		7,
		0,
		5,
		7,
		0,
		6,
		1,
		0,
		10,
		83,
		111,
		117,
		114,
		99,
		101,
		70,
		105,
		108,
		101,
		1,
		0,
		19,
		84,
		101,
		115,
		116,
		43,
		73,
		110,
		116,
		101,
		114,
		102,
		97,
		99,
		101,
		46,
		106,
		97,
		118,
		97,
		1,
		0,
		14,
		84,
		101,
		115,
		116,
		43,
		73,
		110,
		116,
		101,
		114,
		102,
		97,
		99,
		101,
		1,
		0,
		16,
		106,
		97,
		118,
		97,
		47,
		108,
		97,
		110,
		103,
		47,
		79,
		98,
		106,
		101,
		99,
		116,
		6,
		1,
		0,
		1,
		0,
		2,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		1,
		0,
		3,
		0,
		0,
		0,
		2,
		0,
		4
	}));
}

Test4nonJavaNames::Test4nonJavaNames() {
}

$Class* Test4nonJavaNames::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4nonJavaNames, CLASS_NAME)},
		{"CLASS_FILE", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4nonJavaNames, CLASS_FILE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4nonJavaNames, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4nonJavaNames, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4nonJavaNames$Loader", "Test4nonJavaNames", "Loader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4nonJavaNames",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test4nonJavaNames$Loader"
	};
	$loadClass(Test4nonJavaNames, name, initialize, &classInfo$$, Test4nonJavaNames::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test4nonJavaNames);
	});
	return class$;
}

$Class* Test4nonJavaNames::class$ = nullptr;