#include <sun/security/tools/keytool/Resources_zh_HK.h>

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

$FieldInfo _Resources_zh_HK_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_HK, contents)},
	{}
};

$MethodInfo _Resources_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_zh_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_zh_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _Resources_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_zh_HK_FieldInfo_,
	_Resources_zh_HK_MethodInfo_
};

$Object* allocate$Resources_zh_HK($Class* clazz) {
	return $of($alloc(Resources_zh_HK));
}

$ObjectArray2* Resources_zh_HK::contents = nullptr;

void Resources_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_HK::getContents() {
	return Resources_zh_HK::contents;
}

void clinit$Resources_zh_HK($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_zh_HK::contents, $new($ObjectArray2, {
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
			$of(u" [選項]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of(u"選項:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"使用 \"keytool -help\" 取得所有可用的命令"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"金鑰與憑證管理工具"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"命令:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"使用 \"keytool -command_name -help\" 取得 command_name 的用法"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"產生憑證要求"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"變更項目的別名"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"刪除項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"匯出憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"產生金鑰組"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"產生秘密金鑰"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"從憑證要求產生憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"產生 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"從 JDK 1.1.x-style 識別資料庫匯入項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"匯入憑證或憑證鏈"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"從其他金鑰儲存庫匯入一個或全部項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"複製金鑰項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"變更項目的金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"列示金鑰儲存庫中的項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"列印憑證的內容"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"列印憑證要求的內容"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"列印 CRL 檔案的內容"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"產生自行簽署的憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"變更金鑰儲存庫的儲存密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"要處理項目的別名名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"目的地別名"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"目的地金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"目的地金鑰儲存庫名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"目的地金鑰儲存庫密碼保護"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"目的地金鑰儲存庫提供者名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"目的地金鑰儲存庫密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"目的地金鑰儲存庫類型"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"辨別名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 擴充套件"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"輸出檔案名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"輸入檔案名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"金鑰演算法名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"金鑰位元大小"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"金鑰儲存庫名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"新密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"不要提示"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"經由保護機制的密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.argument"_s),
			$of(u"提供者引數"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.name"_s),
			$of(u"提供者類別名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"提供者名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"提供者類別路徑"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"以 RFC 樣式輸出"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"簽章演算法名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"來源別名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"來源金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"來源金鑰儲存庫名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"來源金鑰儲存庫密碼保護"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"來源金鑰儲存庫提供者名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"來源金鑰儲存庫密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"來源金鑰儲存庫類型"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL 伺服器主機與連接埠"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"簽署的 jar 檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"憑證有效性開始日期/時間"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"金鑰儲存庫密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"金鑰儲存庫類型"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"來自 cacerts 的信任憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"詳細資訊輸出"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"有效性日數"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"要撤銷憑證的序列 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"金鑰工具錯誤: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"無效的選項:"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"無效值: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"不明的密碼類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"找不到環境變數: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"找不到檔案: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"命令選項 {0} 需要引數。"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"警告: PKCS12 金鑰儲存庫不支援不同的儲存庫和金鑰密碼。忽略使用者指定的 {0} 值。"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 為 {0}，則 -keystore 必須為 NONE"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"重試次數太多，程式已終止"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 為 {0}，則不支援 -storepasswd 和 -keypasswd 命令"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"如果 -storetype 為 PKCS12，則不支援 -keypasswd 命令"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 為 {0}，則不能指定 -keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"如果指定 -protected，則不能指定 -storepass、-keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"如果指定 -srcprotected，則不能指定 -srcstorepass 和 -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"如果金鑰儲存庫不受密碼保護，則不能指定 -storepass、-keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"如果來源金鑰儲存庫不受密碼保護，則不能指定 -srcstorepass 和 -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"無效的 startdate 值"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"有效性必須大於零"_s)
		}),
		$$new($ObjectArray, {
			$of("provName.not.a.provider"_s),
			$of(u"{0} 不是一個提供者"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"用法錯誤: 未提供命令"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"來源金鑰儲存庫檔案存在，但為空: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"請指定 -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u" \'list\' 命令不能同時指定 -v 及 -rfc"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"金鑰密碼必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"新的密碼必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"金鑰儲存庫檔案存在，但為空白: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"金鑰儲存庫檔案不存在: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"必須指定目的地別名"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"必須指定別名"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"金鑰儲存庫密碼必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"輸入金鑰儲存庫密碼:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"請輸入來源金鑰儲存庫密碼: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"請輸入目的地金鑰儲存庫密碼: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"金鑰儲存庫密碼太短 - 必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"不明的項目類型"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"太多錯誤。未變更別名"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"已成功匯入別名 {0} 的項目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"未匯入別名 {0} 的項目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"匯入別名 {0} 的項目時出現問題: {1}。\n未匯入別名 {0} 的項目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"已完成匯入命令: 成功匯入 {0} 個項目，{1} 個項目失敗或已取消"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"警告: 正在覆寫目的地金鑰儲存庫中的現有別名 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"現有項目別名 {0} 存在，是否覆寫？[否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"太多錯誤 - 請稍後再試"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"認證要求儲存在檔案 <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"將此送出至您的 CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.srckeypass.and.destkeypass.must.not.be.specified"_s),
			$of(u"如果未指定別名，則不能指定 destalias、srckeypass 及 destkeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"憑證儲存在檔案 <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"憑證回覆已安裝在金鑰儲存庫中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"憑證回覆未安裝在金鑰儲存庫中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"憑證已新增至金鑰儲存庫中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"憑證未新增至金鑰儲存庫中"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[儲存 {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} 沒有公開金鑰 (憑證)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"無法取得簽章演算法"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"別名 <{0}> 不存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"別名 <{0}> 沒有憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"沒有建立金鑰組，別名 <{0}> 已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"針對 {4} 產生有效期 {3} 天的 {0} 位元 {1} 金鑰組以及自我簽署憑證 ({2})\n\t"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"輸入 <{0}> 的金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(RETURN 如果和金鑰儲存庫密碼相同):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"金鑰密碼太短 - 必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"太多錯誤 - 金鑰未新增至金鑰儲存庫"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"目的地別名 <{0}> 已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"密碼太短 - 必須至少為 6 個字元"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"太多錯誤。未複製金鑰項目"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}> 的金鑰密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"<{0}> 的金鑰儲存庫項目已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"建立 <{0}> 的金鑰儲存庫項目..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"沒有新增來自識別資料庫的項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"別名名稱: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"建立日期: {0,date}"_s)
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
			$of(u"項目類型: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"憑證鏈長度: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"憑證 [{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA1."_s),
			$of(u"憑證指紋 (SHA1): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"金鑰儲存庫類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"金鑰儲存庫提供者: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"您的金鑰儲存庫包含 {0,number,integer} 項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"您的金鑰儲存庫包含 {0,number,integer} 項目"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"無法剖析輸入"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"空輸入"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"非 X.509 憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} 無公開金鑰"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0} 無 X.509 憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"新憑證 (自我簽署): "_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"回覆不含憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"憑證未輸入，別名 <{0}> 已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"輸入的不是 X.509 憑證"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"金鑰儲存庫中的 <{0}> 別名之下，憑證已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"您仍然想要將之新增嗎？ [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"整個系統 CA 金鑰儲存庫中的 <{0}> 別名之下，憑證已經存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"您仍然想要將之新增至自己的金鑰儲存庫嗎？ [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"信任這個憑證？ [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"是"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"新 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"必須是不同的密碼"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"重新輸入新 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"重新輸入新密碼: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"它們不相符。請重試"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"輸入 {0} 別名名稱:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"請輸入新的別名名稱\t(RETURN 以取消匯入此項目):"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"輸入別名名稱:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(RETURN 如果和 <{0}> 的相同)"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert"_s),
			$of(u"擁有者: {0}\n發出者: {1}\n序號: {2}\n有效期自: {3} 到: {4}\n憑證指紋:\n\t MD5:  {5}\n\t SHA1: {6}\n\t SHA256: {7}\n\t 簽章演算法名稱: {8}\n\t 版本: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"您的名字與姓氏為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"您的組織單位名稱為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"您的組織名稱為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"您所在的城市或地區名稱為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"您所在的州及省份名稱為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"此單位的兩個字母國別代碼為何？"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0} 正確嗎？"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"否"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"是"_s)
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
			$of(u"別名 <{0}> 沒有金鑰"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"別名 <{0}> 所參照的項目不是私密金鑰類型。-keyclone 命令僅支援私密金鑰項目的複製"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of(u"*****************  警告 警告 警告  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"簽署者 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"時戳:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"簽章:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"憑證擁有者: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"不是簽署的 jar 檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"沒有來自 SSL 伺服器的憑證"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* 尚未驗證儲存於金鑰儲存庫中資訊  *\n* 的完整性！若要驗證其完整性，*\n* 您必須提供您的金鑰儲存庫密碼。                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* 尚未驗證儲存於 srckeystore 中資訊*\n* 的完整性！若要驗證其完整性，您必須 *\n* 提供 srckeystore 密碼。          *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"憑證回覆並未包含 <{0}> 的公開金鑰"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"回覆時的憑證鏈不完整"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"回覆時的憑證鏈未驗證: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"回覆時的最高級憑證:\\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... 是不被信任的。"_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"還是要安裝回覆？ [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"否"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"回覆時的公開金鑰與金鑰儲存庫不符"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"憑證回覆與金鑰儲存庫中的憑證是相同的"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"無法從回覆中將鏈建立起來"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"錯誤的答案，請再試一次"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"未產生秘密金鑰，別名 <{0}> 已存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"請提供 -keysize 以產生秘密金鑰"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"擴充套件: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(空白值)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"擴充套件要求:"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.Certificate.Request.Version.1.0.Subject.s.Public.Key.s.format.s.key."_s),
			$of(u"PKCS #10 憑證要求 (版本 1.0)\n主體: %s\n公用金鑰: %s 格式 %s 金鑰\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"不明的 keyUsage 類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"不明的 extendedkeyUsage 類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"不明的 AccessDescription 類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"無法辨識的 GeneralName 類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"此擴充套件無法標示為關鍵。"_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"找到十六進位數字的奇數: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"不明的擴充套件類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"命令 {0} 不明確:"_s)
		})
	}));
}

Resources_zh_HK::Resources_zh_HK() {
}

$Class* Resources_zh_HK::load$($String* name, bool initialize) {
	$loadClass(Resources_zh_HK, name, initialize, &_Resources_zh_HK_ClassInfo_, clinit$Resources_zh_HK, allocate$Resources_zh_HK);
	return class$;
}

$Class* Resources_zh_HK::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun