#include <UninitializedParent.h>

#include <UninitializedParent$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

$FieldInfo _UninitializedParent_FieldInfo_[] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $staticField(UninitializedParent, loader)},
	{}
};

$MethodInfo _UninitializedParent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UninitializedParent::*)()>(&UninitializedParent::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UninitializedParent::main)), "java.lang.Exception"},
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
	} catch ($SecurityException&) {
		$catch();
	}
	$System::gc();
	$System::runFinalization();
	$init(UninitializedParent);
	if (UninitializedParent::loader != nullptr) {
		try {
			$var($URLClassLoader, child, $URLClassLoader::newInstance($$new($URLArray, 0), UninitializedParent::loader));
			$throwNew($RuntimeException, "Test Failed!"_s);
		} catch ($SecurityException&) {
			$var($SecurityException, se, $catch());
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