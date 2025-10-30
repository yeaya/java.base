#include <B5086147.h>

#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;

$MethodInfo _B5086147_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B5086147::*)()>(&B5086147::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($StringArray*)>(&B5086147::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B5086147_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B5086147",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B5086147_MethodInfo_
};

$Object* allocate$B5086147($Class* clazz) {
	return $of($alloc(B5086147));
}

void B5086147::init$() {
}

void B5086147::main($StringArray* aaParamters) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, "\\\\somehost\\someshare\\somefile.ext"_s));
	$var($URI, uri, file->toURI());
	if (!($nc($($nc($($nc(uri)->toURL()))->toURI()))->equals(uri))) {
		$throwNew($RuntimeException, "Test failed : (uri.toURL().toURI().equals(uri)) isn\'t hold"_s);
	}
}

B5086147::B5086147() {
}

$Class* B5086147::load$($String* name, bool initialize) {
	$loadClass(B5086147, name, initialize, &_B5086147_ClassInfo_, allocate$B5086147);
	return class$;
}

$Class* B5086147::class$ = nullptr;