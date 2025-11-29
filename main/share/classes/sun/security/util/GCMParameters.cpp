#include <sun/security/util/GCMParameters.h>

#include <java/io/IOException.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <javax/crypto/spec/GCMParameterSpec.h>
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
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $GCMParameterSpec = ::javax::crypto::spec::GCMParameterSpec;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _GCMParameters_FieldInfo_[] = {
	{"iv", "[B", nullptr, $PRIVATE, $field(GCMParameters, iv)},
	{"tLen", "I", nullptr, $PRIVATE, $field(GCMParameters, tLen)},
	{}
};

$MethodInfo _GCMParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GCMParameters::*)()>(&GCMParameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GCMParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.GCMParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_GCMParameters_FieldInfo_,
	_GCMParameters_MethodInfo_
};

$Object* allocate$GCMParameters($Class* clazz) {
	return $of($alloc(GCMParameters));
}

void GCMParameters::init$() {
	$AlgorithmParametersSpi::init$();
}

void GCMParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($GCMParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$var($GCMParameterSpec, gps, $cast($GCMParameterSpec, paramSpec));
	this->tLen = $nc(gps)->getTLen() / 8;
	if (this->tLen < 12 || this->tLen > 16) {
		$throwNew($InvalidParameterSpecException, $$str({"GCM parameter parsing error: unsupported tag len: "_s, $$str(this->tLen)}));
	}
	$set(this, iv, gps->getIV());
}

void GCMParameters::engineInit($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, val, $new($DerValue, encoded));
	if (val->tag == $DerValue::tag_Sequence) {
		$var($bytes, iv, $nc(val->data$)->getOctetString());
		int32_t tLen = 0;
		if ($nc(val->data$)->available() != 0) {
			tLen = $nc(val->data$)->getInteger();
			if (tLen < 12 || tLen > 16) {
				$throwNew($IOException, $$str({"GCM parameter parsing error: unsupported tag len: "_s, $$str(tLen)}));
			}
			if ($nc(val->data$)->available() != 0) {
				$throwNew($IOException, "GCM parameter parsing error: extra data"_s);
			}
		} else {
			tLen = 12;
		}
		$set(this, iv, $cast($bytes, $nc(iv)->clone()));
		this->tLen = tLen;
	} else {
		$throwNew($IOException, "GCM parameter parsing error: no SEQ tag"_s);
	}
}

void GCMParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	engineInit(encoded);
}

$AlgorithmParameterSpec* GCMParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($GCMParameterSpec);
	if ($GCMParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($GCMParameterSpec, this->tLen * 8, this->iv)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* GCMParameters::engineGetEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	bytes->putOctetString(this->iv);
	if (this->tLen != 12) {
		bytes->putInteger(this->tLen);
	}
	out->write($DerValue::tag_Sequence, bytes);
	return out->toByteArray();
}

$bytes* GCMParameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* GCMParameters::engineToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$var($StringBuilder, sb, $new($StringBuilder, $$str({LINE_SEP, "    iv:"_s, LINE_SEP, "["_s, $(encoder->encodeBuffer(this->iv)), "]"_s})));
	sb->append($$str({LINE_SEP, "tLen(bits):"_s, LINE_SEP, $$str(this->tLen * 8), LINE_SEP}));
	return sb->toString();
}

GCMParameters::GCMParameters() {
}

$Class* GCMParameters::load$($String* name, bool initialize) {
	$loadClass(GCMParameters, name, initialize, &_GCMParameters_ClassInfo_, allocate$GCMParameters);
	return class$;
}

$Class* GCMParameters::class$ = nullptr;

		} // util
	} // security
} // sun