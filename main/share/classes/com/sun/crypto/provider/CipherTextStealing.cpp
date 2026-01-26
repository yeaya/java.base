#include <com/sun/crypto/provider/CipherTextStealing.h>

#include <com/sun/crypto/provider/CipherBlockChaining.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <jcpp.h>

using $CipherBlockChaining = ::com::sun::crypto::provider::CipherBlockChaining;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _CipherTextStealing_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(CipherTextStealing, init$, void, $SymmetricCipher*)},
	{"decryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(CipherTextStealing, decryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
	{"encryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(CipherTextStealing, encryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(CipherTextStealing, getFeedback, $String*)},
	{}
};

$ClassInfo _CipherTextStealing_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.CipherTextStealing",
	"com.sun.crypto.provider.CipherBlockChaining",
	nullptr,
	nullptr,
	_CipherTextStealing_MethodInfo_
};

$Object* allocate$CipherTextStealing($Class* clazz) {
	return $of($alloc(CipherTextStealing));
}

void CipherTextStealing::init$($SymmetricCipher* embeddedCipher) {
	$CipherBlockChaining::init$(embeddedCipher);
}

$String* CipherTextStealing::getFeedback() {
	return "CTS"_s;
}

int32_t CipherTextStealing::encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	$useLocalCurrentObjectStackCache();
	if (plainLen < this->blockSize) {
		$throwNew($IllegalBlockSizeException, "input is too short!"_s);
	} else if (plainLen == this->blockSize) {
		encrypt(plain, plainOffset, plainLen, cipher, cipherOffset);
	} else {
		int32_t nLeft = $mod(plainLen, this->blockSize);
		if (nLeft == 0) {
			encrypt(plain, plainOffset, plainLen, cipher, cipherOffset);
			int32_t lastBlkIndex = cipherOffset + plainLen - this->blockSize;
			int32_t nextToLastBlkIndex = lastBlkIndex - this->blockSize;
			$var($bytes, tmp, $new($bytes, this->blockSize));
			$System::arraycopy(cipher, lastBlkIndex, tmp, 0, this->blockSize);
			$System::arraycopy(cipher, nextToLastBlkIndex, cipher, lastBlkIndex, this->blockSize);
			$System::arraycopy(tmp, 0, cipher, nextToLastBlkIndex, this->blockSize);
		} else {
			int32_t newPlainLen = plainLen - (this->blockSize + nLeft);
			if (newPlainLen > 0) {
				encrypt(plain, plainOffset, newPlainLen, cipher, cipherOffset);
				plainOffset += newPlainLen;
				cipherOffset += newPlainLen;
			}
			$var($bytes, tmp, $new($bytes, this->blockSize));
			for (int32_t i = 0; i < this->blockSize; ++i) {
				tmp->set(i, (int8_t)($nc(plain)->get(plainOffset + i) ^ $nc(this->r)->get(i)));
			}
			$var($bytes, tmp2, $new($bytes, this->blockSize));
			$nc(this->embeddedCipher)->encryptBlock(tmp, 0, tmp2, 0);
			$System::arraycopy(tmp2, 0, cipher, cipherOffset + this->blockSize, nLeft);
			for (int32_t i = 0; i < nLeft; ++i) {
				tmp2->set(i, (int8_t)($nc(plain)->get(plainOffset + this->blockSize + i) ^ tmp2->get(i)));
			}
			$nc(this->embeddedCipher)->encryptBlock(tmp2, 0, cipher, cipherOffset);
		}
	}
	return plainLen;
}

int32_t CipherTextStealing::decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	$useLocalCurrentObjectStackCache();
	if (cipherLen < this->blockSize) {
		$throwNew($IllegalBlockSizeException, "input is too short!"_s);
	} else if (cipherLen == this->blockSize) {
		decrypt(cipher, cipherOffset, cipherLen, plain, plainOffset);
	} else {
		int32_t nLeft = $mod(cipherLen, this->blockSize);
		if (nLeft == 0) {
			int32_t lastBlkIndex = cipherOffset + cipherLen - this->blockSize;
			int32_t nextToLastBlkIndex = cipherOffset + cipherLen - 2 * this->blockSize;
			$var($bytes, tmp, $new($bytes, 2 * this->blockSize));
			$System::arraycopy(cipher, lastBlkIndex, tmp, 0, this->blockSize);
			$System::arraycopy(cipher, nextToLastBlkIndex, tmp, this->blockSize, this->blockSize);
			int32_t cipherLen2 = cipherLen - 2 * this->blockSize;
			decrypt(cipher, cipherOffset, cipherLen2, plain, plainOffset);
			decrypt(tmp, 0, 2 * this->blockSize, plain, plainOffset + cipherLen2);
		} else {
			int32_t newCipherLen = cipherLen - (this->blockSize + nLeft);
			if (newCipherLen > 0) {
				decrypt(cipher, cipherOffset, newCipherLen, plain, plainOffset);
				cipherOffset += newCipherLen;
				plainOffset += newCipherLen;
			}
			$var($bytes, tmp, $new($bytes, this->blockSize));
			$nc(this->embeddedCipher)->decryptBlock(cipher, cipherOffset, tmp, 0);
			for (int32_t i = 0; i < nLeft; ++i) {
				$nc(plain)->set(plainOffset + this->blockSize + i, (int8_t)($nc(cipher)->get(cipherOffset + this->blockSize + i) ^ tmp->get(i)));
			}
			$System::arraycopy(cipher, cipherOffset + this->blockSize, tmp, 0, nLeft);
			$nc(this->embeddedCipher)->decryptBlock(tmp, 0, plain, plainOffset);
			for (int32_t i = 0; i < this->blockSize; ++i) {
				$nc(plain)->set(plainOffset + i, (int8_t)(plain->get(plainOffset + i) ^ $nc(this->r)->get(i)));
			}
		}
	}
	return cipherLen;
}

CipherTextStealing::CipherTextStealing() {
}

$Class* CipherTextStealing::load$($String* name, bool initialize) {
	$loadClass(CipherTextStealing, name, initialize, &_CipherTextStealing_ClassInfo_, allocate$CipherTextStealing);
	return class$;
}

$Class* CipherTextStealing::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com