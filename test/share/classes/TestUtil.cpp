#include <TestUtil.h>

#include <TestUtil$1.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $TestUtil$1 = ::TestUtil$1;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;

$MethodInfo _TestUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestUtil::*)()>(&TestUtil::init$))},
	{"createDirectoryWithLongPath", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)($Path*)>(&TestUtil::createDirectoryWithLongPath)), "java.io.IOException"},
	{"createTemporaryDirectory", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)($String*)>(&TestUtil::createTemporaryDirectory)), "java.io.IOException"},
	{"createTemporaryDirectory", "()Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)()>(&TestUtil::createTemporaryDirectory)), "java.io.IOException"},
	{"deleteUnchecked", "(Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*)>(&TestUtil::deleteUnchecked))},
	{"removeAll", "(Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*)>(&TestUtil::removeAll)), "java.io.IOException"},
	{"supportsLinks", "(Ljava/nio/file/Path;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Path*)>(&TestUtil::supportsLinks))},
	{}
};

$InnerClassInfo _TestUtil_InnerClassesInfo_[] = {
	{"TestUtil$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestUtil_MethodInfo_,
	nullptr,
	nullptr,
	_TestUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestUtil$1"
};

$Object* allocate$TestUtil($Class* clazz) {
	return $of($alloc(TestUtil));
}

void TestUtil::init$() {
}

$Path* TestUtil::createTemporaryDirectory($String* where) {
	$var($Path, dir, $nc($($FileSystems::getDefault()))->getPath(where, $$new($StringArray, 0)));
	return $Files::createTempDirectory(dir, "name"_s, $$new($FileAttributeArray, 0));
}

$Path* TestUtil::createTemporaryDirectory() {
	return $Files::createTempDirectory("name"_s, $$new($FileAttributeArray, 0));
}

void TestUtil::removeAll($Path* dir) {
	$Files::walkFileTree(dir, $$new($TestUtil$1));
}

void TestUtil::deleteUnchecked($Path* file) {
	try {
		$Files::delete$(file);
	} catch ($IOException&) {
		$var($IOException, exc, $catch());
		$init($System);
		$nc($System::err)->format("Unable to delete %s: %s\n"_s, $$new($ObjectArray, {
			$of(file),
			$of(exc)
		}));
	}
}

$Path* TestUtil::createDirectoryWithLongPath($Path* dir$renamed) {
	$var($Path, dir, dir$renamed);
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < 240; ++i) {
		sb->append(u'A');
	}
	$var($String, name, sb->toString());
	do {
		$assign(dir, $nc($($nc(dir)->resolve(name)))->resolve("."_s));
		$Files::createDirectory(dir, $$new($FileAttributeArray, 0));
	} while ($nc($($nc(dir)->toString()))->length() < 2048);
	return dir;
}

bool TestUtil::supportsLinks($Path* dir) {
	$var($Path, link, $nc(dir)->resolve("testlink"_s));
	$var($Path, target, dir->resolve("testtarget"_s));
	try {
		$Files::createSymbolicLink(link, target, $$new($FileAttributeArray, 0));
		$Files::delete$(link);
		return true;
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, x, $catch());
		return false;
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		return false;
	}
	$shouldNotReachHere();
}

TestUtil::TestUtil() {
}

$Class* TestUtil::load$($String* name, bool initialize) {
	$loadClass(TestUtil, name, initialize, &_TestUtil_ClassInfo_, allocate$TestUtil);
	return class$;
}

$Class* TestUtil::class$ = nullptr;