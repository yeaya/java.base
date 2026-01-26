#include <ToURL.h>

#include <java/io/File.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _ToURL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToURL, init$, void)},
	{"go", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ToURL, go, void, $String*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ToURL, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ToURL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ToURL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ToURL_MethodInfo_
};

$Object* allocate$ToURL($Class* clazz) {
	return $of($alloc(ToURL));
}

void ToURL::init$() {
}

void ToURL::go($String* fn) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, fn));
	$var($URL, u, f->toURL());
	$var($String, ufn, $nc(u)->getFile());
	if (!$nc(ufn)->endsWith("/"_s)) {
		$throwNew($Exception, $$str({u, " does not end with slash"_s}));
	}
	if ($nc(ufn)->endsWith("//"_s)) {
		$throwNew($Exception, $$str({u, " ends with two slashes"_s}));
	}
}

void ToURL::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'/') {
		go("/"_s);
	} else {
		if ($File::separatorChar == u'\\') {
			go("\\"_s);
			go("c:\\"_s);
		}
	}
}

ToURL::ToURL() {
}

$Class* ToURL::load$($String* name, bool initialize) {
	$loadClass(ToURL, name, initialize, &_ToURL_ClassInfo_, allocate$ToURL);
	return class$;
}

$Class* ToURL::class$ = nullptr;