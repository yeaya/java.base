#include <sun/security/util/SignatureUtil$PSSParamsHolder.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <sun/security/util/SignatureUtil.h>
#include <jcpp.h>

#undef PSS_256_SPEC
#undef PSS_384_SPEC
#undef PSS_512_SPEC
#undef TRAILER_FIELD_BC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;

namespace sun {
	namespace security {
		namespace util {

$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_256_SPEC = nullptr;
$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_384_SPEC = nullptr;
$PSSParameterSpec* SignatureUtil$PSSParamsHolder::PSS_512_SPEC = nullptr;

void SignatureUtil$PSSParamsHolder::init$() {
}

void SignatureUtil$PSSParamsHolder::clinit$($Class* clazz) {
	$init($MGF1ParameterSpec);
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_256_SPEC, $new($PSSParameterSpec, "SHA-256"_s, "MGF1"_s, $MGF1ParameterSpec::SHA256, 32, $PSSParameterSpec::TRAILER_FIELD_BC));
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_384_SPEC, $new($PSSParameterSpec, "SHA-384"_s, "MGF1"_s, $MGF1ParameterSpec::SHA384, 48, $PSSParameterSpec::TRAILER_FIELD_BC));
	$assignStatic(SignatureUtil$PSSParamsHolder::PSS_512_SPEC, $new($PSSParameterSpec, "SHA-512"_s, "MGF1"_s, $MGF1ParameterSpec::SHA512, 64, $PSSParameterSpec::TRAILER_FIELD_BC));
}

SignatureUtil$PSSParamsHolder::SignatureUtil$PSSParamsHolder() {
}

$Class* SignatureUtil$PSSParamsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PSS_256_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_256_SPEC)},
		{"PSS_384_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_384_SPEC)},
		{"PSS_512_SPEC", "Ljava/security/spec/PSSParameterSpec;", nullptr, $STATIC | $FINAL, $staticField(SignatureUtil$PSSParamsHolder, PSS_512_SPEC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureUtil$PSSParamsHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.SignatureUtil$PSSParamsHolder", "sun.security.util.SignatureUtil", "PSSParamsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.SignatureUtil$PSSParamsHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.SignatureUtil"
	};
	$loadClass(SignatureUtil$PSSParamsHolder, name, initialize, &classInfo$$, SignatureUtil$PSSParamsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureUtil$PSSParamsHolder);
	});
	return class$;
}

$Class* SignatureUtil$PSSParamsHolder::class$ = nullptr;

		} // util
	} // security
} // sun