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

$Class* GCM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doFinal", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, doFinal, int32_t, $ByteBuffer*, $ByteBuffer*)},
		{"update", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $bytes*, int32_t, int32_t, $ByteBuffer*)},
		{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GCM, update, int32_t, $ByteBuffer*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.GCM",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GCM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GCM);
	});
	return class$;
}

$Class* GCM::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com