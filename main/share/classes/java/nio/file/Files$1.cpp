#include <java/nio/file/Files$1.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;

namespace java {
	namespace nio {
		namespace file {

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
	$FieldInfo fieldInfos$$[] = {
		{"val$matcher", "Ljava/nio/file/PathMatcher;", nullptr, $FINAL | $SYNTHETIC, $field(Files$1, val$matcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/PathMatcher;)V", nullptr, 0, $method(Files$1, init$, void, $PathMatcher*)},
		{"accept", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(Files$1, accept, bool, $Path*)},
		{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Files$1, accept, bool, Object$*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.Files",
		"newDirectoryStream",
		"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$1", nullptr, nullptr, 0},
		{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$1",
		"java.lang.Object",
		"java.nio.file.DirectoryStream$Filter",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/file/DirectoryStream$Filter<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.Files"
	};
	$loadClass(Files$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Files$1);
	});
	return class$;
}

$Class* Files$1::class$ = nullptr;

		} // file
	} // nio
} // java