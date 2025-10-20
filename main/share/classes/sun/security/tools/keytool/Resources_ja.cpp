#include <sun/security/tools/keytool/Resources_ja.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Resources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
	{}
};

$MethodInfo _Resources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ja::*)()>(&Resources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ja_FieldInfo_,
	_Resources_ja_MethodInfo_
};

$Object* allocate$Resources_ja($Class* clazz) {
	return $of($alloc(Resources_ja));
}

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void clinit$Resources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
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
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"%s\u30aa\u30d7\u30b7\u30e7\u30f3\u304c\u8907\u6570\u56de\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059\u3002\u6700\u5f8c\u306e\u3082\u306e\u4ee5\u5916\u306f\u3059\u3079\u3066\u7121\u8996\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"1\u3064\u306e\u30b3\u30de\u30f3\u30c9\u306e\u307f\u8a31\u53ef\u3055\u308c\u307e\u3059: %1$s\u3068%2$s\u306e\u4e21\u65b9\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"\u3053\u306e\u30d8\u30eb\u30d7\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u3092\u8868\u793a\u3059\u308b\u306b\u306f\"keytool -?\u3001-h\u307e\u305f\u306f--help\"\u3092\u4f7f\u7528\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"\u30ad\u30fc\u304a\u3088\u3073\u8a3c\u660e\u66f8\u7ba1\u7406\u30c4\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"\u30b3\u30de\u30f3\u30c9:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"command_name\u306e\u4f7f\u7528\u65b9\u6cd5\u306b\u3064\u3044\u3066\u306f\u3001\"keytool -command_name --help\"\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002\n\u4e8b\u524d\u69cb\u6210\u6e08\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u6307\u5b9a\u3059\u308b\u306b\u306f\u3001-conf <url>\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u306e\u5225\u540d\u3092\u5909\u66f4\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u3092\u524a\u9664\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"\u8a3c\u660e\u66f8\u3092\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"\u30ad\u30fc\u30fb\u30da\u30a2\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"\u79d8\u5bc6\u30ad\u30fc\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8\u304b\u3089\u8a3c\u660e\u66f8\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"CRL\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"{0}\u79d8\u5bc6\u30ad\u30fc\u3092\u751f\u6210\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"{0}\u30d3\u30c3\u30c8{1}\u79d8\u5bc6\u30ad\u30fc\u3092\u751f\u6210\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"JDK 1.1.x-style\u30a2\u30a4\u30c7\u30f3\u30c6\u30a3\u30c6\u30a3\u30fb\u30c7\u30fc\u30bf\u30d9\u30fc\u30b9\u304b\u3089\u30a8\u30f3\u30c8\u30ea\u3092\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"\u8a3c\u660e\u66f8\u307e\u305f\u306f\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u3092\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"\u5225\u306e\u30ad\u30fc\u30b9\u30c8\u30a2\u304b\u30891\u3064\u307e\u305f\u306f\u3059\u3079\u3066\u306e\u30a8\u30f3\u30c8\u30ea\u3092\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"\u30ad\u30fc\u30fb\u30a8\u30f3\u30c8\u30ea\u306e\u30af\u30ed\u30fc\u30f3\u3092\u4f5c\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u306e\u30ad\u30fc\u30fb\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5909\u66f4\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u5185\u306e\u30a8\u30f3\u30c8\u30ea\u3092\u30ea\u30b9\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"\u8a3c\u660e\u66f8\u306e\u5185\u5bb9\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8\u306e\u5185\u5bb9\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"CRL\u30d5\u30a1\u30a4\u30eb\u306e\u5185\u5bb9\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"\u81ea\u5df1\u7f72\u540d\u578b\u8a3c\u660e\u66f8\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30b9\u30c8\u30a2\u30fb\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5909\u66f4\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.command.help"_s),
			$of(u"\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u95a2\u9023\u60c5\u5831\u3092\u8868\u793a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"\u51e6\u7406\u3059\u308b\u30a8\u30f3\u30c8\u30ea\u306e\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.option.help"_s),
			$of(u"\u30b0\u30eb\u30fc\u30d7\u540d\u3002\u305f\u3068\u3048\u3070\u3001\u6955\u5186\u66f2\u7dda\u540d\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"\u51fa\u529b\u5148\u306e\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u4fdd\u8b77\u5bfe\u8c61\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"\u8b58\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509\u62e1\u5f35"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"\u51fa\u529b\u30d5\u30a1\u30a4\u30eb\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"\u30ad\u30fc\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"\u30ad\u30fc\u306e\u30d3\u30c3\u30c8\u30fb\u30b5\u30a4\u30ba"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"cacerts\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u30a2\u30af\u30bb\u30b9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"\u8b66\u544a: cacerts\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u30a2\u30af\u30bb\u30b9\u3059\u308b\u306b\u306f-cacerts\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"\u65b0\u898f\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"\u30d7\u30ed\u30f3\u30d7\u30c8\u3092\u8868\u793a\u3057\u306a\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"\u4fdd\u8b77\u30e1\u30ab\u30cb\u30ba\u30e0\u306b\u3088\u308b\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("tls.option.help"_s),
			$of(u"TLS\u69cb\u6210\u60c5\u5831\u3092\u8868\u793a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"\u540d\u524d\u3067\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u3092\u8ffd\u52a0\u3059\u308b(SunPKCS11\u306a\u3069)\n-addprovider\u306e\u5f15\u6570\u3092\u69cb\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"\u5b8c\u5168\u4fee\u98fe\u30af\u30e9\u30b9\u540d\u3067\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u3092\u8ffd\u52a0\u3059\u308b\n-providerclass\u306e\u5f15\u6570\u3092\u69cb\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\u30fb\u30af\u30e9\u30b9\u30d1\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"RFC\u30b9\u30bf\u30a4\u30eb\u306e\u51fa\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"\u30bd\u30fc\u30b9\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u4fdd\u8b77\u5bfe\u8c61\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL\u30b5\u30fc\u30d0\u30fc\u306e\u30db\u30b9\u30c8\u3068\u30dd\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"\u7f72\u540d\u4ed8\u304dJAR\u30d5\u30a1\u30a4\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"\u8a3c\u660e\u66f8\u306e\u6709\u52b9\u958b\u59cb\u65e5\u6642"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"cacerts\u304b\u3089\u306e\u8a3c\u660e\u66f8\u3092\u4fe1\u983c\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"\u8a73\u7d30\u51fa\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"\u59a5\u5f53\u6027\u65e5\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"\u5931\u52b9\u3059\u308b\u8a3c\u660e\u66f8\u306e\u30b7\u30ea\u30a2\u30ebID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytool\u30a8\u30e9\u30fc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\u4e0d\u6b63\u306a\u30aa\u30d7\u30b7\u30e7\u30f3:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"\u4e0d\u6b63\u306a\u5024: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\u4e0d\u660e\u306a\u30d1\u30b9\u30ef\u30fc\u30c9\u30fb\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\u74b0\u5883\u5909\u6570\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"\u30b3\u30de\u30f3\u30c9\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306b\u306f\u5f15\u6570\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"\u8b66\u544a: PKCS12\u30ad\u30fc\u30b9\u30c8\u30a2\u3067\u306f\u3001\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3068\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u304c\u7570\u306a\u308b\u72b6\u6cc1\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093\u3002\u30e6\u30fc\u30b6\u30fc\u304c\u6307\u5b9a\u3057\u305f{0}\u306e\u5024\u306f\u7121\u8996\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystore\u307e\u305f\u306f-storetype\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u3001-cacerts\u30aa\u30d7\u30b7\u30e7\u30f3\u3068\u3068\u3082\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-storetype\u304c{0}\u306e\u5834\u5408\u3001-keystore\u306fNONE\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"\u518d\u8a66\u884c\u304c\u591a\u3059\u304e\u307e\u3059\u3002\u30d7\u30ed\u30b0\u30e9\u30e0\u304c\u7d42\u4e86\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storetype\u304c{0}\u306e\u5834\u5408\u3001-storepasswd\u30b3\u30de\u30f3\u30c9\u304a\u3088\u3073-keypasswd\u30b3\u30de\u30f3\u30c9\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-storetype\u304cPKCS12\u306e\u5834\u5408\u3001-keypasswd\u30b3\u30de\u30f3\u30c9\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-storetype\u304c{0}\u306e\u5834\u5408\u3001-keypass\u3068-new\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"-protected\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u308b\u5834\u5408\u3001-storepass\u3001-keypass\u304a\u3088\u3073-new\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"-srcprotected\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u308b\u5834\u5408\u3001-srcstorepass\u304a\u3088\u3073-srckeypass\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u304c\u30d1\u30b9\u30ef\u30fc\u30c9\u3067\u4fdd\u8b77\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u3001-storepass\u3001-keypass\u304a\u3088\u3073-new\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u304c\u30d1\u30b9\u30ef\u30fc\u30c9\u3067\u4fdd\u8b77\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u3001-srcstorepass\u304a\u3088\u3073-srckeypass\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"startdate\u5024\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"\u59a5\u5f53\u6027\u306f\u30bc\u30ed\u3088\u308a\u5927\u304d\u3044\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s\u306f\u30d7\u30ed\u30d0\u30a4\u30c0\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\u540d\"%s\"\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\"%s\"\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"\u4f7f\u7528\u30a8\u30e9\u30fc: \u30b3\u30de\u30f3\u30c9\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d5\u30a1\u30a4\u30eb\u306f\u3001\u5b58\u5728\u3057\u307e\u3059\u304c\u7a7a\u3067\u3059: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"-srckeystore\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"\'list\'\u30b3\u30de\u30f3\u30c9\u306b-v\u3068-rfc\u306e\u4e21\u65b9\u3092\u6307\u5b9a\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u306f6\u6587\u5b57\u4ee5\u4e0a\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"\u65b0\u898f\u30d1\u30b9\u30ef\u30fc\u30c9\u306f6\u6587\u5b57\u4ee5\u4e0a\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d5\u30a1\u30a4\u30eb\u306f\u5b58\u5728\u3057\u307e\u3059\u304c\u3001\u7a7a\u3067\u3059: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d5\u30a1\u30a4\u30eb\u306f\u5b58\u5728\u3057\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"\u51fa\u529b\u5148\u306e\u5225\u540d\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"\u5225\u540d\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u306f6\u6587\u5b57\u4ee5\u4e0a\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"\u4fdd\u5b58\u3059\u308b\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u304c\u77ed\u3059\u304e\u307e\u3059 - 6\u6587\u5b57\u4ee5\u4e0a\u306b\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"\u4e0d\u660e\u306a\u30a8\u30f3\u30c8\u30ea\u30fb\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"\u5225\u540d{0}\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u30a4\u30f3\u30dd\u30fc\u30c8\u306b\u6210\u529f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"\u5225\u540d{0}\u306e\u30a8\u30f3\u30c8\u30ea\u306f\u30a4\u30f3\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"\u5225\u540d{0}\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u30a4\u30f3\u30dd\u30fc\u30c8\u4e2d\u306b\u554f\u984c\u304c\u767a\u751f\u3057\u307e\u3057\u305f: {1}\u3002\n\u5225\u540d{0}\u306e\u30a8\u30f3\u30c8\u30ea\u306f\u30a4\u30f3\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"\u30a4\u30f3\u30dd\u30fc\u30c8\u30fb\u30b3\u30de\u30f3\u30c9\u304c\u5b8c\u4e86\u3057\u307e\u3057\u305f: {0}\u4ef6\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u30a4\u30f3\u30dd\u30fc\u30c8\u304c\u6210\u529f\u3057\u307e\u3057\u305f\u3002{1}\u4ef6\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u30a4\u30f3\u30dd\u30fc\u30c8\u304c\u5931\u6557\u3057\u305f\u304b\u53d6\u308a\u6d88\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"\u8b66\u544a: \u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u5185\u306e\u65e2\u5b58\u306e\u5225\u540d{0}\u3092\u4e0a\u66f8\u304d\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"\u65e2\u5b58\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u5225\u540d{0}\u304c\u5b58\u5728\u3057\u3066\u3044\u307e\u3059\u3002\u4e0a\u66f8\u304d\u3057\u307e\u3059\u304b\u3002[\u3044\u3044\u3048]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"\u969c\u5bb3\u304c\u591a\u3059\u304e\u307e\u3059 - \u5f8c\u3067\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"\u8a8d\u8a3c\u30ea\u30af\u30a8\u30b9\u30c8\u304c\u30d5\u30a1\u30a4\u30eb<{0}>\u306b\u4fdd\u5b58\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"\u3053\u308c\u3092CA\u306b\u63d0\u51fa\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"\u5225\u540d\u3092\u6307\u5b9a\u3057\u306a\u3044\u5834\u5408\u3001\u51fa\u529b\u5148\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u5225\u540d\u304a\u3088\u3073\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"\u51fa\u529b\u5148pkcs12\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u3001\u7570\u306a\u308bstorepass\u304a\u3088\u3073keypass\u304c\u3042\u308a\u307e\u3059\u3002-destkeypass\u3092\u6307\u5b9a\u3057\u3066\u518d\u8a66\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"\u8a3c\u660e\u66f8\u304c\u30d5\u30a1\u30a4\u30eb<{0}>\u306b\u4fdd\u5b58\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"\u8a3c\u660e\u66f8\u5fdc\u7b54\u304c\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u30a4\u30f3\u30b9\u30c8\u30fc\u30eb\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"\u8a3c\u660e\u66f8\u5fdc\u7b54\u304c\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u30a4\u30f3\u30b9\u30c8\u30fc\u30eb\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"\u8a3c\u660e\u66f8\u304c\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u8ffd\u52a0\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"\u8a3c\u660e\u66f8\u304c\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u8ffd\u52a0\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[{0}\u3092\u683c\u7d0d\u4e2d]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}\u306b\u306f\u516c\u958b\u30ad\u30fc(\u8a3c\u660e\u66f8)\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u3092\u53d6\u5f97\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"\u5225\u540d<{0}>\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"\u5225\u540d<{0}>\u306b\u306f\u8a3c\u660e\u66f8\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.keysize.coexist"_s),
			$of(u"-groupname\u3068-keysize\u306e\u4e21\u65b9\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("deprecate.keysize.for.ec"_s),
			$of(u"-keysize\u306e\u6307\u5b9a\u306b\u3088\u308bEC\u30ad\u30fc\u306e\u751f\u6210\u306f\u975e\u63a8\u5968\u3067\u3059\u3002\u304b\u308f\u308a\u306b\"-groupname %s\"\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"\u30ad\u30fc\u30fb\u30da\u30a2\u306f\u751f\u6210\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u5225\u540d<{0}>\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"{3}\u65e5\u9593\u6709\u52b9\u306a{0}\u30d3\u30c3\u30c8\u306e{1}\u306e\u30ad\u30fc\u30fb\u30da\u30a2\u3068\u81ea\u5df1\u7f72\u540d\u578b\u8a3c\u660e\u66f8({2})\u3092\u751f\u6210\u3057\u3066\u3044\u307e\u3059\n\t\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u540d: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"<{0}>\u306e\u30ad\u30fc\u30fb\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3068\u540c\u3058\u5834\u5408\u306fRETURN\u3092\u62bc\u3057\u3066\u304f\u3060\u3055\u3044):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u304c\u77ed\u3059\u304e\u307e\u3059 - 6\u6587\u5b57\u4ee5\u4e0a\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"\u969c\u5bb3\u304c\u591a\u3059\u304e\u307e\u3059 - \u30ad\u30fc\u306f\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u8ffd\u52a0\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"\u51fa\u529b\u5148\u306e\u5225\u540d<{0}>\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u304c\u77ed\u3059\u304e\u307e\u3059 - 6\u6587\u5b57\u4ee5\u4e0a\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"\u969c\u5bb3\u304c\u591a\u3059\u304e\u307e\u3059\u3002\u30ad\u30fc\u30fb\u30a8\u30f3\u30c8\u30ea\u306e\u30af\u30ed\u30fc\u30f3\u306f\u4f5c\u6210\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}>\u306e\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"\u30a2\u30a4\u30c7\u30f3\u30c6\u30a3\u30c6\u30a3\u30fb\u30c7\u30fc\u30bf\u30d9\u30fc\u30b9\u304b\u3089\u8ffd\u52a0\u3055\u308c\u305f\u30a8\u30f3\u30c8\u30ea\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"\u5225\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"\u4f5c\u6210\u65e5: {0,date}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.keyStore.getCreationDate.alias."_s),
			$of("{0},{1,date}, "_s)
		}),
		$$new($ObjectArray, {
			$of("alias."_s),
			$of("{0}, "_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.type.type."_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u30fb\u30bf\u30a4\u30d7: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u306e\u9577\u3055: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"\u8a3c\u660e\u66f8[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"\u8a3c\u660e\u66f8\u306e\u30d5\u30a3\u30f3\u30ac\u30d7\u30ea\u30f3\u30c8(SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u306f{0,number,integer}\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u306f{0,number,integer}\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"\u5165\u529b\u306e\u69cb\u6587\u89e3\u6790\u306b\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"\u5165\u529b\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"X.509\u8a3c\u660e\u66f8\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}\u306b\u306f\u516c\u958b\u30ad\u30fc\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}\u306b\u306fX.509\u8a3c\u660e\u66f8\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"\u65b0\u3057\u3044\u8a3c\u660e\u66f8(\u81ea\u5df1\u7f72\u540d\u578b):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"\u5fdc\u7b54\u306b\u306f\u8a3c\u660e\u66f8\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"\u8a3c\u660e\u66f8\u306f\u30a4\u30f3\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u5225\u540d<{0}>\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"\u5165\u529b\u306fX.509\u8a3c\u660e\u66f8\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"\u8a3c\u660e\u66f8\u306f\u3001\u5225\u540d<{0}>\u306e\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"\u8ffd\u52a0\u3057\u307e\u3059\u304b\u3002[\u3044\u3044\u3048]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"\u8a3c\u660e\u66f8\u306f\u3001\u5225\u540d<{0}>\u306e\u30b7\u30b9\u30c6\u30e0\u898f\u6a21\u306eCA\u30ad\u30fc\u30b9\u30c8\u30a2\u5185\u306b\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u8ffd\u52a0\u3057\u307e\u3059\u304b\u3002 [\u3044\u3044\u3048]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"\u3053\u306e\u8a3c\u660e\u66f8\u3092\u4fe1\u983c\u3057\u307e\u3059\u304b\u3002 [\u3044\u3044\u3048]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"\u65b0\u898f{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u306f\u7570\u306a\u3063\u3066\u3044\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"\u65b0\u898f{0}\u3092\u518d\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u518d\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"\u65b0\u898f\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u518d\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"\u4e00\u81f4\u3057\u307e\u305b\u3093\u3002\u3082\u3046\u4e00\u5ea6\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"{0}\u306e\u5225\u540d\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"\u65b0\u3057\u3044\u5225\u540d\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044\t(\u3053\u306e\u30a8\u30f3\u30c8\u30ea\u306e\u30a4\u30f3\u30dd\u30fc\u30c8\u3092\u53d6\u308a\u6d88\u3059\u5834\u5408\u306fRETURN\u3092\u62bc\u3057\u3066\u304f\u3060\u3055\u3044):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"\u5225\u540d\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(<{0}>\u3068\u540c\u3058\u5834\u5408\u306fRETURN\u3092\u62bc\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"\u59d3\u540d\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"\u7d44\u7e54\u5358\u4f4d\u540d\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"\u7d44\u7e54\u540d\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"\u90fd\u5e02\u540d\u307e\u305f\u306f\u5730\u57df\u540d\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"\u90fd\u9053\u5e9c\u770c\u540d\u307e\u305f\u306f\u5dde\u540d\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"\u3053\u306e\u5358\u4f4d\u306b\u8a72\u5f53\u3059\u308b2\u6587\u5b57\u306e\u56fd\u30b3\u30fc\u30c9\u306f\u4f55\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}\u3067\u3088\u308d\u3057\u3044\u3067\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u3044\u3044\u3048"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"\u306f\u3044"_s)
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
			$of(u"\u5225\u540d<{0}>\u306b\u306f\u30ad\u30fc\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"\u5225\u540d<{0}>\u304c\u53c2\u7167\u3057\u3066\u3044\u308b\u30a8\u30f3\u30c8\u30ea\u30fb\u30bf\u30a4\u30d7\u306f\u79d8\u5bc6\u30ad\u30fc\u30fb\u30a8\u30f3\u30c8\u30ea\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002-keyclone\u30b3\u30de\u30f3\u30c9\u306f\u79d8\u5bc6\u30ad\u30fc\u30fb\u30a8\u30f3\u30c8\u30ea\u306e\u30af\u30ed\u30fc\u30f3\u4f5c\u6210\u306e\u307f\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"\u7f72\u540d\u8005\u756a\u53f7%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"\u7f72\u540d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"\u8a3c\u660e\u66f8\u306e\u6240\u6709\u8005: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"\u7f72\u540d\u4ed8\u304dJAR\u30d5\u30a1\u30a4\u30eb\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"SSL\u30b5\u30fc\u30d0\u30fc\u304b\u3089\u306e\u8a3c\u660e\u66f8\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"*\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u4fdd\u5b58\u3055\u308c\u305f\u60c5\u5831\u306e\u6574\u5408\u6027\u306f*\n*\u691c\u8a3c\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u6574\u5408\u6027\u3092\u691c\u8a3c\u3059\u308b\u306b\u306f*\n*\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002*"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"*\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u4fdd\u5b58\u3055\u308c\u305f\u60c5\u5831\u306e\u6574\u5408\u6027\u306f*\n*\u691c\u8a3c\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u6574\u5408\u6027\u3092\u691c\u8a3c\u3059\u308b\u306b\u306f*\n*\u30bd\u30fc\u30b9\u30fb\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002*"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"\u8a3c\u660e\u66f8\u5fdc\u7b54\u306b\u306f\u3001<{0}>\u306e\u516c\u958b\u30ad\u30fc\u306f\u542b\u307e\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"\u5fdc\u7b54\u3057\u305f\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u306f\u4e0d\u5b8c\u5168\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"\u5fdc\u7b54\u3057\u305f\u30c8\u30c3\u30d7\u30ec\u30d9\u30eb\u306e\u8a3c\u660e\u66f8:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... \u306f\u4fe1\u983c\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"\u5fdc\u7b54\u3092\u30a4\u30f3\u30b9\u30c8\u30fc\u30eb\u3057\u307e\u3059\u304b\u3002[\u3044\u3044\u3048]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"\u5fdc\u7b54\u3057\u305f\u516c\u958b\u30ad\u30fc\u3068\u30ad\u30fc\u30b9\u30c8\u30a2\u304c\u4e00\u81f4\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"\u8a3c\u660e\u66f8\u5fdc\u7b54\u3068\u30ad\u30fc\u30b9\u30c8\u30a2\u5185\u306e\u8a3c\u660e\u66f8\u304c\u540c\u3058\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"\u5fdc\u7b54\u304b\u3089\u9023\u9396\u3092\u78ba\u7acb\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"\u5fdc\u7b54\u304c\u9593\u9055\u3063\u3066\u3044\u307e\u3059\u3002\u3082\u3046\u4e00\u5ea6\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"\u79d8\u5bc6\u30ad\u30fc\u306f\u751f\u6210\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u5225\u540d<{0}>\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"\u79d8\u5bc6\u30ad\u30fc\u306e\u751f\u6210\u6642\u306b\u306f -keysize\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"\u8b66\u544a: \u691c\u8a3c\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002-keystore\u304c\u6b63\u3057\u3044\u3053\u3068\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s),
			$of(u"\u8b66\u544a: \u691c\u8a3c\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002-keystore\u304c\u6b63\u3057\u3044\u3053\u3068\u3092\u78ba\u8a8d\u3059\u308b\u304b\u3001-trustcacerts\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"\u62e1\u5f35: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(\u7a7a\u306e\u5024)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"\u62e1\u5f35\u30ea\u30af\u30a8\u30b9\u30c8:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"\u4e0d\u660e\u306akeyUsage\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"\u4e0d\u660e\u306aextendedkeyUsage\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"\u4e0d\u660e\u306aAccessDescription\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"\u8a8d\u8b58\u3055\u308c\u306a\u3044GeneralName\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"\u3053\u306e\u62e1\u5f35\u306f\u30af\u30ea\u30c6\u30a3\u30ab\u30eb\u3068\u3057\u3066\u30de\u30fc\u30af\u4ed8\u3051\u3067\u304d\u307e\u305b\u3093\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"\u5947\u6570\u306e16\u9032\u6570\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"\u4e0d\u660e\u306a\u62e1\u5f35\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"\u30b3\u30de\u30f3\u30c9{0}\u306f\u3042\u3044\u307e\u3044\u3067\u3059:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"\u767a\u884c\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305f\u8a3c\u660e\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305fCRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305f\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"\u8a3c\u660e\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA\u8a3c\u660e\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"\u5165\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"\u5fdc\u7b54"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d / %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts\u5185\u306e\u767a\u884c\u8005<%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"\u767a\u884c\u8005<%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s (\u7121\u52b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d\u30d3\u30c3\u30c8%2$s\u30ad\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d\u30d3\u30c3\u30c8%2$s\u30ad\u30fc(\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%1$d-bit %2$s key (\u7121\u52b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"\u4e0d\u660e\u306a\u30b5\u30a4\u30ba\u306e%s\u30ad\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"\u6240\u6709\u8005: {0}\n\u767a\u884c\u8005: {1}\n\u30b7\u30ea\u30a2\u30eb\u756a\u53f7: {2}\n\u6709\u52b9\u671f\u9593\u306e\u958b\u59cb\u65e5: {3}\u7d42\u4e86\u65e5: {4}\n\u8a3c\u660e\u66f8\u306e\u30d5\u30a3\u30f3\u30ac\u30d7\u30ea\u30f3\u30c8:\n\t SHA1: {5}\n\t SHA256: {6}\n\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u540d: {7}\n\u30b5\u30d6\u30b8\u30a7\u30af\u30c8\u516c\u958b\u30ad\u30fc\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: {8}\n\u30d0\u30fc\u30b8\u30e7\u30f3: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10\u8a3c\u660e\u66f8\u30ea\u30af\u30a8\u30b9\u30c8(\u30d0\u30fc\u30b8\u30e7\u30f31.0)\n\u30b5\u30d6\u30b8\u30a7\u30af\u30c8: %1$s\n\u30d5\u30a9\u30fc\u30de\u30c3\u30c8: %2$s\n\u516c\u958b\u30ad\u30fc: %3$s\n\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"%2$s\u5185\u306e%1$s\u306b\u3088\u308a%3$s\u3067\u691c\u8a3c\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.disabled"_s),
			$of(u"%1$s\u306f%2$s\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u3092\u4f7f\u7528\u3057\u3066\u304a\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u3001\u7121\u52b9\u5316\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.weak"_s),
			$of(u"%1$s\u306f%2$s\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u3092\u4f7f\u7528\u3057\u3066\u304a\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.disabled"_s),
			$of(u"%1$s\u306f%2$s\u3092\u4f7f\u7528\u3057\u3066\u304a\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u3001\u7121\u52b9\u5316\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.weak"_s),
			$of(u"%1$s\u306f%2$s\u3092\u4f7f\u7528\u3057\u3066\u304a\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30ad\u30fc\u30fb\u30b5\u30a4\u30ba\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$s\u30ad\u30fc\u30b9\u30c8\u30a2\u306f\u72ec\u81ea\u306e\u5f62\u5f0f\u3092\u4f7f\u7528\u3057\u3066\u3044\u307e\u3059\u3002\"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"\u3092\u4f7f\u7528\u3059\u308b\u696d\u754c\u6a19\u6e96\u306e\u5f62\u5f0f\u3067\u3042\u308bPKCS12\u306b\u79fb\u884c\u3059\u308b\u3053\u3068\u3092\u304a\u85a6\u3081\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\"%1$s\"\u304c%4$s\u306b\u79fb\u884c\u3055\u308c\u307e\u3057\u305f\u3002%2$s\u30ad\u30fc\u30b9\u30c8\u30a2\u306f\"%3$s\"\u3068\u3057\u3066\u30d0\u30c3\u30af\u30a2\u30c3\u30d7\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"\u5143\u306e\u30ad\u30fc\u30b9\u30c8\u30a2\"%1$s\"\u306f\"%3$s\"\u3068\u3057\u3066\u30d0\u30c3\u30af\u30a2\u30c3\u30d7\u3055\u308c\u307e\u3059..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2%1$s\u3092%2$s\u306b\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u3059..."_s)
		}),
		$$new($ObjectArray, {
			$of("keyalg.option.missing.error"_s),
			$of(u"-keyalg\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.no.option"_s),
			$of(u"-showinfo\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u304c\u3042\u308a\u307e\u305b\u3093\u3002\"keytool -showinfo -tls\"\u3092\u8a66\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$loadClass(Resources_ja, name, initialize, &_Resources_ja_ClassInfo_, clinit$Resources_ja, allocate$Resources_ja);
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun