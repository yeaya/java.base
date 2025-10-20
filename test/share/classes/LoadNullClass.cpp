#include <LoadNullClass.h>

#include <FileClassLoader.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $FileClassLoader = ::FileClassLoader;
using $URLArray = $Array<::java::net::URL>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _LoadNullClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LoadNullClass::*)()>(&LoadNullClass::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LoadNullClass::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _LoadNullClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LoadNullClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LoadNullClass_MethodInfo_
};

$Object* allocate$LoadNullClass($Class* clazz) {
	return $of($alloc(LoadNullClass));
}

void LoadNullClass::init$() {
}

void LoadNullClass::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s))));
	$var($FileClassLoader, cl, $new($FileClassLoader, $$new($URLArray, {$$new($URL, $$str({"file:"_s, $(f->getAbsolutePath())}))})));
	cl->testFindLoadedClass(nullptr);
}

LoadNullClass::LoadNullClass() {
}

$Class* LoadNullClass::load$($String* name, bool initialize) {
	$loadClass(LoadNullClass, name, initialize, &_LoadNullClass_ClassInfo_, allocate$LoadNullClass);
	return class$;
}

$Class* LoadNullClass::class$ = nullptr;