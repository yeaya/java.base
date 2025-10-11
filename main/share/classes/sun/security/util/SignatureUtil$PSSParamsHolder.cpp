#include <sun/security/util/SignatureUtil$PSSParamsHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <sun/security/util/SignatureUtil.h>
#include <jcpp.h>

#undef PSS_512_SPEC
#undef TRAILER_FIELD_BC
#undef PSS_256_SPEC
#undef PSS_384_SPEC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $SignatureUtil = ::sun::security::util::SignatureUtil;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _SignatureUtil$PSSParamsHolder_FieldInfo_[] = {
	{"PSS_256_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_256_SPEC)},
	{"PSS_384_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_384_SPEC)},
	{"PSS_512_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_512_SPEC)},
	{}
};

$MethodInfo _SignatureUtil$PSSParamsHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureUtil$PSSParamsHolder::*)()>(&SignatureUtil$PSSParamsHolder::init$))},
	{}
};

$InnerClassInfo _SignatureUtil$PSSParamsHolder_InnerClassesInfo_[] = {
	{"sun.security.util.SignatureUtil$PSSParamsHolder", "sun.security.util.SignatureUtil", "PSSParamsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SignatureUtil$PSSParamsHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.SignatureUtil$PSSParamsHolder",
	"java.lang.Object",
	nullptr,
	_SignatureUtil$PSSParamsHolder_FieldInfo_,
	_SignatureUtil$PSSParamsHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureUtil$PSSParamsHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.SignatureUtil"
};

$Object* allocate$SignatureUtil$PSSParamsHolder($Class* clazz) {
	return $of($alloc(SignatureUtil$PSSParamsHolder));
}

$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_256_SPEC = nullptr;
$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_384_SPEC = nullptr;
$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_512_SPEC = nullptr;

void SignatureUtil$PSSParamsHolder::init$() {
}

void clinit$SignatureUtil$PSSParamsHolder($Class* class$) {
	$init($MGF1ParameterSpec);
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_256_SPEC, $new($PSSParameterSpec, "SHA-256"_s, "MGF1"_s, $MGF1ParameterSpec::SHA256, 32, $PSSParameterSpec::TRAILER_FIELD_BC));
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_384_SPEC, $new($PSSParameterSpec, "SHA-384"_s, "MGF1"_s, $MGF1ParameterSpec::SHA384, 48, $PSSParameterSpec::TRAILER_FIELD_BC));
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_512_SPEC, $new($PSSParameterSpec, "SHA-512"_s, "MGF1"_s, $MGF1ParameterSpec::SHA512, 64, $PSSParameterSpec::TRAILER_FIELD_BC));
}

SignatureUtil$PSSParamsHolder::SignatureUtil$PSSParamsHolder() {
}

$Class* SignatureUtil$PSSParamsHolder::load$($String* name, bool initialize) {
	$loadClass(SignatureUtil$PSSParamsHolder, name, initialize, &_SignatureUtil$PSSParamsHolder_ClassInfo_, clinit$SignatureUtil$PSSParamsHolder, allocate$SignatureUtil$PSSParamsHolder);
	return class$;
}

$Class* SignatureUtil$PSSParamsHolder::class$ = nullptr;

		} // util
	} // security
} // sun