#include <Test4nonJavaNames.h>

#include <Test4nonJavaNames$Loader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

#undef CLASS_FILE
#undef CLASS_NAME

using $Test4nonJavaNames$Loader = ::Test4nonJavaNames$Loader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::lang::reflect::Proxy;

$FieldInfo _Test4nonJavaNames_FieldInfo_[] = {
	{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4nonJavaNames, CLASS_NAME)},
	{"CLASS_FILE", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4nonJavaNames, CLASS_FILE)},
	{}
};

$MethodInfo _Test4nonJavaNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4nonJavaNames::*)()>(&Test4nonJavaNames::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4nonJavaNames::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test4nonJavaNames_InnerClassesInfo_[] = {
	{"Test4nonJavaNames$Loader", "Test4nonJavaNames", "Loader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Test4nonJavaNames_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4nonJavaNames",
	"java.lang.Object",
	nullptr,
	_Test4nonJavaNames_FieldInfo_,
	_Test4nonJavaNames_MethodInfo_,
	nullptr,
	nullptr,
	_Test4nonJavaNames_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test4nonJavaNames$Loader"
};

$Object* allocate$Test4nonJavaNames($Class* clazz) {
	return $of($alloc(Test4nonJavaNames));
}

$String* Test4nonJavaNames::CLASS_NAME = nullptr;
$bytes* Test4nonJavaNames::CLASS_FILE = nullptr;

void Test4nonJavaNames::init$() {
}

void Test4nonJavaNames::main($StringArray* args) {
	$init(Test4nonJavaNames);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, l, $new($Test4nonJavaNames$Loader));
	$Class* i = $Class::forName(Test4nonJavaNames::CLASS_NAME, false, l);
	$nc($System::out)->println($of(i));
	$Class* p = $Proxy::getProxyClass($($nc(i)->getClassLoader()), $$new($ClassArray, {i}));
	$nc($System::out)->println($of(p));
}

void clinit$Test4nonJavaNames($Class* class$) {
	$assignStatic(Test4nonJavaNames::CLASS_NAME, "Test+Interface"_s);
	$assignStatic(Test4nonJavaNames::CLASS_FILE, $new($bytes, {
		(int8_t)202,
		(int8_t)254,
		(int8_t)186,
		(int8_t)190,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)49,
		(int8_t)0,
		(int8_t)7,
		(int8_t)7,
		(int8_t)0,
		(int8_t)5,
		(int8_t)7,
		(int8_t)0,
		(int8_t)6,
		(int8_t)1,
		(int8_t)0,
		(int8_t)10,
		(int8_t)83,
		(int8_t)111,
		(int8_t)117,
		(int8_t)114,
		(int8_t)99,
		(int8_t)101,
		(int8_t)70,
		(int8_t)105,
		(int8_t)108,
		(int8_t)101,
		(int8_t)1,
		(int8_t)0,
		(int8_t)19,
		(int8_t)84,
		(int8_t)101,
		(int8_t)115,
		(int8_t)116,
		(int8_t)43,
		(int8_t)73,
		(int8_t)110,
		(int8_t)116,
		(int8_t)101,
		(int8_t)114,
		(int8_t)102,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)46,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)1,
		(int8_t)0,
		(int8_t)14,
		(int8_t)84,
		(int8_t)101,
		(int8_t)115,
		(int8_t)116,
		(int8_t)43,
		(int8_t)73,
		(int8_t)110,
		(int8_t)116,
		(int8_t)101,
		(int8_t)114,
		(int8_t)102,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)1,
		(int8_t)0,
		(int8_t)16,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)79,
		(int8_t)98,
		(int8_t)106,
		(int8_t)101,
		(int8_t)99,
		(int8_t)116,
		(int8_t)6,
		(int8_t)1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)3,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)4
	}));
}

Test4nonJavaNames::Test4nonJavaNames() {
}

$Class* Test4nonJavaNames::load$($String* name, bool initialize) {
	$loadClass(Test4nonJavaNames, name, initialize, &_Test4nonJavaNames_ClassInfo_, clinit$Test4nonJavaNames, allocate$Test4nonJavaNames);
	return class$;
}

$Class* Test4nonJavaNames::class$ = nullptr;