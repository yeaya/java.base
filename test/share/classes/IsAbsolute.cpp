#include <IsAbsolute.h>

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

$MethodInfo _IsAbsolute_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsAbsolute::*)()>(&IsAbsolute::init$))},
	{"ck", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,bool)>(&IsAbsolute::ck)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsAbsolute::main)), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IsAbsolute::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IsAbsolute::testWin32)), "java.lang.Exception"},
	{}
};

$ClassInfo _IsAbsolute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsAbsolute",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsAbsolute_MethodInfo_
};

$Object* allocate$IsAbsolute($Class* clazz) {
	return $of($alloc(IsAbsolute));
}

void IsAbsolute::init$() {
}

void IsAbsolute::ck($String* path, bool ans) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, path));
	bool x = f->isAbsolute();
	if (x != ans) {
		$throwNew($Exception, $$str({path, ": expected "_s, $$str(ans), ", got "_s, $$str(x)}));
	}
	$init($System);
	$nc($System::err)->println($$str({path, " ==> "_s, $$str(x)}));
}

void IsAbsolute::testWin32() {
	ck("/foo/bar"_s, false);
	ck("\\foo\\bar"_s, false);
	ck("c:\\foo\\bar"_s, true);
	ck("c:/foo/bar"_s, true);
	ck("c:foo\\bar"_s, false);
	ck("\\\\foo\\bar"_s, true);
}

void IsAbsolute::testUnix() {
	ck("foo"_s, false);
	ck("foo/bar"_s, false);
	ck("/foo"_s, true);
	ck("/foo/bar"_s, true);
}

void IsAbsolute::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'\\') {
		testWin32();
	}
	if ($File::separatorChar == u'/') {
		testUnix();
	}
}

IsAbsolute::IsAbsolute() {
}

$Class* IsAbsolute::load$($String* name, bool initialize) {
	$loadClass(IsAbsolute, name, initialize, &_IsAbsolute_ClassInfo_, allocate$IsAbsolute);
	return class$;
}

$Class* IsAbsolute::class$ = nullptr;