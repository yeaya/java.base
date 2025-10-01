#include <java/io/Closeable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AutoCloseable = ::java::lang::AutoCloseable;
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