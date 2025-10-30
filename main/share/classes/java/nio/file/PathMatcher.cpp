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

$CompoundAttribute _PathMatcher_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _PathMatcher_MethodInfo_[] = {
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PathMatcher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.PathMatcher",
	nullptr,
	nullptr,
	nullptr,
	_PathMatcher_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_PathMatcher_Annotations_
};

$Object* allocate$PathMatcher($Class* clazz) {
	return $of($alloc(PathMatcher));
}

$Class* PathMatcher::load$($String* name, bool initialize) {
	$loadClass(PathMatcher, name, initialize, &_PathMatcher_ClassInfo_, allocate$PathMatcher);
	return class$;
}

$Class* PathMatcher::class$ = nullptr;

		} // file
	} // nio
} // java