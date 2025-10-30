#include <foo/bar/package-info.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace foo {
	namespace bar {

$CompoundAttribute _package$info_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$ClassInfo _package$info_ClassInfo_ = {
	$INTERFACE | $ABSTRACT | $SYNTHETIC,
	"foo.bar.package-info",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_package$info_Annotations_
};

$Object* allocate$package$info($Class* clazz) {
	return $of($alloc(package$info));
}

$Class* package$info::load$($String* name, bool initialize) {
	$loadClass(package$info, name, initialize, &_package$info_ClassInfo_, allocate$package$info);
	return class$;
}

$Class* package$info::class$ = nullptr;

	} // bar
} // foo