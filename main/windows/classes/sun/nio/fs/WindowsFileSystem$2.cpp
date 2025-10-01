#include <sun/nio/fs/WindowsFileSystem$2.h>

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
#include <sun/nio/fs/WindowsFileSystem.h>
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
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileSystem$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$2, this$0)},
	{"val$pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$2, val$pattern)},
	{}
};

$MethodInfo _WindowsFileSystem$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsFileSystem;Ljava/util/regex/Pattern;)V", "()V", 0, $method(static_cast<void(WindowsFileSystem$2::*)($WindowsFileSystem*,$Pattern*)>(&WindowsFileSystem$2::init$))},
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileSystem$2_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsFileSystem",
	"getPathMatcher",
	"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
};

$InnerClassInfo _WindowsFileSystem$2_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileSystem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystem$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileSystem$2",
	"java.lang.Object",
	"java.nio.file.PathMatcher",
	_WindowsFileSystem$2_FieldInfo_,
	_WindowsFileSystem$2_MethodInfo_,
	nullptr,
	&_WindowsFileSystem$2_EnclosingMethodInfo_,
	_WindowsFileSystem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileSystem"
};

$Object* allocate$WindowsFileSystem$2($Class* clazz) {
	return $of($alloc(WindowsFileSystem$2));
}

void WindowsFileSystem$2::init$($WindowsFileSystem* this$0, $Pattern* val$pattern) {
	$set(this, this$0, this$0);
	$set(this, val$pattern, val$pattern);
}

bool WindowsFileSystem$2::matches($Path* path) {
	return $nc($($nc(this->val$pattern)->matcher($($nc(path)->toString()))))->matches();
}

WindowsFileSystem$2::WindowsFileSystem$2() {
}

$Class* WindowsFileSystem$2::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystem$2, name, initialize, &_WindowsFileSystem$2_ClassInfo_, allocate$WindowsFileSystem$2);
	return class$;
}

$Class* WindowsFileSystem$2::class$ = nullptr;

		} // fs
	} // nio
} // sun