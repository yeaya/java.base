#include <java/nio/file/DirectoryStream$Filter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;

namespace java {
	namespace nio {
		namespace file {
$CompoundAttribute _DirectoryStream$Filter_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _DirectoryStream$Filter_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DirectoryStream$Filter_InnerClassesInfo_[] = {
	{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DirectoryStream$Filter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.DirectoryStream$Filter",
	nullptr,
	nullptr,
	nullptr,
	_DirectoryStream$Filter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_DirectoryStream$Filter_InnerClassesInfo_,
	_DirectoryStream$Filter_Annotations_,
	nullptr,
	nullptr,
	"java.nio.file.DirectoryStream"
};

$Object* allocate$DirectoryStream$Filter($Class* clazz) {
	return $of($alloc(DirectoryStream$Filter));
}

$Class* DirectoryStream$Filter::load$($String* name, bool initialize) {
	$loadClass(DirectoryStream$Filter, name, initialize, &_DirectoryStream$Filter_ClassInfo_, allocate$DirectoryStream$Filter);
	return class$;
}

$Class* DirectoryStream$Filter::class$ = nullptr;

		} // file
	} // nio
} // java