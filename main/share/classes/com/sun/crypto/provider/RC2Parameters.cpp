#include <com/sun/crypto/provider/RC2Parameters.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <javax/crypto/spec/RC2ParameterSpec.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef EKB_TABLE
#undef LINE_SEP

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $RC2ParameterSpec = ::javax::crypto::spec::RC2ParameterSpec;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _RC2Parameters_FieldInfo_[] = {
	{"EKB_TABLE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RC2Parameters, EKB_TABLE)},
	{"iv", "[B", nullptr, $PRIVATE, $field(RC2Parameters, iv)},
	{"version", "I", nullptr, $PRIVATE, $field(RC2Parameters, version)},
	{"effectiveKeySize", "I", nullptr, $PRIVATE, $field(RC2Parameters, effectiveKeySize)},
	{}
};

$MethodInfo _RC2Parameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RC2Parameters::*)()>(&RC2Parameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _RC2Parameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.RC2Parameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_RC2Parameters_FieldInfo_,
	_RC2Parameters_MethodInfo_
};

$Object* allocate$RC2Parameters($Class* clazz) {
	return $of($alloc(RC2Parameters));
}

$ints* RC2Parameters::EKB_TABLE = nullptr;

void RC2Parameters::init$() {
	$AlgorithmParametersSpi::init$();
	this->version = 0;
	this->effectiveKeySize = 0;
}

void RC2Parameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($RC2ParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$var($RC2ParameterSpec, rps, $cast($RC2ParameterSpec, paramSpec));
	this->effectiveKeySize = $nc(rps)->getEffectiveKeyBits();
	if (this->effectiveKeySize != 0) {
		if (this->effectiveKeySize < 1 || this->effectiveKeySize > 1024) {
			$throwNew($InvalidParameterSpecException, "RC2 effective key size must be between 1 and 1024 bits"_s);
		}
		if (this->effectiveKeySize < 256) {
			this->version = $nc(RC2Parameters::EKB_TABLE)->get(this->effectiveKeySize);
		} else {
			this->version = this->effectiveKeySize;
		}
	}
	$set(this, iv, rps->getIV());
}

void RC2Parameters::engineInit($bytes* encoded) {
	$var($DerValue, val, $new($DerValue, encoded));
	if (val->tag == $DerValue::tag_Sequence) {
		$nc(val->data$)->reset();
		this->version = $nc(val->data$)->getInteger();
		if (this->version < 0 || this->version > 1024) {
			$throwNew($IOException, $$str({"RC2 parameter parsing error: version number out of legal range (0-1024): "_s, $$str(this->version)}));
		}
		if (this->version > 255) {
			this->effectiveKeySize = this->version;
		} else {
			for (int32_t i = 0; i < $nc(RC2Parameters::EKB_TABLE)->length; ++i) {
				if (this->version == $nc(RC2Parameters::EKB_TABLE)->get(i)) {
					this->effectiveKeySize = i;
					break;
				}
			}
		}
		$set(this, iv, $nc(val->data$)->getOctetString());
	} else {
		$nc(val->data$)->reset();
		$set(this, iv, val->getOctetString());
		this->version = 0;
		this->effectiveKeySize = 0;
	}
	if ($nc(this->iv)->length != 8) {
		$throwNew($IOException, $$str({"RC2 parameter parsing error: iv length must be 8 bits, actual: "_s, $$str($nc(this->iv)->length)}));
	}
	if ($nc(val->data$)->available() != 0) {
		$throwNew($IOException, "RC2 parameter parsing error: extra data"_s);
	}
}

void RC2Parameters::engineInit($bytes* encoded, $String* decodingMethod) {
	engineInit(encoded);
}

$AlgorithmParameterSpec* RC2Parameters::engineGetParameterSpec($Class* paramSpec) {
	$load($RC2ParameterSpec);
	if ($RC2ParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast((this->iv == nullptr ? $of($$new($RC2ParameterSpec, this->effectiveKeySize)) : $of($$new($RC2ParameterSpec, this->effectiveKeySize, this->iv)))));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* RC2Parameters::engineGetEncoded() {
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	if (this->effectiveKeySize != 0) {
		bytes->putInteger(this->version);
		bytes->putOctetString(this->iv);
		out->write($DerValue::tag_Sequence, bytes);
	} else {
		out->putOctetString(this->iv);
	}
	return out->toByteArray();
}

$bytes* RC2Parameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* RC2Parameters::engineToString() {
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$var($StringBuilder, sb, $new($StringBuilder, $$str({LINE_SEP, "    iv:"_s, LINE_SEP, "["_s, $(encoder->encodeBuffer(this->iv)), "]"_s})));
	if (this->version != 0) {
		sb->append($$str({LINE_SEP, "version:"_s, LINE_SEP, $$str(this->version), LINE_SEP}));
	}
	return sb->toString();
}

void clinit$RC2Parameters($Class* class$) {
	$assignStatic(RC2Parameters::EKB_TABLE, $new($ints, {
		189,
		86,
		234,
		242,
		162,
		241,
		172,
		42,
		176,
		147,
		209,
		156,
		27,
		51,
		253,
		208,
		48,
		4,
		182,
		220,
		125,
		223,
		50,
		75,
		247,
		203,
		69,
		155,
		49,
		187,
		33,
		90,
		65,
		159,
		225,
		217,
		74,
		77,
		158,
		218,
		160,
		104,
		44,
		195,
		39,
		95,
		128,
		54,
		62,
		238,
		251,
		149,
		26,
		254,
		206,
		168,
		52,
		169,
		19,
		240,
		166,
		63,
		216,
		12,
		120,
		36,
		175,
		35,
		82,
		193,
		103,
		23,
		245,
		102,
		144,
		231,
		232,
		7,
		184,
		96,
		72,
		230,
		30,
		83,
		243,
		146,
		164,
		114,
		140,
		8,
		21,
		110,
		134,
		0,
		132,
		250,
		244,
		127,
		138,
		66,
		25,
		246,
		219,
		205,
		20,
		141,
		80,
		18,
		186,
		60,
		6,
		78,
		236,
		179,
		53,
		17,
		161,
		136,
		142,
		43,
		148,
		153,
		183,
		113,
		116,
		211,
		228,
		191,
		58,
		222,
		150,
		14,
		188,
		10,
		237,
		119,
		252,
		55,
		107,
		3,
		121,
		137,
		98,
		198,
		215,
		192,
		210,
		124,
		106,
		139,
		34,
		163,
		91,
		5,
		93,
		2,
		117,
		213,
		97,
		227,
		24,
		143,
		85,
		81,
		173,
		31,
		11,
		94,
		133,
		229,
		194,
		87,
		99,
		202,
		61,
		108,
		180,
		197,
		204,
		112,
		178,
		145,
		89,
		13,
		71,
		32,
		200,
		79,
		88,
		224,
		1,
		226,
		22,
		56,
		196,
		111,
		59,
		15,
		101,
		70,
		190,
		126,
		45,
		123,
		130,
		249,
		64,
		181,
		29,
		115,
		248,
		235,
		38,
		199,
		135,
		151,
		37,
		84,
		177,
		40,
		170,
		152,
		157,
		165,
		100,
		109,
		122,
		212,
		16,
		129,
		68,
		239,
		73,
		214,
		174,
		46,
		221,
		118,
		92,
		47,
		167,
		28,
		201,
		9,
		105,
		154,
		131,
		207,
		41,
		57,
		185,
		233,
		76,
		255,
		67,
		171
	}));
}

RC2Parameters::RC2Parameters() {
}

$Class* RC2Parameters::load$($String* name, bool initialize) {
	$loadClass(RC2Parameters, name, initialize, &_RC2Parameters_ClassInfo_, clinit$RC2Parameters, allocate$RC2Parameters);
	return class$;
}

$Class* RC2Parameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com