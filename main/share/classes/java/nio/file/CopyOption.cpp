#include <java/nio/file/CopyOption.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {

$ClassInfo _CopyOption_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.CopyOption"
};

$Object* allocate$CopyOption($Class* clazz) {
	return $of($alloc(CopyOption));
}

$Class* CopyOption::load$($String* name, bool initialize) {
	$loadClass(CopyOption, name, initialize, &_CopyOption_ClassInfo_, allocate$CopyOption);
	return class$;
}

$Class* CopyOption::class$ = nullptr;

		} // file
	} // nio
} // java