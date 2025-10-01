#include <sun/nio/fs/UnixFileSystem$3.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileSystem$3_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$3, this$0)},
	{"val$pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$3, val$pattern)},
	{}
};

$MethodInfo _UnixFileSystem$3_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Ljava/util/regex/Pattern;)V", "()V", 0, $method(static_cast<void(UnixFileSystem$3::*)($UnixFileSystem*,$Pattern*)>(&UnixFileSystem$3::init$))},
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UnixFileSystem$3_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystem",
	"getPathMatcher",
	"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
};

$InnerClassInfo _UnixFileSystem$3_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystem$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystem$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystem$3",
	"java.lang.Object",
	"java.nio.file.PathMatcher",
	_UnixFileSystem$3_FieldInfo_,
	_UnixFileSystem$3_MethodInfo_,
	nullptr,
	&_UnixFileSystem$3_EnclosingMethodInfo_,
	_UnixFileSystem$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystem"
};

$Object* allocate$UnixFileSystem$3($Class* clazz) {
	return $of($alloc(UnixFileSystem$3));
}

void UnixFileSystem$3::init$($UnixFileSystem* this$0, $Pattern* val$pattern) {
	$set(this, this$0, this$0);
	$set(this, val$pattern, val$pattern);
}

bool UnixFileSystem$3::matches($Path* path) {
	return $nc($($nc(this->val$pattern)->matcher($($nc(path)->toString()))))->matches();
}

UnixFileSystem$3::UnixFileSystem$3() {
}

$Class* UnixFileSystem$3::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem$3, name, initialize, &_UnixFileSystem$3_ClassInfo_, allocate$UnixFileSystem$3);
	return class$;
}

$Class* UnixFileSystem$3::class$ = nullptr;

		} // fs
	} // nio
} // sun