#include <sun/nio/fs/UnixFileSystem$3.h>
#include <java/nio/file/Path.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Pattern = ::java::util::regex::Pattern;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileSystem$3::init$($UnixFileSystem* this$0, $Pattern* val$pattern) {
	$set(this, this$0, this$0);
	$set(this, val$pattern, val$pattern);
}

bool UnixFileSystem$3::matches($Path* path) {
	$useLocalObjectStack();
	return $$nc($nc(this->val$pattern)->matcher($($nc(path)->toString())))->matches();
}

UnixFileSystem$3::UnixFileSystem$3() {
}

$Class* UnixFileSystem$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$3, this$0)},
		{"val$pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$3, val$pattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystem;Ljava/util/regex/Pattern;)V", "()V", 0, $method(UnixFileSystem$3, init$, void, $UnixFileSystem*, $Pattern*)},
		{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem$3, matches, bool, $Path*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystem",
		"getPathMatcher",
		"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystem$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystem$3",
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
		"sun.nio.fs.UnixFileSystem"
	};
	$loadClass(UnixFileSystem$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem$3);
	});
	return class$;
}

$Class* UnixFileSystem$3::class$ = nullptr;

		} // fs
	} // nio
} // sun