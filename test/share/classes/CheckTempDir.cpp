#include <CheckTempDir.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _CheckTempDir_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckTempDir::*)()>(&CheckTempDir::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckTempDir::main))},
	{}
};

$ClassInfo _CheckTempDir_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CheckTempDir",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CheckTempDir_MethodInfo_
};

$Object* allocate$CheckTempDir($Class* clazz) {
	return $of($alloc(CheckTempDir));
}

void CheckTempDir::init$() {
}

void CheckTempDir::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, tmpdir, nullptr);
	if (($assign(tmpdir, $System::getProperty("java.io.tmpdir"_s))) == nullptr) {
		$throwNew($RuntimeException, "java.io.tmpdir is not initialized"_s);
	} else {
		$init($System);
		$nc($System::out)->println($$str({"checked tmpdir is not null: "_s, tmpdir}));
	}
}

CheckTempDir::CheckTempDir() {
}

$Class* CheckTempDir::load$($String* name, bool initialize) {
	$loadClass(CheckTempDir, name, initialize, &_CheckTempDir_ClassInfo_, allocate$CheckTempDir);
	return class$;
}

$Class* CheckTempDir::class$ = nullptr;