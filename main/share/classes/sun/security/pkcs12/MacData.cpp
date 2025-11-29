#include <sun/security/pkcs12/MacData.h>

#include <java/security/AlgorithmParameters.h>
#include <sun/security/pkcs/ParsingException.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $ParsingException = ::sun::security::pkcs::ParsingException;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace pkcs12 {

$FieldInfo _MacData_FieldInfo_[] = {
	{"digestAlgorithmName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MacData, digestAlgorithmName)},
	{"digestAlgorithmParams", "Ljava/security/AlgorithmParameters;", nullptr, $PRIVATE, $field(MacData, digestAlgorithmParams)},
	{"digest", "[B", nullptr, $PRIVATE, $field(MacData, digest)},
	{"macSalt", "[B", nullptr, $PRIVATE, $field(MacData, macSalt)},
	{"iterations", "I", nullptr, $PRIVATE, $field(MacData, iterations)},
	{"encoded", "[B", nullptr, $PRIVATE, $field(MacData, encoded)},
	{}
};

$MethodInfo _MacData_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, 0, $method(static_cast<void(MacData::*)($DerInputStream*)>(&MacData::init$)), "java.io.IOException,sun.security.pkcs.ParsingException"},
	{"<init>", "(Ljava/lang/String;[B[BI)V", nullptr, 0, $method(static_cast<void(MacData::*)($String*,$bytes*,$bytes*,int32_t)>(&MacData::init$)), "java.security.NoSuchAlgorithmException"},
	{"<init>", "(Ljava/security/AlgorithmParameters;[B[BI)V", nullptr, 0, $method(static_cast<void(MacData::*)($AlgorithmParameters*,$bytes*,$bytes*,int32_t)>(&MacData::init$)), "java.security.NoSuchAlgorithmException"},
	{"getDigest", "()[B", nullptr, 0},
	{"getDigestAlgName", "()Ljava/lang/String;", nullptr, 0},
	{"getEncoded", "()[B", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.io.IOException"},
	{"getIterations", "()I", nullptr, 0},
	{"getSalt", "()[B", nullptr, 0},
	{}
};

$ClassInfo _MacData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.MacData",
	"java.lang.Object",
	nullptr,
	_MacData_FieldInfo_,
	_MacData_MethodInfo_
};

$Object* allocate$MacData($Class* clazz) {
	return $of($alloc(MacData));
}

void MacData::init$($DerInputStream* derin) {
	$useLocalCurrentObjectStackCache();
	$set(this, encoded, nullptr);
	$var($DerValueArray, macData, $nc(derin)->getSequence(2));
	if ($nc(macData)->length < 2 || $nc(macData)->length > 3) {
		$throwNew($ParsingException, "Invalid length for MacData"_s);
	}
	$var($DerInputStream, digestIn, $new($DerInputStream, $($nc($nc(macData)->get(0))->toByteArray())));
	$var($DerValueArray, digestInfo, digestIn->getSequence(2));
	if ($nc(digestInfo)->length != 2) {
		$throwNew($ParsingException, "Invalid length for DigestInfo"_s);
	}
	$var($AlgorithmId, digestAlgorithmId, $AlgorithmId::parse($nc(digestInfo)->get(0)));
	$set(this, digestAlgorithmName, $nc(digestAlgorithmId)->getName());
	$set(this, digestAlgorithmParams, digestAlgorithmId->getParameters());
	$set(this, digest, $nc($nc(digestInfo)->get(1))->getOctetString());
	$set(this, macSalt, $nc($nc(macData)->get(1))->getOctetString());
	if (macData->length > 2) {
		this->iterations = $nc(macData->get(2))->getInteger();
	} else {
		this->iterations = 1;
	}
}

void MacData::init$($String* algName, $bytes* digest, $bytes* salt, int32_t iterations) {
	$set(this, encoded, nullptr);
	if (algName == nullptr) {
		$throwNew($NullPointerException, "the algName parameter must be non-null"_s);
	}
	$var($AlgorithmId, algid, $AlgorithmId::get(algName));
	$set(this, digestAlgorithmName, $nc(algid)->getName());
	$set(this, digestAlgorithmParams, algid->getParameters());
	if (digest == nullptr) {
		$throwNew($NullPointerException, "the digest parameter must be non-null"_s);
	} else if ($nc(digest)->length == 0) {
		$throwNew($IllegalArgumentException, "the digest parameter must not be empty"_s);
	} else {
		$set(this, digest, $cast($bytes, digest->clone()));
	}
	$set(this, macSalt, salt);
	this->iterations = iterations;
	$set(this, encoded, nullptr);
}

void MacData::init$($AlgorithmParameters* algParams, $bytes* digest, $bytes* salt, int32_t iterations) {
	$set(this, encoded, nullptr);
	if (algParams == nullptr) {
		$throwNew($NullPointerException, "the algParams parameter must be non-null"_s);
	}
	$var($AlgorithmId, algid, $AlgorithmId::get(algParams));
	$set(this, digestAlgorithmName, $nc(algid)->getName());
	$set(this, digestAlgorithmParams, algid->getParameters());
	if (digest == nullptr) {
		$throwNew($NullPointerException, "the digest parameter must be non-null"_s);
	} else if ($nc(digest)->length == 0) {
		$throwNew($IllegalArgumentException, "the digest parameter must not be empty"_s);
	} else {
		$set(this, digest, $cast($bytes, digest->clone()));
	}
	$set(this, macSalt, salt);
	this->iterations = iterations;
	$set(this, encoded, nullptr);
}

$String* MacData::getDigestAlgName() {
	return this->digestAlgorithmName;
}

$bytes* MacData::getSalt() {
	return this->macSalt;
}

int32_t MacData::getIterations() {
	return this->iterations;
}

$bytes* MacData::getDigest() {
	return this->digest;
}

$bytes* MacData::getEncoded() {
	$useLocalCurrentObjectStackCache();
	if (this->encoded != nullptr) {
		return $cast($bytes, $nc(this->encoded)->clone());
	}
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$var($DerOutputStream, tmp2, $new($DerOutputStream));
	$var($AlgorithmId, algid, $AlgorithmId::get(this->digestAlgorithmName));
	$nc(algid)->encode(tmp2);
	tmp2->putOctetString(this->digest);
	tmp->write($DerValue::tag_Sequence, tmp2);
	tmp->putOctetString(this->macSalt);
	tmp->putInteger(this->iterations);
	out->write($DerValue::tag_Sequence, tmp);
	$set(this, encoded, out->toByteArray());
	return $cast($bytes, $nc(this->encoded)->clone());
}

MacData::MacData() {
}

$Class* MacData::load$($String* name, bool initialize) {
	$loadClass(MacData, name, initialize, &_MacData_ClassInfo_, allocate$MacData);
	return class$;
}

$Class* MacData::class$ = nullptr;

		} // pkcs12
	} // security
} // sun