#include <AccessDenied.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _AccessDenied_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessDenied::*)()>(&AccessDenied::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AccessDenied::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AccessDenied_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AccessDenied",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AccessDenied_MethodInfo_
};

$Object* allocate$AccessDenied($Class* clazz) {
	return $of($alloc(AccessDenied));
}

void AccessDenied::init$() {
}

void AccessDenied::main($StringArray* args) {
	$var($File, dir, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "hugo"_s));
	dir->deleteOnExit();
	if (!dir->mkdir()) {
		$throwNew($Exception, $$str({"Could not create directory:"_s, dir}));
	}
	$nc($System::out)->println($$str({"Created directory:"_s, dir}));
	$var($File, file, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "hugo"_s));
	bool result = file->createNewFile();
	$nc($System::out)->println($$str({"CreateNewFile() for:"_s, file, " returned:"_s, $$str(result)}));
	if (result) {
		$throwNew($Exception, "Expected createNewFile() to return false but it returned true"_s);
	}
}

AccessDenied::AccessDenied() {
}

$Class* AccessDenied::load$($String* name, bool initialize) {
	$loadClass(AccessDenied, name, initialize, &_AccessDenied_ClassInfo_, allocate$AccessDenied);
	return class$;
}

$Class* AccessDenied::class$ = nullptr;