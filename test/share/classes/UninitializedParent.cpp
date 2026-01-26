#include <UninitializedParent.h>

#include <UninitializedParent$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $UninitializedParent$1 = ::UninitializedParent$1;
using $URLArray = $Array<::java::net::URL>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URLClassLoader = ::java::net::URLClassLoader;

$FieldInfo _UninitializedParent_FieldInfo_[] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $staticField(UninitializedParent, loader)},
	{}
};

$MethodInfo _UninitializedParent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UninitializedParent, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UninitializedParent, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _UninitializedParent_InnerClassesInfo_[] = {
	{"UninitializedParent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UninitializedParent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UninitializedParent",
	"java.lang.Object",
	nullptr,
	_UninitializedParent_FieldInfo_,
	_UninitializedParent_MethodInfo_,
	nullptr,
	nullptr,
	_UninitializedParent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"UninitializedParent$1"
};

$Object* allocate$UninitializedParent($Class* clazz) {
	return $of($alloc(UninitializedParent));
}

$ClassLoader* UninitializedParent::loader = nullptr;

void UninitializedParent::init$() {
}

void UninitializedParent::main($StringArray* args) {
	$load(UninitializedParent);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	try {
		$new($UninitializedParent$1, nullptr);
	} catch ($SecurityException& exc) {
	}
	$System::gc();
	$System::runFinalization();
	$init(UninitializedParent);
	if (UninitializedParent::loader != nullptr) {
		try {
			$var($URLClassLoader, child, $URLClassLoader::newInstance($$new($URLArray, 0), UninitializedParent::loader));
			$throwNew($RuntimeException, "Test Failed!"_s);
		} catch ($SecurityException& se) {
			$nc($System::out)->println("Test Passed: Exception thrown"_s);
		}
	} else {
		$nc($System::out)->println("Test Passed: Loader is null"_s);
	}
}

UninitializedParent::UninitializedParent() {
}

$Class* UninitializedParent::load$($String* name, bool initialize) {
	$loadClass(UninitializedParent, name, initialize, &_UninitializedParent_ClassInfo_, allocate$UninitializedParent);
	return class$;
}

$Class* UninitializedParent::class$ = nullptr;