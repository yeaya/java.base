#include <TestUtil$1.h>

#include <TestUtil.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

#undef CONTINUE

using $TestUtil = ::TestUtil;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

$MethodInfo _TestUtil$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestUtil$1::*)()>(&TestUtil$1::init$))},
	{"postVisitDirectory", "(Ljava/nio/file/Path;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"postVisitDirectory", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"preVisitDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"visitFileFailed", "(Ljava/nio/file/Path;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFileFailed", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _TestUtil$1_EnclosingMethodInfo_ = {
	"TestUtil",
	"removeAll",
	"(Ljava/nio/file/Path;)V"
};

$InnerClassInfo _TestUtil$1_InnerClassesInfo_[] = {
	{"TestUtil$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUtil$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestUtil$1",
	"java.lang.Object",
	"java.nio.file.FileVisitor",
	nullptr,
	_TestUtil$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/FileVisitor<Ljava/nio/file/Path;>;",
	&_TestUtil$1_EnclosingMethodInfo_,
	_TestUtil$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestUtil"
};

$Object* allocate$TestUtil$1($Class* clazz) {
	return $of($alloc(TestUtil$1));
}

void TestUtil$1::init$() {
}

$FileVisitResult* TestUtil$1::preVisitDirectory($Path* dir, $BasicFileAttributes* attrs) {
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* TestUtil$1::visitFile($Path* file, $BasicFileAttributes* attrs) {
	$useLocalCurrentObjectStackCache();
	try {
		$Files::delete$(file);
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		$init($System);
		$nc($System::err)->format("Unable to delete %s: %s\n"_s, $$new($ObjectArray, {
			$of(file),
			$of(x)
		}));
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* TestUtil$1::postVisitDirectory($Path* dir, $IOException* exc) {
	$useLocalCurrentObjectStackCache();
	try {
		$Files::delete$(dir);
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		$init($System);
		$nc($System::err)->format("Unable to delete %s: %s\n"_s, $$new($ObjectArray, {
			$of(dir),
			$of(x)
		}));
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* TestUtil$1::visitFileFailed($Path* file, $IOException* exc) {
	$init($System);
	$nc($System::err)->format("Unable to visit %s: %s\n"_s, $$new($ObjectArray, {
		$of(file),
		$of(exc)
	}));
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* TestUtil$1::postVisitDirectory(Object$* dir, $IOException* exc) {
	return this->postVisitDirectory($cast($Path, dir), exc);
}

$FileVisitResult* TestUtil$1::visitFileFailed(Object$* file, $IOException* exc) {
	return this->visitFileFailed($cast($Path, file), exc);
}

$FileVisitResult* TestUtil$1::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

$FileVisitResult* TestUtil$1::preVisitDirectory(Object$* dir, $BasicFileAttributes* attrs) {
	return this->preVisitDirectory($cast($Path, dir), attrs);
}

TestUtil$1::TestUtil$1() {
}

$Class* TestUtil$1::load$($String* name, bool initialize) {
	$loadClass(TestUtil$1, name, initialize, &_TestUtil$1_ClassInfo_, allocate$TestUtil$1);
	return class$;
}

$Class* TestUtil$1::class$ = nullptr;