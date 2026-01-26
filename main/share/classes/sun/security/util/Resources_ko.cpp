#include <sun/security/util/Resources_ko.h>

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

$FieldInfo _Resources_ko_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ko, contents)},
	{}
};

$MethodInfo _Resources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _Resources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ko_FieldInfo_,
	_Resources_ko_MethodInfo_
};

$Object* allocate$Resources_ko($Class* clazz) {
	return $of($alloc(Resources_ko));
}

$ObjectArray2* Resources_ko::contents = nullptr;

void Resources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ko::getContents() {
	return Resources_ko::contents;
}

void clinit$Resources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"널 입력값이 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"작업은 \'읽기\' 전용입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"권한 이름 [{0}] 구문이 부적합함: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"인증서 클래스 다음에 주체 클래스와 이름이 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"주체 클래스 다음에 주체 이름이 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"주체 이름은 따옴표로 묶어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"주체 이름에 닫는 따옴표가 누락되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"주체 이름이 와일드 카드 문자(*) 값이 아닌 경우 PrivateCredentialPermission 주체 클래스는 와일드 카드 문자(*) 값일 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\t주체 클래스 = {0}\n\t주체 이름 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"널 이름을 제공했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"널 키워드 맵을 제공했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"널 OID 맵을 제공했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"부적합한 널 AccessControlContext가 제공되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"부적합한 널 작업이 제공되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"부적합한 널 클래스가 제공되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"제목:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of(u"\\주체: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t공용 인증서: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t전용 인증서에 액세스할 수 없습니다.\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t전용 인증서: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t전용 인증서에 액세스할 수 없습니다.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"제목이 읽기 전용입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"java.security.Principal의 인스턴스가 아닌 객체를 제목의 주체 집합에 추가하려고 시도하는 중"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"{0}의 인스턴스가 아닌 객체를 추가하려고 시도하는 중"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"부적합한 널 입력값: 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"{0}에 대해 구성된 LoginModules가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"부적합한 널 제목이 제공되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"부적합한 널 CallbackHandler가 제공되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"널 제목 - 로그인 전에 로그아웃이 호출되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"인수가 없는 생성자를 제공하지 않아 LoginModule {0}을(를) 인스턴스화할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"LoginModule을 인스턴스화할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"LoginModule을 인스턴스화할 수 없음: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"LoginModule 클래스를 찾을 수 없음: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"LoginModule에 액세스할 수 없음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"로그인 실패: 모든 모듈이 무시되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: {0}의 구문을 분석하는 중 오류 발생:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: {0} 권한을 추가하는 중 오류 발생:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: 항목을 추가하는 중 오류 발생:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"별칭 이름이 제공되지 않습니다({0})."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"{0} 별칭을 대체할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"대체 값 {0}은(는) 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("LPARAM"_s),
			$of("("_s)
		}),
		$$new($ObjectArray, {
			$of("RPARAM"_s),
			$of(")"_s)
		}),
		$$new($ObjectArray, {
			$of("type.can.t.be.null"_s),
			$of(u"유형은 널일 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"키 저장소를 지정하지 않고 keystorePasswordURL을 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"키 저장소 유형이 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"키 저장소 제공자가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"Codebase 표현식이 여러 개입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"SignedBy 표현식이 여러 개입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"중복된 키 저장소 도메인 이름: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"중복된 키 저장소 이름: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy의 별칭이 비어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"와일드 카드 문자 이름 없이 와일드 카드 문자 클래스를 사용하는 주체를 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"codeBase, SignedBy 또는 주체가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"권한 항목이 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"숫자 "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"[{0}]이(가) 필요하지만 [파일의 끝]까지 읽었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"[;]이 필요하지만 [파일의 끝]까지 읽었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"{0} 행: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"{0} 행: [{1}]이(가) 필요하지만 [{2}]이(가) 발견되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"principalClass 또는 principalName이 널입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11 토큰 [{0}] 비밀번호: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"제목 기반 정책을 인스턴스화할 수 없습니다."_s)
		})
	}));
}

Resources_ko::Resources_ko() {
}

$Class* Resources_ko::load$($String* name, bool initialize) {
	$loadClass(Resources_ko, name, initialize, &_Resources_ko_ClassInfo_, clinit$Resources_ko, allocate$Resources_ko);
	return class$;
}

$Class* Resources_ko::class$ = nullptr;

		} // util
	} // security
} // sun