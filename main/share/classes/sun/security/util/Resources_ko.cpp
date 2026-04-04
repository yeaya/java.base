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

$ObjectArray2* Resources_ko::contents = nullptr;

void Resources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ko::getContents() {
	return Resources_ko::contents;
}

void Resources_ko::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"널 입력값이 부적합합니다."_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"작업은 \'읽기\' 전용입니다."_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"권한 이름 [{0}] 구문이 부적합함: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"인증서 클래스 다음에 주체 클래스와 이름이 없습니다."_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"주체 클래스 다음에 주체 이름이 없습니다."_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"주체 이름은 따옴표로 묶어야 합니다."_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			u"주체 이름에 닫는 따옴표가 누락되었습니다."_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"주체 이름이 와일드 카드 문자(*) 값이 아닌 경우 PrivateCredentialPermission 주체 클래스는 와일드 카드 문자(*) 값일 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			u"CredOwner:\n\t주체 클래스 = {0}\n\t주체 이름 = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			u"널 이름을 제공했습니다."_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"널 키워드 맵을 제공했습니다."_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			u"널 OID 맵을 제공했습니다."_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"부적합한 널 AccessControlContext가 제공되었습니다."_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"부적합한 널 작업이 제공되었습니다."_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"부적합한 널 클래스가 제공되었습니다."_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			u"제목:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			u"\\주체: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\t공용 인증서: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\t전용 인증서에 액세스할 수 없습니다.\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			u"\t전용 인증서: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\t전용 인증서에 액세스할 수 없습니다.\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"제목이 읽기 전용입니다."_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"java.security.Principal의 인스턴스가 아닌 객체를 제목의 주체 집합에 추가하려고 시도하는 중"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"{0}의 인스턴스가 아닌 객체를 추가하려고 시도하는 중"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"부적합한 널 입력값: 이름"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"{0}에 대해 구성된 LoginModules가 없습니다."_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"부적합한 널 제목이 제공되었습니다."_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"부적합한 널 CallbackHandler가 제공되었습니다."_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"널 제목 - 로그인 전에 로그아웃이 호출되었습니다."_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"인수가 없는 생성자를 제공하지 않아 LoginModule {0}을(를) 인스턴스화할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			u"LoginModule을 인스턴스화할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"LoginModule을 인스턴스화할 수 없음: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			u"LoginModule 클래스를 찾을 수 없음: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"LoginModule에 액세스할 수 없음: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"로그인 실패: 모든 모듈이 무시되었습니다."_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			u"java.security.policy: {0}의 구문을 분석하는 중 오류 발생:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: {0} 권한을 추가하는 중 오류 발생:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: 항목을 추가하는 중 오류 발생:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			u"별칭 이름이 제공되지 않습니다({0})."_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"{0} 별칭을 대체할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"대체 값 {0}은(는) 지원되지 않습니다."_s
		}),
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"LPARAM"_s,
			"("_s
		}),
		$$new($ObjectArray, {
			"RPARAM"_s,
			")"_s
		}),
		$$new($ObjectArray, {
			"type.can.t.be.null"_s,
			u"유형은 널일 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"키 저장소를 지정하지 않고 keystorePasswordURL을 지정할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"키 저장소 유형이 필요합니다."_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"키 저장소 제공자가 필요합니다."_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"Codebase 표현식이 여러 개입니다."_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"SignedBy 표현식이 여러 개입니다."_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"중복된 키 저장소 도메인 이름: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"중복된 키 저장소 이름: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedBy의 별칭이 비어 있습니다."_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"와일드 카드 문자 이름 없이 와일드 카드 문자 클래스를 사용하는 주체를 지정할 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			u"codeBase, SignedBy 또는 주체가 필요합니다."_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"권한 항목이 필요합니다."_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"숫자 "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"[{0}]이(가) 필요하지만 [파일의 끝]까지 읽었습니다."_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"[;]이 필요하지만 [파일의 끝]까지 읽었습니다."_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			u"{0} 행: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"{0} 행: [{1}]이(가) 필요하지만 [{2}]이(가) 발견되었습니다."_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			u"principalClass 또는 principalName이 널입니다."_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"PKCS11 토큰 [{0}] 비밀번호: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"제목 기반 정책을 인스턴스화할 수 없습니다."_s
		})
	}));
}

Resources_ko::Resources_ko() {
}

$Class* Resources_ko::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ko, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_ko",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_ko, name, initialize, &classInfo$$, Resources_ko::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_ko);
	});
	return class$;
}

$Class* Resources_ko::class$ = nullptr;

		} // util
	} // security
} // sun