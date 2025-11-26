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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_zh_HK::*)()>(&Resources_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
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
			$of(u" [\u9078\u9805]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of(u"\u9078\u9805:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"\u4f7f\u7528 \"keytool -help\" \u53d6\u5f97\u6240\u6709\u53ef\u7528\u7684\u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"\u91d1\u9470\u8207\u6191\u8b49\u7ba1\u7406\u5de5\u5177"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"\u547d\u4ee4:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"\u4f7f\u7528 \"keytool -command_name -help\" \u53d6\u5f97 command_name \u7684\u7528\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"\u7522\u751f\u6191\u8b49\u8981\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\u8b8a\u66f4\u9805\u76ee\u7684\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"\u522a\u9664\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"\u532f\u51fa\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"\u7522\u751f\u91d1\u9470\u7d44"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"\u7522\u751f\u79d8\u5bc6\u91d1\u9470"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"\u5f9e\u6191\u8b49\u8981\u6c42\u7522\u751f\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"\u7522\u751f CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"\u5f9e JDK 1.1.x-style \u8b58\u5225\u8cc7\u6599\u5eab\u532f\u5165\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"\u532f\u5165\u6191\u8b49\u6216\u6191\u8b49\u93c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"\u5f9e\u5176\u4ed6\u91d1\u9470\u5132\u5b58\u5eab\u532f\u5165\u4e00\u500b\u6216\u5168\u90e8\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"\u8907\u88fd\u91d1\u9470\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\u8b8a\u66f4\u9805\u76ee\u7684\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"\u5217\u793a\u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u7684\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"\u5217\u5370\u6191\u8b49\u7684\u5167\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"\u5217\u5370\u6191\u8b49\u8981\u6c42\u7684\u5167\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"\u5217\u5370 CRL \u6a94\u6848\u7684\u5167\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"\u7522\u751f\u81ea\u884c\u7c3d\u7f72\u7684\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\u8b8a\u66f4\u91d1\u9470\u5132\u5b58\u5eab\u7684\u5132\u5b58\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"\u8981\u8655\u7406\u9805\u76ee\u7684\u5225\u540d\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"\u76ee\u7684\u5730\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u4fdd\u8b77"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u63d0\u4f9b\u8005\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"\u8fa8\u5225\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 \u64f4\u5145\u5957\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"\u8f38\u51fa\u6a94\u6848\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"\u8f38\u5165\u6a94\u6848\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"\u91d1\u9470\u6f14\u7b97\u6cd5\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"\u91d1\u9470\u4f4d\u5143\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"\u65b0\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"\u4e0d\u8981\u63d0\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"\u7d93\u7531\u4fdd\u8b77\u6a5f\u5236\u7684\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.argument"_s),
			$of(u"\u63d0\u4f9b\u8005\u5f15\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.name"_s),
			$of(u"\u63d0\u4f9b\u8005\u985e\u5225\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"\u63d0\u4f9b\u8005\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"\u63d0\u4f9b\u8005\u985e\u5225\u8def\u5f91"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"\u4ee5 RFC \u6a23\u5f0f\u8f38\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"\u7c3d\u7ae0\u6f14\u7b97\u6cd5\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"\u4f86\u6e90\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u4fdd\u8b77"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u63d0\u4f9b\u8005\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL \u4f3a\u670d\u5668\u4e3b\u6a5f\u8207\u9023\u63a5\u57e0"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"\u7c3d\u7f72\u7684 jar \u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"\u6191\u8b49\u6709\u6548\u6027\u958b\u59cb\u65e5\u671f/\u6642\u9593"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"\u4f86\u81ea cacerts \u7684\u4fe1\u4efb\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"\u8a73\u7d30\u8cc7\u8a0a\u8f38\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"\u6709\u6548\u6027\u65e5\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"\u8981\u64a4\u92b7\u6191\u8b49\u7684\u5e8f\u5217 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"\u91d1\u9470\u5de5\u5177\u932f\u8aa4: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\u7121\u6548\u7684\u9078\u9805:"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"\u7121\u6548\u503c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\u4e0d\u660e\u7684\u5bc6\u78bc\u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\u627e\u4e0d\u5230\u74b0\u5883\u8b8a\u6578: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\u627e\u4e0d\u5230\u6a94\u6848: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"\u547d\u4ee4\u9078\u9805 {0} \u9700\u8981\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"\u8b66\u544a: PKCS12 \u91d1\u9470\u5132\u5b58\u5eab\u4e0d\u652f\u63f4\u4e0d\u540c\u7684\u5132\u5b58\u5eab\u548c\u91d1\u9470\u5bc6\u78bc\u3002\u5ffd\u7565\u4f7f\u7528\u8005\u6307\u5b9a\u7684 {0} \u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u70ba {0}\uff0c\u5247 -keystore \u5fc5\u9808\u70ba NONE"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"\u91cd\u8a66\u6b21\u6578\u592a\u591a\uff0c\u7a0b\u5f0f\u5df2\u7d42\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u70ba {0}\uff0c\u5247\u4e0d\u652f\u63f4 -storepasswd \u548c -keypasswd \u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"\u5982\u679c -storetype \u70ba PKCS12\uff0c\u5247\u4e0d\u652f\u63f4 -keypasswd \u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u70ba {0}\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a -keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6307\u5b9a -protected\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a -storepass\u3001-keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6307\u5b9a -srcprotected\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a -srcstorepass \u548c -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u91d1\u9470\u5132\u5b58\u5eab\u4e0d\u53d7\u5bc6\u78bc\u4fdd\u8b77\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a -storepass\u3001-keypass \u548c -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u4e0d\u53d7\u5bc6\u78bc\u4fdd\u8b77\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a -srcstorepass \u548c -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"\u7121\u6548\u7684 startdate \u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"\u6709\u6548\u6027\u5fc5\u9808\u5927\u65bc\u96f6"_s)
		}),
		$$new($ObjectArray, {
			$of("provName.not.a.provider"_s),
			$of(u"{0} \u4e0d\u662f\u4e00\u500b\u63d0\u4f9b\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"\u7528\u6cd5\u932f\u8aa4: \u672a\u63d0\u4f9b\u547d\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u6a94\u6848\u5b58\u5728\uff0c\u4f46\u70ba\u7a7a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"\u8acb\u6307\u5b9a -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u" \'list\' \u547d\u4ee4\u4e0d\u80fd\u540c\u6642\u6307\u5b9a -v \u53ca -rfc"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"\u91d1\u9470\u5bc6\u78bc\u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"\u65b0\u7684\u5bc6\u78bc\u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u6a94\u6848\u5b58\u5728\uff0c\u4f46\u70ba\u7a7a\u767d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u6a94\u6848\u4e0d\u5b58\u5728: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"\u5fc5\u9808\u6307\u5b9a\u76ee\u7684\u5730\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"\u5fc5\u9808\u6307\u5b9a\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"\u8f38\u5165\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"\u8acb\u8f38\u5165\u4f86\u6e90\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"\u8acb\u8f38\u5165\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u592a\u77ed - \u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"\u4e0d\u660e\u7684\u9805\u76ee\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"\u592a\u591a\u932f\u8aa4\u3002\u672a\u8b8a\u66f4\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"\u5df2\u6210\u529f\u532f\u5165\u5225\u540d {0} \u7684\u9805\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"\u672a\u532f\u5165\u5225\u540d {0} \u7684\u9805\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"\u532f\u5165\u5225\u540d {0} \u7684\u9805\u76ee\u6642\u51fa\u73fe\u554f\u984c: {1}\u3002\n\u672a\u532f\u5165\u5225\u540d {0} \u7684\u9805\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"\u5df2\u5b8c\u6210\u532f\u5165\u547d\u4ee4: \u6210\u529f\u532f\u5165 {0} \u500b\u9805\u76ee\uff0c{1} \u500b\u9805\u76ee\u5931\u6557\u6216\u5df2\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"\u8b66\u544a: \u6b63\u5728\u8986\u5beb\u76ee\u7684\u5730\u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u7684\u73fe\u6709\u5225\u540d {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"\u73fe\u6709\u9805\u76ee\u5225\u540d {0} \u5b58\u5728\uff0c\u662f\u5426\u8986\u5beb\uff1f[\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"\u592a\u591a\u932f\u8aa4 - \u8acb\u7a0d\u5f8c\u518d\u8a66"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"\u8a8d\u8b49\u8981\u6c42\u5132\u5b58\u5728\u6a94\u6848 <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"\u5c07\u6b64\u9001\u51fa\u81f3\u60a8\u7684 CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.srckeypass.and.destkeypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u672a\u6307\u5b9a\u5225\u540d\uff0c\u5247\u4e0d\u80fd\u6307\u5b9a destalias\u3001srckeypass \u53ca destkeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"\u6191\u8b49\u5132\u5b58\u5728\u6a94\u6848 <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"\u6191\u8b49\u56de\u8986\u5df2\u5b89\u88dd\u5728\u91d1\u9470\u5132\u5b58\u5eab\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"\u6191\u8b49\u56de\u8986\u672a\u5b89\u88dd\u5728\u91d1\u9470\u5132\u5b58\u5eab\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"\u6191\u8b49\u5df2\u65b0\u589e\u81f3\u91d1\u9470\u5132\u5b58\u5eab\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"\u6191\u8b49\u672a\u65b0\u589e\u81f3\u91d1\u9470\u5132\u5b58\u5eab\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[\u5132\u5b58 {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} \u6c92\u6709\u516c\u958b\u91d1\u9470 (\u6191\u8b49)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"\u7121\u6cd5\u53d6\u5f97\u7c3d\u7ae0\u6f14\u7b97\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"\u5225\u540d <{0}> \u4e0d\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"\u5225\u540d <{0}> \u6c92\u6709\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"\u6c92\u6709\u5efa\u7acb\u91d1\u9470\u7d44\uff0c\u5225\u540d <{0}> \u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"\u91dd\u5c0d {4} \u7522\u751f\u6709\u6548\u671f {3} \u5929\u7684 {0} \u4f4d\u5143 {1} \u91d1\u9470\u7d44\u4ee5\u53ca\u81ea\u6211\u7c3d\u7f72\u6191\u8b49 ({2})\n\t"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"\u8f38\u5165 <{0}> \u7684\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(RETURN \u5982\u679c\u548c\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u76f8\u540c):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u91d1\u9470\u5bc6\u78bc\u592a\u77ed - \u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"\u592a\u591a\u932f\u8aa4 - \u91d1\u9470\u672a\u65b0\u589e\u81f3\u91d1\u9470\u5132\u5b58\u5eab"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"\u76ee\u7684\u5730\u5225\u540d <{0}> \u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u5bc6\u78bc\u592a\u77ed - \u5fc5\u9808\u81f3\u5c11\u70ba 6 \u500b\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"\u592a\u591a\u932f\u8aa4\u3002\u672a\u8907\u88fd\u91d1\u9470\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}> \u7684\u91d1\u9470\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"<{0}> \u7684\u91d1\u9470\u5132\u5b58\u5eab\u9805\u76ee\u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"\u5efa\u7acb <{0}> \u7684\u91d1\u9470\u5132\u5b58\u5eab\u9805\u76ee..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"\u6c92\u6709\u65b0\u589e\u4f86\u81ea\u8b58\u5225\u8cc7\u6599\u5eab\u7684\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"\u5225\u540d\u540d\u7a31: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"\u5efa\u7acb\u65e5\u671f: {0,date}"_s)
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
			$of(u"\u9805\u76ee\u985e\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"\u6191\u8b49\u93c8\u9577\u5ea6: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"\u6191\u8b49 [{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA1."_s),
			$of(u"\u6191\u8b49\u6307\u7d0b (SHA1): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u63d0\u4f9b\u8005: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"\u60a8\u7684\u91d1\u9470\u5132\u5b58\u5eab\u5305\u542b {0,number,integer} \u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"\u60a8\u7684\u91d1\u9470\u5132\u5b58\u5eab\u5305\u542b {0,number,integer} \u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"\u7121\u6cd5\u5256\u6790\u8f38\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"\u7a7a\u8f38\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"\u975e X.509 \u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} \u7121\u516c\u958b\u91d1\u9470"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0} \u7121 X.509 \u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"\u65b0\u6191\u8b49 (\u81ea\u6211\u7c3d\u7f72): "_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"\u56de\u8986\u4e0d\u542b\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"\u6191\u8b49\u672a\u8f38\u5165\uff0c\u5225\u540d <{0}> \u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"\u8f38\u5165\u7684\u4e0d\u662f X.509 \u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u7684 <{0}> \u5225\u540d\u4e4b\u4e0b\uff0c\u6191\u8b49\u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"\u60a8\u4ecd\u7136\u60f3\u8981\u5c07\u4e4b\u65b0\u589e\u55ce\uff1f [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"\u6574\u500b\u7cfb\u7d71 CA \u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u7684 <{0}> \u5225\u540d\u4e4b\u4e0b\uff0c\u6191\u8b49\u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"\u60a8\u4ecd\u7136\u60f3\u8981\u5c07\u4e4b\u65b0\u589e\u81f3\u81ea\u5df1\u7684\u91d1\u9470\u5132\u5b58\u5eab\u55ce\uff1f [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"\u4fe1\u4efb\u9019\u500b\u6191\u8b49\uff1f [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"\u662f"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"\u65b0 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"\u5fc5\u9808\u662f\u4e0d\u540c\u7684\u5bc6\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"\u91cd\u65b0\u8f38\u5165\u65b0 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"\u91cd\u65b0\u8f38\u5165\u65b0\u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"\u5b83\u5011\u4e0d\u76f8\u7b26\u3002\u8acb\u91cd\u8a66"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"\u8f38\u5165 {0} \u5225\u540d\u540d\u7a31:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"\u8acb\u8f38\u5165\u65b0\u7684\u5225\u540d\u540d\u7a31\t(RETURN \u4ee5\u53d6\u6d88\u532f\u5165\u6b64\u9805\u76ee):"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"\u8f38\u5165\u5225\u540d\u540d\u7a31:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(RETURN \u5982\u679c\u548c <{0}> \u7684\u76f8\u540c)"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert"_s),
			$of(u"\u64c1\u6709\u8005: {0}\n\u767c\u51fa\u8005: {1}\n\u5e8f\u865f: {2}\n\u6709\u6548\u671f\u81ea: {3} \u5230: {4}\n\u6191\u8b49\u6307\u7d0b:\n\t MD5:  {5}\n\t SHA1: {6}\n\t SHA256: {7}\n\t \u7c3d\u7ae0\u6f14\u7b97\u6cd5\u540d\u7a31: {8}\n\t \u7248\u672c: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"\u60a8\u7684\u540d\u5b57\u8207\u59d3\u6c0f\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"\u60a8\u7684\u7d44\u7e54\u55ae\u4f4d\u540d\u7a31\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"\u60a8\u7684\u7d44\u7e54\u540d\u7a31\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"\u60a8\u6240\u5728\u7684\u57ce\u5e02\u6216\u5730\u5340\u540d\u7a31\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"\u60a8\u6240\u5728\u7684\u5dde\u53ca\u7701\u4efd\u540d\u7a31\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"\u6b64\u55ae\u4f4d\u7684\u5169\u500b\u5b57\u6bcd\u570b\u5225\u4ee3\u78bc\u70ba\u4f55\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0} \u6b63\u78ba\u55ce\uff1f"_s)
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
			$of(u"\u5225\u540d <{0}> \u6c92\u6709\u91d1\u9470"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"\u5225\u540d <{0}> \u6240\u53c3\u7167\u7684\u9805\u76ee\u4e0d\u662f\u79c1\u5bc6\u91d1\u9470\u985e\u578b\u3002-keyclone \u547d\u4ee4\u50c5\u652f\u63f4\u79c1\u5bc6\u91d1\u9470\u9805\u76ee\u7684\u8907\u88fd"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of(u"*****************  \u8b66\u544a \u8b66\u544a \u8b66\u544a  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"\u7c3d\u7f72\u8005 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"\u6642\u6233:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"\u7c3d\u7ae0:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"\u6191\u8b49\u64c1\u6709\u8005: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"\u4e0d\u662f\u7c3d\u7f72\u7684 jar \u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"\u6c92\u6709\u4f86\u81ea SSL \u4f3a\u670d\u5668\u7684\u6191\u8b49"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* \u5c1a\u672a\u9a57\u8b49\u5132\u5b58\u65bc\u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u8cc7\u8a0a  *\n* \u7684\u5b8c\u6574\u6027\uff01\u82e5\u8981\u9a57\u8b49\u5176\u5b8c\u6574\u6027\uff0c*\n* \u60a8\u5fc5\u9808\u63d0\u4f9b\u60a8\u7684\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc\u3002                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* \u5c1a\u672a\u9a57\u8b49\u5132\u5b58\u65bc srckeystore \u4e2d\u8cc7\u8a0a*\n* \u7684\u5b8c\u6574\u6027\uff01\u82e5\u8981\u9a57\u8b49\u5176\u5b8c\u6574\u6027\uff0c\u60a8\u5fc5\u9808 *\n* \u63d0\u4f9b srckeystore \u5bc6\u78bc\u3002          *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"\u6191\u8b49\u56de\u8986\u4e26\u672a\u5305\u542b <{0}> \u7684\u516c\u958b\u91d1\u9470"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"\u56de\u8986\u6642\u7684\u6191\u8b49\u93c8\u4e0d\u5b8c\u6574"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"\u56de\u8986\u6642\u7684\u6191\u8b49\u93c8\u672a\u9a57\u8b49: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"\u56de\u8986\u6642\u7684\u6700\u9ad8\u7d1a\u6191\u8b49:\\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... \u662f\u4e0d\u88ab\u4fe1\u4efb\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"\u9084\u662f\u8981\u5b89\u88dd\u56de\u8986\uff1f [\u5426]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u5426"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"\u56de\u8986\u6642\u7684\u516c\u958b\u91d1\u9470\u8207\u91d1\u9470\u5132\u5b58\u5eab\u4e0d\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"\u6191\u8b49\u56de\u8986\u8207\u91d1\u9470\u5132\u5b58\u5eab\u4e2d\u7684\u6191\u8b49\u662f\u76f8\u540c\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"\u7121\u6cd5\u5f9e\u56de\u8986\u4e2d\u5c07\u93c8\u5efa\u7acb\u8d77\u4f86"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"\u932f\u8aa4\u7684\u7b54\u6848\uff0c\u8acb\u518d\u8a66\u4e00\u6b21"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"\u672a\u7522\u751f\u79d8\u5bc6\u91d1\u9470\uff0c\u5225\u540d <{0}> \u5df2\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"\u8acb\u63d0\u4f9b -keysize \u4ee5\u7522\u751f\u79d8\u5bc6\u91d1\u9470"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"\u64f4\u5145\u5957\u4ef6: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(\u7a7a\u767d\u503c)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"\u64f4\u5145\u5957\u4ef6\u8981\u6c42:"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.Certificate.Request.Version.1.0.Subject.s.Public.Key.s.format.s.key."_s),
			$of(u"PKCS #10 \u6191\u8b49\u8981\u6c42 (\u7248\u672c 1.0)\n\u4e3b\u9ad4: %s\n\u516c\u7528\u91d1\u9470: %s \u683c\u5f0f %s \u91d1\u9470\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"\u4e0d\u660e\u7684 keyUsage \u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"\u4e0d\u660e\u7684 extendedkeyUsage \u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"\u4e0d\u660e\u7684 AccessDescription \u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u7684 GeneralName \u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"\u6b64\u64f4\u5145\u5957\u4ef6\u7121\u6cd5\u6a19\u793a\u70ba\u95dc\u9375\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"\u627e\u5230\u5341\u516d\u9032\u4f4d\u6578\u5b57\u7684\u5947\u6578: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"\u4e0d\u660e\u7684\u64f4\u5145\u5957\u4ef6\u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"\u547d\u4ee4 {0} \u4e0d\u660e\u78ba:"_s)
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