#include <sun/nio/fs/WindowsFileSystem$2.h>
#include <java/nio/file/Path.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Pattern = ::java::util::regex::Pattern;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsFileSystem$2::init$($WindowsFileSystem* this$0, $Pattern* val$pattern) {
	$set(this, this$0, this$0);
	$set(this, val$pattern, val$pattern);
}

bool WindowsFileSystem$2::matches($Path* path) {
	$useLocalObjectStack();
	return $$nc($nc(this->val$pattern)->matcher($($nc(path)->toString())))->matches();
}

WindowsFileSystem$2::WindowsFileSystem$2() {
}

$Class* WindowsFileSystem$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$2, this$0)},
		{"val$pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$2, val$pattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsFileSystem;Ljava/util/regex/Pattern;)V", "()V", 0, $method(WindowsFileSystem$2, init$, void, $WindowsFileSystem*, $Pattern*)},
		{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystem$2, matches, bool, $Path*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsFileSystem",
		"getPathMatcher",
		"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystem$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileSystem$2",
		"java.lang.Object",
		"java.nio.file.PathMatcher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileSystem"
	};
	$loadClass(WindowsFileSystem$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystem$2);
	});
	return class$;
}

$Class* WindowsFileSystem$2::class$ = nullptr;

		} // fs
	} // nio
} // sun