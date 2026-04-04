#include <UserDirChangedTest.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void UserDirChangedTest::init$() {
}

void UserDirChangedTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, keyUserDir, "user.dir"_s);
	$var($String, userDirNew, "/home/a/b/c/"_s);
	$var($String, fileName, "./a"_s);
	$var($String, userDir, $System::getProperty(keyUserDir));
	$var($File, file, $new($File, fileName));
	$var($String, canFilePath, file->getCanonicalPath());
	$System::setProperty(keyUserDir, userDirNew);
	$var($String, newCanFilePath, file->getCanonicalPath());
	$nc($System::out)->format("%24s %48s%n"_s, $$new($ObjectArray, {
		"Canonical Path = "_s,
		canFilePath
	}));
	$System::out->format("%24s %48s%n"_s, $$new($ObjectArray, {
		"new Canonical Path = "_s,
		newCanFilePath
	}));
	if (!$nc(canFilePath)->equals(newCanFilePath)) {
		$throwNew($RuntimeException, "Changing property user.dir should have no effect on getCanonicalPath"_s);
	}
}

UserDirChangedTest::UserDirChangedTest() {
}

$Class* UserDirChangedTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UserDirChangedTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UserDirChangedTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UserDirChangedTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UserDirChangedTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserDirChangedTest);
	});
	return class$;
}

$Class* UserDirChangedTest::class$ = nullptr;