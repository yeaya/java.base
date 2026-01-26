#include <com/sun/crypto/provider/PBEParameters.h>

#include <java/io/IOException.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <javax/crypto/spec/PBEParameterSpec.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef LINE_SEP

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $PBEParameterSpec = ::javax::crypto::spec::PBEParameterSpec;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PBEParameters_FieldInfo_[] = {
	{"salt", "[B", nullptr, $PRIVATE, $field(PBEParameters, salt)},
	{"iCount", "I", nullptr, $PRIVATE, $field(PBEParameters, iCount)},
	{"cipherParam", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(PBEParameters, cipherParam)},
	{}
};

$MethodInfo _PBEParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBEParameters, init$, void)},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineGetEncoded, $bytes*), "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(PBEParameters, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineInit, void, $bytes*), "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineInit, void, $bytes*, $String*), "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(PBEParameters, engineToString, $String*)},
	{}
};

$ClassInfo _PBEParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_PBEParameters_FieldInfo_,
	_PBEParameters_MethodInfo_
};

$Object* allocate$PBEParameters($Class* clazz) {
	return $of($alloc(PBEParameters));
}

void PBEParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, salt, nullptr);
	this->iCount = 0;
	$set(this, cipherParam, nullptr);
}

void PBEParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($PBEParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$set(this, salt, $cast($bytes, $nc($($nc(($cast($PBEParameterSpec, paramSpec)))->getSalt()))->clone()));
	this->iCount = ($cast($PBEParameterSpec, paramSpec))->getIterationCount();
	$set(this, cipherParam, ($cast($PBEParameterSpec, paramSpec))->getParameterSpec());
}

void PBEParameters::engineInit($bytes* encoded) {
	try {
		$var($DerValue, val, $new($DerValue, encoded));
		if (val->tag != $DerValue::tag_Sequence) {
			$throwNew($IOException, "PBE parameter parsing error: not a sequence"_s);
		}
		$nc(val->data$)->reset();
		$set(this, salt, $nc(val->data$)->getOctetString());
		this->iCount = $nc(val->data$)->getInteger();
		if ($nc(val->data$)->available() != 0) {
			$throwNew($IOException, "PBE parameter parsing error: extra data"_s);
		}
	} catch ($NumberFormatException& e) {
		$throwNew($IOException, "iteration count too big"_s);
	}
}

void PBEParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	engineInit(encoded);
}

$AlgorithmParameterSpec* PBEParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($PBEParameterSpec);
	if ($PBEParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($PBEParameterSpec, this->salt, this->iCount, this->cipherParam)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* PBEParameters::engineGetEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	bytes->putOctetString(this->salt);
	bytes->putInteger(this->iCount);
	out->write($DerValue::tag_Sequence, bytes);
	return out->toByteArray();
}

$bytes* PBEParameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* PBEParameters::engineToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($String, saltString, $str({LINE_SEP, "    salt:"_s, LINE_SEP, "["_s}));
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$plusAssign(saltString, $(encoder->encodeBuffer(this->salt)));
	$plusAssign(saltString, "]"_s);
	return $str({saltString, LINE_SEP, "    iterationCount:"_s, LINE_SEP, $($Debug::toHexString($($BigInteger::valueOf((int64_t)this->iCount)))), LINE_SEP});
}

PBEParameters::PBEParameters() {
}

$Class* PBEParameters::load$($String* name, bool initialize) {
	$loadClass(PBEParameters, name, initialize, &_PBEParameters_ClassInfo_, allocate$PBEParameters);
	return class$;
}

$Class* PBEParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com