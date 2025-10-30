#include <sun/security/provider/MD2.h>

#include <java/util/Arrays.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef C
#undef MD2
#undef PADDING
#undef S
#undef X

using $byteArray2 = $Array<int8_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $DigestBase = ::sun::security::provider::DigestBase;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _MD2_FieldInfo_[] = {
	{"X", "[I", nullptr, $PRIVATE, $field(MD2, X)},
	{"C", "[I", nullptr, $PRIVATE, $field(MD2, C)},
	{"cBytes", "[B", nullptr, $PRIVATE, $field(MD2, cBytes)},
	{"S", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MD2, S)},
	{"PADDING", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MD2, PADDING)},
	{}
};

$MethodInfo _MD2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MD2::*)()>(&MD2::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, 0},
	{"implDigest", "([BI)V", nullptr, 0},
	{"implReset", "()V", nullptr, 0},
	{}
};

$ClassInfo _MD2_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.MD2",
	"sun.security.provider.DigestBase",
	nullptr,
	_MD2_FieldInfo_,
	_MD2_MethodInfo_
};

$Object* allocate$MD2($Class* clazz) {
	return $of($alloc(MD2));
}

$ints* MD2::S = nullptr;
$byteArray2* MD2::PADDING = nullptr;

void MD2::init$() {
	$DigestBase::init$("MD2"_s, 16, 16);
	$set(this, X, $new($ints, 48));
	$set(this, C, $new($ints, 16));
	$set(this, cBytes, $new($bytes, 16));
}

$Object* MD2::clone() {
	$var(MD2, copy, $cast(MD2, $DigestBase::clone()));
	$set($nc(copy), X, $cast($ints, $nc(copy->X)->clone()));
	$set(copy, C, $cast($ints, $nc(copy->C)->clone()));
	$set(copy, cBytes, $new($bytes, 16));
	return $of(copy);
}

void MD2::implReset() {
	$Arrays::fill(this->X, 0);
	$Arrays::fill(this->C, 0);
}

void MD2::implDigest($bytes* out, int32_t ofs) {
	int32_t padValue = 16 - ((int32_t)((int32_t)this->bytesProcessed & (uint32_t)15));
	engineUpdate($nc(MD2::PADDING)->get(padValue), 0, padValue);
	for (int32_t i = 0; i < 16; ++i) {
		$nc(this->cBytes)->set(i, (int8_t)$nc(this->C)->get(i));
	}
	implCompress(this->cBytes, 0);
	for (int32_t i = 0; i < 16; ++i) {
		$nc(out)->set(ofs + i, (int8_t)$nc(this->X)->get(i));
	}
}

void MD2::implCompress($bytes* b, int32_t ofs) {
	for (int32_t i = 0; i < 16; ++i) {
		int32_t k = (int32_t)($nc(b)->get(ofs + i) & (uint32_t)255);
		$nc(this->X)->set(16 + i, k);
		$nc(this->X)->set(32 + i, k ^ $nc(this->X)->get(i));
	}
	int32_t t = $nc(this->C)->get(15);
	for (int32_t i = 0; i < 16; ++i) {
		t = ((*$nc(this->C))[i] ^= $nc(MD2::S)->get($nc(this->X)->get(16 + i) ^ t));
	}
	t = 0;
	for (int32_t i = 0; i < 18; ++i) {
		for (int32_t j = 0; j < 48; ++j) {
			t = ((*$nc(this->X))[j] ^= $nc(MD2::S)->get(t));
		}
		t = (int32_t)((t + i) & (uint32_t)255);
	}
}

void clinit$MD2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MD2::S, $new($ints, {
		41,
		46,
		67,
		201,
		162,
		216,
		124,
		1,
		61,
		54,
		84,
		161,
		236,
		240,
		6,
		19,
		98,
		167,
		5,
		243,
		192,
		199,
		115,
		140,
		152,
		147,
		43,
		217,
		188,
		76,
		130,
		202,
		30,
		155,
		87,
		60,
		253,
		212,
		224,
		22,
		103,
		66,
		111,
		24,
		138,
		23,
		229,
		18,
		190,
		78,
		196,
		214,
		218,
		158,
		222,
		73,
		160,
		251,
		245,
		142,
		187,
		47,
		238,
		122,
		169,
		104,
		121,
		145,
		21,
		178,
		7,
		63,
		148,
		194,
		16,
		137,
		11,
		34,
		95,
		33,
		128,
		127,
		93,
		154,
		90,
		144,
		50,
		39,
		53,
		62,
		204,
		231,
		191,
		247,
		151,
		3,
		255,
		25,
		48,
		179,
		72,
		165,
		181,
		209,
		215,
		94,
		146,
		42,
		172,
		86,
		170,
		198,
		79,
		184,
		56,
		210,
		150,
		164,
		125,
		182,
		118,
		252,
		107,
		226,
		156,
		116,
		4,
		241,
		69,
		157,
		112,
		89,
		100,
		113,
		135,
		32,
		134,
		91,
		207,
		101,
		230,
		45,
		168,
		2,
		27,
		96,
		37,
		173,
		174,
		176,
		185,
		246,
		28,
		70,
		97,
		105,
		52,
		64,
		126,
		15,
		85,
		71,
		163,
		35,
		221,
		81,
		175,
		58,
		195,
		92,
		249,
		206,
		186,
		197,
		234,
		38,
		44,
		83,
		13,
		110,
		133,
		40,
		132,
		9,
		211,
		223,
		205,
		244,
		65,
		129,
		77,
		82,
		106,
		220,
		55,
		200,
		108,
		193,
		171,
		250,
		36,
		225,
		123,
		8,
		12,
		189,
		177,
		74,
		120,
		136,
		149,
		139,
		227,
		99,
		232,
		109,
		233,
		203,
		213,
		254,
		59,
		0,
		29,
		57,
		242,
		239,
		183,
		14,
		102,
		88,
		208,
		228,
		166,
		119,
		114,
		248,
		235,
		117,
		75,
		10,
		49,
		68,
		80,
		180,
		143,
		237,
		31,
		26,
		219,
		153,
		141,
		51,
		159,
		17,
		131,
		20
	}));
	{
		$assignStatic(MD2::PADDING, $new($byteArray2, 17));
		for (int32_t i = 1; i < 17; ++i) {
			$var($bytes, b, $new($bytes, i));
			$Arrays::fill(b, (int8_t)i);
			$nc(MD2::PADDING)->set(i, b);
		}
	}
}

MD2::MD2() {
}

$Class* MD2::load$($String* name, bool initialize) {
	$loadClass(MD2, name, initialize, &_MD2_ClassInfo_, clinit$MD2, allocate$MD2);
	return class$;
}

$Class* MD2::class$ = nullptr;

		} // provider
	} // security
} // sun