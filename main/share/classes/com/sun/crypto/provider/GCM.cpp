#include <com/sun/crypto/provider/GCM.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

#undef GCM

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _GCM_MethodInfo_[] = {
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"update", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT},
	{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GCM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.crypto.provider.GCM",
	nullptr,
	nullptr,
	nullptr,
	_GCM_MethodInfo_
};

$Object* allocate$GCM($Class* clazz) {
	return $of($alloc(GCM));
}

$Class* GCM::load$($String* name, bool initialize) {
	$loadClass(GCM, name, initialize, &_GCM_ClassInfo_, allocate$GCM);
	return class$;
}

$Class* GCM::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com