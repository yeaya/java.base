#include <java/io/FilenameFilter.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$CompoundAttribute _FilenameFilter_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _FilenameFilter_MethodInfo_[] = {
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FilenameFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.FilenameFilter",
	nullptr,
	nullptr,
	nullptr,
	_FilenameFilter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_FilenameFilter_Annotations_
};

$Object* allocate$FilenameFilter($Class* clazz) {
	return $of($alloc(FilenameFilter));
}

$Class* FilenameFilter::load$($String* name, bool initialize) {
	$loadClass(FilenameFilter, name, initialize, &_FilenameFilter_ClassInfo_, allocate$FilenameFilter);
	return class$;
}

$Class* FilenameFilter::class$ = nullptr;

	} // io
} // java