#include <javax/crypto/MacSpi.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace javax {
	namespace crypto {

$MethodInfo _MacSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacSpi::*)()>(&MacSpi::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"engineDoFinal", "()[B", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetMacLength", "()I", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineReset", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MacSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.MacSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MacSpi_MethodInfo_
};

$Object* allocate$MacSpi($Class* clazz) {
	return $of($alloc(MacSpi));
}

void MacSpi::init$() {
}

void MacSpi::engineUpdate($ByteBuffer* input) {
	$useLocalCurrentObjectStackCache();
	if ($nc(input)->hasRemaining() == false) {
		return;
	}
	if ($nc(input)->hasArray()) {
		$var($bytes, b, $cast($bytes, input->array()));
		int32_t ofs = input->arrayOffset();
		int32_t pos = input->position();
		int32_t lim = input->limit();
		engineUpdate(b, ofs + pos, lim - pos);
		input->position(lim);
	} else {
		int32_t len = input->remaining();
		$var($bytes, b, $new($bytes, $CipherSpi::getTempArraySize(len)));
		while (len > 0) {
			int32_t chunk = $Math::min(len, b->length);
			input->get(b, 0, chunk);
			engineUpdate(b, 0, chunk);
			len -= chunk;
		}
	}
}

$Object* MacSpi::clone() {
	if ($instanceOf($Cloneable, this)) {
		return $of($Object::clone());
	} else {
		$throwNew($CloneNotSupportedException);
	}
}

MacSpi::MacSpi() {
}

$Class* MacSpi::load$($String* name, bool initialize) {
	$loadClass(MacSpi, name, initialize, &_MacSpi_ClassInfo_, allocate$MacSpi);
	return class$;
}

$Class* MacSpi::class$ = nullptr;

	} // crypto
} // javax