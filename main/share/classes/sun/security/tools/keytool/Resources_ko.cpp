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
			$of(u"\uc635\uc158:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"%s \uc635\uc158\uc774 \uc5ec\ub7ec \ubc88 \uc9c0\uc815\ub418\uc5c8\uc2b5\ub2c8\ub2e4. \ub9c8\uc9c0\ub9c9 \ud56d\ubaa9\uc744 \uc81c\uc678\ud55c \ubaa8\ub4e0 \ud56d\ubaa9\uc774 \ubb34\uc2dc\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"\uba85\ub839\uc740 \ud558\ub098\ub9cc \ud5c8\uc6a9\ub429\ub2c8\ub2e4. %1$s \ubc0f %2$s\uc774(\uac00) \ubaa8\ub450 \uc9c0\uc815\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"\uc0ac\uc6a9 \uac00\ub2a5\ud55c \ubaa8\ub4e0 \uba85\ub839\uc5d0 \"keytool -help\" \uc0ac\uc6a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"\ud0a4 \ubc0f \uc778\uc99d\uc11c \uad00\ub9ac \ud234"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"\uba85\ub839:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"command_name \uc0ac\uc6a9\ubc95\uc5d0 \"keytool -command_name -help\"\ub97c \uc0ac\uc6a9\ud569\ub2c8\ub2e4.\n-conf <url> \uc635\uc158\uc744 \uc0ac\uc6a9\ud558\uc5ec \uc0ac\uc804 \uad6c\uc131\ub41c \uc635\uc158 \ud30c\uc77c\uc744 \uc9c0\uc815\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"\uc778\uc99d\uc11c \uc694\uccad\uc744 \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\ud56d\ubaa9\uc758 \ubcc4\uce6d\uc744 \ubcc0\uacbd\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"\ud56d\ubaa9\uc744 \uc0ad\uc81c\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"\uc778\uc99d\uc11c\ub97c \uc775\uc2a4\ud3ec\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"\ud0a4 \uc30d\uc744 \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"\ubcf4\uc548 \ud0a4\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"\uc778\uc99d\uc11c \uc694\uccad\uc5d0\uc11c \uc778\uc99d\uc11c\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"CRL\uc744 \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"{0} \ubcf4\uc548 \ud0a4\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"{0}\ube44\ud2b8 {1} \ubcf4\uc548 \ud0a4\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"JDK 1.1.x \uc2a4\ud0c0\uc77c ID \ub370\uc774\ud130\ubca0\uc774\uc2a4\uc5d0\uc11c \ud56d\ubaa9\uc744 \uc784\ud3ec\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"\uc778\uc99d\uc11c \ub610\ub294 \uc778\uc99d\uc11c \uccb4\uc778\uc744 \uc784\ud3ec\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"\ube44\ubc00\ubc88\ud638\ub97c \uc784\ud3ec\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"\ub2e4\ub978 \ud0a4 \uc800\uc7a5\uc18c\uc5d0\uc11c \ud558\ub098 \ub610\ub294 \ubaa8\ub4e0 \ud56d\ubaa9\uc744 \uc784\ud3ec\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"\ud0a4 \ud56d\ubaa9\uc744 \ubcf5\uc81c\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\ud56d\ubaa9\uc758 \ud0a4 \ube44\ubc00\ubc88\ud638\ub97c \ubcc0\uacbd\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\uc758 \ud56d\ubaa9\uc744 \ub098\uc5f4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"\uc778\uc99d\uc11c\uc758 \ucf58\ud150\uce20\ub97c \uc778\uc1c4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"\uc778\uc99d\uc11c \uc694\uccad\uc758 \ucf58\ud150\uce20\ub97c \uc778\uc1c4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"CRL \ud30c\uc77c\uc758 \ucf58\ud150\uce20\ub97c \uc778\uc1c4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"\uc790\uccb4 \uc11c\uba85\ub41c \uc778\uc99d\uc11c\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\uc758 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\ub97c \ubcc0\uacbd\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"\ucc98\ub9ac\ud560 \ud56d\ubaa9\uc758 \ubcc4\uce6d \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"\ub300\uc0c1 \ubcc4\uce6d"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\ub85c \ubcf4\ud638\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \uc81c\uacf5\uc790 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \uc720\ud615"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"\uc2dd\ubcc4 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509 \ud655\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"\ucd9c\ub825 \ud30c\uc77c \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"\uc785\ub825 \ud30c\uc77c \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"\ud0a4 \uc54c\uace0\ub9ac\uc998 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"\ud0a4 \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"\ud0a4 \ube44\ud2b8 \ud06c\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"cacerts \ud0a4 \uc800\uc7a5\uc18c \uc561\uc138\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"\uacbd\uace0: -cacerts \uc635\uc158\uc744 \uc0ac\uc6a9\ud558\uc5ec cacerts \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc561\uc138\uc2a4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"\uc0c8 \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"\ud655\uc778\ud558\uc9c0 \uc54a\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"\ubcf4\ud638\ub418\ub294 \uba54\ucee4\ub2c8\uc998\uc744 \ud1b5\ud55c \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"\uc774\ub984\ubcc4 \ubcf4\uc548 \uc81c\uacf5\uc790 \ucd94\uac00(\uc608: SunPKCS11)\n-addprovider\uc5d0 \ub300\ud55c \uc778\uc218 \uad6c\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"\uc804\uccb4 \ud074\ub798\uc2a4 \uc774\ub984\ubcc4 \ubcf4\uc548 \uc81c\uacf5\uc790 \ucd94\uac00\n-providerclass\uc5d0 \ub300\ud55c \uc778\uc218 \uad6c\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"\uc81c\uacf5\uc790 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"\uc81c\uacf5\uc790 \ud074\ub798\uc2a4 \uacbd\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"RFC \uc2a4\ud0c0\uc77c\uc758 \ucd9c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"\uc11c\uba85 \uc54c\uace0\ub9ac\uc998 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"\uc18c\uc2a4 \ubcc4\uce6d"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\ub85c \ubcf4\ud638\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \uc81c\uacf5\uc790 \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \uc720\ud615"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL \uc11c\ubc84 \ud638\uc2a4\ud2b8 \ubc0f \ud3ec\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"\uc11c\uba85\ub41c jar \ud30c\uc77c"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"\uc778\uc99d\uc11c \uc720\ud6a8 \uae30\uac04 \uc2dc\uc791 \ub0a0\uc9dc/\uc2dc\uac04"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc720\ud615"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"cacerts\uc758 \ubcf4\uc548 \uc778\uc99d\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"\uc0c1\uc138 \uc815\ubcf4 \ucd9c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"\uc720\ud6a8 \uae30\uac04 \uc77c \uc218"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"\ucca0\ud68c\ud560 \uc778\uc99d\uc11c\uc758 \uc77c\ub828 ID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytool \uc624\ub958: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\uc798\ubabb\ub41c \uc635\uc158:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"\uc798\ubabb\ub41c \uac12: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ube44\ubc00\ubc88\ud638 \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\ud658\uacbd \ubcc0\uc218\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\ud30c\uc77c\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"\uba85\ub839 \uc635\uc158 {0}\uc5d0 \uc778\uc218\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"\uacbd\uace0: \ub2e4\ub978 \uc800\uc7a5\uc18c \ubc0f \ud0a4 \ube44\ubc00\ubc88\ud638\ub294 PKCS12 KeyStores\uc5d0 \ub300\ud574 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4. \uc0ac\uc6a9\uc790\uac00 \uc9c0\uc815\ud55c {0} \uac12\uc744 \ubb34\uc2dc\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystore \ub610\ub294 -storetype \uc635\uc158\uc740 -cacerts \uc635\uc158\uacfc \ud568\uaed8 \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-storetype\uc774 {0}\uc778 \uacbd\uc6b0 -keystore\ub294 NONE\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"\uc7ac\uc2dc\ub3c4 \ud69f\uc218\uac00 \ub108\ubb34 \ub9ce\uc544 \ud504\ub85c\uadf8\ub7a8\uc774 \uc885\ub8cc\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storetype\uc774 {0}\uc778 \uacbd\uc6b0 -storepasswd \ubc0f -keypasswd \uba85\ub839\uc774 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-storetype\uc774 PKCS12\uc778 \uacbd\uc6b0 -keypasswd \uba85\ub839\uc774 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-storetype\uc774 {0}\uc778 \uacbd\uc6b0 -keypass \ubc0f -new\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"-protected\ub97c \uc9c0\uc815\ud55c \uacbd\uc6b0 -storepass, -keypass \ubc0f -new\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"-srcprotected\ub97c \uc9c0\uc815\ud55c \uacbd\uc6b0 -srcstorepass \ubc0f -srckeypass\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\uac00 \ube44\ubc00\ubc88\ud638\ub85c \ubcf4\ud638\ub418\uc9c0 \uc54a\ub294 \uacbd\uc6b0 -storepass, -keypass \ubc0f -new\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c\uac00 \ube44\ubc00\ubc88\ud638\ub85c \ubcf4\ud638\ub418\uc9c0 \uc54a\ub294 \uacbd\uc6b0 -srcstorepass \ubc0f -srckeypass\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"startdate \uac12\uc774 \uc798\ubabb\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"\uc720\ud6a8 \uae30\uac04\uc740 0\ubcf4\ub2e4 \ucee4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s\uc740(\ub294) \uc81c\uacf5\uc790\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\"%s\" \uc774\ub984\uc758 \uc81c\uacf5\uc790\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\"%s\" \uc81c\uacf5\uc790\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"\uc0ac\uc6a9\ubc95 \uc624\ub958: \uba85\ub839\uc744 \uc785\ub825\ud558\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \ud30c\uc77c\uc774 \uc874\uc7ac\ud558\uc9c0\ub9cc \ube44\uc5b4 \uc788\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"-srckeystore\ub97c \uc9c0\uc815\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"\'list\' \uba85\ub839\uc5d0 -v\uc640 -rfc\ub97c \ud568\uaed8 \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"\ud0a4 \ube44\ubc00\ubc88\ud638\ub294 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"\uc0c8 \ube44\ubc00\ubc88\ud638\ub294 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ud30c\uc77c\uc774 \uc874\uc7ac\ud558\uc9c0\ub9cc \ube44\uc5b4 \uc788\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ud30c\uc77c\uc774 \uc874\uc7ac\ud558\uc9c0 \uc54a\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"\ub300\uc0c1 \ubcc4\uce6d\uc744 \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"\ubcc4\uce6d\uc744 \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\ub294 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"\uc800\uc7a5\ud560 \ube44\ubc00\ubc88\ud638 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"\uc18c\uc2a4 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"\ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\uac00 \ub108\ubb34 \uc9e7\uc74c - 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ud56d\ubaa9 \uc720\ud615"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"\uc624\ub958\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4. \ubcc4\uce6d\uc774 \ubcc0\uacbd\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"{0} \ubcc4\uce6d\uc5d0 \ub300\ud55c \ud56d\ubaa9\uc774 \uc131\uacf5\uc801\uc73c\ub85c \uc784\ud3ec\ud2b8\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"{0} \ubcc4\uce6d\uc5d0 \ub300\ud55c \ud56d\ubaa9\uc774 \uc784\ud3ec\ud2b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"{0} \ubcc4\uce6d\uc5d0 \ub300\ud55c \ud56d\ubaa9\uc744 \uc784\ud3ec\ud2b8\ud558\ub294 \uc911 \ubb38\uc81c \ubc1c\uc0dd: {1}.\n{0} \ubcc4\uce6d\uc5d0 \ub300\ud55c \ud56d\ubaa9\uc774 \uc784\ud3ec\ud2b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"\uc784\ud3ec\ud2b8 \uba85\ub839 \uc644\ub8cc: \uc131\uacf5\uc801\uc73c\ub85c \uc784\ud3ec\ud2b8\ub41c \ud56d\ubaa9\uc740 {0}\uac1c, \uc2e4\ud328\ud558\uac70\ub098 \ucde8\uc18c\ub41c \ud56d\ubaa9\uc740 {1}\uac1c\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"\uacbd\uace0: \ub300\uc0c1 \ud0a4 \uc800\uc7a5\uc18c\uc5d0\uc11c \uae30\uc874 \ubcc4\uce6d {0}\uc744(\ub97c) \uacb9\uccd0 \uc4f0\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"\uae30\uc874 \ud56d\ubaa9 \ubcc4\uce6d {0}\uc774(\uac00) \uc874\uc7ac\ud569\ub2c8\ub2e4. \uacb9\uccd0 \uc4f0\uaca0\uc2b5\ub2c8\uae4c? [\uc544\ub2c8\uc624]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"\uc624\ub958\uac00 \ub108\ubb34 \ub9ce\uc74c - \ub098\uc911\uc5d0 \uc2dc\ub3c4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"\uc778\uc99d \uc694\uccad\uc774 <{0}> \ud30c\uc77c\uc5d0 \uc800\uc7a5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"CA\uc5d0\uac8c \uc81c\ucd9c\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"\ubcc4\uce6d\uc744 \uc9c0\uc815\ud558\uc9c0 \uc54a\uc740 \uacbd\uc6b0 destalias \ubc0f srckeypass\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"\ub300\uc0c1 pkcs12 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \ub2e4\ub978 storepass \ubc0f keypass\uac00 \uc788\uc2b5\ub2c8\ub2e4. \uc9c0\uc815\ub41c -destkeypass\ub85c \uc7ac\uc2dc\ub3c4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"\uc778\uc99d\uc11c\uac00 <{0}> \ud30c\uc77c\uc5d0 \uc800\uc7a5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"\uc778\uc99d\uc11c \ud68c\uc2e0\uc774 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc124\uce58\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"\uc778\uc99d\uc11c \ud68c\uc2e0\uc774 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc124\uce58\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"\uc778\uc99d\uc11c\uac00 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \ucd94\uac00\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"\uc778\uc99d\uc11c\uac00 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \ucd94\uac00\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[{0}\uc744(\ub97c) \uc800\uc7a5\ud558\ub294 \uc911]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}\uc5d0 \uacf5\uc6a9 \ud0a4(\uc778\uc99d\uc11c)\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"\uc11c\uba85 \uc54c\uace0\ub9ac\uc998\uc744 \ud30c\uc0dd\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"<{0}> \ubcc4\uce6d\uc774 \uc874\uc7ac\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"<{0}> \ubcc4\uce6d\uc5d0 \uc778\uc99d\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"\ud0a4 \uc30d\uc774 \uc0dd\uc131\ub418\uc9c0 \uc54a\uc558\uc73c\uba70 <{0}> \ubcc4\uce6d\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"\ub2e4\uc74c\uc5d0 \ub300\ud574 \uc720\ud6a8 \uae30\uac04\uc774 {3}\uc77c\uc778 {0}\ube44\ud2b8 {1} \ud0a4 \uc30d \ubc0f \uc790\uccb4 \uc11c\uba85\ub41c \uc778\uc99d\uc11c({2})\ub97c \uc0dd\uc131\ud558\ub294 \uc911\n\t: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"<{0}>\uc5d0 \ub300\ud55c \ud0a4 \ube44\ubc00\ubc88\ud638\ub97c \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\uc640 \ub3d9\uc77c\ud55c \uacbd\uc6b0 Enter \ud0a4\ub97c \ub204\ub984):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\ud0a4 \ube44\ubc00\ubc88\ud638\uac00 \ub108\ubb34 \uc9e7\uc74c - 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"\uc624\ub958\uac00 \ub108\ubb34 \ub9ce\uc74c - \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \ud0a4\uac00 \ucd94\uac00\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"\ub300\uc0c1 \ubcc4\uce6d <{0}>\uc774(\uac00) \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"\ube44\ubc00\ubc88\ud638\uac00 \ub108\ubb34 \uc9e7\uc74c - 6\uc790 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"\uc624\ub958\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4. \ud0a4 \ud56d\ubaa9\uc774 \ubcf5\uc81c\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}>\uc5d0 \ub300\ud55c \ud0a4 \ube44\ubc00\ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"<{0}>\uc5d0 \ub300\ud55c \ud0a4 \uc800\uc7a5\uc18c \ud56d\ubaa9\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"<{0}>\uc5d0 \ub300\ud55c \ud0a4 \uc800\uc7a5\uc18c \ud56d\ubaa9\uc744 \uc0dd\uc131\ud558\ub294 \uc911..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"ID \ub370\uc774\ud130\ubca0\uc774\uc2a4\uc5d0\uc11c \ucd94\uac00\ub41c \ud56d\ubaa9\uc774 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"\ubcc4\uce6d \uc774\ub984: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"\uc0dd\uc131 \ub0a0\uc9dc: {0,date}"_s)
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
			$of(u"\ud56d\ubaa9 \uc720\ud615: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"\uc778\uc99d\uc11c \uccb4\uc778 \uae38\uc774: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"\uc778\uc99d\uc11c[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"\uc778\uc99d\uc11c \uc9c0\ubb38(SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc81c\uacf5\uc790: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\uc5d0 {0,number,integer}\uac1c\uc758 \ud56d\ubaa9\uc774 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\uc5d0 {0,number,integer}\uac1c\uc758 \ud56d\ubaa9\uc774 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"\uc785\ub825\uac12\uc758 \uad6c\ubb38 \ubd84\uc11d\uc744 \uc2e4\ud328\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"\uc785\ub825\uac12\uc774 \ube44\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"X.509 \uc778\uc99d\uc11c\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}\uc5d0 \uacf5\uc6a9 \ud0a4\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}\uc5d0 X.509 \uc778\uc99d\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"\uc0c8 \uc778\uc99d\uc11c(\uc790\uccb4 \uc11c\uba85):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"\ud68c\uc2e0\uc5d0 \uc778\uc99d\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"\uc778\uc99d\uc11c\uac00 \uc784\ud3ec\ud2b8\ub418\uc9c0 \uc54a\uc558\uc73c\uba70 <{0}> \ubcc4\uce6d\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"\uc785\ub825\uc774 X.509 \uc778\uc99d\uc11c\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"\uc778\uc99d\uc11c\uac00 <{0}> \ubcc4\uce6d \uc544\ub798\uc758 \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"\ucd94\uac00\ud558\uaca0\uc2b5\ub2c8\uae4c? [\uc544\ub2c8\uc624]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"\uc778\uc99d\uc11c\uac00 <{0}> \ubcc4\uce6d \uc544\ub798\uc5d0 \uc788\ub294 \uc2dc\uc2a4\ud15c \ucc28\uc6d0\uc758 CA \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"\uace0\uc720\ud55c \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \ucd94\uac00\ud558\uaca0\uc2b5\ub2c8\uae4c? [\uc544\ub2c8\uc624]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"\uc774 \uc778\uc99d\uc11c\ub97c \uc2e0\ub8b0\ud569\ub2c8\uae4c? [\uc544\ub2c8\uc624]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"\uc608"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"\uc0c8 {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"\ube44\ubc00\ubc88\ud638\ub294 \ub2ec\ub77c\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"\uc0c8 {0} \ub2e4\uc2dc \uc785\ub825: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"\ube44\ubc00\ubc88\ud638  \ub2e4\uc2dc \uc785\ub825: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"\uc0c8 \ube44\ubc00\ubc88\ud638 \ub2e4\uc2dc \uc785\ub825: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"\uc77c\uce58\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4. \ub2e4\uc2dc \uc2dc\ub3c4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"{0} \ubcc4\uce6d \uc774\ub984 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"\uc0c8 \ubcc4\uce6d \uc774\ub984 \uc785\ub825\t(\uc774 \ud56d\ubaa9\uc5d0 \ub300\ud55c \uc784\ud3ec\ud2b8\ub97c \ucde8\uc18c\ud558\ub824\uba74 Enter \ud0a4\ub97c \ub204\ub984):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"\ubcc4\uce6d \uc774\ub984 \uc785\ub825:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(<{0}>\uacfc(\uc640) \ub3d9\uc77c\ud55c \uacbd\uc6b0 Enter \ud0a4\ub97c \ub204\ub984)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"\uc774\ub984\uacfc \uc131\uc744 \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"\uc870\uc9c1 \ub2e8\uc704 \uc774\ub984\uc744 \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"\uc870\uc9c1 \uc774\ub984\uc744 \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"\uad6c/\uad70/\uc2dc \uc774\ub984\uc744 \uc785\ub825\ud558\uc2ed\uc2dc\uc624?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"\uc2dc/\ub3c4 \uc774\ub984\uc744 \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"\uc774 \uc870\uc9c1\uc758 \ub450 \uc790\ub9ac \uad6d\uac00 \ucf54\ub4dc\ub97c \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}\uc774(\uac00) \ub9de\uc2b5\ub2c8\uae4c?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\uc544\ub2c8\uc624"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"\uc608"_s)
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
			$of(u"<{0}> \ubcc4\uce6d\uc5d0 \ud0a4\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"<{0}> \ubcc4\uce6d\uc740 \uc804\uc6a9 \ud0a4 \ud56d\ubaa9\uc774 \uc544\ub2cc \ud56d\ubaa9 \uc720\ud615\uc744 \ucc38\uc870\ud569\ub2c8\ub2e4. -keyclone \uba85\ub839\uc740 \uc804\uc6a9 \ud0a4 \ud56d\ubaa9\uc758 \ubcf5\uc81c\ub9cc \uc9c0\uc6d0\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"\uc11c\uba85\uc790 #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"\uc2dc\uac04 \uae30\ub85d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"\uc11c\uba85:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"\uc778\uc99d\uc11c \uc18c\uc720\uc790: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"\uc11c\uba85\ub41c jar \ud30c\uc77c\uc774 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"SSL \uc11c\ubc84\uc5d0\uc11c \uac00\uc838\uc628 \uc778\uc99d\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* \ud0a4 \uc800\uc7a5\uc18c\uc5d0 \uc800\uc7a5\ub41c \uc815\ubcf4\uc758 \ubb34\uacb0\uc131\uc774  *\n* \ud655\uc778\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4! \ubb34\uacb0\uc131\uc744 \ud655\uc778\ud558\ub824\uba74, *\n* \ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638\ub97c \uc81c\uacf5\ud574\uc57c \ud569\ub2c8\ub2e4.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* srckeystore\uc5d0 \uc800\uc7a5\ub41c \uc815\ubcf4\uc758 \ubb34\uacb0\uc131\uc774  *\n* \ud655\uc778\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4! \ubb34\uacb0\uc131\uc744 \ud655\uc778\ud558\ub824\uba74, *\n* srckeystore \ube44\ubc00\ubc88\ud638\ub97c \uc81c\uacf5\ud574\uc57c \ud569\ub2c8\ub2e4.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"\uc778\uc99d\uc11c \ud68c\uc2e0\uc5d0 <{0}>\uc5d0 \ub300\ud55c \uacf5\uc6a9 \ud0a4\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"\ud68c\uc2e0\uc5d0 \ubd88\uc644\uc804\ud55c \uc778\uc99d\uc11c \uccb4\uc778\uc774 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"\ud68c\uc2e0\uc758 \uc778\uc99d\uc11c \uccb4\uc778\uc774 \ud655\uc778\ub418\uc9c0 \uc54a\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"\ud68c\uc2e0\uc5d0 \ucd5c\uc0c1\uc704 \ub808\ubca8 \uc778\uc99d\uc11c\uac00 \uc788\uc74c:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"...\uc744(\ub97c) \uc2e0\ub8b0\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"\ud68c\uc2e0\uc744 \uc124\uce58\ud558\uaca0\uc2b5\ub2c8\uae4c? [\uc544\ub2c8\uc624]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\uc544\ub2c8\uc624"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"\ud68c\uc2e0\uacfc \ud0a4 \uc800\uc7a5\uc18c\uc758 \uacf5\uc6a9 \ud0a4\uac00 \uc77c\uce58\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"\ud68c\uc2e0\uacfc \ud0a4 \uc800\uc7a5\uc18c\uc758 \uc778\uc99d\uc11c\uac00 \ub3d9\uc77c\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"\ud68c\uc2e0\uc758 \uccb4\uc778 \uc124\uc815\uc744 \uc2e4\ud328\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"\uc798\ubabb\ub41c \uc751\ub2f5\uc785\ub2c8\ub2e4. \ub2e4\uc2dc \uc2dc\ub3c4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"\ubcf4\uc548 \ud0a4\uac00 \uc0dd\uc131\ub418\uc9c0 \uc54a\uc558\uc73c\uba70 <{0}> \ubcc4\uce6d\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"\ubcf4\uc548 \ud0a4\ub97c \uc0dd\uc131\ud558\ub824\uba74 -keysize\ub97c \uc81c\uacf5\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"\uacbd\uace0: \ud655\uc778\ub418\uc9c0 \uc54a\uc74c. -keystore\uac00 \uc62c\ubc14\ub978\uc9c0 \ud655\uc778\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"\ud655\uc7a5: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(\ube44\uc5b4 \uc788\ub294 \uac12)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"\ud655\uc7a5 \uc694\uccad:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 keyUsage \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 extendedkeyUsage \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 AccessDescription \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 GeneralName \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"\uc774 \ud655\uc7a5\uc740 \uc911\uc694\ud55c \uac83\uc73c\ub85c \ud45c\uc2dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"\ud640\uc218 \uac1c\uc758 16\uc9c4\uc218\uac00 \ubc1c\uacac\ub428: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ud655\uc7a5 \uc720\ud615: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"{0} \uba85\ub839\uc774 \ubaa8\ud638\ud568:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"\uc778\uc99d\uc11c \uc694\uccad"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"\ubc1c\ud589\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"\uc0dd\uc131\ub41c \uc778\uc99d\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"\uc0dd\uc131\ub41c CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"\uc0dd\uc131\ub41c \uc778\uc99d\uc11c \uc694\uccad"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"\uc778\uc99d\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA \uc778\uc99d\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"\uc785\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"\ud68c\uc2e0"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d/%3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts\uc758 <%s> \ubc1c\ud589\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"<%s> \ubc1c\ud589\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s(\uc57d\ud568)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d\ube44\ud2b8 %2$s \ud0a4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d\ube44\ud2b8 %2$s \ud0a4(\uc57d\ud568)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ud06c\uae30 %s \ud0a4"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"\uc18c\uc720\uc790: {0}\n\ubc1c\ud589\uc790: {1}\n\uc77c\ub828 \ubc88\ud638: {2}\n\uc801\ud569\ud55c \uc2dc\uc791 \ub0a0\uc9dc: {3} \uc885\ub8cc \ub0a0\uc9dc: {4}\n\uc778\uc99d\uc11c \uc9c0\ubb38:\n\t SHA1: {5}\n\t SHA256: {6}\n\uc11c\uba85 \uc54c\uace0\ub9ac\uc998 \uc774\ub984: {7}\n\uc8fc\uccb4 \uacf5\uc6a9 \ud0a4 \uc54c\uace0\ub9ac\uc998: {8}\n\ubc84\uc804: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10 \uc778\uc99d\uc11c \uc694\uccad(1.0 \ubc84\uc804)\n\uc81c\ubaa9: %1$s\n\ud615\uc2dd: %2$s\n\uacf5\uc6a9 \ud0a4: %3$s\n\uc11c\uba85 \uc54c\uace0\ub9ac\uc998: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"%3$s\uc744(\ub97c) \ud3ec\ud568\ud558\ub294 %2$s\uc758 %1$s\uc5d0 \uc758\ud574 \ud655\uc778\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s\uc774(\uac00) \ubcf4\uc548 \uc704\ud5d8\uc73c\ub85c \uac04\uc8fc\ub418\ub294 %2$s \uc11c\uba85 \uc54c\uace0\ub9ac\uc998\uc744 \uc0ac\uc6a9\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s\uc774(\uac00) \ubcf4\uc548 \uc704\ud5d8\uc73c\ub85c \uac04\uc8fc\ub418\ub294 %2$s\uc744(\ub97c) \uc0ac\uc6a9\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$s \ud0a4 \uc800\uc7a5\uc18c\ub294 \uace0\uc720 \ud615\uc2dd\uc744 \uc0ac\uc6a9\ud569\ub2c8\ub2e4. \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"\ub97c \uc0ac\uc6a9\ud558\ub294 \uc0b0\uc5c5 \ud45c\uc900 \ud615\uc2dd\uc778 PKCS12\ub85c \uc774\uc804\ud558\ub294 \uac83\uc774 \uc88b\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\"%1$s\"\uc744(\ub97c) %4$s(\uc73c)\ub85c \uc774\uc804\ud588\uc2b5\ub2c8\ub2e4. %2$s \ud0a4 \uc800\uc7a5\uc18c\uac00 \"%3$s\"(\uc73c)\ub85c \ubc31\uc5c5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"\uc6d0\ubcf8 \ud0a4 \uc800\uc7a5\uc18c \"%1$s\"\uc774(\uac00) \"%3$s\"(\uc73c)\ub85c \ubc31\uc5c5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c %1$s\uc744(\ub97c) %2$s(\uc73c)\ub85c \uc784\ud3ec\ud2b8\ud558\ub294 \uc911..."_s)
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