#include <GetParent.h>

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

$MethodInfo _GetParent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetParent::*)()>(&GetParent::init$))},
	{"check", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$StringArray*)>(&GetParent::check)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetParent::main)), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&GetParent::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&GetParent::testWin32)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetParent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetParent",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetParent_MethodInfo_
};

$Object* allocate$GetParent($Class* clazz) {
	return $of($alloc(GetParent));
}

void GetParent::init$() {
}

void GetParent::check($String* path, $StringArray* parents) {
	$var($File, f, $new($File, path));
	$var($String, p, nullptr);
	$init($System);
	$nc($System::err)->print($$str({path, ":"_s}));
	for (int32_t i = 0; i < $nc(parents)->length; ++i) {
		$assign(p, f->getParent());
		$nc($System::err)->print($$str({" ("_s, p, ")"_s}));
		if (p == nullptr) {
			$throwNew($Exception, $$str({"No parent for "_s, f}));
		}
		if (!$nc(p)->equals(parents->get(i))) {
			$throwNew($Exception, $$str({"Wrong parent for "_s, f, ": Expected "_s, parents->get(i), ", got "_s, p}));
		}
		$assign(f, $new($File, p));
	}
	if (f->getParent() != nullptr) {
		$throwNew($Exception, $$str({"Too many parents for "_s, path}));
	}
	$nc($System::err)->println();
}

void GetParent::testUnix() {
	check("foo"_s, $$new($StringArray, 0));
	check("./foo"_s, $$new($StringArray, {"."_s}));
	check("foo/bar/baz"_s, $$new($StringArray, {
		"foo/bar"_s,
		"foo"_s
	}));
	check("../../foo"_s, $$new($StringArray, {
		"../.."_s,
		".."_s
	}));
	check("foo//bar"_s, $$new($StringArray, {"foo"_s}));
	check("/foo/bar/baz.gorp"_s, $$new($StringArray, {
		"/foo/bar"_s,
		"/foo"_s,
		"/"_s
	}));
}

void GetParent::testWin32() {
	$init($System);
	$nc($System::err)->println("Win32"_s);
	check("foo"_s, $$new($StringArray, 0));
	check(".\\foo"_s, $$new($StringArray, {"."_s}));
	check("foo\\bar\\baz"_s, $$new($StringArray, {
		"foo\\bar"_s,
		"foo"_s
	}));
	check("..\\..\\foo"_s, $$new($StringArray, {
		"..\\.."_s,
		".."_s
	}));
	check("c:\\foo\\bar\\baz.xxx"_s, $$new($StringArray, {
		"c:\\foo\\bar"_s,
		"c:\\foo"_s,
		"c:\\"_s
	}));
}

void GetParent::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'/') {
		testUnix();
	}
	if ($File::separatorChar == u'\\') {
		testWin32();
	}
}

GetParent::GetParent() {
}

$Class* GetParent::load$($String* name, bool initialize) {
	$loadClass(GetParent, name, initialize, &_GetParent_ClassInfo_, allocate$GetParent);
	return class$;
}

$Class* GetParent::class$ = nullptr;