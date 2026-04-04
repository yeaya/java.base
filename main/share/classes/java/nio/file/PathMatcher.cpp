#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace nio {
		namespace file {

$Class* PathMatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathMatcher, matches, bool, $Path*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.PathMatcher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(PathMatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathMatcher);
	});
	return class$;
}

$Class* PathMatcher::class$ = nullptr;

		} // file
	} // nio
} // java