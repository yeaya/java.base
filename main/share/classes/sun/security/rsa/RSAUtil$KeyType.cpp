#include <sun/security/rsa/RSAUtil$KeyType.h>

#include <java/lang/Enum.h>
#include <java/security/ProviderException.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <sun/security/rsa/RSAUtil.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef PSS
#undef RSA

using $RSAUtil$KeyTypeArray = $Array<::sun::security::rsa::RSAUtil$KeyType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProviderException = ::java::security::ProviderException;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $RSAUtil = ::sun::security::rsa::RSAUtil;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _RSAUtil$KeyType_FieldInfo_[] = {
	{"RSA", "Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RSAUtil$KeyType, RSA)},
	{"PSS", "Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RSAUtil$KeyType, PSS)},
	{"$VALUES", "[Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RSAUtil$KeyType, $VALUES)},
	{"keyAlgo", "Ljava/lang/String;", nullptr, $FINAL, $field(RSAUtil$KeyType, keyAlgo)},
	{"oid", "Lsun/security/util/ObjectIdentifier;", nullptr, $FINAL, $field(RSAUtil$KeyType, oid)},
	{"paramSpecCls", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/security/spec/AlgorithmParameterSpec;>;", $FINAL, $field(RSAUtil$KeyType, paramSpecCls)},
	{}
};

$MethodInfo _RSAUtil$KeyType_MethodInfo_[] = {
	{"$values", "()[Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RSAUtil$KeyType, $values, $RSAUtil$KeyTypeArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class;)V", "(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class<+Ljava/security/spec/AlgorithmParameterSpec;>;)V", $PRIVATE, $method(RSAUtil$KeyType, init$, void, $String*, int32_t, $String*, $ObjectIdentifier*, $Class*)},
	{"lookup", "(Ljava/lang/String;)Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PUBLIC | $STATIC, $staticMethod(RSAUtil$KeyType, lookup, RSAUtil$KeyType*, $String*), "java.security.ProviderException"},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PUBLIC | $STATIC, $staticMethod(RSAUtil$KeyType, valueOf, RSAUtil$KeyType*, $String*)},
	{"values", "()[Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PUBLIC | $STATIC, $staticMethod(RSAUtil$KeyType, values, $RSAUtil$KeyTypeArray*)},
	{}
};

$InnerClassInfo _RSAUtil$KeyType_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSAUtil$KeyType", "sun.security.rsa.RSAUtil", "KeyType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RSAUtil$KeyType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.rsa.RSAUtil$KeyType",
	"java.lang.Enum",
	nullptr,
	_RSAUtil$KeyType_FieldInfo_,
	_RSAUtil$KeyType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/rsa/RSAUtil$KeyType;>;",
	nullptr,
	_RSAUtil$KeyType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSAUtil"
};

$Object* allocate$RSAUtil$KeyType($Class* clazz) {
	return $of($alloc(RSAUtil$KeyType));
}

RSAUtil$KeyType* RSAUtil$KeyType::RSA = nullptr;
RSAUtil$KeyType* RSAUtil$KeyType::PSS = nullptr;
$RSAUtil$KeyTypeArray* RSAUtil$KeyType::$VALUES = nullptr;

$RSAUtil$KeyTypeArray* RSAUtil$KeyType::$values() {
	$init(RSAUtil$KeyType);
	return $new($RSAUtil$KeyTypeArray, {
		RSAUtil$KeyType::RSA,
		RSAUtil$KeyType::PSS
	});
}

$RSAUtil$KeyTypeArray* RSAUtil$KeyType::values() {
	$init(RSAUtil$KeyType);
	return $cast($RSAUtil$KeyTypeArray, RSAUtil$KeyType::$VALUES->clone());
}

RSAUtil$KeyType* RSAUtil$KeyType::valueOf($String* name) {
	$init(RSAUtil$KeyType);
	return $cast(RSAUtil$KeyType, $Enum::valueOf(RSAUtil$KeyType::class$, name));
}

void RSAUtil$KeyType::init$($String* $enum$name, int32_t $enum$ordinal, $String* keyAlgo, $ObjectIdentifier* oid, $Class* paramSpecCls) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, keyAlgo, keyAlgo);
	$set(this, oid, oid);
	$set(this, paramSpecCls, paramSpecCls);
}

RSAUtil$KeyType* RSAUtil$KeyType::lookup($String* name) {
	$init(RSAUtil$KeyType);
	$RSAUtil::requireNonNull(name, "Key algorithm should not be null"_s);
	if ($nc(name)->indexOf("PSS"_s) != -1) {
		return RSAUtil$KeyType::PSS;
	} else if (name->indexOf("RSA"_s) != -1) {
		return RSAUtil$KeyType::RSA;
	} else {
		$throwNew($ProviderException, $$str({"Unsupported algorithm "_s, name}));
	}
}

void clinit$RSAUtil$KeyType($Class* class$) {
	$init($AlgorithmId);
	$assignStatic(RSAUtil$KeyType::RSA, $new(RSAUtil$KeyType, "RSA"_s, 0, "RSA"_s, $AlgorithmId::RSAEncryption_oid, nullptr));
	$load($PSSParameterSpec);
	$assignStatic(RSAUtil$KeyType::PSS, $new(RSAUtil$KeyType, "PSS"_s, 1, "RSASSA-PSS"_s, $AlgorithmId::RSASSA_PSS_oid, $PSSParameterSpec::class$));
	$assignStatic(RSAUtil$KeyType::$VALUES, RSAUtil$KeyType::$values());
}

RSAUtil$KeyType::RSAUtil$KeyType() {
}

$Class* RSAUtil$KeyType::load$($String* name, bool initialize) {
	$loadClass(RSAUtil$KeyType, name, initialize, &_RSAUtil$KeyType_ClassInfo_, clinit$RSAUtil$KeyType, allocate$RSAUtil$KeyType);
	return class$;
}

$Class* RSAUtil$KeyType::class$ = nullptr;

		} // rsa
	} // security
} // sun