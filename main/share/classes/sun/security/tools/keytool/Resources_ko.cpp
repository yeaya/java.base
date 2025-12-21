#include <sun/security/tools/keytool/Resources_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _Resources_ko_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ko, contents)},
	{}
};

$MethodInfo _Resources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ko::*)()>(&Resources_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_ko",
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
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("STAR"_s),
			$of("*******************************************"_s)
		}),
		$$new($ObjectArray, {
			$of("STARNN"_s),
			$of("*******************************************\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".OPTION."_s),
			$of(" [OPTION]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of(u"옵션:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"%s 옵션이 여러 번 지정되었습니다. 마지막 항목을 제외한 모든 항목이 무시됩니다."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"명령은 하나만 허용됩니다. %1$s 및 %2$s이(가) 모두 지정되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"사용 가능한 모든 명령에 \"keytool -help\" 사용"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"키 및 인증서 관리 툴"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"명령:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"command_name 사용법에 \"keytool -command_name -help\"를 사용합니다.\n-conf <url> 옵션을 사용하여 사전 구성된 옵션 파일을 지정합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"인증서 요청을 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"항목의 별칭을 변경합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"항목을 삭제합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"인증서를 익스포트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"키 쌍을 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"보안 키를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"인증서 요청에서 인증서를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"CRL을 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"{0} 보안 키를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"{0}비트 {1} 보안 키를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"JDK 1.1.x 스타일 ID 데이터베이스에서 항목을 임포트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"인증서 또는 인증서 체인을 임포트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"비밀번호를 임포트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"다른 키 저장소에서 하나 또는 모든 항목을 임포트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"키 항목을 복제합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"항목의 키 비밀번호를 변경합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"키 저장소의 항목을 나열합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"인증서의 콘텐츠를 인쇄합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"인증서 요청의 콘텐츠를 인쇄합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"CRL 파일의 콘텐츠를 인쇄합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"자체 서명된 인증서를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"키 저장소의 저장소 비밀번호를 변경합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"처리할 항목의 별칭 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"대상 별칭"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"대상 키 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"대상 키 저장소 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"대상 키 저장소 비밀번호로 보호됨"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"대상 키 저장소 제공자 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"대상 키 저장소 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"대상 키 저장소 유형"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"식별 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 확장"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"출력 파일 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"입력 파일 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"키 알고리즘 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"키 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"키 비트 크기"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"키 저장소 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"cacerts 키 저장소 액세스"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"경고: -cacerts 옵션을 사용하여 cacerts 키 저장소에 액세스하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"새 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"확인하지 않음"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"보호되는 메커니즘을 통한 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"이름별 보안 제공자 추가(예: SunPKCS11)\n-addprovider에 대한 인수 구성"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"전체 클래스 이름별 보안 제공자 추가\n-providerclass에 대한 인수 구성"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"제공자 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"제공자 클래스 경로"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"RFC 스타일의 출력"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"서명 알고리즘 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"소스 별칭"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"소스 키 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"소스 키 저장소 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"소스 키 저장소 비밀번호로 보호됨"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"소스 키 저장소 제공자 이름"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"소스 키 저장소 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"소스 키 저장소 유형"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL 서버 호스트 및 포트"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"서명된 jar 파일"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"인증서 유효 기간 시작 날짜/시간"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"키 저장소 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"키 저장소 유형"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"cacerts의 보안 인증서"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"상세 정보 출력"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"유효 기간 일 수"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"철회할 인증서의 일련 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytool 오류: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"잘못된 옵션:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"잘못된 값: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"알 수 없는 비밀번호 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"환경 변수를 찾을 수 없음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"파일을 찾을 수 없음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"명령 옵션 {0}에 인수가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"경고: 다른 저장소 및 키 비밀번호는 PKCS12 KeyStores에 대해 지원되지 않습니다. 사용자가 지정한 {0} 값을 무시하는 중입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystore 또는 -storetype 옵션은 -cacerts 옵션과 함께 사용할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-storetype이 {0}인 경우 -keystore는 NONE이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"재시도 횟수가 너무 많아 프로그램이 종료되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storetype이 {0}인 경우 -storepasswd 및 -keypasswd 명령이 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-storetype이 PKCS12인 경우 -keypasswd 명령이 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-storetype이 {0}인 경우 -keypass 및 -new를 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"-protected를 지정한 경우 -storepass, -keypass 및 -new를 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"-srcprotected를 지정한 경우 -srcstorepass 및 -srckeypass를 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"키 저장소가 비밀번호로 보호되지 않는 경우 -storepass, -keypass 및 -new를 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"소스 키 저장소가 비밀번호로 보호되지 않는 경우 -srcstorepass 및 -srckeypass를 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"startdate 값이 잘못되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"유효 기간은 0보다 커야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s은(는) 제공자가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\"%s\" 이름의 제공자를 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\"%s\" 제공자를 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"사용법 오류: 명령을 입력하지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"소스 키 저장소 파일이 존재하지만 비어 있음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"-srckeystore를 지정하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"\'list\' 명령에 -v와 -rfc를 함께 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"키 비밀번호는 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"새 비밀번호는 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"키 저장소 파일이 존재하지만 비어 있음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"키 저장소 파일이 존재하지 않음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"대상 별칭을 지정해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"별칭을 지정해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"키 저장소 비밀번호는 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"저장할 비밀번호 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"키 저장소 비밀번호 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"소스 키 저장소 비밀번호 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"대상 키 저장소 비밀번호 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"키 저장소 비밀번호가 너무 짧음 - 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"알 수 없는 항목 유형"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"오류가 너무 많습니다. 별칭이 변경되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"{0} 별칭에 대한 항목이 성공적으로 임포트되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"{0} 별칭에 대한 항목이 임포트되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"{0} 별칭에 대한 항목을 임포트하는 중 문제 발생: {1}.\n{0} 별칭에 대한 항목이 임포트되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"임포트 명령 완료: 성공적으로 임포트된 항목은 {0}개, 실패하거나 취소된 항목은 {1}개입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"경고: 대상 키 저장소에서 기존 별칭 {0}을(를) 겹쳐 쓰는 중"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"기존 항목 별칭 {0}이(가) 존재합니다. 겹쳐 쓰겠습니까? [아니오]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"오류가 너무 많음 - 나중에 시도하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"인증 요청이 <{0}> 파일에 저장되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"CA에게 제출하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"별칭을 지정하지 않은 경우 destalias 및 srckeypass를 지정하지 않아야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"대상 pkcs12 키 저장소에 다른 storepass 및 keypass가 있습니다. 지정된 -destkeypass로 재시도하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"인증서가 <{0}> 파일에 저장되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"인증서 회신이 키 저장소에 설치되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"인증서 회신이 키 저장소에 설치되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"인증서가 키 저장소에 추가되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"인증서가 키 저장소에 추가되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[{0}을(를) 저장하는 중]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}에 공용 키(인증서)가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"서명 알고리즘을 파생할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"<{0}> 별칭이 존재하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"<{0}> 별칭에 인증서가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"키 쌍이 생성되지 않았으며 <{0}> 별칭이 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"다음에 대해 유효 기간이 {3}일인 {0}비트 {1} 키 쌍 및 자체 서명된 인증서({2})를 생성하는 중\n\t: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"<{0}>에 대한 키 비밀번호를 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(키 저장소 비밀번호와 동일한 경우 Enter 키를 누름):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"키 비밀번호가 너무 짧음 - 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"오류가 너무 많음 - 키 저장소에 키가 추가되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"대상 별칭 <{0}>이(가) 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"비밀번호가 너무 짧음 - 6자 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"오류가 너무 많습니다. 키 항목이 복제되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}>에 대한 키 비밀번호"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"<{0}>에 대한 키 저장소 항목이 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"<{0}>에 대한 키 저장소 항목을 생성하는 중..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"ID 데이터베이스에서 추가된 항목이 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"별칭 이름: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"생성 날짜: {0,date}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.keyStore.getCreationDate.alias."_s),
			$of("{0}, {1,date}, "_s)
		}),
		$$new($ObjectArray, {
			$of("alias."_s),
			$of("{0}, "_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.type.type."_s),
			$of(u"항목 유형: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"인증서 체인 길이: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"인증서[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"인증서 지문(SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"키 저장소 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"키 저장소 제공자: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"키 저장소에 {0,number,integer}개의 항목이 포함되어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"키 저장소에 {0,number,integer}개의 항목이 포함되어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"입력값의 구문 분석을 실패했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"입력값이 비어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"X.509 인증서가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}에 공용 키가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}에 X.509 인증서가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"새 인증서(자체 서명):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"회신에 인증서가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"인증서가 임포트되지 않았으며 <{0}> 별칭이 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"입력이 X.509 인증서가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"인증서가 <{0}> 별칭 아래의 키 저장소에 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"추가하겠습니까? [아니오]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"인증서가 <{0}> 별칭 아래에 있는 시스템 차원의 CA 키 저장소에 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"고유한 키 저장소에 추가하겠습니까? [아니오]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"이 인증서를 신뢰합니까? [아니오]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"예"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"새 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"비밀번호는 달라야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"새 {0} 다시 입력: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"비밀번호  다시 입력: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"새 비밀번호 다시 입력: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"일치하지 않습니다. 다시 시도하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"{0} 별칭 이름 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"새 별칭 이름 입력\t(이 항목에 대한 임포트를 취소하려면 Enter 키를 누름):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"별칭 이름 입력:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(<{0}>과(와) 동일한 경우 Enter 키를 누름)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"이름과 성을 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"조직 단위 이름을 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"조직 이름을 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"구/군/시 이름을 입력하십시오?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"시/도 이름을 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"이 조직의 두 자리 국가 코드를 입력하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}이(가) 맞습니까?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"아니오"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"예"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("y"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of(u"<{0}> 별칭에 키가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"<{0}> 별칭은 전용 키 항목이 아닌 항목 유형을 참조합니다. -keyclone 명령은 전용 키 항목의 복제만 지원합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"서명자 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"시간 기록:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"서명:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"인증서 소유자: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"서명된 jar 파일이 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"SSL 서버에서 가져온 인증서가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* 키 저장소에 저장된 정보의 무결성이  *\n* 확인되지 않았습니다! 무결성을 확인하려면, *\n* 키 저장소 비밀번호를 제공해야 합니다.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* srckeystore에 저장된 정보의 무결성이  *\n* 확인되지 않았습니다! 무결성을 확인하려면, *\n* srckeystore 비밀번호를 제공해야 합니다.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"인증서 회신에 <{0}>에 대한 공용 키가 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"회신에 불완전한 인증서 체인이 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"회신의 인증서 체인이 확인되지 않음: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"회신에 최상위 레벨 인증서가 있음:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"...을(를) 신뢰할 수 없습니다. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"회신을 설치하겠습니까? [아니오]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"아니오"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"회신과 키 저장소의 공용 키가 일치하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"회신과 키 저장소의 인증서가 동일합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"회신의 체인 설정을 실패했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"잘못된 응답입니다. 다시 시도하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"보안 키가 생성되지 않았으며 <{0}> 별칭이 존재합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"보안 키를 생성하려면 -keysize를 제공하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"경고: 확인되지 않음. -keystore가 올바른지 확인하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"확장: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(비어 있는 값)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"확장 요청:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"알 수 없는 keyUsage 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"알 수 없는 extendedkeyUsage 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"알 수 없는 AccessDescription 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"알 수 없는 GeneralName 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"이 확장은 중요한 것으로 표시할 수 없습니다. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"홀수 개의 16진수가 발견됨: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"알 수 없는 확장 유형: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"{0} 명령이 모호함:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"인증서 요청"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"발행자"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"생성된 인증서"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"생성된 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"생성된 인증서 요청"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"인증서"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA 인증서"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"입력"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"회신"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d/%3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts의 <%s> 발행자"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"<%s> 발행자"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s(약함)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d비트 %2$s 키"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d비트 %2$s 키(약함)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"알 수 없는 크기 %s 키"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"소유자: {0}\n발행자: {1}\n일련 번호: {2}\n적합한 시작 날짜: {3} 종료 날짜: {4}\n인증서 지문:\n\t SHA1: {5}\n\t SHA256: {6}\n서명 알고리즘 이름: {7}\n주체 공용 키 알고리즘: {8}\n버전: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10 인증서 요청(1.0 버전)\n제목: %1$s\n형식: %2$s\n공용 키: %3$s\n서명 알고리즘: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"%3$s을(를) 포함하는 %2$s의 %1$s에 의해 확인됨"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s이(가) 보안 위험으로 간주되는 %2$s 서명 알고리즘을 사용합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s이(가) 보안 위험으로 간주되는 %2$s을(를) 사용합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$s 키 저장소는 고유 형식을 사용합니다. \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"를 사용하는 산업 표준 형식인 PKCS12로 이전하는 것이 좋습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\"%1$s\"을(를) %4$s(으)로 이전했습니다. %2$s 키 저장소가 \"%3$s\"(으)로 백업되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"원본 키 저장소 \"%1$s\"이(가) \"%3$s\"(으)로 백업되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"키 저장소 %1$s을(를) %2$s(으)로 임포트하는 중..."_s)
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

			} // keytool
		} // tools
	} // security
} // sun