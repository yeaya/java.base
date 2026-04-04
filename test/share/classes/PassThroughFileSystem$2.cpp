#include <PassThroughFileSystem$2.h>
#include <PassThroughFileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <jcpp.h>

using $PassThroughFileSystem = ::PassThroughFileSystem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;

void PassThroughFileSystem$2::init$($PassThroughFileSystem* this$0, $PathMatcher* val$matcher) {
	$set(this, this$0, this$0);
	$set(this, val$matcher, val$matcher);
}

bool PassThroughFileSystem$2::matches($Path* path) {
	return $nc(this->val$matcher)->matches($($PassThroughFileSystem::unwrap(path)));
}

PassThroughFileSystem$2::PassThroughFileSystem$2() {
}

$Class* PassThroughFileSystem$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPassThroughFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$2, this$0)},
		{"val$matcher", "Ljava/nio/file/PathMatcher;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$2, val$matcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPassThroughFileSystem;Ljava/nio/file/PathMatcher;)V", "()V", 0, $method(PassThroughFileSystem$2, init$, void, $PassThroughFileSystem*, $PathMatcher*)},
		{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$2, matches, bool, $Path*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PassThroughFileSystem",
		"getPathMatcher",
		"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PassThroughFileSystem$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PassThroughFileSystem$2",
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
		"PassThroughFileSystem"
	};
	$loadClass(PassThroughFileSystem$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PassThroughFileSystem$2);
	});
	return class$;
}

$Class* PassThroughFileSystem$2::class$ = nullptr;