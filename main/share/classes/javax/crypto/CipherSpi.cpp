#include <javax/crypto/CipherSpi.h>

#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/ProviderException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $ProviderException = ::java::security::ProviderException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace javax {
	namespace crypto {

$MethodInfo _CipherSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CipherSpi::*)()>(&CipherSpi::init$))},
	{"bufferCrypt", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CipherSpi::*)($ByteBuffer*,$ByteBuffer*,bool)>(&CipherSpi::bufferCrypt)), "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetIV", "()[B", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException"},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.NoSuchPaddingException"},
	{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.ShortBufferException"},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException"},
	{"engineUpdateAAD", "([BII)V", nullptr, $PROTECTED},
	{"engineUpdateAAD", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
	{"getTempArraySize", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&CipherSpi::getTempArraySize))},
	{}
};

$ClassInfo _CipherSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.CipherSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CipherSpi_MethodInfo_
};

$Object* allocate$CipherSpi($Class* clazz) {
	return $of($alloc(CipherSpi));
}

void CipherSpi::init$() {
}

int32_t CipherSpi::engineUpdate($ByteBuffer* input, $ByteBuffer* output) {
	try {
		return bufferCrypt(input, output, true);
	} catch ($IllegalBlockSizeException& e) {
		$throwNew($ProviderException, "Internal error in update()"_s);
	} catch ($BadPaddingException& e) {
		$throwNew($ProviderException, "Internal error in update()"_s);
	}
	$shouldNotReachHere();
}

int32_t CipherSpi::engineDoFinal($ByteBuffer* input, $ByteBuffer* output) {
	return bufferCrypt(input, output, false);
}

int32_t CipherSpi::getTempArraySize(int32_t totalSize) {
	return $Math::min(4096, totalSize);
}

int32_t CipherSpi::bufferCrypt($ByteBuffer* input, $ByteBuffer* output, bool isUpdate) {
	$useLocalCurrentObjectStackCache();
	if ((input == nullptr) || (output == nullptr)) {
		$throwNew($NullPointerException, "Input and output buffers must not be null"_s);
	}
	int32_t inPos = $nc(input)->position();
	int32_t inLimit = input->limit();
	int32_t inLen = inLimit - inPos;
	if (isUpdate && (inLen == 0)) {
		return 0;
	}
	int32_t outLenNeeded = engineGetOutputSize(inLen);
	if ($nc(output)->remaining() < outLenNeeded) {
		$throwNew($ShortBufferException, $$str({"Need at least "_s, $$str(outLenNeeded), " bytes of space in output buffer"_s}));
	}
	bool a1 = input->hasArray();
	bool a2 = $nc(output)->hasArray();
	int32_t total = 0;
	if (a1) {
		$var($bytes, inArray, $cast($bytes, input->array()));
		int32_t inOfs = input->arrayOffset() + inPos;
		if (a2) {
			$var($bytes, outArray, $cast($bytes, output->array()));
			int32_t outPos = output->position();
			int32_t outOfs = output->arrayOffset() + outPos;
			bool useTempOut = false;
			if (inArray == outArray && ((inOfs < outOfs) && (outOfs < inOfs + inLen))) {
				useTempOut = true;
				$assign(outArray, $new($bytes, outLenNeeded));
				outOfs = 0;
			}
			if (isUpdate) {
				total = engineUpdate(inArray, inOfs, inLen, outArray, outOfs);
			} else {
				total = engineDoFinal(inArray, inOfs, inLen, outArray, outOfs);
			}
			if (useTempOut) {
				output->put(outArray, outOfs, total);
			} else {
				output->position(outPos + total);
			}
			input->position(inLimit);
		} else {
			$var($bytes, outArray, nullptr);
			if (isUpdate) {
				$assign(outArray, engineUpdate(inArray, inOfs, inLen));
			} else {
				$assign(outArray, engineDoFinal(inArray, inOfs, inLen));
			}
			if (outArray != nullptr && outArray->length != 0) {
				output->put(outArray);
				total = outArray->length;
			}
			input->position(inLimit);
		}
	} else {
		$var($bytes, tempOut, $new($bytes, outLenNeeded));
		int32_t outOfs = 0;
		$var($bytes, tempIn, $new($bytes, getTempArraySize(inLen)));
		do {
			int32_t chunk = $Math::min(inLen, tempIn->length);
			if (chunk > 0) {
				input->get(tempIn, 0, chunk);
			}
			int32_t n = 0;
			if (isUpdate || (inLen > chunk)) {
				n = engineUpdate(tempIn, 0, chunk, tempOut, outOfs);
			} else {
				n = engineDoFinal(tempIn, 0, chunk, tempOut, outOfs);
			}
			outOfs += n;
			total += n;
			inLen -= chunk;
		} while (inLen > 0);
		if (total > 0) {
			output->put(tempOut, 0, total);
		}
	}
	return total;
}

$bytes* CipherSpi::engineWrap($Key* key) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Key* CipherSpi::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t CipherSpi::engineGetKeySize($Key* key) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void CipherSpi::engineUpdateAAD($bytes* src, int32_t offset, int32_t len) {
	$throwNew($UnsupportedOperationException, "The underlying Cipher implementation does not support this method"_s);
}

void CipherSpi::engineUpdateAAD($ByteBuffer* src) {
	$throwNew($UnsupportedOperationException, "The underlying Cipher implementation does not support this method"_s);
}

CipherSpi::CipherSpi() {
}

$Class* CipherSpi::load$($String* name, bool initialize) {
	$loadClass(CipherSpi, name, initialize, &_CipherSpi_ClassInfo_, allocate$CipherSpi);
	return class$;
}

$Class* CipherSpi::class$ = nullptr;

	} // crypto
} // javax