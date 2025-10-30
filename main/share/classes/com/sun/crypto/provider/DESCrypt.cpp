#include <com/sun/crypto/provider/DESCrypt.h>

#include <com/sun/crypto/provider/DESConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/security/InvalidKeyException.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $DESConstants = ::com::sun::crypto::provider::DESConstants;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DESCrypt_FieldInfo_[] = {
	{"s0p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s0p)},
	{"s1p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s1p)},
	{"s2p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s2p)},
	{"s3p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s3p)},
	{"s4p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s4p)},
	{"s5p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s5p)},
	{"s6p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s6p)},
	{"s7p", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, s7p)},
	{"permRight0", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRight0)},
	{"permLeft1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeft1)},
	{"permRight2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRight2)},
	{"permLeft3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeft3)},
	{"permRight4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRight4)},
	{"permLeft5", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeft5)},
	{"permRight6", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRight6)},
	{"permLeft7", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeft7)},
	{"permRight8", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRight8)},
	{"permLeft9", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeft9)},
	{"permRightA", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRightA)},
	{"permLeftB", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeftB)},
	{"permRightC", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRightC)},
	{"permLeftD", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeftD)},
	{"permRightE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permRightE)},
	{"permLeftF", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, permLeftF)},
	{"initPermLeft0", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft0)},
	{"initPermRight0", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight0)},
	{"initPermLeft1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft1)},
	{"initPermRight1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight1)},
	{"initPermLeft2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft2)},
	{"initPermRight2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight2)},
	{"initPermLeft3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft3)},
	{"initPermRight3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight3)},
	{"initPermLeft4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft4)},
	{"initPermRight4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight4)},
	{"initPermLeft5", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft5)},
	{"initPermRight5", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight5)},
	{"initPermLeft6", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft6)},
	{"initPermRight6", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight6)},
	{"initPermLeft7", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft7)},
	{"initPermRight7", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight7)},
	{"initPermLeft8", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft8)},
	{"initPermRight8", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight8)},
	{"initPermLeft9", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeft9)},
	{"initPermRight9", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRight9)},
	{"initPermLeftA", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftA)},
	{"initPermRightA", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightA)},
	{"initPermLeftB", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftB)},
	{"initPermRightB", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightB)},
	{"initPermLeftC", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftC)},
	{"initPermRightC", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightC)},
	{"initPermLeftD", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftD)},
	{"initPermRightD", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightD)},
	{"initPermLeftE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftE)},
	{"initPermRightE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightE)},
	{"initPermLeftF", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermLeftF)},
	{"initPermRightF", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESCrypt, initPermRightF)},
	{"expandedKey", "[B", nullptr, 0, $field(DESCrypt, expandedKey)},
	{"decrypting", "Z", nullptr, 0, $field(DESCrypt, decrypting)},
	{}
};

$MethodInfo _DESCrypt_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DESCrypt::*)()>(&DESCrypt::init$))},
	{"cipherBlock", "([BI[BI)V", nullptr, 0},
	{"decryptBlock", "([BI[BI)V", nullptr, 0},
	{"encryptBlock", "([BI[BI)V", nullptr, 0},
	{"expandKey", "([B)V", nullptr, 0},
	{"getBlockSize", "()I", nullptr, 0},
	{"init", "(ZLjava/lang/String;[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"initialPermutationLeft", "([BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&DESCrypt::initialPermutationLeft))},
	{"initialPermutationRight", "([BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&DESCrypt::initialPermutationRight))},
	{"perm", "(II[BI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,$bytes*,int32_t)>(&DESCrypt::perm))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DESCrypt_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.DESCrypt",
	"com.sun.crypto.provider.SymmetricCipher",
	"com.sun.crypto.provider.DESConstants",
	_DESCrypt_FieldInfo_,
	_DESCrypt_MethodInfo_
};

$Object* allocate$DESCrypt($Class* clazz) {
	return $of($alloc(DESCrypt));
}

int32_t DESCrypt::hashCode() {
	 return this->$SymmetricCipher::hashCode();
}

bool DESCrypt::equals(Object$* obj) {
	 return this->$SymmetricCipher::equals(obj);
}

$Object* DESCrypt::clone() {
	 return this->$SymmetricCipher::clone();
}

$String* DESCrypt::toString() {
	 return this->$SymmetricCipher::toString();
}

void DESCrypt::finalize() {
	this->$SymmetricCipher::finalize();
}

$ints* DESCrypt::s0p = nullptr;
$ints* DESCrypt::s1p = nullptr;
$ints* DESCrypt::s2p = nullptr;
$ints* DESCrypt::s3p = nullptr;
$ints* DESCrypt::s4p = nullptr;
$ints* DESCrypt::s5p = nullptr;
$ints* DESCrypt::s6p = nullptr;
$ints* DESCrypt::s7p = nullptr;
$ints* DESCrypt::permRight0 = nullptr;
$ints* DESCrypt::permLeft1 = nullptr;
$ints* DESCrypt::permRight2 = nullptr;
$ints* DESCrypt::permLeft3 = nullptr;
$ints* DESCrypt::permRight4 = nullptr;
$ints* DESCrypt::permLeft5 = nullptr;
$ints* DESCrypt::permRight6 = nullptr;
$ints* DESCrypt::permLeft7 = nullptr;
$ints* DESCrypt::permRight8 = nullptr;
$ints* DESCrypt::permLeft9 = nullptr;
$ints* DESCrypt::permRightA = nullptr;
$ints* DESCrypt::permLeftB = nullptr;
$ints* DESCrypt::permRightC = nullptr;
$ints* DESCrypt::permLeftD = nullptr;
$ints* DESCrypt::permRightE = nullptr;
$ints* DESCrypt::permLeftF = nullptr;
$ints* DESCrypt::initPermLeft0 = nullptr;
$ints* DESCrypt::initPermRight0 = nullptr;
$ints* DESCrypt::initPermLeft1 = nullptr;
$ints* DESCrypt::initPermRight1 = nullptr;
$ints* DESCrypt::initPermLeft2 = nullptr;
$ints* DESCrypt::initPermRight2 = nullptr;
$ints* DESCrypt::initPermLeft3 = nullptr;
$ints* DESCrypt::initPermRight3 = nullptr;
$ints* DESCrypt::initPermLeft4 = nullptr;
$ints* DESCrypt::initPermRight4 = nullptr;
$ints* DESCrypt::initPermLeft5 = nullptr;
$ints* DESCrypt::initPermRight5 = nullptr;
$ints* DESCrypt::initPermLeft6 = nullptr;
$ints* DESCrypt::initPermRight6 = nullptr;
$ints* DESCrypt::initPermLeft7 = nullptr;
$ints* DESCrypt::initPermRight7 = nullptr;
$ints* DESCrypt::initPermLeft8 = nullptr;
$ints* DESCrypt::initPermRight8 = nullptr;
$ints* DESCrypt::initPermLeft9 = nullptr;
$ints* DESCrypt::initPermRight9 = nullptr;
$ints* DESCrypt::initPermLeftA = nullptr;
$ints* DESCrypt::initPermRightA = nullptr;
$ints* DESCrypt::initPermLeftB = nullptr;
$ints* DESCrypt::initPermRightB = nullptr;
$ints* DESCrypt::initPermLeftC = nullptr;
$ints* DESCrypt::initPermRightC = nullptr;
$ints* DESCrypt::initPermLeftD = nullptr;
$ints* DESCrypt::initPermRightD = nullptr;
$ints* DESCrypt::initPermLeftE = nullptr;
$ints* DESCrypt::initPermRightE = nullptr;
$ints* DESCrypt::initPermLeftF = nullptr;
$ints* DESCrypt::initPermRightF = nullptr;

void DESCrypt::init$() {
	$SymmetricCipher::init$();
	$set(this, expandedKey, nullptr);
	this->decrypting = false;
}

int32_t DESCrypt::getBlockSize() {
	return $DESConstants::DES_BLOCK_SIZE;
}

void DESCrypt::init(bool decrypting, $String* algorithm, $bytes* rawKey) {
	this->decrypting = decrypting;
	if (!$nc(algorithm)->equalsIgnoreCase("DES"_s)) {
		$throwNew($InvalidKeyException, "Wrong algorithm: DES required"_s);
	}
	if ($nc(rawKey)->length != $DESConstants::DES_BLOCK_SIZE) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	expandKey(rawKey);
}

void DESCrypt::encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) {
	cipherBlock(plain, plainOffset, cipher, cipherOffset);
}

void DESCrypt::decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) {
	cipherBlock(cipher, cipherOffset, plain, plainOffset);
}

