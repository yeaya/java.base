#include <sun/security/tools/keytool/Resources_zh_CN.h>

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

$FieldInfo _Resources_zh_CN_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_CN, contents)},
	{}
};

$MethodInfo _Resources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_zh_CN::*)()>(&Resources_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_zh_CN_FieldInfo_,
	_Resources_zh_CN_MethodInfo_
};

$Object* allocate$Resources_zh_CN($Class* clazz) {
	return $of($alloc(Resources_zh_CN));
}

$ObjectArray2* Resources_zh_CN::contents = nullptr;

void Resources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_CN::getContents() {
	return Resources_zh_CN::contents;
}

void clinit$Resources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_zh_CN::contents, $new($ObjectArray2, {
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
			$of(u"选项:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"多次指定了 %s 选项。除最后一个之外, 其余的将全部忽略。"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"只允许一个命令: 同时指定了 %1$s 和 %2$s。"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"使用 \"keytool -?, -h, or --help\" 可输出此帮助消息"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"密钥和证书管理工具"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"命令:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"使用 \"keytool -command_name --help\" 可获取 command_name 的用法。\n使用 -conf <url> 选项可指定预配置的选项文件。"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"生成证书请求"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"更改条目的别名"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"删除条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"导出证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"生成密钥对"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"生成密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"根据证书请求生成证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"生成 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"已生成{0}密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"已生成 {0} 位{1}密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"从 JDK 1.1.x 样式的身份数据库导入条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"导入证书或证书链"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"导入口令"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"从其他密钥库导入一个或所有条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"克隆密钥条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"更改条目的密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"列出密钥库中的条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"打印证书内容"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"打印证书请求的内容"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"打印 CRL 文件的内容"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"生成自签名证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"更改密钥库的存储口令"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.command.help"_s),
			$of(u"显示安全相关信息"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"要处理的条目的别名"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.option.help"_s),
			$of(u"组名。例如，椭圆曲线名称。"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"目标别名"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"目标密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"目标密钥库名称"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"受保护的目标密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"目标密钥库提供方名称"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"目标密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"目标密钥库类型"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"唯一判别名"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 扩展"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"输出文件名"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"输入文件名"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"密钥算法名称"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"密钥位大小"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"密钥库名称"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"访问 cacerts 密钥库"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"警告: 使用 -cacerts 选项访问 cacerts 密钥库"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"新口令"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"不提示"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"通过受保护的机制的口令"_s)
		}),
		$$new($ObjectArray, {
			$of("tls.option.help"_s),
			$of(u"显示 TLS 配置信息"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"按名称 (例如 SunPKCS11) 添加安全提供方\n配置 -addprovider 的参数"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"按全限定类名添加安全提供方\n配置 -providerclass 的参数"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"提供方名称"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"提供方类路径"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"以 RFC 样式输出"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"签名算法名称"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"源别名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"源密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"源密钥库名称"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"受保护的源密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"源密钥库提供方名称"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"源密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"源密钥库类型"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL 服务器主机和端口"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"已签名的 jar 文件"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"证书有效期开始日期/时间"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"密钥库类型"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"信任来自 cacerts 的证书"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"详细输出"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"有效天数"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"要撤销的证书的序列 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytool 错误: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"非法选项:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"非法值: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"未知口令类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"找不到环境变量: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"找不到文件: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"命令选项{0}需要一个参数。"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"警告: PKCS12 密钥库不支持其他存储和密钥口令。正在忽略用户指定的{0}值。"_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystore 或 -storetype 选项不能与 -cacerts 选项一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 为 {0}, 则 -keystore 必须为 NONE"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"重试次数过多, 程序已终止"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 为 {0}, 则不支持 -storepasswd 和 -keypasswd 命令"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"如果 -storetype 为 PKCS12, 则不支持 -keypasswd 命令"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 为 {0}, 则不能指定 -keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"如果指定了 -protected, 则不能指定 -storepass, -keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"如果指定了 -srcprotected, 则不能指定 -srcstorepass 和 -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"如果密钥库未受口令保护, 则不能指定 -storepass, -keypass 和 -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"如果源密钥库未受口令保护, 则不能指定 -srcstorepass 和 -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"非法开始日期值"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"有效性必须大于零"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s不是提供方"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"未找到名为 \"%s\" 的提供方"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"未找到提供方 \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"用法错误: 没有提供命令"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"源密钥库文件存在, 但为空: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"请指定 -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"不能使用 \'list\' 命令来指定 -v 及 -rfc"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"密钥口令至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"新口令至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"密钥库文件存在, 但为空: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"密钥库文件不存在: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"必须指定目标别名"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"必须指定别名"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"密钥库口令至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"输入要存储的口令:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"输入密钥库口令:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"输入源密钥库口令:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"输入目标密钥库口令:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"密钥库口令太短 - 至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"未知条目类型"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"已成功导入别名 {0} 的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"未导入别名 {0} 的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"导入别名 {0} 的条目时出现问题: {1}。\n未导入别名 {0} 的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"已完成导入命令: {0} 个条目成功导入, {1} 个条目失败或取消"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"警告: 正在覆盖目标密钥库中的现有别名 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"存在现有条目别名 {0}, 是否覆盖? [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"故障太多 - 请稍后再试"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"存储在文件 <{0}> 中的认证请求"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"将此提交给您的 CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"如果没有指定别名, 则不能指定目标别名和源密钥库口令"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"目标 pkcs12 密钥库具有不同的 storepass 和 keypass。请在指定了 -destkeypass 时重试。"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"存储在文件 <{0}> 中的证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"证书回复已安装在密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"证书回复未安装在密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"证书已添加到密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"证书未添加到密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[正在存储{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}没有公共密钥 (证书)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"无法派生签名算法"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"别名 <{0}> 不存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"别名 <{0}> 没有证书"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.keysize.coexist"_s),
			$of(u"无法同时指定 -groupname 和 -keysize"_s)
		}),
		$$new($ObjectArray, {
			$of("deprecate.keysize.for.ec"_s),
			$of(u"为生成 EC 密钥指定 -keysize 已过时，请改为使用 \"-groupname %s\"。"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"未生成密钥对, 别名 <{0}> 已经存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"正在为以下对象生成 {0} 位{1}密钥对和自签名证书 ({2}) (有效期为 {3} 天):\n\t {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"输入 <{0}> 的密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(如果和密钥库口令相同, 按回车):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"密钥口令太短 - 至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"故障太多 - 密钥未添加到密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"目标别名 <{0}> 已经存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"口令太短 - 至少必须为 6 个字符"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"故障太多。未克隆密钥条目"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}> 的密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"未从身份数据库中添加任何条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"别名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"创建日期: {0,date}"_s)
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
			$of(u"条目类型: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"证书链长度: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"证书[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"证书指纹 (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"密钥库类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"密钥库提供方: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"您的密钥库包含 {0,number,integer} 个条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"您的密钥库包含 {0,number,integer} 个条目"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"无法解析输入"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"空输入"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"非 X.509 证书"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}没有公共密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}没有 X.509 证书"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"新证书 (自签名):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"回复中没有证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"证书未导入, 别名 <{0}> 已经存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"所输入的不是 X.509 证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"在别名 <{0}> 之下, 证书已经存在于密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"是否仍要添加? [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"在别名 <{0}> 之下, 证书已经存在于系统范围的 CA 密钥库中"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"是否仍要将它添加到自己的密钥库? [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"是否信任此证书? [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"新{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"口令不能相同"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"重新输入新{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"再次输入口令: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"再次输入新口令: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"它们不匹配。请重试"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"输入{0}别名:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"导入新的别名\t(按回车以取消对此条目的导入):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"输入别名:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(如果和 <{0}> 相同, 则按回车)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"您的名字与姓氏是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"您的组织单位名称是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"您的组织名称是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"您所在的城市或区域名称是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"您所在的省/市/自治区名称是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"该单位的双字母国家/地区代码是什么?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}是否正确?"_s)
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
			$of(u"别名 <{0}> 没有密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"别名 <{0}> 引用了不属于私有密钥条目的条目类型。-keyclone 命令仅支持对私有密钥条目的克隆"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"签名者 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"时间戳:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"签名:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"证书所有者: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"不是已签名的 jar 文件"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"没有来自 SSL 服务器的证书"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* 存储在您的密钥库中的信息的完整性  *\n* 尚未经过验证!  为了验证其完整性, *\n* 必须提供密钥库口令。                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* 存储在 srckeystore 中的信息的完整性*\n* 尚未经过验证!  为了验证其完整性, *\n* 必须提供源密钥库口令。                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"证书回复中不包含 <{0}> 的公共密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"回复中的证书链不完整"_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"回复中的顶级证书:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... 是不可信的。"_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"是否仍要安装回复? [否]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"回复中的公共密钥与密钥库不匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"证书回复与密钥库中的证书是相同的"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"无法从回复中建立链"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"错误的答案, 请再试一次"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"没有生成密钥, 别名 <{0}> 已经存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"请提供 -keysize 以生成密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"警告: 未验证。请确保密钥库是正确的。"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s),
			$of(u"警告：未验证。请确保密钥库是正确的，或者指定 -trustcacerts。"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"扩展: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(空值)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"扩展请求:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"未知 keyUsage 类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"未知 extendedkeyUsage 类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"未知 AccessDescription 类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"无法识别的 GeneralName 类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"无法将此扩展标记为“严重”。"_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"找到奇数个十六进制数字: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"未知扩展类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"命令{0}不明确:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"证书请求"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"发布者"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"生成的证书"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"生成的 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"生成的证书请求"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"证书"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA 证书"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"输入"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"回复"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d/%3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts 中的发布者 <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"发布者 <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s（禁用）"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d 位 %2$s 密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d 位 %2$s 密钥 (弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%1$d 位 %2$s 密钥（禁用）"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"未知大小的 %s 密钥"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"所有者: {0}\n发布者: {1}\n序列号: {2}\n生效时间: {3}, 失效时间: {4}\n证书指纹:\n\t SHA1: {5}\n\t SHA256: {6}\n签名算法名称: {7}\n主体公共密钥算法: {8}\n版本: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10 证书请求 (版本 1.0)\n主体: %1$s\n格式: %2$s\n公共密钥: %3$s\n签名算法: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"由 %2$s 中的 %1$s 以 %3$s 验证"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.disabled"_s),
			$of(u"%1$s 使用的 %2$s 签名算法被视为存在安全风险而且被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.weak"_s),
			$of(u"%1$s 使用的 %2$s 签名算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.disabled"_s),
			$of(u"%1$s 使用的 %2$s 被视为存在安全风险而且被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.weak"_s),
			$of(u"%1$s 使用的 %2$s 被视为存在安全风险。此密钥大小将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$s 密钥库使用专用格式。建议使用 \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\" 迁移到行业标准格式 PKCS12。"_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"已将 \"%1$s\" 迁移到 %4$s。将 %2$s 密钥库作为 \"%3$s\" 进行了备份。"_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"已将原始密钥库 \"%1$s\" 备份为 \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"正在将密钥库 %1$s 导入到 %2$s..."_s)
		}),
		$$new($ObjectArray, {
			$of("keyalg.option.missing.error"_s),
			$of(u"必须指定 -keyalg 选项。"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.no.option"_s),
			$of(u"-showinfo 缺少选项。请尝试使用 \"keytool -showinfo -tls\"。"_s)
		})
	}));
}

Resources_zh_CN::Resources_zh_CN() {
}

$Class* Resources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(Resources_zh_CN, name, initialize, &_Resources_zh_CN_ClassInfo_, clinit$Resources_zh_CN, allocate$Resources_zh_CN);
	return class$;
}

$Class* Resources_zh_CN::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun