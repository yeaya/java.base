#include <ToURI.h>

#include <java/io/File.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

$FieldInfo _ToURI_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(ToURI, log)},
	{"failures", "I", nullptr, $STATIC, $staticField(ToURI, failures)},
	{}
};

$MethodInfo _ToURI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToURI, init$, void)},
	{"go", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ToURI, go, void, $String*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ToURI, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ToURI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ToURI",
	"java.lang.Object",
	nullptr,
	_ToURI_FieldInfo_,
	_ToURI_MethodInfo_
};

$Object* allocate$ToURI($Class* clazz) {
	return $of($alloc(ToURI));
}

$PrintStream* ToURI::log = nullptr;
int32_t ToURI::failures = 0;

void ToURI::init$() {
}

void ToURI::go($String* fn) {
	$init(ToURI);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, fn));
	$nc(ToURI::log)->println();
	$nc(ToURI::log)->println($of(f));
	$var($URI, u, f->toURI());
	$nc(ToURI::log)->println($$str({"  --> "_s, u}));
	$var($File, g, $new($File, u));
	$nc(ToURI::log)->println($$str({"  --> "_s, g}));
	if (!$nc($(f->getAbsoluteFile()))->equals(g)) {
		$nc(ToURI::log)->println($$str({"ERROR: Expected "_s, f, ", got "_s, g}));
		++ToURI::failures;
	}
}

void ToURI::main($StringArray* args) {
	$init(ToURI);
	$useLocalCurrentObjectStackCache();
	go("foo"_s);
	go("foo/bar/baz"_s);
	go("/cdrom/#2"_s);
	go("My Computer"_s);
	go("/tmp"_s);
	go("/"_s);
	go(""_s);
	go(u"!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~Ð"_s);
	$init($File);
	if ($File::separatorChar == u'\\') {
		go("c:"_s);
		go("c:\\"_s);
		go("c:\\a\\b"_s);
		go("\\\\foo"_s);
		go("\\\\foo\\bar"_s);
	}
	if (ToURI::failures > 0) {
		$throwNew($Exception, $$str({"Tests failed: "_s, $$str(ToURI::failures)}));
	}
}

void clinit$ToURI($Class* class$) {
	$assignStatic(ToURI::log, $System::err);
	ToURI::failures = 0;
}

ToURI::ToURI() {
}

$Class* ToURI::load$($String* name, bool initialize) {
	$loadClass(ToURI, name, initialize, &_ToURI_ClassInfo_, clinit$ToURI, allocate$ToURI);
	return class$;
}

$Class* ToURI::class$ = nullptr;