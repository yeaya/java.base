#include <java/nio/file/Files$AcceptAllFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef FILTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Files$AcceptAllFilter_FieldInfo_[] = {
	{"FILTER", "Ljava/nio/file/Files$AcceptAllFilter;", nullptr, $STATIC | $FINAL, $staticField(Files$AcceptAllFilter, FILTER)},
	{}
};

$MethodInfo _Files$AcceptAllFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Files$AcceptAllFilter::*)()>(&Files$AcceptAllFilter::init$))},
	{"accept", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Files$AcceptAllFilter_InnerClassesInfo_[] = {
	{"java.nio.file.Files$AcceptAllFilter", "java.nio.file.Files", "AcceptAllFilter", $PRIVATE | $STATIC},
	{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Files$AcceptAllFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Files$AcceptAllFilter",
	"java.lang.Object",
	"java.nio.file.DirectoryStream$Filter",
	_Files$AcceptAllFilter_FieldInfo_,
	_Files$AcceptAllFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream$Filter<Ljava/nio/file/Path;>;",
	nullptr,
	_Files$AcceptAllFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$AcceptAllFilter($Class* clazz) {
	return $of($alloc(Files$AcceptAllFilter));
}

Files$AcceptAllFilter* Files$AcceptAllFilter::FILTER = nullptr;

void Files$AcceptAllFilter::init$() {
}

bool Files$AcceptAllFilter::accept($Path* entry) {
	return true;
}

bool Files$AcceptAllFilter::accept(Object$* entry) {
	return this->accept($cast($Path, entry));
}

void clinit$Files$AcceptAllFilter($Class* class$) {
	$assignStatic(Files$AcceptAllFilter::FILTER, $new(Files$AcceptAllFilter));
}

Files$AcceptAllFilter::Files$AcceptAllFilter() {
}

$Class* Files$AcceptAllFilter::load$($String* name, bool initialize) {
	$loadClass(Files$AcceptAllFilter, name, initialize, &_Files$AcceptAllFilter_ClassInfo_, clinit$Files$AcceptAllFilter, allocate$Files$AcceptAllFilter);
	return class$;
}

$Class* Files$AcceptAllFilter::class$ = nullptr;

		} // file
	} // nio
} // java