void DESCrypt::cipherBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	$var($bytes, key, nullptr);
	int32_t temp = 0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t offset = 0;
	int32_t left = 0;
	int32_t right = 0;
	left = initialPermutationLeft(in, inOffset);
	right = initialPermutationRight(in, inOffset);
	$assign(key, this->expandedKey);
	if (this->decrypting) {
		offset = 16 - $DESConstants::DES_BLOCK_SIZE;
		j = 128 - $DESConstants::DES_BLOCK_SIZE;
	} else {
		offset = 0 - $DESConstants::DES_BLOCK_SIZE;
		j = 0;
	}
	for (i = 0; i < 16; ++i) {
		temp = (right << 1) | ((int32_t)((right >> 31) & (uint32_t)1));
		left ^= ((((($nc(DESCrypt::s0p)->get(((int32_t)(temp & (uint32_t)63)) ^ $nc(key)->get(j + 0)) ^ $nc(DESCrypt::s1p)->get(((int32_t)((temp >> 4) & (uint32_t)63)) ^ key->get(j + 1))) ^ $nc(DESCrypt::s2p)->get(((int32_t)((temp >> 8) & (uint32_t)63)) ^ key->get(j + 2))) ^ $nc(DESCrypt::s3p)->get(((int32_t)((temp >> 12) & (uint32_t)63)) ^ key->get(j + 3))) ^ $nc(DESCrypt::s4p)->get(((int32_t)((temp >> 16) & (uint32_t)63)) ^ key->get(j + 4))) ^ $nc(DESCrypt::s5p)->get(((int32_t)((temp >> 20) & (uint32_t)63)) ^ key->get(j + 5))) ^ $nc(DESCrypt::s6p)->get(((int32_t)((temp >> 24) & (uint32_t)63)) ^ key->get(j + 6));
		temp = (((int32_t)(right & (uint32_t)1)) << 5) | ((int32_t)((right >> 27) & (uint32_t)31));
		left ^= $nc(DESCrypt::s7p)->get(temp ^ key->get(j + 7));
		temp = left;
		left = right;
		right = temp;
		j -= offset;
	}
	temp = left;
	left = right;
	right = temp;
	perm(left, right, out, outOffset);
}

void DESCrypt::perm(int32_t left, int32_t right, $bytes* out, int32_t offset) {
	$init(DESCrypt);
	int32_t low = 0;
	int32_t high = 0;
	int32_t temp = 0;
	temp = left;
	high = $nc(DESCrypt::permRight0)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low = $nc(DESCrypt::permLeft1)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRight2)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeft3)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRight4)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeft5)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRight6)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeft7)->get((int32_t)(temp & (uint32_t)15));
	temp = right;
	high |= $nc(DESCrypt::permRight8)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeft9)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRightA)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeftB)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRightC)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeftD)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	high |= $nc(DESCrypt::permRightE)->get((int32_t)(temp & (uint32_t)15));
	temp >>= 4;
	low |= $nc(DESCrypt::permLeftF)->get((int32_t)(temp & (uint32_t)15));
	$nc(out)->set(offset + 0, (int8_t)low);
	out->set(offset + 1, (int8_t)(low >> 8));
	out->set(offset + 2, (int8_t)(low >> 16));
	out->set(offset + 3, (int8_t)(low >> 24));
	out->set(offset + 4, (int8_t)high);
	out->set(offset + 5, (int8_t)(high >> 8));
	out->set(offset + 6, (int8_t)(high >> 16));
	out->set(offset + 7, (int8_t)(high >> 24));
}

