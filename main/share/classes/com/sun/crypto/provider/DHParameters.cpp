#include <com/sun/crypto/provider/DHParameters.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef LINE_SEP
#undef ZERO

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DHParameters_FieldInfo_[] = {
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameters, p)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameters, g)},
	{"l", "I", nullptr, $PRIVATE, $field(DHParameters, l)},
	{}
};

$MethodInfo _DHParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DHParameters::*)()>(&DHParameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DHParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DHParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_DHParameters_FieldInfo_,
	_DHParameters_MethodInfo_
};

$Object* allocate$DHParameters($Class* clazz) {
	return $of($alloc(DHParameters));
}

void DHParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$init($BigInteger);
	$set(this, p, $BigInteger::ZERO);
	$set(this, g, $BigInteger::ZERO);
	this->l = 0;
}

void DHParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($DHParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$set(this, p, $nc(($cast($DHParameterSpec, paramSpec)))->getP());
	$set(this, g, ($cast($DHParameterSpec, paramSpec))->getG());
	this->l = ($cast($DHParameterSpec, paramSpec))->getL();
}

void DHParameters::engineInit($bytes* params) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DerValue, encodedParams, $new($DerValue, params));
		if (encodedParams->tag != $DerValue::tag_Sequence) {
			$throwNew($IOException, "DH params parsing error"_s);
		}
		$nc(encodedParams->data$)->reset();
		$set(this, p, $nc(encodedParams->data$)->getBigInteger());
		$set(this, g, $nc(encodedParams->data$)->getBigInteger());
		if ($nc(encodedParams->data$)->available() != 0) {
			this->l = $nc(encodedParams->data$)->getInteger();
		}
		if ($nc(encodedParams->data$)->available() != 0) {
			$throwNew($IOException, "DH parameter parsing error: Extra data"_s);
		}
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		$throwNew($IOException, "Private-value length too big"_s);
	}
}

void DHParameters::engineInit($bytes* params, $String* decodingMethod) {
	engineInit(params);
}

$AlgorithmParameterSpec* DHParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($DHParameterSpec);
	if ($DHParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($DHParameterSpec, this->p, this->g, this->l)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
	}
}

$bytes* DHParameters::engineGetEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	bytes->putInteger(this->p);
	bytes->putInteger(this->g);
	if (this->l > 0) {
		bytes->putInteger(this->l);
	}
	out->write($DerValue::tag_Sequence, bytes);
	return out->toByteArray();
}

$bytes* DHParameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* DHParameters::engineToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($String, var$0, $$str({"SunJCE Diffie-Hellman Parameters:"_s, LINE_SEP, "p:"_s, LINE_SEP, $($Debug::toHexString(this->p)), LINE_SEP, "g:"_s, LINE_SEP}));
	$var($StringBuilder, sb, $new($StringBuilder, $$concat(var$0, $($Debug::toHexString(this->g)))));
	if (this->l != 0) {
		sb->append($$str({LINE_SEP, "l:"_s, LINE_SEP, "    "_s, $$str(this->l)}));
	}
	return sb->toString();
}

DHParameters::DHParameters() {
}

$Class* DHParameters::load$($String* name, bool initialize) {
	$loadClass(DHParameters, name, initialize, &_DHParameters_ClassInfo_, allocate$DHParameters);
	return class$;
}

$Class* DHParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com