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
			$of(u"\u9009\u9879:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"\u591a\u6b21\u6307\u5b9a\u4e86 %s \u9009\u9879\u3002\u9664\u6700\u540e\u4e00\u4e2a\u4e4b\u5916, \u5176\u4f59\u7684\u5c06\u5168\u90e8\u5ffd\u7565\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"\u53ea\u5141\u8bb8\u4e00\u4e2a\u547d\u4ee4: \u540c\u65f6\u6307\u5b9a\u4e86 %1$s \u548c %2$s\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"\u4f7f\u7528 \"keytool -?, -h, or --help\" \u53ef\u8f93\u51fa\u6b64\u5e2e\u52a9\u6d88\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"\u5bc6\u94a5\u548c\u8bc1\u4e66\u7ba1\u7406\u5de5\u5177"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"\u547d\u4ee4:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"\u4f7f\u7528 \"keytool -command_name --help\" \u53ef\u83b7\u53d6 command_name \u7684\u7528\u6cd5\u3002\n\u4f7f\u7528 -conf <url> \u9009\u9879\u53ef\u6307\u5b9a\u9884\u914d\u7f6e\u7684\u9009\u9879\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"\u751f\u6210\u8bc1\u4e66\u8bf7\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\u66f4\u6539\u6761\u76ee\u7684\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"\u5220\u9664\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"\u5bfc\u51fa\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"\u751f\u6210\u5bc6\u94a5\u5bf9"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"\u751f\u6210\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"\u6839\u636e\u8bc1\u4e66\u8bf7\u6c42\u751f\u6210\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"\u751f\u6210 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"\u5df2\u751f\u6210{0}\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"\u5df2\u751f\u6210 {0} \u4f4d{1}\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"\u4ece JDK 1.1.x \u6837\u5f0f\u7684\u8eab\u4efd\u6570\u636e\u5e93\u5bfc\u5165\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"\u5bfc\u5165\u8bc1\u4e66\u6216\u8bc1\u4e66\u94fe"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"\u5bfc\u5165\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"\u4ece\u5176\u4ed6\u5bc6\u94a5\u5e93\u5bfc\u5165\u4e00\u4e2a\u6216\u6240\u6709\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"\u514b\u9686\u5bc6\u94a5\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\u66f4\u6539\u6761\u76ee\u7684\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"\u5217\u51fa\u5bc6\u94a5\u5e93\u4e2d\u7684\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"\u6253\u5370\u8bc1\u4e66\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"\u6253\u5370\u8bc1\u4e66\u8bf7\u6c42\u7684\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"\u6253\u5370 CRL \u6587\u4ef6\u7684\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"\u751f\u6210\u81ea\u7b7e\u540d\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\u66f4\u6539\u5bc6\u94a5\u5e93\u7684\u5b58\u50a8\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.command.help"_s),
			$of(u"\u663e\u793a\u5b89\u5168\u76f8\u5173\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"\u8981\u5904\u7406\u7684\u6761\u76ee\u7684\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.option.help"_s),
			$of(u"\u7ec4\u540d\u3002\u4f8b\u5982\uff0c\u692d\u5706\u66f2\u7ebf\u540d\u79f0\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"\u76ee\u6807\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"\u76ee\u6807\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"\u76ee\u6807\u5bc6\u94a5\u5e93\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"\u53d7\u4fdd\u62a4\u7684\u76ee\u6807\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"\u76ee\u6807\u5bc6\u94a5\u5e93\u63d0\u4f9b\u65b9\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"\u76ee\u6807\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"\u76ee\u6807\u5bc6\u94a5\u5e93\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"\u552f\u4e00\u5224\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 \u6269\u5c55"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"\u8f93\u51fa\u6587\u4ef6\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"\u8f93\u5165\u6587\u4ef6\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"\u5bc6\u94a5\u7b97\u6cd5\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"\u5bc6\u94a5\u4f4d\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"\u5bc6\u94a5\u5e93\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"\u8bbf\u95ee cacerts \u5bc6\u94a5\u5e93"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"\u8b66\u544a: \u4f7f\u7528 -cacerts \u9009\u9879\u8bbf\u95ee cacerts \u5bc6\u94a5\u5e93"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"\u65b0\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"\u4e0d\u63d0\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"\u901a\u8fc7\u53d7\u4fdd\u62a4\u7684\u673a\u5236\u7684\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("tls.option.help"_s),
			$of(u"\u663e\u793a TLS \u914d\u7f6e\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"\u6309\u540d\u79f0 (\u4f8b\u5982 SunPKCS11) \u6dfb\u52a0\u5b89\u5168\u63d0\u4f9b\u65b9\n\u914d\u7f6e -addprovider \u7684\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"\u6309\u5168\u9650\u5b9a\u7c7b\u540d\u6dfb\u52a0\u5b89\u5168\u63d0\u4f9b\u65b9\n\u914d\u7f6e -providerclass \u7684\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"\u63d0\u4f9b\u65b9\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"\u63d0\u4f9b\u65b9\u7c7b\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"\u4ee5 RFC \u6837\u5f0f\u8f93\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"\u7b7e\u540d\u7b97\u6cd5\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"\u6e90\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"\u6e90\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"\u6e90\u5bc6\u94a5\u5e93\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"\u53d7\u4fdd\u62a4\u7684\u6e90\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"\u6e90\u5bc6\u94a5\u5e93\u63d0\u4f9b\u65b9\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"\u6e90\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"\u6e90\u5bc6\u94a5\u5e93\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL \u670d\u52a1\u5668\u4e3b\u673a\u548c\u7aef\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"\u5df2\u7b7e\u540d\u7684 jar \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"\u8bc1\u4e66\u6709\u6548\u671f\u5f00\u59cb\u65e5\u671f/\u65f6\u95f4"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"\u5bc6\u94a5\u5e93\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"\u4fe1\u4efb\u6765\u81ea cacerts \u7684\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"\u8be6\u7ec6\u8f93\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"\u6709\u6548\u5929\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"\u8981\u64a4\u9500\u7684\u8bc1\u4e66\u7684\u5e8f\u5217 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytool \u9519\u8bef: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\u975e\u6cd5\u9009\u9879:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"\u975e\u6cd5\u503c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\u672a\u77e5\u53e3\u4ee4\u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\u627e\u4e0d\u5230\u73af\u5883\u53d8\u91cf: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\u627e\u4e0d\u5230\u6587\u4ef6: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"\u547d\u4ee4\u9009\u9879{0}\u9700\u8981\u4e00\u4e2a\u53c2\u6570\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"\u8b66\u544a: PKCS12 \u5bc6\u94a5\u5e93\u4e0d\u652f\u6301\u5176\u4ed6\u5b58\u50a8\u548c\u5bc6\u94a5\u53e3\u4ee4\u3002\u6b63\u5728\u5ffd\u7565\u7528\u6237\u6307\u5b9a\u7684{0}\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystore \u6216 -storetype \u9009\u9879\u4e0d\u80fd\u4e0e -cacerts \u9009\u9879\u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u4e3a {0}, \u5219 -keystore \u5fc5\u987b\u4e3a NONE"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"\u91cd\u8bd5\u6b21\u6570\u8fc7\u591a, \u7a0b\u5e8f\u5df2\u7ec8\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u4e3a {0}, \u5219\u4e0d\u652f\u6301 -storepasswd \u548c -keypasswd \u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"\u5982\u679c -storetype \u4e3a PKCS12, \u5219\u4e0d\u652f\u6301 -keypasswd \u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u4e3a {0}, \u5219\u4e0d\u80fd\u6307\u5b9a -keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6307\u5b9a\u4e86 -protected, \u5219\u4e0d\u80fd\u6307\u5b9a -storepass, -keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6307\u5b9a\u4e86 -srcprotected, \u5219\u4e0d\u80fd\u6307\u5b9a -srcstorepass \u548c -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u5bc6\u94a5\u5e93\u672a\u53d7\u53e3\u4ee4\u4fdd\u62a4, \u5219\u4e0d\u80fd\u6307\u5b9a -storepass, -keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6e90\u5bc6\u94a5\u5e93\u672a\u53d7\u53e3\u4ee4\u4fdd\u62a4, \u5219\u4e0d\u80fd\u6307\u5b9a -srcstorepass \u548c -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"\u975e\u6cd5\u5f00\u59cb\u65e5\u671f\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"\u6709\u6548\u6027\u5fc5\u987b\u5927\u4e8e\u96f6"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s\u4e0d\u662f\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\u672a\u627e\u5230\u540d\u4e3a \"%s\" \u7684\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\u672a\u627e\u5230\u63d0\u4f9b\u65b9 \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"\u7528\u6cd5\u9519\u8bef: \u6ca1\u6709\u63d0\u4f9b\u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"\u6e90\u5bc6\u94a5\u5e93\u6587\u4ef6\u5b58\u5728, \u4f46\u4e3a\u7a7a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"\u8bf7\u6307\u5b9a -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"\u4e0d\u80fd\u4f7f\u7528 \'list\' \u547d\u4ee4\u6765\u6307\u5b9a -v \u53ca -rfc"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"\u5bc6\u94a5\u53e3\u4ee4\u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"\u65b0\u53e3\u4ee4\u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"\u5bc6\u94a5\u5e93\u6587\u4ef6\u5b58\u5728, \u4f46\u4e3a\u7a7a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"\u5bc6\u94a5\u5e93\u6587\u4ef6\u4e0d\u5b58\u5728: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"\u5fc5\u987b\u6307\u5b9a\u76ee\u6807\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"\u5fc5\u987b\u6307\u5b9a\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"\u5bc6\u94a5\u5e93\u53e3\u4ee4\u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"\u8f93\u5165\u8981\u5b58\u50a8\u7684\u53e3\u4ee4:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"\u8f93\u5165\u5bc6\u94a5\u5e93\u53e3\u4ee4:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"\u8f93\u5165\u6e90\u5bc6\u94a5\u5e93\u53e3\u4ee4:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"\u8f93\u5165\u76ee\u6807\u5bc6\u94a5\u5e93\u53e3\u4ee4:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u5bc6\u94a5\u5e93\u53e3\u4ee4\u592a\u77ed - \u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"\u672a\u77e5\u6761\u76ee\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"\u5df2\u6210\u529f\u5bfc\u5165\u522b\u540d {0} \u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"\u672a\u5bfc\u5165\u522b\u540d {0} \u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"\u5bfc\u5165\u522b\u540d {0} \u7684\u6761\u76ee\u65f6\u51fa\u73b0\u95ee\u9898: {1}\u3002\n\u672a\u5bfc\u5165\u522b\u540d {0} \u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"\u5df2\u5b8c\u6210\u5bfc\u5165\u547d\u4ee4: {0} \u4e2a\u6761\u76ee\u6210\u529f\u5bfc\u5165, {1} \u4e2a\u6761\u76ee\u5931\u8d25\u6216\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"\u8b66\u544a: \u6b63\u5728\u8986\u76d6\u76ee\u6807\u5bc6\u94a5\u5e93\u4e2d\u7684\u73b0\u6709\u522b\u540d {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"\u5b58\u5728\u73b0\u6709\u6761\u76ee\u522b\u540d {0}, \u662f\u5426\u8986\u76d6? [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"\u6545\u969c\u592a\u591a - \u8bf7\u7a0d\u540e\u518d\u8bd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"\u5b58\u50a8\u5728\u6587\u4ef6 <{0}> \u4e2d\u7684\u8ba4\u8bc1\u8bf7\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"\u5c06\u6b64\u63d0\u4ea4\u7ed9\u60a8\u7684 CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6ca1\u6709\u6307\u5b9a\u522b\u540d, \u5219\u4e0d\u80fd\u6307\u5b9a\u76ee\u6807\u522b\u540d\u548c\u6e90\u5bc6\u94a5\u5e93\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"\u76ee\u6807 pkcs12 \u5bc6\u94a5\u5e93\u5177\u6709\u4e0d\u540c\u7684 storepass \u548c keypass\u3002\u8bf7\u5728\u6307\u5b9a\u4e86 -destkeypass \u65f6\u91cd\u8bd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"\u5b58\u50a8\u5728\u6587\u4ef6 <{0}> \u4e2d\u7684\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"\u8bc1\u4e66\u56de\u590d\u5df2\u5b89\u88c5\u5728\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"\u8bc1\u4e66\u56de\u590d\u672a\u5b89\u88c5\u5728\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"\u8bc1\u4e66\u5df2\u6dfb\u52a0\u5230\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"\u8bc1\u4e66\u672a\u6dfb\u52a0\u5230\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[\u6b63\u5728\u5b58\u50a8{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}\u6ca1\u6709\u516c\u5171\u5bc6\u94a5 (\u8bc1\u4e66)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"\u65e0\u6cd5\u6d3e\u751f\u7b7e\u540d\u7b97\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"\u522b\u540d <{0}> \u4e0d\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"\u522b\u540d <{0}> \u6ca1\u6709\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.keysize.coexist"_s),
			$of(u"\u65e0\u6cd5\u540c\u65f6\u6307\u5b9a -groupname \u548c -keysize"_s)
		}),
		$$new($ObjectArray, {
			$of("deprecate.keysize.for.ec"_s),
			$of(u"\u4e3a\u751f\u6210 EC \u5bc6\u94a5\u6307\u5b9a -keysize \u5df2\u8fc7\u65f6\uff0c\u8bf7\u6539\u4e3a\u4f7f\u7528 \"-groupname %s\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"\u672a\u751f\u6210\u5bc6\u94a5\u5bf9, \u522b\u540d <{0}> \u5df2\u7ecf\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"\u6b63\u5728\u4e3a\u4ee5\u4e0b\u5bf9\u8c61\u751f\u6210 {0} \u4f4d{1}\u5bc6\u94a5\u5bf9\u548c\u81ea\u7b7e\u540d\u8bc1\u4e66 ({2}) (\u6709\u6548\u671f\u4e3a {3} \u5929):\n\t {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"\u8f93\u5165 <{0}> \u7684\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(\u5982\u679c\u548c\u5bc6\u94a5\u5e93\u53e3\u4ee4\u76f8\u540c, \u6309\u56de\u8f66):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u5bc6\u94a5\u53e3\u4ee4\u592a\u77ed - \u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"\u6545\u969c\u592a\u591a - \u5bc6\u94a5\u672a\u6dfb\u52a0\u5230\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"\u76ee\u6807\u522b\u540d <{0}> \u5df2\u7ecf\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u53e3\u4ee4\u592a\u77ed - \u81f3\u5c11\u5fc5\u987b\u4e3a 6 \u4e2a\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"\u6545\u969c\u592a\u591a\u3002\u672a\u514b\u9686\u5bc6\u94a5\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}> \u7684\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"\u672a\u4ece\u8eab\u4efd\u6570\u636e\u5e93\u4e2d\u6dfb\u52a0\u4efb\u4f55\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"\u522b\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"\u521b\u5efa\u65e5\u671f: {0,date}"_s)
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
			$of(u"\u6761\u76ee\u7c7b\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"\u8bc1\u4e66\u94fe\u957f\u5ea6: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"\u8bc1\u4e66[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"\u8bc1\u4e66\u6307\u7eb9 (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"\u5bc6\u94a5\u5e93\u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"\u5bc6\u94a5\u5e93\u63d0\u4f9b\u65b9: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"\u60a8\u7684\u5bc6\u94a5\u5e93\u5305\u542b {0,number,integer} \u4e2a\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"\u60a8\u7684\u5bc6\u94a5\u5e93\u5305\u542b {0,number,integer} \u4e2a\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"\u65e0\u6cd5\u89e3\u6790\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"\u7a7a\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"\u975e X.509 \u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}\u6ca1\u6709\u516c\u5171\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}\u6ca1\u6709 X.509 \u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"\u65b0\u8bc1\u4e66 (\u81ea\u7b7e\u540d):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"\u56de\u590d\u4e2d\u6ca1\u6709\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"\u8bc1\u4e66\u672a\u5bfc\u5165, \u522b\u540d <{0}> \u5df2\u7ecf\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"\u6240\u8f93\u5165\u7684\u4e0d\u662f X.509 \u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"\u5728\u522b\u540d <{0}> \u4e4b\u4e0b, \u8bc1\u4e66\u5df2\u7ecf\u5b58\u5728\u4e8e\u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"\u662f\u5426\u4ecd\u8981\u6dfb\u52a0? [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"\u5728\u522b\u540d <{0}> \u4e4b\u4e0b, \u8bc1\u4e66\u5df2\u7ecf\u5b58\u5728\u4e8e\u7cfb\u7edf\u8303\u56f4\u7684 CA \u5bc6\u94a5\u5e93\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"\u662f\u5426\u4ecd\u8981\u5c06\u5b83\u6dfb\u52a0\u5230\u81ea\u5df1\u7684\u5bc6\u94a5\u5e93? [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"\u662f\u5426\u4fe1\u4efb\u6b64\u8bc1\u4e66? [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"\u65b0{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"\u53e3\u4ee4\u4e0d\u80fd\u76f8\u540c"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"\u91cd\u65b0\u8f93\u5165\u65b0{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"\u518d\u6b21\u8f93\u5165\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"\u518d\u6b21\u8f93\u5165\u65b0\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"\u5b83\u4eec\u4e0d\u5339\u914d\u3002\u8bf7\u91cd\u8bd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"\u8f93\u5165{0}\u522b\u540d:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"\u5bfc\u5165\u65b0\u7684\u522b\u540d\t(\u6309\u56de\u8f66\u4ee5\u53d6\u6d88\u5bf9\u6b64\u6761\u76ee\u7684\u5bfc\u5165):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"\u8f93\u5165\u522b\u540d:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(\u5982\u679c\u548c <{0}> \u76f8\u540c, \u5219\u6309\u56de\u8f66)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"\u60a8\u7684\u540d\u5b57\u4e0e\u59d3\u6c0f\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"\u60a8\u7684\u7ec4\u7ec7\u5355\u4f4d\u540d\u79f0\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"\u60a8\u7684\u7ec4\u7ec7\u540d\u79f0\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"\u60a8\u6240\u5728\u7684\u57ce\u5e02\u6216\u533a\u57df\u540d\u79f0\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"\u60a8\u6240\u5728\u7684\u7701/\u5e02/\u81ea\u6cbb\u533a\u540d\u79f0\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"\u8be5\u5355\u4f4d\u7684\u53cc\u5b57\u6bcd\u56fd\u5bb6/\u5730\u533a\u4ee3\u7801\u662f\u4ec0\u4e48?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}\u662f\u5426\u6b63\u786e?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u5426"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"\u662f"_s)
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
			$of(u"\u522b\u540d <{0}> \u6ca1\u6709\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"\u522b\u540d <{0}> \u5f15\u7528\u4e86\u4e0d\u5c5e\u4e8e\u79c1\u6709\u5bc6\u94a5\u6761\u76ee\u7684\u6761\u76ee\u7c7b\u578b\u3002-keyclone \u547d\u4ee4\u4ec5\u652f\u6301\u5bf9\u79c1\u6709\u5bc6\u94a5\u6761\u76ee\u7684\u514b\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"\u7b7e\u540d\u8005 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"\u65f6\u95f4\u6233:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"\u7b7e\u540d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"\u8bc1\u4e66\u6240\u6709\u8005: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"\u4e0d\u662f\u5df2\u7b7e\u540d\u7684 jar \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"\u6ca1\u6709\u6765\u81ea SSL \u670d\u52a1\u5668\u7684\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* \u5b58\u50a8\u5728\u60a8\u7684\u5bc6\u94a5\u5e93\u4e2d\u7684\u4fe1\u606f\u7684\u5b8c\u6574\u6027  *\n* \u5c1a\u672a\u7ecf\u8fc7\u9a8c\u8bc1!  \u4e3a\u4e86\u9a8c\u8bc1\u5176\u5b8c\u6574\u6027, *\n* \u5fc5\u987b\u63d0\u4f9b\u5bc6\u94a5\u5e93\u53e3\u4ee4\u3002                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* \u5b58\u50a8\u5728 srckeystore \u4e2d\u7684\u4fe1\u606f\u7684\u5b8c\u6574\u6027*\n* \u5c1a\u672a\u7ecf\u8fc7\u9a8c\u8bc1!  \u4e3a\u4e86\u9a8c\u8bc1\u5176\u5b8c\u6574\u6027, *\n* \u5fc5\u987b\u63d0\u4f9b\u6e90\u5bc6\u94a5\u5e93\u53e3\u4ee4\u3002                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"\u8bc1\u4e66\u56de\u590d\u4e2d\u4e0d\u5305\u542b <{0}> \u7684\u516c\u5171\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"\u56de\u590d\u4e2d\u7684\u8bc1\u4e66\u94fe\u4e0d\u5b8c\u6574"_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"\u56de\u590d\u4e2d\u7684\u9876\u7ea7\u8bc1\u4e66:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... \u662f\u4e0d\u53ef\u4fe1\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"\u662f\u5426\u4ecd\u8981\u5b89\u88c5\u56de\u590d? [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"\u56de\u590d\u4e2d\u7684\u516c\u5171\u5bc6\u94a5\u4e0e\u5bc6\u94a5\u5e93\u4e0d\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"\u8bc1\u4e66\u56de\u590d\u4e0e\u5bc6\u94a5\u5e93\u4e2d\u7684\u8bc1\u4e66\u662f\u76f8\u540c\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"\u65e0\u6cd5\u4ece\u56de\u590d\u4e2d\u5efa\u7acb\u94fe"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"\u9519\u8bef\u7684\u7b54\u6848, \u8bf7\u518d\u8bd5\u4e00\u6b21"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"\u6ca1\u6709\u751f\u6210\u5bc6\u94a5, \u522b\u540d <{0}> \u5df2\u7ecf\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"\u8bf7\u63d0\u4f9b -keysize \u4ee5\u751f\u6210\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"\u8b66\u544a: \u672a\u9a8c\u8bc1\u3002\u8bf7\u786e\u4fdd\u5bc6\u94a5\u5e93\u662f\u6b63\u786e\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s),
			$of(u"\u8b66\u544a\uff1a\u672a\u9a8c\u8bc1\u3002\u8bf7\u786e\u4fdd\u5bc6\u94a5\u5e93\u662f\u6b63\u786e\u7684\uff0c\u6216\u8005\u6307\u5b9a -trustcacerts\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"\u6269\u5c55: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(\u7a7a\u503c)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"\u6269\u5c55\u8bf7\u6c42:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"\u672a\u77e5 keyUsage \u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"\u672a\u77e5 extendedkeyUsage \u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"\u672a\u77e5 AccessDescription \u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"\u65e0\u6cd5\u8bc6\u522b\u7684 GeneralName \u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"\u65e0\u6cd5\u5c06\u6b64\u6269\u5c55\u6807\u8bb0\u4e3a\u201c\u4e25\u91cd\u201d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"\u627e\u5230\u5947\u6570\u4e2a\u5341\u516d\u8fdb\u5236\u6570\u5b57: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"\u672a\u77e5\u6269\u5c55\u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"\u547d\u4ee4{0}\u4e0d\u660e\u786e:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"\u8bc1\u4e66\u8bf7\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"\u53d1\u5e03\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"\u751f\u6210\u7684\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"\u751f\u6210\u7684 CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"\u751f\u6210\u7684\u8bc1\u4e66\u8bf7\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA \u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"\u56de\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d/%3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts \u4e2d\u7684\u53d1\u5e03\u8005 <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"\u53d1\u5e03\u8005 <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s\uff08\u7981\u7528\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d \u4f4d %2$s \u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d \u4f4d %2$s \u5bc6\u94a5 (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%1$d \u4f4d %2$s \u5bc6\u94a5\uff08\u7981\u7528\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"\u672a\u77e5\u5927\u5c0f\u7684 %s \u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"\u6240\u6709\u8005: {0}\n\u53d1\u5e03\u8005: {1}\n\u5e8f\u5217\u53f7: {2}\n\u751f\u6548\u65f6\u95f4: {3}, \u5931\u6548\u65f6\u95f4: {4}\n\u8bc1\u4e66\u6307\u7eb9:\n\t SHA1: {5}\n\t SHA256: {6}\n\u7b7e\u540d\u7b97\u6cd5\u540d\u79f0: {7}\n\u4e3b\u4f53\u516c\u5171\u5bc6\u94a5\u7b97\u6cd5: {8}\n\u7248\u672c: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10 \u8bc1\u4e66\u8bf7\u6c42 (\u7248\u672c 1.0)\n\u4e3b\u4f53: %1$s\n\u683c\u5f0f: %2$s\n\u516c\u5171\u5bc6\u94a5: %3$s\n\u7b7e\u540d\u7b97\u6cd5: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"\u7531 %2$s \u4e2d\u7684 %1$s \u4ee5 %3$s \u9a8c\u8bc1"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.disabled"_s),
			$of(u"%1$s \u4f7f\u7528\u7684 %2$s \u7b7e\u540d\u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u800c\u4e14\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.weak"_s),
			$of(u"%1$s \u4f7f\u7528\u7684 %2$s \u7b7e\u540d\u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u7b97\u6cd5\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.disabled"_s),
			$of(u"%1$s \u4f7f\u7528\u7684 %2$s \u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u800c\u4e14\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.weak"_s),
			$of(u"%1$s \u4f7f\u7528\u7684 %2$s \u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u5bc6\u94a5\u5927\u5c0f\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$s \u5bc6\u94a5\u5e93\u4f7f\u7528\u4e13\u7528\u683c\u5f0f\u3002\u5efa\u8bae\u4f7f\u7528 \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\" \u8fc1\u79fb\u5230\u884c\u4e1a\u6807\u51c6\u683c\u5f0f PKCS12\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\u5df2\u5c06 \"%1$s\" \u8fc1\u79fb\u5230 %4$s\u3002\u5c06 %2$s \u5bc6\u94a5\u5e93\u4f5c\u4e3a \"%3$s\" \u8fdb\u884c\u4e86\u5907\u4efd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"\u5df2\u5c06\u539f\u59cb\u5bc6\u94a5\u5e93 \"%1$s\" \u5907\u4efd\u4e3a \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"\u6b63\u5728\u5c06\u5bc6\u94a5\u5e93 %1$s \u5bfc\u5165\u5230 %2$s..."_s)
		}),
		$$new($ObjectArray, {
			$of("keyalg.option.missing.error"_s),
			$of(u"\u5fc5\u987b\u6307\u5b9a -keyalg \u9009\u9879\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.no.option"_s),
			$of(u"-showinfo \u7f3a\u5c11\u9009\u9879\u3002\u8bf7\u5c1d\u8bd5\u4f7f\u7528 \"keytool -showinfo -tls\"\u3002"_s)
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