int32_t DESCrypt::initialPermutationLeft($bytes* block, int32_t offset) {
	$init(DESCrypt);
	int32_t l = 0;
	l = $nc(DESCrypt::initPermLeft1)->get((int32_t)($nc(block)->get(offset) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft0)->get((int32_t)((block->get(offset) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft3)->get((int32_t)(block->get(offset + 1) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft2)->get((int32_t)((block->get(offset + 1) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft5)->get((int32_t)(block->get(offset + 2) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft4)->get((int32_t)((block->get(offset + 2) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft7)->get((int32_t)(block->get(offset + 3) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft6)->get((int32_t)((block->get(offset + 3) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft9)->get((int32_t)(block->get(offset + 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeft8)->get((int32_t)((block->get(offset + 4) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftB)->get((int32_t)(block->get(offset + 5) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftA)->get((int32_t)((block->get(offset + 5) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftD)->get((int32_t)(block->get(offset + 6) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftC)->get((int32_t)((block->get(offset + 6) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftF)->get((int32_t)(block->get(offset + 7) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermLeftE)->get((int32_t)((block->get(offset + 7) >> 4) & (uint32_t)15));
	return l;
}

int32_t DESCrypt::initialPermutationRight($bytes* block, int32_t offset) {
	$init(DESCrypt);
	int32_t l = 0;
	l = $nc(DESCrypt::initPermRight1)->get((int32_t)($nc(block)->get(offset) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight0)->get((int32_t)((block->get(offset) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight3)->get((int32_t)(block->get(offset + 1) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight2)->get((int32_t)((block->get(offset + 1) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight5)->get((int32_t)(block->get(offset + 2) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight4)->get((int32_t)((block->get(offset + 2) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight7)->get((int32_t)(block->get(offset + 3) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight6)->get((int32_t)((block->get(offset + 3) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight9)->get((int32_t)(block->get(offset + 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRight8)->get((int32_t)((block->get(offset + 4) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightB)->get((int32_t)(block->get(offset + 5) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightA)->get((int32_t)((block->get(offset + 5) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightD)->get((int32_t)(block->get(offset + 6) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightC)->get((int32_t)((block->get(offset + 6) >> 4) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightF)->get((int32_t)(block->get(offset + 7) & (uint32_t)15));
	l |= $nc(DESCrypt::initPermRightE)->get((int32_t)((block->get(offset + 7) >> 4) & (uint32_t)15));
	return l;
}

void DESCrypt::expandKey($bytes* key) {
	int32_t octet = 0;
	$var($bytes, ek, $new($bytes, 128));
	octet = $nc(key)->get(0);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[3] |= 2;
		(*ek)[9] |= 8;
		(*ek)[18] |= 8;
		(*ek)[27] |= 32;
		(*ek)[33] |= 2;
		(*ek)[42] |= 16;
		(*ek)[48] |= 8;
		(*ek)[65] |= 16;
		(*ek)[74] |= 2;
		(*ek)[80] |= 2;
		(*ek)[89] |= 4;
		(*ek)[99] |= 16;
		(*ek)[104] |= 4;
		(*ek)[122] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[1] |= 4;
		(*ek)[8] |= 1;
		(*ek)[18] |= 4;
		(*ek)[25] |= 32;
		(*ek)[34] |= 32;
		(*ek)[41] |= 8;
		(*ek)[50] |= 8;
		(*ek)[59] |= 32;
		(*ek)[64] |= 16;
		(*ek)[75] |= 4;
		(*ek)[90] |= 1;
		(*ek)[97] |= 16;
		(*ek)[106] |= 2;
		(*ek)[112] |= 2;
		(*ek)[123] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[2] |= 1;
		(*ek)[19] |= 8;
		(*ek)[35] |= 1;
		(*ek)[40] |= 1;
		(*ek)[50] |= 4;
		(*ek)[57] |= 32;
		(*ek)[75] |= 2;
		(*ek)[80] |= 32;
		(*ek)[89] |= 1;
		(*ek)[96] |= 16;
		(*ek)[107] |= 4;
		(*ek)[120] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[4] |= 32;
		(*ek)[20] |= 2;
		(*ek)[31] |= 4;
		(*ek)[37] |= 32;
		(*ek)[47] |= 1;
		(*ek)[54] |= 1;
		(*ek)[63] |= 2;
		(*ek)[68] |= 1;
		(*ek)[78] |= 4;
		(*ek)[84] |= 8;
		(*ek)[101] |= 16;
		(*ek)[108] |= 4;
		(*ek)[119] |= 16;
		(*ek)[126] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[5] |= 4;
		(*ek)[15] |= 4;
		(*ek)[21] |= 32;
		(*ek)[31] |= 1;
		(*ek)[38] |= 1;
		(*ek)[47] |= 2;
		(*ek)[53] |= 2;
		(*ek)[68] |= 8;
		(*ek)[85] |= 16;
		(*ek)[92] |= 4;
		(*ek)[103] |= 16;
		(*ek)[108] |= 32;
		(*ek)[118] |= 32;
		(*ek)[124] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[15] |= 2;
		(*ek)[21] |= 2;
		(*ek)[39] |= 8;
		(*ek)[46] |= 16;
		(*ek)[55] |= 32;
		(*ek)[61] |= 1;
		(*ek)[71] |= 16;
		(*ek)[76] |= 32;
		(*ek)[86] |= 32;
		(*ek)[93] |= 4;
		(*ek)[102] |= 2;
		(*ek)[108] |= 16;
		(*ek)[117] |= 8;
		(*ek)[126] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[14] |= 16;
		(*ek)[23] |= 32;
		(*ek)[29] |= 1;
		(*ek)[38] |= 8;
		(*ek)[52] |= 2;
		(*ek)[63] |= 4;
		(*ek)[70] |= 2;
		(*ek)[76] |= 16;
		(*ek)[85] |= 8;
		(*ek)[100] |= 1;
		(*ek)[110] |= 4;
		(*ek)[116] |= 8;
		(*ek)[127] |= 8;
	}
	octet = key->get(1);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[1] |= 8;
		(*ek)[8] |= 32;
		(*ek)[17] |= 1;
		(*ek)[24] |= 16;
		(*ek)[35] |= 4;
		(*ek)[50] |= 1;
		(*ek)[57] |= 16;
		(*ek)[67] |= 8;
		(*ek)[83] |= 1;
		(*ek)[88] |= 1;
		(*ek)[98] |= 4;
		(*ek)[105] |= 32;
		(*ek)[114] |= 32;
		(*ek)[123] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[0] |= 1;
		(*ek)[11] |= 16;
		(*ek)[16] |= 4;
		(*ek)[35] |= 2;
		(*ek)[40] |= 32;
		(*ek)[49] |= 1;
		(*ek)[56] |= 16;
		(*ek)[65] |= 2;
		(*ek)[74] |= 16;
		(*ek)[80] |= 8;
		(*ek)[99] |= 8;
		(*ek)[115] |= 1;
		(*ek)[121] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[9] |= 16;
		(*ek)[18] |= 2;
		(*ek)[24] |= 2;
		(*ek)[33] |= 4;
		(*ek)[43] |= 16;
		(*ek)[48] |= 4;
		(*ek)[66] |= 32;
		(*ek)[73] |= 8;
		(*ek)[82] |= 8;
		(*ek)[91] |= 32;
		(*ek)[97] |= 2;
		(*ek)[106] |= 16;
		(*ek)[112] |= 8;
		(*ek)[122] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[14] |= 32;
		(*ek)[21] |= 4;
		(*ek)[30] |= 2;
		(*ek)[36] |= 16;
		(*ek)[45] |= 8;
		(*ek)[60] |= 1;
		(*ek)[69] |= 2;
		(*ek)[87] |= 8;
		(*ek)[94] |= 16;
		(*ek)[103] |= 32;
		(*ek)[109] |= 1;
		(*ek)[118] |= 8;
		(*ek)[124] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[7] |= 4;
		(*ek)[14] |= 2;
		(*ek)[20] |= 16;
		(*ek)[29] |= 8;
		(*ek)[44] |= 1;
		(*ek)[54] |= 4;
		(*ek)[60] |= 8;
		(*ek)[71] |= 8;
		(*ek)[78] |= 16;
		(*ek)[87] |= 32;
		(*ek)[93] |= 1;
		(*ek)[102] |= 8;
		(*ek)[116] |= 2;
		(*ek)[125] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[7] |= 2;
		(*ek)[12] |= 1;
		(*ek)[22] |= 4;
		(*ek)[28] |= 8;
		(*ek)[45] |= 16;
		(*ek)[52] |= 4;
		(*ek)[63] |= 16;
		(*ek)[70] |= 8;
		(*ek)[84] |= 2;
		(*ek)[95] |= 4;
		(*ek)[101] |= 32;
		(*ek)[111] |= 1;
		(*ek)[118] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[6] |= 16;
		(*ek)[13] |= 16;
		(*ek)[20] |= 4;
		(*ek)[31] |= 16;
		(*ek)[36] |= 32;
		(*ek)[46] |= 32;
		(*ek)[53] |= 4;
		(*ek)[62] |= 2;
		(*ek)[69] |= 32;
		(*ek)[79] |= 1;
		(*ek)[86] |= 1;
		(*ek)[95] |= 2;
		(*ek)[101] |= 2;
		(*ek)[119] |= 8;
	}
	octet = key->get(2);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[0] |= 32;
		(*ek)[10] |= 8;
		(*ek)[19] |= 32;
		(*ek)[25] |= 2;
		(*ek)[34] |= 16;
		(*ek)[40] |= 8;
		(*ek)[59] |= 8;
		(*ek)[66] |= 2;
		(*ek)[72] |= 2;
		(*ek)[81] |= 4;
		(*ek)[91] |= 16;
		(*ek)[96] |= 4;
		(*ek)[115] |= 2;
		(*ek)[121] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[3] |= 16;
		(*ek)[10] |= 4;
		(*ek)[17] |= 32;
		(*ek)[26] |= 32;
		(*ek)[33] |= 8;
		(*ek)[42] |= 8;
		(*ek)[51] |= 32;
		(*ek)[57] |= 2;
		(*ek)[67] |= 4;
		(*ek)[82] |= 1;
		(*ek)[89] |= 16;
		(*ek)[98] |= 2;
		(*ek)[104] |= 2;
		(*ek)[113] |= 4;
		(*ek)[120] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[1] |= 16;
		(*ek)[11] |= 8;
		(*ek)[27] |= 1;
		(*ek)[32] |= 1;
		(*ek)[42] |= 4;
		(*ek)[49] |= 32;
		(*ek)[58] |= 32;
		(*ek)[67] |= 2;
		(*ek)[72] |= 32;
		(*ek)[81] |= 1;
		(*ek)[88] |= 16;
		(*ek)[99] |= 4;
		(*ek)[114] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[6] |= 32;
		(*ek)[12] |= 2;
		(*ek)[23] |= 4;
		(*ek)[29] |= 32;
		(*ek)[39] |= 1;
		(*ek)[46] |= 1;
		(*ek)[55] |= 2;
		(*ek)[61] |= 2;
		(*ek)[70] |= 4;
		(*ek)[76] |= 8;
		(*ek)[93] |= 16;
		(*ek)[100] |= 4;
		(*ek)[111] |= 16;
		(*ek)[116] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[6] |= 2;
		(*ek)[13] |= 32;
		(*ek)[23] |= 1;
		(*ek)[30] |= 1;
		(*ek)[39] |= 2;
		(*ek)[45] |= 2;
		(*ek)[63] |= 8;
		(*ek)[77] |= 16;
		(*ek)[84] |= 4;
		(*ek)[95] |= 16;
		(*ek)[100] |= 32;
		(*ek)[110] |= 32;
		(*ek)[117] |= 4;
		(*ek)[127] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[4] |= 1;
		(*ek)[13] |= 2;
		(*ek)[31] |= 8;
		(*ek)[38] |= 16;
		(*ek)[47] |= 32;
		(*ek)[53] |= 1;
		(*ek)[62] |= 8;
		(*ek)[68] |= 32;
		(*ek)[78] |= 32;
		(*ek)[85] |= 4;
		(*ek)[94] |= 2;
		(*ek)[100] |= 16;
		(*ek)[109] |= 8;
		(*ek)[127] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[5] |= 16;
		(*ek)[15] |= 32;
		(*ek)[21] |= 1;
		(*ek)[30] |= 8;
		(*ek)[44] |= 2;
		(*ek)[55] |= 4;
		(*ek)[61] |= 32;
		(*ek)[68] |= 16;
		(*ek)[77] |= 8;
		(*ek)[92] |= 1;
		(*ek)[102] |= 4;
		(*ek)[108] |= 8;
		(*ek)[126] |= 16;
	}
	octet = key->get(3);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[2] |= 8;
		(*ek)[9] |= 1;
		(*ek)[16] |= 16;
		(*ek)[27] |= 4;
		(*ek)[42] |= 1;
		(*ek)[49] |= 16;
		(*ek)[58] |= 2;
		(*ek)[75] |= 1;
		(*ek)[80] |= 1;
		(*ek)[90] |= 4;
		(*ek)[97] |= 32;
		(*ek)[106] |= 32;
		(*ek)[113] |= 8;
		(*ek)[120] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[2] |= 4;
		(*ek)[8] |= 4;
		(*ek)[27] |= 2;
		(*ek)[32] |= 32;
		(*ek)[41] |= 1;
		(*ek)[48] |= 16;
		(*ek)[59] |= 4;
		(*ek)[66] |= 16;
		(*ek)[72] |= 8;
		(*ek)[91] |= 8;
		(*ek)[107] |= 1;
		(*ek)[112] |= 1;
		(*ek)[123] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[3] |= 8;
		(*ek)[10] |= 2;
		(*ek)[16] |= 2;
		(*ek)[25] |= 4;
		(*ek)[35] |= 16;
		(*ek)[40] |= 4;
		(*ek)[59] |= 2;
		(*ek)[65] |= 8;
		(*ek)[74] |= 8;
		(*ek)[83] |= 32;
		(*ek)[89] |= 2;
		(*ek)[98] |= 16;
		(*ek)[104] |= 8;
		(*ek)[121] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[4] |= 2;
		(*ek)[13] |= 4;
		(*ek)[22] |= 2;
		(*ek)[28] |= 16;
		(*ek)[37] |= 8;
		(*ek)[52] |= 1;
		(*ek)[62] |= 4;
		(*ek)[79] |= 8;
		(*ek)[86] |= 16;
		(*ek)[95] |= 32;
		(*ek)[101] |= 1;
		(*ek)[110] |= 8;
		(*ek)[126] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[5] |= 32;
		(*ek)[12] |= 16;
		(*ek)[21] |= 8;
		(*ek)[36] |= 1;
		(*ek)[46] |= 4;
		(*ek)[52] |= 8;
		(*ek)[70] |= 16;
		(*ek)[79] |= 32;
		(*ek)[85] |= 1;
		(*ek)[94] |= 8;
		(*ek)[108] |= 2;
		(*ek)[119] |= 4;
		(*ek)[126] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[5] |= 2;
		(*ek)[14] |= 4;
		(*ek)[20] |= 8;
		(*ek)[37] |= 16;
		(*ek)[44] |= 4;
		(*ek)[55] |= 16;
		(*ek)[60] |= 32;
		(*ek)[76] |= 2;
		(*ek)[87] |= 4;
		(*ek)[93] |= 32;
		(*ek)[103] |= 1;
		(*ek)[110] |= 1;
		(*ek)[119] |= 2;
		(*ek)[124] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[7] |= 32;
		(*ek)[12] |= 4;
		(*ek)[23] |= 16;
		(*ek)[28] |= 32;
		(*ek)[38] |= 32;
		(*ek)[45] |= 4;
		(*ek)[54] |= 2;
		(*ek)[60] |= 16;
		(*ek)[71] |= 1;
		(*ek)[78] |= 1;
		(*ek)[87] |= 2;
		(*ek)[93] |= 2;
		(*ek)[111] |= 8;
		(*ek)[118] |= 16;
		(*ek)[125] |= 16;
	}
	octet = key->get(4);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[1] |= 1;
		(*ek)[11] |= 32;
		(*ek)[17] |= 2;
		(*ek)[26] |= 16;
		(*ek)[32] |= 8;
		(*ek)[51] |= 8;
		(*ek)[64] |= 2;
		(*ek)[73] |= 4;
		(*ek)[83] |= 16;
		(*ek)[88] |= 4;
		(*ek)[107] |= 2;
		(*ek)[112] |= 32;
		(*ek)[122] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[0] |= 4;
		(*ek)[9] |= 32;
		(*ek)[18] |= 32;
		(*ek)[25] |= 8;
		(*ek)[34] |= 8;
		(*ek)[43] |= 32;
		(*ek)[49] |= 2;
		(*ek)[58] |= 16;
		(*ek)[74] |= 1;
		(*ek)[81] |= 16;
		(*ek)[90] |= 2;
		(*ek)[96] |= 2;
		(*ek)[105] |= 4;
		(*ek)[115] |= 16;
		(*ek)[122] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[2] |= 2;
		(*ek)[19] |= 1;
		(*ek)[24] |= 1;
		(*ek)[34] |= 4;
		(*ek)[41] |= 32;
		(*ek)[50] |= 32;
		(*ek)[57] |= 8;
		(*ek)[64] |= 32;
		(*ek)[73] |= 1;
		(*ek)[80] |= 16;
		(*ek)[91] |= 4;
		(*ek)[106] |= 1;
		(*ek)[113] |= 16;
		(*ek)[123] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[3] |= 4;
		(*ek)[10] |= 16;
		(*ek)[16] |= 8;
		(*ek)[35] |= 8;
		(*ek)[51] |= 1;
		(*ek)[56] |= 1;
		(*ek)[67] |= 16;
		(*ek)[72] |= 4;
		(*ek)[91] |= 2;
		(*ek)[96] |= 32;
		(*ek)[105] |= 1;
		(*ek)[112] |= 16;
		(*ek)[121] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[4] |= 16;
		(*ek)[15] |= 1;
		(*ek)[22] |= 1;
		(*ek)[31] |= 2;
		(*ek)[37] |= 2;
		(*ek)[55] |= 8;
		(*ek)[62] |= 16;
		(*ek)[69] |= 16;
		(*ek)[76] |= 4;
		(*ek)[87] |= 16;
		(*ek)[92] |= 32;
		(*ek)[102] |= 32;
		(*ek)[109] |= 4;
		(*ek)[118] |= 2;
		(*ek)[125] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[6] |= 4;
		(*ek)[23] |= 8;
		(*ek)[30] |= 16;
		(*ek)[39] |= 32;
		(*ek)[45] |= 1;
		(*ek)[54] |= 8;
		(*ek)[70] |= 32;
		(*ek)[77] |= 4;
		(*ek)[86] |= 2;
		(*ek)[92] |= 16;
		(*ek)[101] |= 8;
		(*ek)[116] |= 1;
		(*ek)[125] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[4] |= 4;
		(*ek)[13] |= 1;
		(*ek)[22] |= 8;
		(*ek)[36] |= 2;
		(*ek)[47] |= 4;
		(*ek)[53] |= 32;
		(*ek)[63] |= 1;
		(*ek)[69] |= 8;
		(*ek)[84] |= 1;
		(*ek)[94] |= 4;
		(*ek)[100] |= 8;
		(*ek)[117] |= 16;
		(*ek)[127] |= 32;
	}
	octet = key->get(5);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[3] |= 32;
		(*ek)[8] |= 16;
		(*ek)[19] |= 4;
		(*ek)[34] |= 1;
		(*ek)[41] |= 16;
		(*ek)[50] |= 2;
		(*ek)[56] |= 2;
		(*ek)[67] |= 1;
		(*ek)[72] |= 1;
		(*ek)[82] |= 4;
		(*ek)[89] |= 32;
		(*ek)[98] |= 32;
		(*ek)[105] |= 8;
		(*ek)[114] |= 8;
		(*ek)[121] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[1] |= 32;
		(*ek)[19] |= 2;
		(*ek)[24] |= 32;
		(*ek)[33] |= 1;
		(*ek)[40] |= 16;
		(*ek)[51] |= 4;
		(*ek)[64] |= 8;
		(*ek)[83] |= 8;
		(*ek)[99] |= 1;
		(*ek)[104] |= 1;
		(*ek)[114] |= 4;
		(*ek)[120] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[8] |= 2;
		(*ek)[17] |= 4;
		(*ek)[27] |= 16;
		(*ek)[32] |= 4;
		(*ek)[51] |= 2;
		(*ek)[56] |= 32;
		(*ek)[66] |= 8;
		(*ek)[75] |= 32;
		(*ek)[81] |= 2;
		(*ek)[90] |= 16;
		(*ek)[96] |= 8;
		(*ek)[115] |= 8;
		(*ek)[122] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[2] |= 16;
		(*ek)[18] |= 1;
		(*ek)[25] |= 16;
		(*ek)[34] |= 2;
		(*ek)[40] |= 2;
		(*ek)[49] |= 4;
		(*ek)[59] |= 16;
		(*ek)[66] |= 4;
		(*ek)[73] |= 32;
		(*ek)[82] |= 32;
		(*ek)[89] |= 8;
		(*ek)[98] |= 8;
		(*ek)[107] |= 32;
		(*ek)[113] |= 2;
		(*ek)[123] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[7] |= 1;
		(*ek)[13] |= 8;
		(*ek)[28] |= 1;
		(*ek)[38] |= 4;
		(*ek)[44] |= 8;
		(*ek)[61] |= 16;
		(*ek)[71] |= 32;
		(*ek)[77] |= 1;
		(*ek)[86] |= 8;
		(*ek)[100] |= 2;
		(*ek)[111] |= 4;
		(*ek)[117] |= 32;
		(*ek)[124] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[12] |= 8;
		(*ek)[29] |= 16;
		(*ek)[36] |= 4;
		(*ek)[47] |= 16;
		(*ek)[52] |= 32;
		(*ek)[62] |= 32;
		(*ek)[68] |= 2;
		(*ek)[79] |= 4;
		(*ek)[85] |= 32;
		(*ek)[95] |= 1;
		(*ek)[102] |= 1;
		(*ek)[111] |= 2;
		(*ek)[117] |= 2;
		(*ek)[126] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[5] |= 1;
		(*ek)[15] |= 16;
		(*ek)[20] |= 32;
		(*ek)[30] |= 32;
		(*ek)[37] |= 4;
		(*ek)[46] |= 2;
		(*ek)[52] |= 16;
		(*ek)[61] |= 8;
		(*ek)[70] |= 1;
		(*ek)[79] |= 2;
		(*ek)[85] |= 2;
		(*ek)[103] |= 8;
		(*ek)[110] |= 16;
		(*ek)[119] |= 32;
		(*ek)[124] |= 4;
	}
	octet = key->get(6);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[0] |= 16;
		(*ek)[9] |= 2;
		(*ek)[18] |= 16;
		(*ek)[24] |= 8;
		(*ek)[43] |= 8;
		(*ek)[59] |= 1;
		(*ek)[65] |= 4;
		(*ek)[75] |= 16;
		(*ek)[80] |= 4;
		(*ek)[99] |= 2;
		(*ek)[104] |= 32;
		(*ek)[113] |= 1;
		(*ek)[123] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[10] |= 32;
		(*ek)[17] |= 8;
		(*ek)[26] |= 8;
		(*ek)[35] |= 32;
		(*ek)[41] |= 2;
		(*ek)[50] |= 16;
		(*ek)[56] |= 8;
		(*ek)[66] |= 1;
		(*ek)[73] |= 16;
		(*ek)[82] |= 2;
		(*ek)[88] |= 2;
		(*ek)[97] |= 4;
		(*ek)[107] |= 16;
		(*ek)[112] |= 4;
		(*ek)[121] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[0] |= 2;
		(*ek)[11] |= 1;
		(*ek)[16] |= 1;
		(*ek)[26] |= 4;
		(*ek)[33] |= 32;
		(*ek)[42] |= 32;
		(*ek)[49] |= 8;
		(*ek)[58] |= 8;
		(*ek)[65] |= 1;
		(*ek)[72] |= 16;
		(*ek)[83] |= 4;
		(*ek)[98] |= 1;
		(*ek)[105] |= 16;
		(*ek)[114] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[8] |= 8;
		(*ek)[27] |= 8;
		(*ek)[43] |= 1;
		(*ek)[48] |= 1;
		(*ek)[58] |= 4;
		(*ek)[64] |= 4;
		(*ek)[83] |= 2;
		(*ek)[88] |= 32;
		(*ek)[97] |= 1;
		(*ek)[104] |= 16;
		(*ek)[115] |= 4;
		(*ek)[122] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[5] |= 8;
		(*ek)[14] |= 1;
		(*ek)[23] |= 2;
		(*ek)[29] |= 2;
		(*ek)[47] |= 8;
		(*ek)[54] |= 16;
		(*ek)[63] |= 32;
		(*ek)[68] |= 4;
		(*ek)[79] |= 16;
		(*ek)[84] |= 32;
		(*ek)[94] |= 32;
		(*ek)[101] |= 4;
		(*ek)[110] |= 2;
		(*ek)[116] |= 16;
		(*ek)[127] |= 1;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[4] |= 8;
		(*ek)[15] |= 8;
		(*ek)[22] |= 16;
		(*ek)[31] |= 32;
		(*ek)[37] |= 1;
		(*ek)[46] |= 8;
		(*ek)[60] |= 2;
		(*ek)[69] |= 4;
		(*ek)[78] |= 2;
		(*ek)[84] |= 16;
		(*ek)[93] |= 8;
		(*ek)[108] |= 1;
		(*ek)[118] |= 4;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[7] |= 16;
		(*ek)[14] |= 8;
		(*ek)[28] |= 2;
		(*ek)[39] |= 4;
		(*ek)[45] |= 32;
		(*ek)[55] |= 1;
		(*ek)[62] |= 1;
		(*ek)[76] |= 1;
		(*ek)[86] |= 4;
		(*ek)[92] |= 8;
		(*ek)[109] |= 16;
		(*ek)[116] |= 4;
		(*ek)[125] |= 1;
	}
	octet = key->get(7);
	if (((int32_t)(octet & (uint32_t)128)) != 0) {
		(*ek)[1] |= 2;
		(*ek)[11] |= 4;
		(*ek)[26] |= 1;
		(*ek)[33] |= 16;
		(*ek)[42] |= 2;
		(*ek)[48] |= 2;
		(*ek)[57] |= 4;
		(*ek)[64] |= 1;
		(*ek)[74] |= 4;
		(*ek)[81] |= 32;
		(*ek)[90] |= 32;
		(*ek)[97] |= 8;
		(*ek)[106] |= 8;
		(*ek)[115] |= 32;
		(*ek)[120] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)64)) != 0) {
		(*ek)[2] |= 32;
		(*ek)[11] |= 2;
		(*ek)[16] |= 32;
		(*ek)[25] |= 1;
		(*ek)[32] |= 16;
		(*ek)[43] |= 4;
		(*ek)[58] |= 1;
		(*ek)[75] |= 8;
		(*ek)[91] |= 1;
		(*ek)[96] |= 1;
		(*ek)[106] |= 4;
		(*ek)[113] |= 32;
	}
	if (((int32_t)(octet & (uint32_t)32)) != 0) {
		(*ek)[3] |= 1;
		(*ek)[9] |= 4;
		(*ek)[19] |= 16;
		(*ek)[24] |= 4;
		(*ek)[43] |= 2;
		(*ek)[48] |= 32;
		(*ek)[57] |= 1;
		(*ek)[67] |= 32;
		(*ek)[73] |= 2;
		(*ek)[82] |= 16;
		(*ek)[88] |= 8;
		(*ek)[107] |= 8;
		(*ek)[120] |= 2;
	}
	if (((int32_t)(octet & (uint32_t)16)) != 0) {
		(*ek)[0] |= 8;
		(*ek)[10] |= 1;
		(*ek)[17] |= 16;
		(*ek)[26] |= 2;
		(*ek)[32] |= 2;
		(*ek)[41] |= 4;
		(*ek)[51] |= 16;
		(*ek)[56] |= 4;
		(*ek)[65] |= 32;
		(*ek)[74] |= 32;
		(*ek)[81] |= 8;
		(*ek)[90] |= 8;
		(*ek)[99] |= 32;
		(*ek)[105] |= 2;
		(*ek)[114] |= 16;
	}
	if (((int32_t)(octet & (uint32_t)8)) != 0) {
		(*ek)[6] |= 1;
		(*ek)[20] |= 1;
		(*ek)[30] |= 4;
		(*ek)[36] |= 8;
		(*ek)[53] |= 16;
		(*ek)[60] |= 4;
		(*ek)[69] |= 1;
		(*ek)[78] |= 8;
		(*ek)[92] |= 2;
		(*ek)[103] |= 4;
		(*ek)[109] |= 32;
		(*ek)[119] |= 1;
		(*ek)[125] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)4)) != 0) {
		(*ek)[7] |= 8;
		(*ek)[21] |= 16;
		(*ek)[28] |= 4;
		(*ek)[39] |= 16;
		(*ek)[44] |= 32;
		(*ek)[54] |= 32;
		(*ek)[61] |= 4;
		(*ek)[71] |= 4;
		(*ek)[77] |= 32;
		(*ek)[87] |= 1;
		(*ek)[94] |= 1;
		(*ek)[103] |= 2;
		(*ek)[109] |= 2;
		(*ek)[124] |= 8;
	}
	if (((int32_t)(octet & (uint32_t)2)) != 0) {
		(*ek)[6] |= 8;
		(*ek)[12] |= 32;
		(*ek)[22] |= 32;
		(*ek)[29] |= 4;
		(*ek)[38] |= 2;
		(*ek)[44] |= 16;
		(*ek)[53] |= 8;
		(*ek)[71] |= 2;
		(*ek)[77] |= 2;
		(*ek)[95] |= 8;
		(*ek)[102] |= 16;
		(*ek)[111] |= 32;
		(*ek)[117] |= 1;
		(*ek)[127] |= 16;
	}
	$set(this, expandedKey, ek);
}

void clinit$DESCrypt($Class* class$) {
	$assignStatic(DESCrypt::s0p, $new($ints, {
		0x00410100,
		0x00010000,
		0x40400000,
		0x40410100,
		0x00400000,
		0x40010100,
		0x40010000,
		0x40400000,
		0x40010100,
		0x00410100,
		0x00410000,
		0x40000100,
		0x40400100,
		0x00400000,
		0,
		0x40010000,
		0x00010000,
		0x40000000,
		0x00400100,
		0x00010100,
		0x40410100,
		0x00410000,
		0x40000100,
		0x00400100,
		0x40000000,
		256,
		0x00010100,
		0x40410000,
		256,
		0x40400100,
		0x40410000,
		0,
		0,
		0x40410100,
		0x00400100,
		0x40010000,
		0x00410100,
		0x00010000,
		0x40000100,
		0x00400100,
		0x40410000,
		256,
		0x00010100,
		0x40400000,
		0x40010100,
		0x40000000,
		0x40400000,
		0x00410000,
		0x40410100,
		0x00010100,
		0x00410000,
		0x40400100,
		0x00400000,
		0x40000100,
		0x40010000,
		0,
		0x00010000,
		0x00400000,
		0x40400100,
		0x00410100,
		0x40000000,
		0x40410000,
		256,
		0x40010100
	}));
	$assignStatic(DESCrypt::s1p, $new($ints, {
		0x08021002,
		0,
		0x00021000,
		0x08020000,
		0x08000002,
		4098,
		0x08001000,
		0x00021000,
		4096,
		0x08020002,
		2,
		0x08001000,
		0x00020002,
		0x08021000,
		0x08020000,
		2,
		0x00020000,
		0x08001002,
		0x08020002,
		4096,
		0x00021002,
		0x08000000,
		0,
		0x00020002,
		0x08001002,
		0x00021002,
		0x08021000,
		0x08000002,
		0x08000000,
		0x00020000,
		4098,
		0x08021002,
		0x00020002,
		0x08021000,
		0x08001000,
		0x00021002,
		0x08021002,
		0x00020002,
		0x08000002,
		0,
		0x08000000,
		4098,
		0x00020000,
		0x08020002,
		4096,
		0x08000000,
		0x00021002,
		0x08001002,
		0x08021000,
		4096,
		0,
		0x08000002,
		2,
		0x08021002,
		0x00021000,
		0x08020000,
		0x08020002,
		0x00020000,
		4098,
		0x08001000,
		0x08001002,
		2,
		0x08020000,
		0x00021000
	}));
	$assignStatic(DESCrypt::s2p, $new($ints, {
		0x20800000,
		0x00808020,
		32,
		0x20800020,
		0x20008000,
		0x00800000,
		0x20800020,
		0x00008020,
		0x00800020,
		32768,
		0x00808000,
		0x20000000,
		0x20808020,
		0x20000020,
		0x20000000,
		0x20808000,
		0,
		0x20008000,
		0x00808020,
		32,
		0x20000020,
		0x20808020,
		32768,
		0x20800000,
		0x20808000,
		0x00800020,
		0x20008020,
		0x00808000,
		0x00008020,
		0,
		0x00800000,
		0x20008020,
		0x00808020,
		32,
		0x20000000,
		32768,
		0x20000020,
		0x20008000,
		0x00808000,
		0x20800020,
		0,
		0x00808020,
		0x00008020,
		0x20808000,
		0x20008000,
		0x00800000,
		0x20808020,
		0x20000000,
		0x20008020,
		0x20800000,
		0x00800000,
		0x20808020,
		32768,
		0x00800020,
		0x20800020,
		0x00008020,
		0x00800020,
		0,
		0x20808000,
		0x20000020,
		0x20800000,
		0x20008020,
		32,
		0x00808000
	}));
	$assignStatic(DESCrypt::s3p, $new($ints, {
		0x00080201,
		0x02000200,
		1,
		0x02080201,
		0,
		0x02080000,
		0x02000201,
		0x00080001,
		0x02080200,
		0x02000001,
		0x02000000,
		513,
		0x02000001,
		0x00080201,
		0x00080000,
		0x02000000,
		0x02080001,
		0x00080200,
		512,
		1,
		0x00080200,
		0x02000201,
		0x02080000,
		512,
		513,
		0,
		0x00080001,
		0x02080200,
		0x02000200,
		0x02080001,
		0x02080201,
		0x00080000,
		0x02080001,
		513,
		0x00080000,
		0x02000001,
		0x00080200,
		0x02000200,
		1,
		0x02080000,
		0x02000201,
		0,
		512,
		0x00080001,
		0,
		0x02080001,
		0x02080200,
		512,
		0x02000000,
		0x02080201,
		0x00080201,
		0x00080000,
		0x02080201,
		1,
		0x02000200,
		0x00080201,
		0x00080001,
		0x00080200,
		0x02080000,
		0x02000201,
		513,
		0x02000000,
		0x02000001,
		0x02080200
	}));
	$assignStatic(DESCrypt::s4p, $new($ints, {
		0x01000000,
		8192,
		128,
		0x01002084,
		0x01002004,
		0x01000080,
		8324,
		0x01002000,
		8192,
		4,
		0x01000004,
		8320,
		0x01000084,
		0x01002004,
		0x01002080,
		0,
		8320,
		0x01000000,
		8196,
		132,
		0x01000080,
		8324,
		0,
		0x01000004,
		4,
		0x01000084,
		0x01002084,
		8196,
		0x01002000,
		128,
		132,
		0x01002080,
		0x01002080,
		0x01000084,
		8196,
		0x01002000,
		8192,
		4,
		0x01000004,
		0x01000080,
		0x01000000,
		8320,
		0x01002084,
		0,
		8324,
		0x01000000,
		128,
		8196,
		0x01000084,
		128,
		0,
		0x01002084,
		0x01002004,
		0x01002080,
		132,
		8192,
		8320,
		0x01002004,
		0x01000080,
		132,
		4,
		8324,
		0x01002000,
		0x01000004
	}));
	$assignStatic(DESCrypt::s5p, $new($ints, {
		0x10000008,
		0x00040008,
		0,
		0x10040400,
		0x00040008,
		1024,
		0x10000408,
		0x00040000,
		1032,
		0x10040408,
		0x00040400,
		0x10000000,
		0x10000400,
		0x10000008,
		0x10040000,
		0x00040408,
		0x00040000,
		0x10000408,
		0x10040008,
		0,
		1024,
		8,
		0x10040400,
		0x10040008,
		0x10040408,
		0x10040000,
		0x10000000,
		1032,
		8,
		0x00040400,
		0x00040408,
		0x10000400,
		1032,
		0x10000000,
		0x10000400,
		0x00040408,
		0x10040400,
		0x00040008,
		0,
		0x10000400,
		0x10000000,
		1024,
		0x10040008,
		0x00040000,
		0x00040008,
		0x10040408,
		0x00040400,
		8,
		0x10040408,
		0x00040400,
		0x00040000,
		0x10000408,
		0x10000008,
		0x10040000,
		0x00040408,
		0,
		1024,
		0x10000008,
		0x10000408,
		0x10040400,
		0x10040000,
		1032,
		8,
		0x10040008
	}));
	$assignStatic(DESCrypt::s6p, $new($ints, {
		2048,
		64,
		0x00200040,
		(int32_t)0x80200000,
		(int32_t)0x80200840,
		(int32_t)0x80000800,
		2112,
		0,
		0x00200000,
		(int32_t)0x80200040,
		(int32_t)0x80000040,
		0x00200800,
		(int32_t)0x80000000,
		0x00200840,
		0x00200800,
		(int32_t)0x80000040,
		(int32_t)0x80200040,
		2048,
		(int32_t)0x80000800,
		(int32_t)0x80200840,
		0,
		0x00200040,
		(int32_t)0x80200000,
		2112,
		(int32_t)0x80200800,
		(int32_t)0x80000840,
		0x00200840,
		(int32_t)0x80000000,
		(int32_t)0x80000840,
		(int32_t)0x80200800,
		64,
		0x00200000,
		(int32_t)0x80000840,
		0x00200800,
		(int32_t)0x80200800,
		(int32_t)0x80000040,
		2048,
		64,
		0x00200000,
		(int32_t)0x80200800,
		(int32_t)0x80200040,
		(int32_t)0x80000840,
		2112,
		0,
		64,
		(int32_t)0x80200000,
		(int32_t)0x80000000,
		0x00200040,
		0,
		(int32_t)0x80200040,
		0x00200040,
		2112,
		(int32_t)0x80000040,
		2048,
		(int32_t)0x80200840,
		0x00200000,
		0x00200840,
		(int32_t)0x80000000,
		(int32_t)0x80000800,
		(int32_t)0x80200840,
		(int32_t)0x80200000,
		0x00200840,
		0x00200800,
		(int32_t)0x80000800
	}));
	$assignStatic(DESCrypt::s7p, $new($ints, {
		0x04100010,
		0x04104000,
		16400,
		0,
		0x04004000,
		0x00100010,
		0x04100000,
		0x04104010,
		16,
		0x04000000,
		0x00104000,
		16400,
		0x00104010,
		0x04004010,
		0x04000010,
		0x04100000,
		16384,
		0x00104010,
		0x00100010,
		0x04004000,
		0x04104010,
		0x04000010,
		0,
		0x00104000,
		0x04000000,
		0x00100000,
		0x04004010,
		0x04100010,
		0x00100000,
		16384,
		0x04104000,
		16,
		0x00100000,
		16384,
		0x04000010,
		0x04104010,
		16400,
		0x04000000,
		0,
		0x00104000,
		0x04100010,
		0x04004010,
		0x04004000,
		0x00100010,
		0x04104000,
		16,
		0x00100010,
		0x04004000,
		0x04104010,
		0x00100000,
		0x04100000,
		0x04000010,
		0x00104000,
		16400,
		0x04004010,
		0x04100000,
		16,
		0x04104000,
		0x00104010,
		0,
		0x04000000,
		0x04100010,
		16384,
		0x00104010
	}));
	$assignStatic(DESCrypt::permRight0, $new($ints, {
		0,
		0x40000000,
		0x00400000,
		0x40400000,
		16384,
		0x40004000,
		0x00404000,
		0x40404000,
		64,
		0x40000040,
		0x00400040,
		0x40400040,
		16448,
		0x40004040,
		0x00404040,
		0x40404040
	}));
	$assignStatic(DESCrypt::permLeft1, $new($ints, {
		0,
		0x40000000,
		0x00400000,
		0x40400000,
		16384,
		0x40004000,
		0x00404000,
		0x40404000,
		64,
		0x40000040,
		0x00400040,
		0x40400040,
		16448,
		0x40004040,
		0x00404040,
		0x40404040
	}));
	$assignStatic(DESCrypt::permRight2, $new($ints, {
		0,
		0x10000000,
		0x00100000,
		0x10100000,
		4096,
		0x10001000,
		0x00101000,
		0x10101000,
		16,
		0x10000010,
		0x00100010,
		0x10100010,
		4112,
		0x10001010,
		0x00101010,
		0x10101010
	}));
	$assignStatic(DESCrypt::permLeft3, $new($ints, {
		0,
		0x10000000,
		0x00100000,
		0x10100000,
		4096,
		0x10001000,
		0x00101000,
		0x10101000,
		16,
		0x10000010,
		0x00100010,
		0x10100010,
		4112,
		0x10001010,
		0x00101010,
		0x10101010
	}));
	$assignStatic(DESCrypt::permRight4, $new($ints, {
		0,
		0x04000000,
		0x00040000,
		0x04040000,
		1024,
		0x04000400,
		0x00040400,
		0x04040400,
		4,
		0x04000004,
		0x00040004,
		0x04040004,
		1028,
		0x04000404,
		0x00040404,
		0x04040404
	}));
	$assignStatic(DESCrypt::permLeft5, $new($ints, {
		0,
		0x04000000,
		0x00040000,
		0x04040000,
		1024,
		0x04000400,
		0x00040400,
		0x04040400,
		4,
		0x04000004,
		0x00040004,
		0x04040004,
		1028,
		0x04000404,
		0x00040404,
		0x04040404
	}));
	$assignStatic(DESCrypt::permRight6, $new($ints, {
		0,
		0x01000000,
		0x00010000,
		0x01010000,
		256,
		0x01000100,
		0x00010100,
		0x01010100,
		1,
		0x01000001,
		0x00010001,
		0x01010001,
		257,
		0x01000101,
		0x00010101,
		0x01010101
	}));
	$assignStatic(DESCrypt::permLeft7, $new($ints, {
		0,
		0x01000000,
		0x00010000,
		0x01010000,
		256,
		0x01000100,
		0x00010100,
		0x01010100,
		1,
		0x01000001,
		0x00010001,
		0x01010001,
		257,
		0x01000101,
		0x00010101,
		0x01010101
	}));
	$assignStatic(DESCrypt::permRight8, $new($ints, {
		0,
		(int32_t)0x80000000,
		0x00800000,
		(int32_t)0x80800000,
		32768,
		(int32_t)0x80008000,
		0x00808000,
		(int32_t)0x80808000,
		128,
		(int32_t)0x80000080,
		0x00800080,
		(int32_t)0x80800080,
		0x00008080,
		(int32_t)0x80008080,
		0x00808080,
		(int32_t)0x80808080
	}));
	$assignStatic(DESCrypt::permLeft9, $new($ints, {
		0,
		(int32_t)0x80000000,
		0x00800000,
		(int32_t)0x80800000,
		32768,
		(int32_t)0x80008000,
		0x00808000,
		(int32_t)0x80808000,
		128,
		(int32_t)0x80000080,
		0x00800080,
		(int32_t)0x80800080,
		0x00008080,
		(int32_t)0x80008080,
		0x00808080,
		(int32_t)0x80808080
	}));
	$assignStatic(DESCrypt::permRightA, $new($ints, {
		0,
		0x20000000,
		0x00200000,
		0x20200000,
		8192,
		0x20002000,
		0x00202000,
		0x20202000,
		32,
		0x20000020,
		0x00200020,
		0x20200020,
		8224,
		0x20002020,
		0x00202020,
		0x20202020
	}));
	$assignStatic(DESCrypt::permLeftB, $new($ints, {
		0,
		0x20000000,
		0x00200000,
		0x20200000,
		8192,
		0x20002000,
		0x00202000,
		0x20202000,
		32,
		0x20000020,
		0x00200020,
		0x20200020,
		8224,
		0x20002020,
		0x00202020,
		0x20202020
	}));
	$assignStatic(DESCrypt::permRightC, $new($ints, {
		0,
		0x08000000,
		0x00080000,
		0x08080000,
		2048,
		0x08000800,
		0x00080800,
		0x08080800,
		8,
		0x08000008,
		0x00080008,
		0x08080008,
		2056,
		0x08000808,
		0x00080808,
		0x08080808
	}));
	$assignStatic(DESCrypt::permLeftD, $new($ints, {
		0,
		0x08000000,
		0x00080000,
		0x08080000,
		2048,
		0x08000800,
		0x00080800,
		0x08080800,
		8,
		0x08000008,
		0x00080008,
		0x08080008,
		2056,
		0x08000808,
		0x00080808,
		0x08080808
	}));
	$assignStatic(DESCrypt::permRightE, $new($ints, {
		0,
		0x02000000,
		0x00020000,
		0x02020000,
		512,
		0x02000200,
		0x00020200,
		0x02020200,
		2,
		0x02000002,
		0x00020002,
		0x02020002,
		514,
		0x02000202,
		0x00020202,
		0x02020202
	}));
	$assignStatic(DESCrypt::permLeftF, $new($ints, {
		0,
		0x02000000,
		0x00020000,
		0x02020000,
		512,
		0x02000200,
		0x00020200,
		0x02020200,
		2,
		0x02000002,
		0x00020002,
		0x02020002,
		514,
		0x02000202,
		0x00020202,
		0x02020202
	}));
	$assignStatic(DESCrypt::initPermLeft0, $new($ints, {
		0,
		32768,
		0,
		32768,
		128,
		0x00008080,
		128,
		0x00008080,
		0,
		32768,
		0,
		32768,
		128,
		0x00008080,
		128,
		0x00008080
	}));
	$assignStatic(DESCrypt::initPermRight0, $new($ints, {
		0,
		0,
		32768,
		32768,
		0,
		0,
		32768,
		32768,
		128,
		128,
		0x00008080,
		0x00008080,
		128,
		128,
		0x00008080,
		0x00008080
	}));
	$assignStatic(DESCrypt::initPermLeft1, $new($ints, {
		0,
		(int32_t)0x80000000,
		0,
		(int32_t)0x80000000,
		0x00800000,
		(int32_t)0x80800000,
		0x00800000,
		(int32_t)0x80800000,
		0,
		(int32_t)0x80000000,
		0,
		(int32_t)0x80000000,
		0x00800000,
		(int32_t)0x80800000,
		0x00800000,
		(int32_t)0x80800000
	}));
	$assignStatic(DESCrypt::initPermRight1, $new($ints, {
		0,
		0,
		(int32_t)0x80000000,
		(int32_t)0x80000000,
		0,
		0,
		(int32_t)0x80000000,
		(int32_t)0x80000000,
		0x00800000,
		0x00800000,
		(int32_t)0x80800000,
		(int32_t)0x80800000,
		0x00800000,
		0x00800000,
		(int32_t)0x80800000,
		(int32_t)0x80800000
	}));
	$assignStatic(DESCrypt::initPermLeft2, $new($ints, {
		0,
		16384,
		0,
		16384,
		64,
		16448,
		64,
		16448,
		0,
		16384,
		0,
		16384,
		64,
		16448,
		64,
		16448
	}));
	$assignStatic(DESCrypt::initPermRight2, $new($ints, {
		0,
		0,
		16384,
		16384,
		0,
		0,
		16384,
		16384,
		64,
		64,
		16448,
		16448,
		64,
		64,
		16448,
		16448
	}));
	$assignStatic(DESCrypt::initPermLeft3, $new($ints, {
		0,
		0x40000000,
		0,
		0x40000000,
		0x00400000,
		0x40400000,
		0x00400000,
		0x40400000,
		0,
		0x40000000,
		0,
		0x40000000,
		0x00400000,
		0x40400000,
		0x00400000,
		0x40400000
	}));
	$assignStatic(DESCrypt::initPermRight3, $new($ints, {
		0,
		0,
		0x40000000,
		0x40000000,
		0,
		0,
		0x40000000,
		0x40000000,
		0x00400000,
		0x00400000,
		0x40400000,
		0x40400000,
		0x00400000,
		0x00400000,
		0x40400000,
		0x40400000
	}));
	$assignStatic(DESCrypt::initPermLeft4, $new($ints, {
		0,
		8192,
		0,
		8192,
		32,
		8224,
		32,
		8224,
		0,
		8192,
		0,
		8192,
		32,
		8224,
		32,
		8224
	}));
	$assignStatic(DESCrypt::initPermRight4, $new($ints, {
		0,
		0,
		8192,
		8192,
		0,
		0,
		8192,
		8192,
		32,
		32,
		8224,
		8224,
		32,
		32,
		8224,
		8224
	}));
	$assignStatic(DESCrypt::initPermLeft5, $new($ints, {
		0,
		0x20000000,
		0,
		0x20000000,
		0x00200000,
		0x20200000,
		0x00200000,
		0x20200000,
		0,
		0x20000000,
		0,
		0x20000000,
		0x00200000,
		0x20200000,
		0x00200000,
		0x20200000
	}));
	$assignStatic(DESCrypt::initPermRight5, $new($ints, {
		0,
		0,
		0x20000000,
		0x20000000,
		0,
		0,
		0x20000000,
		0x20000000,
		0x00200000,
		0x00200000,
		0x20200000,
		0x20200000,
		0x00200000,
		0x00200000,
		0x20200000,
		0x20200000
	}));
	$assignStatic(DESCrypt::initPermLeft6, $new($ints, {
		0,
		4096,
		0,
		4096,
		16,
		4112,
		16,
		4112,
		0,
		4096,
		0,
		4096,
		16,
		4112,
		16,
		4112
	}));
	$assignStatic(DESCrypt::initPermRight6, $new($ints, {
		0,
		0,
		4096,
		4096,
		0,
		0,
		4096,
		4096,
		16,
		16,
		4112,
		4112,
		16,
		16,
		4112,
		4112
	}));
	$assignStatic(DESCrypt::initPermLeft7, $new($ints, {
		0,
		0x10000000,
		0,
		0x10000000,
		0x00100000,
		0x10100000,
		0x00100000,
		0x10100000,
		0,
		0x10000000,
		0,
		0x10000000,
		0x00100000,
		0x10100000,
		0x00100000,
		0x10100000
	}));
	$assignStatic(DESCrypt::initPermRight7, $new($ints, {
		0,
		0,
		0x10000000,
		0x10000000,
		0,
		0,
		0x10000000,
		0x10000000,
		0x00100000,
		0x00100000,
		0x10100000,
		0x10100000,
		0x00100000,
		0x00100000,
		0x10100000,
		0x10100000
	}));
	$assignStatic(DESCrypt::initPermLeft8, $new($ints, {
		0,
		2048,
		0,
		2048,
		8,
		2056,
		8,
		2056,
		0,
		2048,
		0,
		2048,
		8,
		2056,
		8,
		2056
	}));
	$assignStatic(DESCrypt::initPermRight8, $new($ints, {
		0,
		0,
		2048,
		2048,
		0,
		0,
		2048,
		2048,
		8,
		8,
		2056,
		2056,
		8,
		8,
		2056,
		2056
	}));
	$assignStatic(DESCrypt::initPermLeft9, $new($ints, {
		0,
		0x08000000,
		0,
		0x08000000,
		0x00080000,
		0x08080000,
		0x00080000,
		0x08080000,
		0,
		0x08000000,
		0,
		0x08000000,
		0x00080000,
		0x08080000,
		0x00080000,
		0x08080000
	}));
	$assignStatic(DESCrypt::initPermRight9, $new($ints, {
		0,
		0,
		0x08000000,
		0x08000000,
		0,
		0,
		0x08000000,
		0x08000000,
		0x00080000,
		0x00080000,
		0x08080000,
		0x08080000,
		0x00080000,
		0x00080000,
		0x08080000,
		0x08080000
	}));
	$assignStatic(DESCrypt::initPermLeftA, $new($ints, {
		0,
		1024,
		0,
		1024,
		4,
		1028,
		4,
		1028,
		0,
		1024,
		0,
		1024,
		4,
		1028,
		4,
		1028
	}));
	$assignStatic(DESCrypt::initPermRightA, $new($ints, {
		0,
		0,
		1024,
		1024,
		0,
		0,
		1024,
		1024,
		4,
		4,
		1028,
		1028,
		4,
		4,
		1028,
		1028
	}));
	$assignStatic(DESCrypt::initPermLeftB, $new($ints, {
		0,
		0x04000000,
		0,
		0x04000000,
		0x00040000,
		0x04040000,
		0x00040000,
		0x04040000,
		0,
		0x04000000,
		0,
		0x04000000,
		0x00040000,
		0x04040000,
		0x00040000,
		0x04040000
	}));
	$assignStatic(DESCrypt::initPermRightB, $new($ints, {
		0,
		0,
		0x04000000,
		0x04000000,
		0,
		0,
		0x04000000,
		0x04000000,
		0x00040000,
		0x00040000,
		0x04040000,
		0x04040000,
		0x00040000,
		0x00040000,
		0x04040000,
		0x04040000
	}));
	$assignStatic(DESCrypt::initPermLeftC, $new($ints, {
		0,
		512,
		0,
		512,
		2,
		514,
		2,
		514,
		0,
		512,
		0,
		512,
		2,
		514,
		2,
		514
	}));
	$assignStatic(DESCrypt::initPermRightC, $new($ints, {
		0,
		0,
		512,
		512,
		0,
		0,
		512,
		512,
		2,
		2,
		514,
		514,
		2,
		2,
		514,
		514
	}));
	$assignStatic(DESCrypt::initPermLeftD, $new($ints, {
		0,
		0x02000000,
		0,
		0x02000000,
		0x00020000,
		0x02020000,
		0x00020000,
		0x02020000,
		0,
		0x02000000,
		0,
		0x02000000,
		0x00020000,
		0x02020000,
		0x00020000,
		0x02020000
	}));
	$assignStatic(DESCrypt::initPermRightD, $new($ints, {
		0,
		0,
		0x02000000,
		0x02000000,
		0,
		0,
		0x02000000,
		0x02000000,
		0x00020000,
		0x00020000,
		0x02020000,
		0x02020000,
		0x00020000,
		0x00020000,
		0x02020000,
		0x02020000
	}));
	$assignStatic(DESCrypt::initPermLeftE, $new($ints, {
		0,
		256,
		0,
		256,
		1,
		257,
		1,
		257,
		0,
		256,
		0,
		256,
		1,
		257,
		1,
		257
	}));
	$assignStatic(DESCrypt::initPermRightE, $new($ints, {
		0,
		0,
		256,
		256,
		0,
		0,
		256,
		256,
		1,
		1,
		257,
		257,
		1,
		1,
		257,
		257
	}));
	$assignStatic(DESCrypt::initPermLeftF, $new($ints, {
		0,
		0x01000000,
		0,
		0x01000000,
		0x00010000,
		0x01010000,
		0x00010000,
		0x01010000,
		0,
		0x01000000,
		0,
		0x01000000,
		0x00010000,
		0x01010000,
		0x00010000,
		0x01010000
	}));
	$assignStatic(DESCrypt::initPermRightF, $new($ints, {
		0,
		0,
		0x01000000,
		0x01000000,
		0,
		0,
		0x01000000,
		0x01000000,
		0x00010000,
		0x00010000,
		0x01010000,
		0x01010000,
		0x00010000,
		0x00010000,
		0x01010000,
		0x01010000
	}));
}

DESCrypt::DESCrypt() {
}

$Class* DESCrypt::load$($String* name, bool initialize) {
	$loadClass(DESCrypt, name, initialize, &_DESCrypt_ClassInfo_, clinit$DESCrypt, allocate$DESCrypt);
	return class$;
}

$Class* DESCrypt::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com