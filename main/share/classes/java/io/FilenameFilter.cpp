#include <java/io/FilenameFilter.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* FilenameFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilenameFilter, accept, bool, $File*, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.FilenameFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(FilenameFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilenameFilter);
	});
	return class$;
}

$Class* FilenameFilter::class$ = nullptr;

	} // io
} // java