#include <java/io/FileFilter.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {
$CompoundAttribute _FileFilter_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _FileFilter_MethodInfo_[] = {
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.FileFilter",
	nullptr,
	nullptr,
	nullptr,
	_FileFilter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_FileFilter_Annotations_
};

$Object* allocate$FileFilter($Class* clazz) {
	return $of($alloc(FileFilter));
}

$Class* FileFilter::load$($String* name, bool initialize) {
	$loadClass(FileFilter, name, initialize, &_FileFilter_ClassInfo_, allocate$FileFilter);
	return class$;
}

$Class* FileFilter::class$ = nullptr;

	} // io
} // java