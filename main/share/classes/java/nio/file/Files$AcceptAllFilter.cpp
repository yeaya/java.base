#include <java/nio/file/Files$AcceptAllFilter.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef FILTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace nio {
		namespace file {

Files$AcceptAllFilter* Files$AcceptAllFilter::FILTER = nullptr;

void Files$AcceptAllFilter::init$() {
}

bool Files$AcceptAllFilter::accept($Path* entry) {
	return true;
}

bool Files$AcceptAllFilter::accept(Object$* entry) {
	return this->accept($cast($Path, entry));
}

void Files$AcceptAllFilter::clinit$($Class* clazz) {
	$assignStatic(Files$AcceptAllFilter::FILTER, $new(Files$AcceptAllFilter));
}

Files$AcceptAllFilter::Files$AcceptAllFilter() {
}

$Class* Files$AcceptAllFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FILTER", "Ljava/nio/file/Files$AcceptAllFilter;", nullptr, $STATIC | $FINAL, $staticField(Files$AcceptAllFilter, FILTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Files$AcceptAllFilter, init$, void)},
		{"accept", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(Files$AcceptAllFilter, accept, bool, $Path*)},
		{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Files$AcceptAllFilter, accept, bool, Object$*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$AcceptAllFilter", "java.nio.file.Files", "AcceptAllFilter", $PRIVATE | $STATIC},
		{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$AcceptAllFilter",
		"java.lang.Object",
		"java.nio.file.DirectoryStream$Filter",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/file/DirectoryStream$Filter<Ljava/nio/file/Path;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.Files"
	};
	$loadClass(Files$AcceptAllFilter, name, initialize, &classInfo$$, Files$AcceptAllFilter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Files$AcceptAllFilter);
	});
	return class$;
}

$Class* Files$AcceptAllFilter::class$ = nullptr;

		} // file
	} // nio
} // java