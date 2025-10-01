#include <sun/security/provider/EntropySource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _EntropySource_MethodInfo_[] = {
	{"getEntropy", "(IIIZ)[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EntropySource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.provider.EntropySource",
	nullptr,
	nullptr,
	nullptr,
	_EntropySource_MethodInfo_
};

$Object* allocate$EntropySource($Class* clazz) {
	return $of($alloc(EntropySource));
}

$Class* EntropySource::load$($String* name, bool initialize) {
	$loadClass(EntropySource, name, initialize, &_EntropySource_ClassInfo_, allocate$EntropySource);
	return class$;
}

$Class* EntropySource::class$ = nullptr;

		} // provider
	} // security
} // sun