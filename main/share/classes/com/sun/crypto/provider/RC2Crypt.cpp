#include <com/sun/crypto/provider/RC2Crypt.h>

#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <jcpp.h>

#undef PI_TABLE

using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _RC2Crypt_FieldInfo_[] = {
	{"PI_TABLE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RC2Crypt, PI_TABLE)},
	{"expandedKey", "[I", nullptr, $PRIVATE | $FINAL, $field(RC2Crypt, expandedKey)},
	{"effectiveKeyBits", "I", nullptr, $PRIVATE, $field(RC2Crypt, effectiveKeyBits)},
	{}
};

$MethodInfo _RC2Crypt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RC2Crypt::*)()>(&RC2Crypt::init$))},
	{"checkKey", "(Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&RC2Crypt::checkKey)), "java.security.InvalidKeyException"},
	{"decryptBlock", "([BI[BI)V", nullptr, 0},
	{"encryptBlock", "([BI[BI)V", nullptr, 0},
	{"getBlockSize", "()I", nullptr, 0},
	{"getEffectiveKeyBits", "()I", nullptr, 0, $method(static_cast<int32_t(RC2Crypt::*)()>(&RC2Crypt::getEffectiveKeyBits))},
	{"init", "(ZLjava/lang/String;[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"initEffectiveKeyBits", "(I)V", nullptr, 0, $method(static_cast<void(RC2Crypt::*)(int32_t)>(&RC2Crypt::initEffectiveKeyBits))},
	{}
};

$ClassInfo _RC2Crypt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.RC2Crypt",
	"com.sun.crypto.provider.SymmetricCipher",
	nullptr,
	_RC2Crypt_FieldInfo_,
	_RC2Crypt_MethodInfo_
};

$Object* allocate$RC2Crypt($Class* clazz) {
	return $of($alloc(RC2Crypt));
}

$ints* RC2Crypt::PI_TABLE = nullptr;

void RC2Crypt::init$() {
	$SymmetricCipher::init$();
	$set(this, expandedKey, $new($ints, 64));
}

int32_t RC2Crypt::getBlockSize() {
	return 8;
}

int32_t RC2Crypt::getEffectiveKeyBits() {
	return this->effectiveKeyBits;
}

void RC2Crypt::initEffectiveKeyBits(int32_t effectiveKeyBits) {
	this->effectiveKeyBits = effectiveKeyBits;
}

void RC2Crypt::checkKey($String* algorithm, int32_t keyLength) {
	$init(RC2Crypt);
	if ($nc(algorithm)->equals("RC2"_s) == false) {
		$throwNew($InvalidKeyException, "Key algorithm must be RC2"_s);
	}
	if ((keyLength < 5) || (keyLength > 128)) {
		$throwNew($InvalidKeyException, "RC2 key length must be between 40 and 1024 bit"_s);
	}
}

void RC2Crypt::init(bool decrypting, $String* algorithm, $bytes* key) {
	int32_t keyLength = $nc(key)->length;
	if (this->effectiveKeyBits == 0) {
		this->effectiveKeyBits = keyLength << 3;
	}
	checkKey(algorithm, keyLength);
	$var($bytes, expandedKeyBytes, $new($bytes, 128));
	$System::arraycopy(key, 0, expandedKeyBytes, 0, keyLength);
	int32_t t = expandedKeyBytes->get(keyLength - 1);
	for (int32_t i = keyLength; i < 128; ++i) {
		t = $nc(RC2Crypt::PI_TABLE)->get((int32_t)((t + expandedKeyBytes->get(i - keyLength)) & (uint32_t)255));
		expandedKeyBytes->set(i, (int8_t)t);
	}
	int32_t t8 = (this->effectiveKeyBits + 7) >> 3;
	int32_t tm = $sr(255, (int32_t)(-this->effectiveKeyBits & (uint32_t)7));
	t = $nc(RC2Crypt::PI_TABLE)->get((int32_t)(expandedKeyBytes->get(128 - t8) & (uint32_t)tm));
	expandedKeyBytes->set(128 - t8, (int8_t)t);
	for (int32_t i = 127 - t8; i >= 0; --i) {
		t = $nc(RC2Crypt::PI_TABLE)->get(t ^ ((int32_t)(expandedKeyBytes->get(i + t8) & (uint32_t)255)));
		expandedKeyBytes->set(i, (int8_t)t);
	}
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < 64; ++i, j += 2) {
			t = ((int32_t)(expandedKeyBytes->get(j) & (uint32_t)255)) + (((int32_t)(expandedKeyBytes->get(j + 1) & (uint32_t)255)) << 8);
			$nc(this->expandedKey)->set(i, t);
		}
	}
}

