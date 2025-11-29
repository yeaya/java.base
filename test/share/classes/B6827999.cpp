#include <B6827999.h>

#include <B6827999$MyURLClassLoader.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $B6827999$MyURLClassLoader = ::B6827999$MyURLClassLoader;
using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$MethodInfo _B6827999_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6827999::*)()>(&B6827999::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6827999::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _B6827999_InnerClassesInfo_[] = {
	{"B6827999$MyURLClassLoader", "B6827999", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _B6827999_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6827999",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6827999_MethodInfo_,
	nullptr,
	nullptr,
	_B6827999_InnerClassesInfo_,
	nullptr,
	nullptr,
	"B6827999$MyURLClassLoader"
};

$Object* allocate$B6827999($Class* clazz) {
	return $of($alloc(B6827999));
}

void B6827999::init$() {
}

void B6827999::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URLArray, urls, $new($URLArray, {$$new($URL, "http://foobar.jar"_s)}));
	$var($B6827999$MyURLClassLoader, ucl, $new($B6827999$MyURLClassLoader, urls));
	ucl->addURL($$new($URL, "http://foo/bar.jar"_s));
	$assign(urls, ucl->getURLs());
	if ($nc(urls)->length != 2) {
		$throwNew($RuntimeException, "Failed:(1)"_s);
	}
	ucl->close();
	ucl->addURL($$new($URL, "http://foo.bar/bar.jar"_s));
	if ($nc($(ucl->getURLs()))->length != 2) {
		$throwNew($RuntimeException, "Failed:(2)"_s);
	}
}

B6827999::B6827999() {
}

$Class* B6827999::load$($String* name, bool initialize) {
	$loadClass(B6827999, name, initialize, &_B6827999_ClassInfo_, allocate$B6827999);
	return class$;
}

$Class* B6827999::class$ = nullptr;