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
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace provider {

void DSAParameters::init$() {
	$AlgorithmParametersSpi::init$();
}

void DSAParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($DSAParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$set(this, p, $nc($cast($DSAParameterSpec, paramSpec))->getP());
	$set(this, q, $cast($DSAParameterSpec, paramSpec)->getQ());
	$set(this, g, $cast($DSAParameterSpec, paramSpec)->getG());
}

void DSAParameters::engineInit($bytes* params) {
	$useLocalObjectStack();
	$var($DerValue, encodedParams, $new($DerValue, params));
	if (encodedParams->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "DSA params parsing error"_s);
	}
	$nc(encodedParams->data$)->reset();
	$set(this, p, encodedParams->data$->getBigInteger());
	$set(this, q, encodedParams->data$->getBigInteger());
	$set(this, g, encodedParams->data$->getBigInteger());
	if (encodedParams->data$->available() != 0) {
		$throwNew($IOException, $$str({"encoded params have "_s, $$str(encodedParams->data$->available()), " extra bytes"_s}));
	}
}

void DSAParameters::engineInit($bytes* params, $String* decodingMethod) {
	engineInit(params);
}

$AlgorithmParameterSpec* DSAParameters::engineGetParameterSpec($Class* paramSpec) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* dsaParamSpec = $Class::forName("java.security.spec.DSAParameterSpec"_s);
		if (dsaParamSpec->isAssignableFrom(paramSpec)) {
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("\n\tp: "_s);
	var$0->append($($Debug::toHexString(this->p)));
	var$0->append("\n\tq: "_s);
	var$0->append($($Debug::toHexString(this->q)));
	var$0->append("\n\tg: "_s);
	var$0->append($($Debug::toHexString(this->g)));
	var$0->append("\n"_s);
	return $str(var$0);
}

DSAParameters::DSAParameters() {
}

$Class* DSAParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, p)},
		{"q", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, q)},
		{"g", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DSAParameters, g)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSAParameters, init$, void)},
		{"engineGetEncoded", "()[B", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineGetEncoded, $bytes*), "java.io.IOException"},
		{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
		{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(DSAParameters, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
		{"engineInit", "([B)V", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineInit, void, $bytes*), "java.io.IOException"},
		{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineInit, void, $bytes*, $String*), "java.io.IOException"},
		{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(DSAParameters, engineToString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.DSAParameters",
		"java.security.AlgorithmParametersSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DSAParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSAParameters);
	});
	return class$;
}

$Class* DSAParameters::class$ = nullptr;

		} // provider
	} // security
} // sun