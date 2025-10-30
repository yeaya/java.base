#include <PackageMain.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Deprecated.h>
#include <java/lang/Error.h>
#include <java/lang/Package.h>
#include <java/lang/annotation/Annotation.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Deprecated = ::java::lang::Deprecated;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $Annotation = ::java::lang::annotation::Annotation;

$MethodInfo _PackageMain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackageMain::*)()>(&PackageMain::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PackageMain::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _PackageMain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PackageMain",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PackageMain_MethodInfo_
};

$Object* allocate$PackageMain($Class* clazz) {
	return $of($alloc(PackageMain));
}

void PackageMain::init$() {
}

void PackageMain::main($StringArray* args) {
	$load(PackageMain);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName("foo.bar.Baz"_s);
	$nc($System::out)->println($$str({"c="_s, c}));
	$nc($System::out)->println($$str({"cl="_s, $($nc(c)->getClassLoader())}));
	$var($Package, p, $nc(c)->getPackage());
	$nc($System::out)->println($$str({"p="_s, p}));
	$load($Deprecated);
	$var($Deprecated, d, $cast($Deprecated, $nc(p)->getAnnotation($Deprecated::class$)));
	if (d == nullptr) {
		$throwNew($Error);
	}
}

PackageMain::PackageMain() {
}

$Class* PackageMain::load$($String* name, bool initialize) {
	$loadClass(PackageMain, name, initialize, &_PackageMain_ClassInfo_, allocate$PackageMain);
	return class$;
}

$Class* PackageMain::class$ = nullptr;