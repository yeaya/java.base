#include <java/io/FileFilter.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* FileFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileFilter, accept, bool, $File*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.FileFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(FileFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFilter);
	});
	return class$;
}

$Class* FileFilter::class$ = nullptr;

	} // io
} // java