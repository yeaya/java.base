#include <Mkdir.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Mkdir_FieldInfo_[] = {
	{"a", "Ljava/io/File;", nullptr, $STATIC, $staticField(Mkdir, a)},
	{"a_dot", "Ljava/io/File;", nullptr, $STATIC, $staticField(Mkdir, a_dot)},
	{"a_dot_b", "Ljava/io/File;", nullptr, $STATIC, $staticField(Mkdir, a_dot_b)},
	{}
};

$MethodInfo _Mkdir_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Mkdir, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Mkdir, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Mkdir_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Mkdir",
	"java.lang.Object",
	nullptr,
	_Mkdir_FieldInfo_,
	_Mkdir_MethodInfo_
};

$Object* allocate$Mkdir($Class* clazz) {
	return $of($alloc(Mkdir));
}

$File* Mkdir::a = nullptr;
$File* Mkdir::a_dot = nullptr;
$File* Mkdir::a_dot_b = nullptr;

void Mkdir::init$() {
}

void Mkdir::main($StringArray* args) {
	$init(Mkdir);
	$nc(Mkdir::a_dot_b)->deleteOnExit();
	if (!$nc(Mkdir::a_dot_b)->mkdirs()) {
		$throwNew($Exception, "Test failed"_s);
	}
}

void clinit$Mkdir($Class* class$) {
	$assignStatic(Mkdir::a, $new($File, "a"_s));
	$assignStatic(Mkdir::a_dot, $new($File, Mkdir::a, "."_s));
	$assignStatic(Mkdir::a_dot_b, $new($File, Mkdir::a_dot, "b"_s));
}

Mkdir::Mkdir() {
}

$Class* Mkdir::load$($String* name, bool initialize) {
	$loadClass(Mkdir, name, initialize, &_Mkdir_ClassInfo_, clinit$Mkdir, allocate$Mkdir);
	return class$;
}

$Class* Mkdir::class$ = nullptr;