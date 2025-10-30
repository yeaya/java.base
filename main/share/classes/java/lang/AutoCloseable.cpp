#include <java/lang/AutoCloseable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _AutoCloseable_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _AutoCloseable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.AutoCloseable",
	nullptr,
	nullptr,
	nullptr,
	_AutoCloseable_MethodInfo_
};

$Object* allocate$AutoCloseable($Class* clazz) {
	return $of($alloc(AutoCloseable));
}

$Class* AutoCloseable::load$($String* name, bool initialize) {
	$loadClass(AutoCloseable, name, initialize, &_AutoCloseable_ClassInfo_, allocate$AutoCloseable);
	return class$;
}

$Class* AutoCloseable::class$ = nullptr;

	} // lang
} // java