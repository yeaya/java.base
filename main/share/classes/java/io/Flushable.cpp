#include <java/io/Flushable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _Flushable_MethodInfo_[] = {
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flushable, flush, void), "java.io.IOException"},
	{}
};

$ClassInfo _Flushable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.Flushable",
	nullptr,
	nullptr,
	nullptr,
	_Flushable_MethodInfo_
};

$Object* allocate$Flushable($Class* clazz) {
	return $of($alloc(Flushable));
}

$Class* Flushable::load$($String* name, bool initialize) {
	$loadClass(Flushable, name, initialize, &_Flushable_ClassInfo_, allocate$Flushable);
	return class$;
}

$Class* Flushable::class$ = nullptr;

	} // io
} // java