#include <java/util/Observer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Observable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Observable = ::java::util::Observable;

namespace java {
	namespace util {

$NamedAttribute Observer_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};
$CompoundAttribute _Observer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Observer_Attribute_var$0},
	{}
};


$MethodInfo _Observer_MethodInfo_[] = {
	{"update", "(Ljava/util/Observable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Observer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Observer",
	nullptr,
	nullptr,
	nullptr,
	_Observer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Observer_Annotations_
};

$Object* allocate$Observer($Class* clazz) {
	return $of($alloc(Observer));
}

$Class* Observer::load$($String* name, bool initialize) {
	$loadClass(Observer, name, initialize, &_Observer_ClassInfo_, allocate$Observer);
	return class$;
}

$Class* Observer::class$ = nullptr;

	} // util
} // java