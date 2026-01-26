#include <NoName.h>

#include <NoName$InMemoryClassLoader.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <jcpp.h>

#undef TYPE

using $NoName$InMemoryClassLoader = ::NoName$InMemoryClassLoader;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;

$FieldInfo _NoName_FieldInfo_[] = {
	{"NoName_bytes", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoName, NoName_bytes)},
	{"loader", "LNoName$InMemoryClassLoader;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoName, loader)},
	{"noName", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(NoName, noName)},
	{}
};

$MethodInfo _NoName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NoName, init$, void), "java.lang.ClassNotFoundException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(NoName, main, void, $StringArray*), "java.lang.NoSuchMethodException,java.io.IOException,java.lang.ClassNotFoundException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NoName, run, void), "java.lang.NoSuchMethodException"},
	{}
};

$InnerClassInfo _NoName_InnerClassesInfo_[] = {
	{"NoName$InMemoryClassLoader", "NoName", "InMemoryClassLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NoName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NoName",
	"java.lang.Object",
	nullptr,
	_NoName_FieldInfo_,
	_NoName_MethodInfo_,
	nullptr,
	nullptr,
	_NoName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NoName$InMemoryClassLoader"
};

$Object* allocate$NoName($Class* clazz) {
	return $of($alloc(NoName));
}

$bytes* NoName::NoName_bytes = nullptr;
$NoName$InMemoryClassLoader* NoName::loader = nullptr;

void NoName::init$() {
	$set(this, noName, $nc(NoName::loader)->defineClass("EmptyName"_s, NoName::NoName_bytes));
}

void NoName::main($StringArray* args) {
	$init(NoName);
	$$new(NoName)->run();
}

void NoName::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* cls = this->noName;
	$nc($System::err)->println($$str({"Trying "_s, cls}));
	$init($Integer);
	$var($Method, method, $nc(cls)->getMethod("m"_s, $$new($ClassArray, {
		$Integer::TYPE,
		$Integer::TYPE
	})));
	$var($ParameterArray, params, $nc(method)->getParameters());
	$nc($System::err)->println($$str({"Name "_s, $($nc($nc(params)->get(0))->getName())}));
	$nc($System::err)->println($$str({"Name "_s, $($nc($nc(params)->get(1))->getName())}));
}

void clinit$NoName($Class* class$) {
	$assignStatic(NoName::NoName_bytes, $new($bytes, {
		(int8_t)-54,
		(int8_t)-2,
		(int8_t)-70,
		(int8_t)-66,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)52,
		(int8_t)0,
		(int8_t)18,
		(int8_t)10,
		(int8_t)0,
		(int8_t)3,
		(int8_t)0,
		(int8_t)15,
		(int8_t)7,
		(int8_t)0,
		(int8_t)16,
		(int8_t)7,
		(int8_t)0,
		(int8_t)17,
		(int8_t)1,
		(int8_t)0,
		(int8_t)6,
		(int8_t)60,
		(int8_t)105,
		(int8_t)110,
		(int8_t)105,
		(int8_t)116,
		(int8_t)62,
		(int8_t)1,
		(int8_t)0,
		(int8_t)3,
		(int8_t)40,
		(int8_t)41,
		(int8_t)86,
		(int8_t)1,
		(int8_t)0,
		(int8_t)4,
		(int8_t)67,
		(int8_t)111,
		(int8_t)100,
		(int8_t)101,
		(int8_t)1,
		(int8_t)0,
		(int8_t)15,
		(int8_t)76,
		(int8_t)105,
		(int8_t)110,
		(int8_t)101,
		(int8_t)78,
		(int8_t)117,
		(int8_t)109,
		(int8_t)98,
		(int8_t)101,
		(int8_t)114,
		(int8_t)84,
		(int8_t)97,
		(int8_t)98,
		(int8_t)108,
		(int8_t)101,
		(int8_t)1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)109,
		(int8_t)1,
		(int8_t)0,
		(int8_t)5,
		(int8_t)40,
		(int8_t)73,
		(int8_t)73,
		(int8_t)41,
		(int8_t)86,
		(int8_t)1,
		(int8_t)0,
		(int8_t)16,
		(int8_t)77,
		(int8_t)101,
		(int8_t)116,
		(int8_t)104,
		(int8_t)111,
		(int8_t)100,
		(int8_t)80,
		(int8_t)97,
		(int8_t)114,
		(int8_t)97,
		(int8_t)109,
		(int8_t)101,
		(int8_t)116,
		(int8_t)101,
		(int8_t)114,
		(int8_t)115,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)98,
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
		(int8_t)14,
		(int8_t)69,
		(int8_t)109,
		(int8_t)112,
		(int8_t)116,
		(int8_t)121,
		(int8_t)78,
		(int8_t)97,
		(int8_t)109,
		(int8_t)101,
		(int8_t)46,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)12,
		(int8_t)0,
		(int8_t)4,
		(int8_t)0,
		(int8_t)5,
		(int8_t)1,
		(int8_t)0,
		(int8_t)9,
		(int8_t)69,
		(int8_t)109,
		(int8_t)112,
		(int8_t)116,
		(int8_t)121,
		(int8_t)78,
		(int8_t)97,
		(int8_t)109,
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
		(int8_t)0,
		(int8_t)33,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)3,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)4,
		(int8_t)0,
		(int8_t)5,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)6,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)29,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)5,
		(int8_t)42,
		(int8_t)-73,
		(int8_t)0,
		(int8_t)1,
		(int8_t)-79,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)7,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)6,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)8,
		(int8_t)0,
		(int8_t)9,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)6,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)25,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)3,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)-79,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)7,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)6,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)10,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)9,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)12,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0,
		(int8_t)13,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)14
	}));
	$assignStatic(NoName::loader, $new($NoName$InMemoryClassLoader));
}

NoName::NoName() {
}

$Class* NoName::load$($String* name, bool initialize) {
	$loadClass(NoName, name, initialize, &_NoName_ClassInfo_, clinit$NoName, allocate$NoName);
	return class$;
}

$Class* NoName::class$ = nullptr;