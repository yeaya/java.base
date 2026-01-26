#include <sun/nio/ch/Iocp$ResultHandler.h>

#include <java/io/IOException.h>
#include <sun/nio/ch/Iocp.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Iocp$ResultHandler_MethodInfo_[] = {
	{"completed", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$ResultHandler, completed, void, int32_t, bool)},
	{"failed", "(ILjava/io/IOException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$ResultHandler, failed, void, int32_t, $IOException*)},
	{}
};

$InnerClassInfo _Iocp$ResultHandler_InnerClassesInfo_[] = {
	{"sun.nio.ch.Iocp$ResultHandler", "sun.nio.ch.Iocp", "ResultHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Iocp$ResultHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.Iocp$ResultHandler",
	nullptr,
	nullptr,
	nullptr,
	_Iocp$ResultHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Iocp$ResultHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Iocp"
};

$Object* allocate$Iocp$ResultHandler($Class* clazz) {
	return $of($alloc(Iocp$ResultHandler));
}

$Class* Iocp$ResultHandler::load$($String* name, bool initialize) {
	$loadClass(Iocp$ResultHandler, name, initialize, &_Iocp$ResultHandler_ClassInfo_, allocate$Iocp$ResultHandler);
	return class$;
}

$Class* Iocp$ResultHandler::class$ = nullptr;

		} // ch
	} // nio
} // sun