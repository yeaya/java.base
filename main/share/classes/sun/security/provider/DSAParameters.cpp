#include <sun/security/provider/DSAParameters.h>

#include <java/io/IOException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/DSAParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DSAParameterSpec = ::java::security::spec::DSAParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DSAParameters_FieldInfo_[] = {
	{"p", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, p)},
	{"q", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, q)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, g)},
	{}
};

$MethodInfo _DSAParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSAParameters::*)()>(&DSAParameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DSAParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.DSAParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_DSAParameters_FieldInfo_,
	_DSAParameters_MethodInfo_
};

$Object* allocate$DSAParameters($Class* clazz) {
	return $of($alloc(DSAParameters));
}

void DSAParameters::init$() {
	$AlgorithmParametersSpi::init$();
}

void DSAParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($DSAParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$set(this, p, $nc(($cast($DSAParameterSpec, paramSpec)))->getP());
	$set(this, q, ($cast($DSAParameterSpec, paramSpec))->getQ());
	$set(this, g, ($cast($DSAParameterSpec, paramSpec))->getG());
}

void DSAParameters::engineInit($bytes* params) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, encodedParams, $new($DerValue, params));
	if (encodedParams->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "DSA params parsing error"_s);
	}
	$nc(encodedParams->data$)->reset();
	$set(this, p, $nc(encodedParams->data$)->getBigInteger());
	$set(this, q, $nc(encodedParams->data$)->getBigInteger());
	$set(this, g, $nc(encodedParams->data$)->getBigInteger());
	if ($nc(encodedParams->data$)->available() != 0) {
		$throwNew($IOException, $$str({"encoded params have "_s, $$str($nc(encodedParams->data$)->available()), " extra bytes"_s}));
	}
}

void DSAParameters::engineInit($bytes* params, $String* decodingMethod) {
	engineInit(params);
}

$AlgorithmParameterSpec* DSAParameters::engineGetParameterSpec($Class* paramSpec) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* dsaParamSpec = $Class::forName("java.security.spec.DSAParameterSpec"_s);
		if ($nc(dsaParamSpec)->isAssignableFrom(paramSpec)) {
			return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($DSAParameterSpec, this->p, this->q, this->g)));
		} else {
			$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
		}
	} catch ($ClassNotFoundException& e) {
		$throwNew($InvalidParameterSpecException, $$str({"Unsupported parameter specification: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

$bytes* DSAParameters::engineGetEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	bytes->putInteger(this->p);
	bytes->putInteger(this->q);
	bytes->putInteger(this->g);
	out->write($DerValue::tag_Sequence, bytes);
	return out->toByteArray();
}

$bytes* DSAParameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* DSAParameters::engineToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"\n\tp: "_s, $($Debug::toHexString(this->p)), "\n\tq: "_s}));
	$var($String, var$2, $$concat(var$3, $($Debug::toHexString(this->q))));
	$var($String, var$1, $$concat(var$2, "\n\tg: "));
	$var($String, var$0, $$concat(var$1, $($Debug::toHexString(this->g))));
	return $concat(var$0, "\n");
}

DSAParameters::DSAParameters() {
}

$Class* DSAParameters::load$($String* name, bool initialize) {
	$loadClass(DSAParameters, name, initialize, &_DSAParameters_ClassInfo_, allocate$DSAParameters);
	return class$;
}

$Class* DSAParameters::class$ = nullptr;

		} // provider
	} // security
} // sun