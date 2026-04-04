#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$Class* DirectoryStream$Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(DirectoryStream$Filter, accept, bool, Object$*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.DirectoryStream$Filter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.nio.file.DirectoryStream"
	};
	$loadClass(DirectoryStream$Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectoryStream$Filter);
	});
	return class$;
}

$Class* DirectoryStream$Filter::class$ = nullptr;

		} // file
	} // nio
} // java