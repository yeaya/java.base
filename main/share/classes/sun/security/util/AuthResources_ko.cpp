#include <sun/security/util/AuthResources_ko.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace util {

$ObjectArray2* AuthResources_ko::contents = nullptr;

void AuthResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ko::getContents() {
	return AuthResources_ko::contents;
}

void AuthResources_ko::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"부적합한 널 입력: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential: {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			u"NTSid 값이 부적합합니다."_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			u"UnixNumericGroupPrincipal [기본 그룹]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [보조 그룹]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			u"{0}을(를) 제대로 확장할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0}(해당 파일 또는 디렉토리가 없습니다.)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"구성 오류:\n\t해당 파일 또는 디렉토리가 없습니다."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"구성 오류:\n\t제어 플래그가 부적합함, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"구성 오류:\n\t{0}에 대해 여러 항목을 지정할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"구성 오류:\n\t[{0}]이(가) 필요하지만 [파일의 끝]에 도달했습니다."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"구성 오류:\n\t{0} 행: [{1}]이(가) 필요하지만 [{2}]이(가) 발견되었습니다."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"구성 오류:\n\t{0} 행: [{1}]이(가) 필요합니다."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"구성 오류:\n\t{0} 행: 시스템 속성 [{1}]이(가) 빈 값으로 확장되었습니다."_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"사용자 이름: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"비밀번호: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"키 저장소 정보를 입력하십시오."_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"키 저장소 별칭: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"키 저장소 비밀번호: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"전용 키 비밀번호(선택사항): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Kerberos 사용자 이름 [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"{0}의 Kerberos 비밀번호: "_s
		})
	}));
}

AuthResources_ko::AuthResources_ko() {
}

$Class* AuthResources_ko::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ko, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_ko",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_ko, name, initialize, &classInfo$$, AuthResources_ko::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_ko);
	});
	return class$;
}

$Class* AuthResources_ko::class$ = nullptr;

		} // util
	} // security
} // sun