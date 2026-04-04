#include <sun/security/tools/keytool/Resources_zh_TW.h>
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

$ObjectArray2* Resources_zh_TW::contents = nullptr;

void Resources_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_TW::getContents() {
	return Resources_zh_TW::contents;
}

void Resources_zh_TW::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_zh_TW::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"STAR"_s,
			"*******************************************"_s
		}),
		$$new($ObjectArray, {
			"STARNN"_s,
			"*******************************************\n\n"_s
		}),
		$$new($ObjectArray, {
			".OPTION."_s,
			" [OPTION]..."_s
		}),
		$$new($ObjectArray, {
			"Options."_s,
			u"選項:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"%s 選項已指定多次。將忽略最後一個選項以外的其他所有選項。"_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"只允許一個命令: 指定了 %1$s 和 %2$s 兩者。"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			u"使用 \"keytool -help\" 取得所有可用的命令"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"金鑰與憑證管理工具"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			u"命令:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"使用 \"keytool -command_name -help\" 取得 command_name 的用法。\n使用 -conf <url> 選項指定預先設定的選項檔案。"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			u"產生憑證要求"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			u"變更項目的別名"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			u"刪除項目"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			u"匯出憑證"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			u"產生金鑰組"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			u"產生秘密金鑰"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			u"從憑證要求產生憑證"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			u"產生 CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			u"已產生 {0} 秘密金鑰"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			u"已產生 {0} 位元 {1} 秘密金鑰"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"從 JDK 1.1.x-style 識別資料庫匯入項目"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			u"匯入憑證或憑證鏈"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			u"匯入密碼"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"從其他金鑰儲存庫匯入一個或全部項目"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			u"複製金鑰項目"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"變更項目的金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"列示金鑰儲存庫中的項目"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			u"列印憑證的內容"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			u"列印憑證要求的內容"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			u"列印 CRL 檔案的內容"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			u"產生自行簽署的憑證"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"變更金鑰儲存庫的儲存密碼"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			u"要處理項目的別名名稱"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			u"目的地別名"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"目的地金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"目的地金鑰儲存庫名稱"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"目的地金鑰儲存庫密碼保護"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"目的地金鑰儲存庫提供者名稱"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"目的地金鑰儲存庫密碼"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			u"目的地金鑰儲存庫類型"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			u"辨別名稱"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			u"X.509 擴充套件"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			u"輸出檔案名稱"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			u"輸入檔案名稱"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			u"金鑰演算法名稱"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			u"金鑰位元大小"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"金鑰儲存庫名稱"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"存取 cacerts 金鑰儲存庫"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"警告: 使用 -cacerts 選項存取 cacerts 金鑰儲存庫"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			u"新密碼"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			u"不要提示"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"經由保護機制的密碼"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"使用名稱新增安全提供者 (例如 SunPKCS11)\n設定 -addprovider 引數"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"使用完整類別名稱新增安全提供者\n設定 -providerclass 引數"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			u"提供者名稱"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			u"提供者類別路徑"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			u"以 RFC 樣式輸出"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			u"簽章演算法名稱"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			u"來源別名"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"來源金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"來源金鑰儲存庫名稱"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"來源金鑰儲存庫密碼保護"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"來源金鑰儲存庫提供者名稱"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"來源金鑰儲存庫密碼"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"來源金鑰儲存庫類型"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			u"SSL 伺服器主機與連接埠"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			u"簽署的 jar 檔案"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"憑證有效性開始日期/時間"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"金鑰儲存庫密碼"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			u"金鑰儲存庫類型"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"來自 cacerts 的信任憑證"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			u"詳細資訊輸出"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"有效性日數"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			u"要撤銷憑證的序列 ID"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			u"金鑰工具錯誤: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"無效的選項:"_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			u"無效值: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"不明的密碼類型: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"找不到環境變數: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			u"找不到檔案: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"命令選項 {0} 需要引數。"_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"警告: PKCS12 金鑰儲存庫不支援不同的儲存庫和金鑰密碼。忽略使用者指定的 {0} 值。"_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"-keystore 或 -storetype 選項不能與 -cacerts 選項一起使用"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"如果 -storetype 為 {0}，則 -keystore 必須為 NONE"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			u"重試次數太多，程式已終止"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"如果 -storetype 為 {0}，則不支援 -storepasswd 和 -keypasswd 命令"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"如果 -storetype 為 PKCS12，則不支援 -keypasswd 命令"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"如果 -storetype 為 {0}，則不能指定 -keypass 和 -new"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"如果指定 -protected，則不能指定 -storepass、-keypass 和 -new"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"如果指定 -srcprotected，則不能指定 -srcstorepass 和 -srckeypass"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"如果金鑰儲存庫不受密碼保護，則不能指定 -storepass、-keypass 和 -new"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"如果來源金鑰儲存庫不受密碼保護，則不能指定 -srcstorepass 和 -srckeypass"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"無效的 startdate 值"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"有效性必須大於零"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%s 不是一個提供者"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"找不到名稱為 \"%s\" 的提供者"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"找不到提供者 \"%s\""_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			u"用法錯誤: 未提供命令"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"來源金鑰儲存庫檔案存在，但為空: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			u"請指定 -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u" \'list\' 命令不能同時指定 -v 及 -rfc"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"金鑰密碼必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"新的密碼必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"金鑰儲存庫檔案存在，但為空白: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			u"金鑰儲存庫檔案不存在: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"必須指定目的地別名"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"必須指定別名"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"金鑰儲存庫密碼必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			u"輸入要儲存的密碼:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"輸入金鑰儲存庫密碼:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"請輸入來源金鑰儲存庫密碼: "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"請輸入目的地金鑰儲存庫密碼: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"金鑰儲存庫密碼太短 - 必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			u"不明的項目類型"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"太多錯誤。未變更別名"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"已成功匯入別名 {0} 的項目。"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"未匯入別名 {0} 的項目。"_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"匯入別名 {0} 的項目時出現問題: {1}。\n未匯入別名 {0} 的項目。"_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"已完成匯入命令: 成功匯入 {0} 個項目，{1} 個項目失敗或已取消"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"警告: 正在覆寫目的地金鑰儲存庫中的現有別名 {0}"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"現有項目別名 {0} 存在，是否覆寫？[否]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"太多錯誤 - 請稍後再試"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"認證要求儲存在檔案 <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			u"將此送出至您的 CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"如果未指定別名，則不能指定 destalias 和 srckeypass"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"目的地 pkcs12 金鑰儲存庫的 storepass 和 keypass 不同。請重新以 -destkeypass 指定。"_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			u"憑證儲存在檔案 <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"憑證回覆已安裝在金鑰儲存庫中"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"憑證回覆未安裝在金鑰儲存庫中"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"憑證已新增至金鑰儲存庫中"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"憑證未新增至金鑰儲存庫中"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			u"[儲存 {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0} 沒有公開金鑰 (憑證)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			u"無法取得簽章演算法"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			u"別名 <{0}> 不存在"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			u"別名 <{0}> 沒有憑證"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"沒有建立金鑰組，別名 <{0}> 已經存在"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"針對 {4} 產生有效期 {3} 天的 {0} 位元 {1} 金鑰組以及自我簽署憑證 ({2})\n\t"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"輸入 <{0}> 的金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(RETURN 如果和金鑰儲存庫密碼相同):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"金鑰密碼太短 - 必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"太多錯誤 - 金鑰未新增至金鑰儲存庫"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			u"目的地別名 <{0}> 已經存在"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"密碼太短 - 必須至少為 6 個字元"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"太多錯誤。未複製金鑰項目"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"<{0}> 的金鑰密碼"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"<{0}> 的金鑰儲存庫項目已經存在"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"建立 <{0}> 的金鑰儲存庫項目..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"沒有新增來自識別資料庫的項目"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			u"別名名稱: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			u"建立日期: {0,date}"_s
		}),
		$$new($ObjectArray, {
			"alias.keyStore.getCreationDate.alias."_s,
			"{0}, {1,date}, "_s
		}),
		$$new($ObjectArray, {
			"alias."_s,
			"{0}, "_s
		}),
		$$new($ObjectArray, {
			"Entry.type.type."_s,
			u"項目類型: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			u"憑證鏈長度: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			u"憑證 [{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			u"憑證指紋 (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			u"金鑰儲存庫類型: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"金鑰儲存庫提供者: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"您的金鑰儲存庫包含 {0,number,integer} 項目"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"您的金鑰儲存庫包含 {0,number,integer} 項目"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			u"無法剖析輸入"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			u"空輸入"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			u"非 X.509 憑證"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0} 無公開金鑰"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			u"{0} 無 X.509 憑證"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			u"新憑證 (自我簽署): "_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			u"回覆不含憑證"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			u"憑證未輸入，別名 <{0}> 已經存在"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"輸入的不是 X.509 憑證"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"金鑰儲存庫中的 <{0}> 別名之下，憑證已經存在"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"您仍然想要將之新增嗎？ [否]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"整個系統 CA 金鑰儲存庫中的 <{0}> 別名之下，憑證已經存在"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"您仍然想要將之新增至自己的金鑰儲存庫嗎？ [否]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"信任這個憑證？ [否]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			u"是"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			u"新 {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"必須是不同的密碼"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			u"重新輸入新 {0}: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			u"重新輸入密碼:"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			u"重新輸入新密碼: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"它們不相符。請重試"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			u"輸入 {0} 別名名稱:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"請輸入新的別名名稱\t(RETURN 以取消匯入此項目):"_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			u"輸入別名名稱:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			u"\t(RETURN 如果和 <{0}> 的相同)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"您的名字與姓氏為何？"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"您的組織單位名稱為何？"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			u"您的組織名稱為何？"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"您所在的城市或地區名稱為何？"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			u"您所在的州及省份名稱為何？"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"此單位的兩個字母國別代碼為何？"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"{0} 正確嗎？"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			u"否"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			u"是"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"y"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			u"別名 <{0}> 沒有金鑰"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"別名 <{0}> 所參照的項目不是私密金鑰類型。-keyclone 命令僅支援私密金鑰項目的複製"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			u"簽署者 #%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			u"時戳:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			u"簽章:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRL:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"憑證擁有者: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			u"不是簽署的 jar 檔案"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			u"沒有來自 SSL 伺服器的憑證"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* 尚未驗證儲存於金鑰儲存庫中資訊  *\n* 的完整性！若要驗證其完整性，    *\n* 您必須提供您的金鑰儲存庫密碼。  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* 尚未驗證儲存於 srckeystore 中資訊  *\n* 的完整性！若要驗證其完整性，您必須 *\n* 提供 srckeystore 密碼。            *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"憑證回覆並未包含 <{0}> 的公開金鑰"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			u"回覆時的憑證鏈不完整"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			u"回覆時的憑證鏈未驗證: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			u"回覆時的最高級憑證:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... 是不被信任的。"_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"還是要安裝回覆？ [否]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			u"否"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"回覆時的公開金鑰與金鑰儲存庫不符"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"憑證回覆與金鑰儲存庫中的憑證是相同的"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			u"無法從回覆中將鏈建立起來"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			u"錯誤的答案，請再試一次"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			u"未產生秘密金鑰，別名 <{0}> 已存在"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"請提供 -keysize 以產生秘密金鑰"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"警告: 未驗證。請確定 -keystore 正確。"_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			u"擴充套件: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			u"(空白值)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			u"擴充套件要求:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			u"不明的 keyUsage 類型: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			u"不明的 extendedkeyUsage 類型: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			u"不明的 AccessDescription 類型: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			u"無法辨識的 GeneralName 類型: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"此擴充套件無法標示為關鍵。"_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"找到十六進位數字的奇數: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			u"不明的擴充套件類型: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"命令 {0} 不明確:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			u"憑證要求"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			u"發行人"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			u"產生的憑證"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			u"產生的 CRL"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			u"產生的憑證要求"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			u"憑證"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			u"TSA 憑證"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			u"輸入"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			u"回覆"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d / %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			u"cacerts 中的發行人 <%s>"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			u"發行人 <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			u"%s (低強度)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"%1$d 位元的 %2$s 金鑰"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"%1$d 位元的 %2$s 金鑰 (低強度)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"%s 金鑰大小不明"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"擁有者: {0}\n發行人: {1}\n序號: {2}\n有效期自: {3} 到: {4}\n憑證指紋:\n\t SHA1: {5}\n\t SHA256: {6}\n簽章演算法名稱: {7}\n主體公開金鑰演算法: {8}\n版本: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"PKCS #10 憑證要求 (版本 1.0)\n主體: %1$s\n格式: %2$s\n公用金鑰: %3$s\n簽章演算法: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			u"由 %2$s 中的 %1$s 以 %3$s 驗證"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			u"%1$s 使用的 %2$s 簽章演算法存在安全風險。"_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			u"%1$s 使用的 %2$s 存在安全風險。"_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"%1$s 金鑰儲存庫使用專有格式。建議您使用 \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\" 移轉成為使用 PKCS12 (業界標準格式)。"_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"已將 \"%1$s\" 移轉成為 %4$s。%2$s 金鑰儲存庫已備份為 \"%3$s\"。"_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"原始的金鑰儲存庫 \"%1$s\" 已備份為 \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			u"正在將金鑰儲存庫 %1$s 匯入 %2$s..."_s
		})
	}));
}

Resources_zh_TW::Resources_zh_TW() {
}

$Class* Resources_zh_TW::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_TW, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_zh_TW",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_zh_TW, name, initialize, &classInfo$$, Resources_zh_TW::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_zh_TW);
	});
	return class$;
}

$Class* Resources_zh_TW::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun