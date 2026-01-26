#include <java/lang/Readable.h>

#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

namespace java {
	namespace lang {

$MethodInfo _Readable_MethodInfo_[] = {
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Readable, read, int32_t, $CharBuffer*), "java.io.IOException"},
	{}
};

$ClassInfo _Readable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Readable",
	nullptr,
	nullptr,
	nullptr,
	_Readable_MethodInfo_
};

$Object* allocate$Readable($Class* clazz) {
	return $of($alloc(Readable));
}

$Class* Readable::load$($String* name, bool initialize) {
	$loadClass(Readable, name, initialize, &_Readable_ClassInfo_, allocate$Readable);
	return class$;
}

$Class* Readable::class$ = nullptr;

	} // lang
} // java