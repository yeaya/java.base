#include <UserDirChangedTest.h>

#include <java/io/File.h>
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

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _UserDirChangedTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UserDirChangedTest::*)()>(&UserDirChangedTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UserDirChangedTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _UserDirChangedTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UserDirChangedTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UserDirChangedTest_MethodInfo_
};

$Object* allocate$UserDirChangedTest($Class* clazz) {
	return $of($alloc(UserDirChangedTest));
}

void UserDirChangedTest::init$() {
}

void UserDirChangedTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyUserDir, "user.dir"_s);
	$var($String, userDirNew, "/home/a/b/c/"_s);
	$var($String, fileName, "./a"_s);
	$var($String, userDir, $System::getProperty(keyUserDir));
	$var($File, file, $new($File, fileName));
	$var($String, canFilePath, file->getCanonicalPath());
	$System::setProperty(keyUserDir, userDirNew);
	$var($String, newCanFilePath, file->getCanonicalPath());
	$nc($System::out)->format("%24s %48s%n"_s, $$new($ObjectArray, {
		$of("Canonical Path = "_s),
		$of(canFilePath)
	}));
	$nc($System::out)->format("%24s %48s%n"_s, $$new($ObjectArray, {
		$of("new Canonical Path = "_s),
		$of(newCanFilePath)
	}));
	if (!$nc(canFilePath)->equals(newCanFilePath)) {
		$throwNew($RuntimeException, "Changing property user.dir should have no effect on getCanonicalPath"_s);
	}
}

UserDirChangedTest::UserDirChangedTest() {
}

$Class* UserDirChangedTest::load$($String* name, bool initialize) {
	$loadClass(UserDirChangedTest, name, initialize, &_UserDirChangedTest_ClassInfo_, allocate$UserDirChangedTest);
	return class$;
}

$Class* UserDirChangedTest::class$ = nullptr;