#include <com/sun/crypto/provider/GCM.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

#undef GCM

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _GCM_MethodInfo_[] = {
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, doFinal, int32_t, $ByteBuffer*, $ByteBuffer*)},
	{"update", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $bytes*, int32_t, int32_t, $ByteBuffer*)},
	{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $ByteBuffer*, $ByteBuffer*)},
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