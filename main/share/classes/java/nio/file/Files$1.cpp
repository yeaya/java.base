#include <java/nio/file/Files$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Files$1_FieldInfo_[] = {
	{"val$matcher", "Ljava/nio/file/PathMatcher;", nullptr, $FINAL | $SYNTHETIC, $field(Files$1, val$matcher)},
	{}
};

$MethodInfo _Files$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/PathMatcher;)V", nullptr, 0, $method(static_cast<void(Files$1::*)($PathMatcher*)>(&Files$1::init$))},
	{"accept", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Files$1_EnclosingMethodInfo_ = {
	"java.nio.file.Files",
	"newDirectoryStream",
	"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;"
};

$InnerClassInfo _Files$1_InnerClassesInfo_[] = {
	{"java.nio.file.Files$1", nullptr, nullptr, 0},
	{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Files$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Files$1",
	"java.lang.Object",
	"java.nio.file.DirectoryStream$Filter",
	_Files$1_FieldInfo_,
	_Files$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream$Filter<Ljava/nio/file/Path;>;",
	&_Files$1_EnclosingMethodInfo_,
	_Files$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$1($Class* clazz) {
	return $of($alloc(Files$1));
}

void Files$1::init$($PathMatcher* val$matcher) {
	$set(this, val$matcher, val$matcher);
}

bool Files$1::accept($Path* entry) {
	return $nc(this->val$matcher)->matches($($nc(entry)->getFileName()));
}

bool Files$1::accept(Object$* entry) {
	return this->accept($cast($Path, entry));
}

Files$1::Files$1() {
}

$Class* Files$1::load$($String* name, bool initialize) {
	$loadClass(Files$1, name, initialize, &_Files$1_ClassInfo_, allocate$Files$1);
	return class$;
}

$Class* Files$1::class$ = nullptr;

		} // file
	} // nio
} // java