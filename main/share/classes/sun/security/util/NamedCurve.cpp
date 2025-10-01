#include <sun/security/util/NamedCurve.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/EllipticCurve.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _NamedCurve_FieldInfo_[] = {
	{"nameAndAliases", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedCurve, nameAndAliases)},
	{"oid", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedCurve, oid)},
	{"encoded", "[B", nullptr, $PRIVATE | $FINAL, $field(NamedCurve, encoded)},
	{}
};

$MethodInfo _NamedCurve_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/KnownOIDs;Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V", nullptr, 0, $method(static_cast<void(NamedCurve::*)($KnownOIDs*,$EllipticCurve*,$ECPoint*,$BigInteger*,int32_t)>(&NamedCurve::init$))},
	{"getEncoded", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(NamedCurve::*)()>(&NamedCurve::getEncoded))},
	{"getNameAndAliases", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray*(NamedCurve::*)()>(&NamedCurve::getNameAndAliases))},
	{"getObjectId", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(NamedCurve::*)()>(&NamedCurve::getObjectId))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamedCurve_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.NamedCurve",
	"java.security.spec.ECParameterSpec",
	nullptr,
	_NamedCurve_FieldInfo_,
	_NamedCurve_MethodInfo_
};

$Object* allocate$NamedCurve($Class* clazz) {
	return $of($alloc(NamedCurve));
}

void NamedCurve::init$($KnownOIDs* ko, $EllipticCurve* curve, $ECPoint* g, $BigInteger* n, int32_t h) {
	$ECParameterSpec::init$(curve, g, n, h);
	$var($StringArray, aliases, $nc(ko)->aliases());
	$set(this, nameAndAliases, $new($StringArray, $nc(aliases)->length + 1));
	$nc(this->nameAndAliases)->set(0, $(ko->stdName()));
	$System::arraycopy(aliases, 0, this->nameAndAliases, 1, aliases->length);
	$set(this, oid, ko->value());
	$var($DerOutputStream, out, $new($DerOutputStream));
	try {
		out->putOID($($ObjectIdentifier::of(ko)));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, "Internal error"_s, e);
	}
	$set(this, encoded, out->toByteArray());
}

$StringArray* NamedCurve::getNameAndAliases() {
	return this->nameAndAliases;
}

$bytes* NamedCurve::getEncoded() {
	return $cast($bytes, $nc(this->encoded)->clone());
}

$String* NamedCurve::getObjectId() {
	return this->oid;
}

$String* NamedCurve::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, $nc(this->nameAndAliases)->get(0)));
	if ($nc(this->nameAndAliases)->length > 1) {
		sb->append(" ["_s);
		int32_t j = 1;
		while (j < $nc(this->nameAndAliases)->length - 1) {
			sb->append($nc(this->nameAndAliases)->get(j++));
			sb->append(u',');
		}
		sb->append($$str({$nc(this->nameAndAliases)->get(j), "]"_s}));
	}
	sb->append($$str({" ("_s, this->oid, ")"_s}));
	return sb->toString();
}

NamedCurve::NamedCurve() {
}

$Class* NamedCurve::load$($String* name, bool initialize) {
	$loadClass(NamedCurve, name, initialize, &_NamedCurve_ClassInfo_, allocate$NamedCurve);
	return class$;
}

$Class* NamedCurve::class$ = nullptr;

		} // util
	} // security
} // sun