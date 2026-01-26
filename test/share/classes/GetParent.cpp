#include <GetParent.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetParent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetParent, init$, void)},
	{"check", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(GetParent, check, void, $String*, $StringArray*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetParent, main, void, $StringArray*), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $STATIC, $staticMethod(GetParent, testUnix, void), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $STATIC, $staticMethod(GetParent, testWin32, void), "java.lang.Exception"},
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
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, path));
	$var($String, p, nullptr);
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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