void RC2Crypt::encryptBlock($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs) {
	int32_t R0 = ((int32_t)($nc(in)->get(inOfs) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 1) & (uint32_t)255)) << 8);
	int32_t R1 = ((int32_t)(in->get(inOfs + 2) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 3) & (uint32_t)255)) << 8);
	int32_t R2 = ((int32_t)(in->get(inOfs + 4) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 5) & (uint32_t)255)) << 8);
	int32_t R3 = ((int32_t)(in->get(inOfs + 6) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 7) & (uint32_t)255)) << 8);
	for (int32_t i = 0; i < 20; i += 4) {
		R0 = (int32_t)((R0 + $nc(this->expandedKey)->get(i) + ((int32_t)(R3 & (uint32_t)R2)) + ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
		R0 = (R0 << 1) | ((int32_t)((uint32_t)R0 >> 15));
		R1 = (int32_t)((R1 + $nc(this->expandedKey)->get(i + 1) + ((int32_t)(R0 & (uint32_t)R3)) + ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R1 = (R1 << 2) | ((int32_t)((uint32_t)R1 >> 14));
		R2 = (int32_t)((R2 + $nc(this->expandedKey)->get(i + 2) + ((int32_t)(R1 & (uint32_t)R0)) + ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R2 = (R2 << 3) | ((int32_t)((uint32_t)R2 >> 13));
		R3 = (int32_t)((R3 + $nc(this->expandedKey)->get(i + 3) + ((int32_t)(R2 & (uint32_t)R1)) + ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R3 = (R3 << 5) | ((int32_t)((uint32_t)R3 >> 11));
	}
	R0 += $nc(this->expandedKey)->get((int32_t)(R3 & (uint32_t)63));
	R1 += $nc(this->expandedKey)->get((int32_t)(R0 & (uint32_t)63));
	R2 += $nc(this->expandedKey)->get((int32_t)(R1 & (uint32_t)63));
	R3 += $nc(this->expandedKey)->get((int32_t)(R2 & (uint32_t)63));
	for (int32_t i = 20; i < 44; i += 4) {
		R0 = (int32_t)((R0 + $nc(this->expandedKey)->get(i) + ((int32_t)(R3 & (uint32_t)R2)) + ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
		R0 = (R0 << 1) | ((int32_t)((uint32_t)R0 >> 15));
		R1 = (int32_t)((R1 + $nc(this->expandedKey)->get(i + 1) + ((int32_t)(R0 & (uint32_t)R3)) + ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R1 = (R1 << 2) | ((int32_t)((uint32_t)R1 >> 14));
		R2 = (int32_t)((R2 + $nc(this->expandedKey)->get(i + 2) + ((int32_t)(R1 & (uint32_t)R0)) + ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R2 = (R2 << 3) | ((int32_t)((uint32_t)R2 >> 13));
		R3 = (int32_t)((R3 + $nc(this->expandedKey)->get(i + 3) + ((int32_t)(R2 & (uint32_t)R1)) + ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R3 = (R3 << 5) | ((int32_t)((uint32_t)R3 >> 11));
	}
	R0 += $nc(this->expandedKey)->get((int32_t)(R3 & (uint32_t)63));
	R1 += $nc(this->expandedKey)->get((int32_t)(R0 & (uint32_t)63));
	R2 += $nc(this->expandedKey)->get((int32_t)(R1 & (uint32_t)63));
	R3 += $nc(this->expandedKey)->get((int32_t)(R2 & (uint32_t)63));
	for (int32_t i = 44; i < 64; i += 4) {
		R0 = (int32_t)((R0 + $nc(this->expandedKey)->get(i) + ((int32_t)(R3 & (uint32_t)R2)) + ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
		R0 = (R0 << 1) | ((int32_t)((uint32_t)R0 >> 15));
		R1 = (int32_t)((R1 + $nc(this->expandedKey)->get(i + 1) + ((int32_t)(R0 & (uint32_t)R3)) + ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R1 = (R1 << 2) | ((int32_t)((uint32_t)R1 >> 14));
		R2 = (int32_t)((R2 + $nc(this->expandedKey)->get(i + 2) + ((int32_t)(R1 & (uint32_t)R0)) + ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R2 = (R2 << 3) | ((int32_t)((uint32_t)R2 >> 13));
		R3 = (int32_t)((R3 + $nc(this->expandedKey)->get(i + 3) + ((int32_t)(R2 & (uint32_t)R1)) + ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R3 = (R3 << 5) | ((int32_t)((uint32_t)R3 >> 11));
	}
	$nc(out)->set(outOfs, (int8_t)R0);
	out->set(outOfs + 1, (int8_t)(R0 >> 8));
	out->set(outOfs + 2, (int8_t)R1);
	out->set(outOfs + 3, (int8_t)(R1 >> 8));
	out->set(outOfs + 4, (int8_t)R2);
	out->set(outOfs + 5, (int8_t)(R2 >> 8));
	out->set(outOfs + 6, (int8_t)R3);
	out->set(outOfs + 7, (int8_t)(R3 >> 8));
}

void RC2Crypt::decryptBlock($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs) {
	int32_t R0 = ((int32_t)($nc(in)->get(inOfs) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 1) & (uint32_t)255)) << 8);
	int32_t R1 = ((int32_t)(in->get(inOfs + 2) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 3) & (uint32_t)255)) << 8);
	int32_t R2 = ((int32_t)(in->get(inOfs + 4) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 5) & (uint32_t)255)) << 8);
	int32_t R3 = ((int32_t)(in->get(inOfs + 6) & (uint32_t)255)) + (((int32_t)(in->get(inOfs + 7) & (uint32_t)255)) << 8);
	for (int32_t i = 64; i > 44; i -= 4) {
		R3 = (int32_t)(((R3 << 11) | ((int32_t)((uint32_t)R3 >> 5))) & (uint32_t)0x0000FFFF);
		R3 = (int32_t)((R3 - $nc(this->expandedKey)->get(i - 1) - ((int32_t)(R2 & (uint32_t)R1)) - ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)(((R2 << 13) | ((int32_t)((uint32_t)R2 >> 3))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)((R2 - $nc(this->expandedKey)->get(i - 2) - ((int32_t)(R1 & (uint32_t)R0)) - ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)(((R1 << 14) | ((int32_t)((uint32_t)R1 >> 2))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)((R1 - $nc(this->expandedKey)->get(i - 3) - ((int32_t)(R0 & (uint32_t)R3)) - ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)(((R0 << 15) | ((int32_t)((uint32_t)R0 >> 1))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)((R0 - $nc(this->expandedKey)->get(i - 4) - ((int32_t)(R3 & (uint32_t)R2)) - ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
	}
	R3 = (int32_t)((R3 - $nc(this->expandedKey)->get((int32_t)(R2 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R2 = (int32_t)((R2 - $nc(this->expandedKey)->get((int32_t)(R1 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R1 = (int32_t)((R1 - $nc(this->expandedKey)->get((int32_t)(R0 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R0 = (int32_t)((R0 - $nc(this->expandedKey)->get((int32_t)(R3 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	for (int32_t i = 44; i > 20; i -= 4) {
		R3 = (int32_t)(((R3 << 11) | ((int32_t)((uint32_t)R3 >> 5))) & (uint32_t)0x0000FFFF);
		R3 = (int32_t)((R3 - $nc(this->expandedKey)->get(i - 1) - ((int32_t)(R2 & (uint32_t)R1)) - ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)(((R2 << 13) | ((int32_t)((uint32_t)R2 >> 3))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)((R2 - $nc(this->expandedKey)->get(i - 2) - ((int32_t)(R1 & (uint32_t)R0)) - ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)(((R1 << 14) | ((int32_t)((uint32_t)R1 >> 2))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)((R1 - $nc(this->expandedKey)->get(i - 3) - ((int32_t)(R0 & (uint32_t)R3)) - ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)(((R0 << 15) | ((int32_t)((uint32_t)R0 >> 1))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)((R0 - $nc(this->expandedKey)->get(i - 4) - ((int32_t)(R3 & (uint32_t)R2)) - ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
	}
	R3 = (int32_t)((R3 - $nc(this->expandedKey)->get((int32_t)(R2 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R2 = (int32_t)((R2 - $nc(this->expandedKey)->get((int32_t)(R1 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R1 = (int32_t)((R1 - $nc(this->expandedKey)->get((int32_t)(R0 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	R0 = (int32_t)((R0 - $nc(this->expandedKey)->get((int32_t)(R3 & (uint32_t)63))) & (uint32_t)0x0000FFFF);
	for (int32_t i = 20; i > 0; i -= 4) {
		R3 = (int32_t)(((R3 << 11) | ((int32_t)((uint32_t)R3 >> 5))) & (uint32_t)0x0000FFFF);
		R3 = (int32_t)((R3 - $nc(this->expandedKey)->get(i - 1) - ((int32_t)(R2 & (uint32_t)R1)) - ((int32_t)(~R2 & (uint32_t)R0))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)(((R2 << 13) | ((int32_t)((uint32_t)R2 >> 3))) & (uint32_t)0x0000FFFF);
		R2 = (int32_t)((R2 - $nc(this->expandedKey)->get(i - 2) - ((int32_t)(R1 & (uint32_t)R0)) - ((int32_t)(~R1 & (uint32_t)R3))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)(((R1 << 14) | ((int32_t)((uint32_t)R1 >> 2))) & (uint32_t)0x0000FFFF);
		R1 = (int32_t)((R1 - $nc(this->expandedKey)->get(i - 3) - ((int32_t)(R0 & (uint32_t)R3)) - ((int32_t)(~R0 & (uint32_t)R2))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)(((R0 << 15) | ((int32_t)((uint32_t)R0 >> 1))) & (uint32_t)0x0000FFFF);
		R0 = (int32_t)((R0 - $nc(this->expandedKey)->get(i - 4) - ((int32_t)(R3 & (uint32_t)R2)) - ((int32_t)(~R3 & (uint32_t)R1))) & (uint32_t)0x0000FFFF);
	}
	$nc(out)->set(outOfs, (int8_t)R0);
	out->set(outOfs + 1, (int8_t)(R0 >> 8));
	out->set(outOfs + 2, (int8_t)R1);
	out->set(outOfs + 3, (int8_t)(R1 >> 8));
	out->set(outOfs + 4, (int8_t)R2);
	out->set(outOfs + 5, (int8_t)(R2 >> 8));
	out->set(outOfs + 6, (int8_t)R3);
	out->set(outOfs + 7, (int8_t)(R3 >> 8));
}

void clinit$RC2Crypt($Class* class$) {
	$assignStatic(RC2Crypt::PI_TABLE, $new($ints, {
		217,
		120,
		249,
		196,
		25,
		221,
		181,
		237,
		40,
		233,
		253,
		121,
		74,
		160,
		216,
		157,
		198,
		126,
		55,
		131,
		43,
		118,
		83,
		142,
		98,
		76,
		100,
		136,
		68,
		139,
		251,
		162,
		23,
		154,
		89,
		245,
		135,
		179,
		79,
		19,
		97,
		69,
		109,
		141,
		9,
		129,
		125,
		50,
		189,
		143,
		64,
		235,
		134,
		183,
		123,
		11,
		240,
		149,
		33,
		34,
		92,
		107,
		78,
		130,
		84,
		214,
		101,
		147,
		206,
		96,
		178,
		28,
		115,
		86,
		192,
		20,
		167,
		140,
		241,
		220,
		18,
		117,
		202,
		31,
		59,
		190,
		228,
		209,
		66,
		61,
		212,
		48,
		163,
		60,
		182,
		38,
		111,
		191,
		14,
		218,
		70,
		105,
		7,
		87,
		39,
		242,
		29,
		155,
		188,
		148,
		67,
		3,
		248,
		17,
		199,
		246,
		144,
		239,
		62,
		231,
		6,
		195,
		213,
		47,
		200,
		102,
		30,
		215,
		8,
		232,
		234,
		222,
		128,
		82,
		238,
		247,
		132,
		170,
		114,
		172,
		53,
		77,
		106,
		42,
		150,
		26,
		210,
		113,
		90,
		21,
		73,
		116,
		75,
		159,
		208,
		94,
		4,
		24,
		164,
		236,
		194,
		224,
		65,
		110,
		15,
		81,
		203,
		204,
		36,
		145,
		175,
		80,
		161,
		244,
		112,
		57,
		153,
		124,
		58,
		133,
		35,
		184,
		180,
		122,
		252,
		2,
		54,
		91,
		37,
		85,
		151,
		49,
		45,
		93,
		250,
		152,
		227,
		138,
		146,
		174,
		5,
		223,
		41,
		16,
		103,
		108,
		186,
		201,
		211,
		0,
		230,
		207,
		225,
		158,
		168,
		44,
		99,
		22,
		1,
		63,
		88,
		226,
		137,
		169,
		13,
		56,
		52,
		27,
		171,
		51,
		255,
		176,
		187,
		72,
		12,
		95,
		185,
		177,
		205,
		46,
		197,
		243,
		219,
		71,
		229,
		165,
		156,
		119,
		10,
		166,
		32,
		104,
		254,
		127,
		193,
		173
	}));
}

RC2Crypt::RC2Crypt() {
}

$Class* RC2Crypt::load$($String* name, bool initialize) {
	$loadClass(RC2Crypt, name, initialize, &_RC2Crypt_ClassInfo_, clinit$RC2Crypt, allocate$RC2Crypt);
	return class$;
}

$Class* RC2Crypt::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com