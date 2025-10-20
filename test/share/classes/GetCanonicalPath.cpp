#include <GetCanonicalPath.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _GetCanonicalPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetCanonicalPath::*)()>(&GetCanonicalPath::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetCanonicalPath::main)), "java.lang.Exception"},
	{"testDriveLetter", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GetCanonicalPath::testDriveLetter)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetCanonicalPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetCanonicalPath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetCanonicalPath_MethodInfo_
};

$Object* allocate$GetCanonicalPath($Class* clazz) {
	return $of($alloc(GetCanonicalPath));
}

void GetCanonicalPath::init$() {
}

void GetCanonicalPath::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'\\') {
		testDriveLetter();
	}
}

void GetCanonicalPath::testDriveLetter() {
	$useLocalCurrentObjectStackCache();
	$var($String, path, $$new($File, "c:/"_s)->getCanonicalPath());
	if ($nc(path)->length() > 3) {
		$throwNew($RuntimeException, "Drive letter incorrectly represented"_s);
	}
}

GetCanonicalPath::GetCanonicalPath() {
}

$Class* GetCanonicalPath::load$($String* name, bool initialize) {
	$loadClass(GetCanonicalPath, name, initialize, &_GetCanonicalPath_ClassInfo_, allocate$GetCanonicalPath);
	return class$;
}

$Class* GetCanonicalPath::class$ = nullptr;