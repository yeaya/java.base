#include <com/sun/crypto/provider/ChaCha20Poly1305Parameters.h>

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
#include <javax/crypto/spec/IvParameterSpec.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef LINE_SEP
#undef DEFAULT_FMT

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _ChaCha20Poly1305Parameters_FieldInfo_[] = {
	{"DEFAULT_FMT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChaCha20Poly1305Parameters, DEFAULT_FMT)},
	{"nonce", "[B", nullptr, $PRIVATE, $field(ChaCha20Poly1305Parameters, nonce)},
	{}
};

$MethodInfo _ChaCha20Poly1305Parameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ChaCha20Poly1305Parameters::*)()>(&ChaCha20Poly1305Parameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ChaCha20Poly1305Parameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Poly1305Parameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_ChaCha20Poly1305Parameters_FieldInfo_,
	_ChaCha20Poly1305Parameters_MethodInfo_
};

$Object* allocate$ChaCha20Poly1305Parameters($Class* clazz) {
	return $of($alloc(ChaCha20Poly1305Parameters));
}

$String* ChaCha20Poly1305Parameters::DEFAULT_FMT = nullptr;

void ChaCha20Poly1305Parameters::init$() {
	$AlgorithmParametersSpi::init$();
}

void ChaCha20Poly1305Parameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($IvParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$var($IvParameterSpec, ivps, $cast($IvParameterSpec, paramSpec));
	$set(this, nonce, $nc(ivps)->getIV());
	if ($nc(this->nonce)->length != 12) {
		$throwNew($InvalidParameterSpecException, "ChaCha20-Poly1305 nonce must be 12 bytes in length"_s);
	}
}

void ChaCha20Poly1305Parameters::engineInit($bytes* encoded) {
	$var($DerValue, val, $new($DerValue, encoded));
	$set(this, nonce, val->getOctetString());
	if ($nc(this->nonce)->length != 12) {
		$throwNew($IOException, "ChaCha20-Poly1305 nonce must be 12 bytes in length"_s);
	}
}

void ChaCha20Poly1305Parameters::engineInit($bytes* encoded, $String* decodingMethod) {
	if (decodingMethod == nullptr || $nc(decodingMethod)->equalsIgnoreCase(ChaCha20Poly1305Parameters::DEFAULT_FMT)) {
		engineInit(encoded);
	} else {
		$throwNew($IOException, $$str({"Unsupported parameter format: "_s, decodingMethod}));
	}
}

$AlgorithmParameterSpec* ChaCha20Poly1305Parameters::engineGetParameterSpec($Class* paramSpec) {
	$load($IvParameterSpec);
	if ($IvParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($IvParameterSpec, this->nonce)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* ChaCha20Poly1305Parameters::engineGetEncoded() {
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->write($DerValue::tag_OctetString, this->nonce);
	return out->toByteArray();
}

$bytes* ChaCha20Poly1305Parameters::engineGetEncoded($String* encodingMethod) {
	if (encodingMethod == nullptr || $nc(encodingMethod)->equalsIgnoreCase(ChaCha20Poly1305Parameters::DEFAULT_FMT)) {
		return engineGetEncoded();
	} else {
		$throwNew($IOException, $$str({"Unsupported encoding format: "_s, encodingMethod}));
	}
}

$String* ChaCha20Poly1305Parameters::engineToString() {
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$var($StringBuilder, sb, $new($StringBuilder, $$str({LINE_SEP, "nonce:"_s, LINE_SEP, "["_s, $(encoder->encodeBuffer(this->nonce)), "]"_s})));
	return sb->toString();
}

ChaCha20Poly1305Parameters::ChaCha20Poly1305Parameters() {
}

void clinit$ChaCha20Poly1305Parameters($Class* class$) {
	$assignStatic(ChaCha20Poly1305Parameters::DEFAULT_FMT, "ASN.1"_s);
}

$Class* ChaCha20Poly1305Parameters::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Poly1305Parameters, name, initialize, &_ChaCha20Poly1305Parameters_ClassInfo_, clinit$ChaCha20Poly1305Parameters, allocate$ChaCha20Poly1305Parameters);
	return class$;
}

$Class* ChaCha20Poly1305Parameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com