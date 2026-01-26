#include <sun/nio/ch/DirectBuffer.h>

#include <jdk/internal/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::jdk::internal::ref::Cleaner;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _DirectBuffer_MethodInfo_[] = {
	{"address", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, address, int64_t)},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, attachment, $Object*)},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, cleaner, $Cleaner*)},
	{}
};

$ClassInfo _DirectBuffer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.ch.DirectBuffer",
	nullptr,
	nullptr,
	nullptr,
	_DirectBuffer_MethodInfo_
};

$Object* allocate$DirectBuffer($Class* clazz) {
	return $of($alloc(DirectBuffer));
}

$Class* DirectBuffer::load$($String* name, bool initialize) {
	$loadClass(DirectBuffer, name, initialize, &_DirectBuffer_ClassInfo_, allocate$DirectBuffer);
	return class$;
}

$Class* DirectBuffer::class$ = nullptr;

		} // ch
	} // nio
} // sun