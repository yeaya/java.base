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

$FieldInfo _AuthResources_ko_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ko, contents)},
	{}
};

$MethodInfo _AuthResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _AuthResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_ko_FieldInfo_,
	_AuthResources_ko_MethodInfo_
};

$Object* allocate$AuthResources_ko($Class* clazz) {
	return $of($alloc(AuthResources_ko));
}

$ObjectArray2* AuthResources_ko::contents = nullptr;

void AuthResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ko::getContents() {
	return AuthResources_ko::contents;
}

void clinit$AuthResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"부적합한 널 입력: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"NTSid 값이 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [기본 그룹]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [보조 그룹]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"{0}을(를) 제대로 확장할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0}(해당 파일 또는 디렉토리가 없습니다.)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"구성 오류:\n\t해당 파일 또는 디렉토리가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"구성 오류:\n\t제어 플래그가 부적합함, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"구성 오류:\n\t{0}에 대해 여러 항목을 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"구성 오류:\n\t[{0}]이(가) 필요하지만 [파일의 끝]에 도달했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"구성 오류:\n\t{0} 행: [{1}]이(가) 필요하지만 [{2}]이(가) 발견되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"구성 오류:\n\t{0} 행: [{1}]이(가) 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"구성 오류:\n\t{0} 행: 시스템 속성 [{1}]이(가) 빈 값으로 확장되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"사용자 이름: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"비밀번호: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"키 저장소 정보를 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"키 저장소 별칭: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"키 저장소 비밀번호: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"전용 키 비밀번호(선택사항): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos 사용자 이름 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"{0}의 Kerberos 비밀번호: "_s)
		})
	}));
}

AuthResources_ko::AuthResources_ko() {
}

$Class* AuthResources_ko::load$($String* name, bool initialize) {
	$loadClass(AuthResources_ko, name, initialize, &_AuthResources_ko_ClassInfo_, clinit$AuthResources_ko, allocate$AuthResources_ko);
	return class$;
}

$Class* AuthResources_ko::class$ = nullptr;

		} // util
	} // security
} // sun