#include <java/io/Closeable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _Closeable_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Closeable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.Closeable",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_Closeable_MethodInfo_
};

$Object* allocate$Closeable($Class* clazz) {
	return $of($alloc(Closeable));
}

$Class* Closeable::load$($String* name, bool initialize) {
	$loadClass(Closeable, name, initialize, &_Closeable_ClassInfo_, allocate$Closeable);
	return class$;
}

$Class* Closeable::class$ = nullptr;

	} // io
} // java