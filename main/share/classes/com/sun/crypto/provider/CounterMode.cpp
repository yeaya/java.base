#include <com/sun/crypto/provider/CounterMode.h>

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <sun/security/util/ArrayUtil.h>
#include <jcpp.h>

using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $ArrayUtil = ::sun::security::util::ArrayUtil;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$CompoundAttribute _CounterMode_MethodAnnotations_implCrypt5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _CounterMode_FieldInfo_[] = {
	{"counter", "[B", nullptr, $FINAL, $field(CounterMode, counter)},
	{"encryptedCounter", "[B", nullptr, $PRIVATE | $FINAL, $field(CounterMode, encryptedCounter)},
	{"used", "I", nullptr, $PRIVATE, $field(CounterMode, used)},
	{"counterSave", "[B", nullptr, $PRIVATE, $field(CounterMode, counterSave)},
	{"encryptedCounterSave", "[B", nullptr, $PRIVATE, $field(CounterMode, encryptedCounterSave)},
	{"usedSave", "I", nullptr, $PRIVATE, $field(CounterMode, usedSave)},
	{}
};

$MethodInfo _CounterMode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(static_cast<void(CounterMode::*)($SymmetricCipher*)>(&CounterMode::init$))},
	{"crypt", "([BII[BI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CounterMode::*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&CounterMode::crypt))},
	{"decrypt", "([BII[BI)I", nullptr, 0},
	{"encrypt", "([BII[BI)I", nullptr, 0},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0},
	{"implCrypt", "([BII[BI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CounterMode::*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&CounterMode::implCrypt)), nullptr, nullptr, _CounterMode_MethodAnnotations_implCrypt5},
	{"increment", "([B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*)>(&CounterMode::increment))},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"reset", "()V", nullptr, 0},
	{"restore", "()V", nullptr, 0},
	{"save", "()V", nullptr, 0},
	{}
};

$ClassInfo _CounterMode_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.CounterMode",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	_CounterMode_FieldInfo_,
	_CounterMode_MethodInfo_
};

$Object* allocate$CounterMode($Class* clazz) {
	return $of($alloc(CounterMode));
}

void CounterMode::init$($SymmetricCipher* embeddedCipher) {
	$FeedbackCipher::init$(embeddedCipher);
	$set(this, counterSave, nullptr);
	$set(this, encryptedCounterSave, nullptr);
	this->usedSave = 0;
	$set(this, counter, $new($bytes, this->blockSize));
	$set(this, encryptedCounter, $new($bytes, this->blockSize));
}

$String* CounterMode::getFeedback() {
	return "CTR"_s;
}

void CounterMode::reset() {
	$System::arraycopy(this->iv, 0, this->counter, 0, this->blockSize);
	this->used = this->blockSize;
}

void CounterMode::save() {
	if (this->counterSave == nullptr) {
		$set(this, counterSave, $new($bytes, this->blockSize));
		$set(this, encryptedCounterSave, $new($bytes, this->blockSize));
	}
	$System::arraycopy(this->counter, 0, this->counterSave, 0, this->blockSize);
	$System::arraycopy(this->encryptedCounter, 0, this->encryptedCounterSave, 0, this->blockSize);
	this->usedSave = this->used;
}

void CounterMode::restore() {
	$System::arraycopy(this->counterSave, 0, this->counter, 0, this->blockSize);
	$System::arraycopy(this->encryptedCounterSave, 0, this->encryptedCounter, 0, this->blockSize);
	this->used = this->usedSave;
}

void CounterMode::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if ((key == nullptr) || (iv == nullptr) || ($nc(iv)->length != this->blockSize)) {
		$throwNew($InvalidKeyException, "Internal error"_s);
	}
	$set(this, iv, iv);
	reset();
	$nc(this->embeddedCipher)->init(false, algorithm, key);
}

int32_t CounterMode::encrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	return crypt(in, inOff, len, out, outOff);
}

int32_t CounterMode::decrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	return crypt(in, inOff, len, out, outOff);
}

void CounterMode::increment($bytes* b) {
	$init(CounterMode);
	int32_t n = $nc(b)->length - 1;
	while (true) {
		bool var$0 = (n >= 0);
		if (!(var$0 && (++(*b)[n] == 0))) {
			break;
		}
		{
			--n;
		}
	}
}

int32_t CounterMode::crypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	if (len == 0) {
		return 0;
	}
	$ArrayUtil::nullAndBoundsCheck(in, inOff, len);
	$ArrayUtil::nullAndBoundsCheck(out, outOff, len);
	return implCrypt(in, inOff, len, out, outOff);
}

int32_t CounterMode::implCrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	int32_t result = len;
	while (len-- > 0) {
		if (this->used >= this->blockSize) {
			$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->encryptedCounter, 0);
			increment(this->counter);
			this->used = 0;
		}
		$nc(out)->set(outOff++, (int8_t)($nc(in)->get(inOff++) ^ $nc(this->encryptedCounter)->get(this->used++)));
	}
	return result;
}

CounterMode::CounterMode() {
}

$Class* CounterMode::load$($String* name, bool initialize) {
	$loadClass(CounterMode, name, initialize, &_CounterMode_ClassInfo_, allocate$CounterMode);
	return class$;
}

$Class* CounterMode::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com