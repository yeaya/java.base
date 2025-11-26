#include <sun/security/tools/keytool/Resources_sv.h>

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

$FieldInfo _Resources_sv_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_sv, contents)},
	{}
};

$MethodInfo _Resources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_sv::*)()>(&Resources_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_sv_FieldInfo_,
	_Resources_sv_MethodInfo_
};

$Object* allocate$Resources_sv($Class* clazz) {
	return $of($alloc(Resources_sv));
}

$ObjectArray2* Resources_sv::contents = nullptr;

void Resources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_sv::getContents() {
	return Resources_sv::contents;
}

void clinit$Resources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_sv::contents, $new($ObjectArray2, {
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
			$of("Alternativ:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"Du har angett alternativet %s flera g\u00e5nger. Alla f\u00f6rutom det sista ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"Endast ett kommando \u00e4r till\u00e5tet: du har angett b\u00e5de %1$s och %2$s."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"L\u00e4s \"Hj\u00e4lp - Nyckelverktyg\" f\u00f6r alla tillg\u00e4ngliga kommandon"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"Hanteringsverktyg f\u00f6r nycklar och certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Kommandon:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Anv\u00e4nd \"keytool -command_name -help\" f\u00f6r syntax f\u00f6r command_name.\nAnv\u00e4nd alternativet -conf <url> f\u00f6r att ange en f\u00f6rkonfigurerad alternativfil."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"Genererar certifikatbeg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\u00c4ndrar postalias"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of("Tar bort en post"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exporterar certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of("Genererar nyckelpar"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Genererar hemlig nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"Genererar certifikat fr\u00e5n certifikatbeg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Genererar CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("Genererade {0} hemlig nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("Genererade {0}-bitars {1} hemlig nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"Importerar poster fr\u00e5n identitetsdatabas i JDK 1.1.x-format"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importerar ett certifikat eller en certifikatkedja"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"Importerar ett l\u00f6senord"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importerar en eller alla poster fr\u00e5n annat nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Klonar en nyckelpost"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\u00c4ndrar nyckell\u00f6senordet f\u00f6r en post"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"Visar lista \u00f6ver poster i nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"Skriver ut inneh\u00e5llet i ett certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"Skriver ut inneh\u00e5llet i en certifikatbeg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"Skriver ut inneh\u00e5llet i en CRL-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"Genererar ett sj\u00e4lvsignerat certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\u00c4ndrar lagerl\u00f6senordet f\u00f6r ett nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"aliasnamn f\u00f6r post som ska bearbetas"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("destinationsalias"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"l\u00f6senord f\u00f6r destinationsnyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"namn p\u00e5 destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"skyddat l\u00f6senord f\u00f6r destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"leverant\u00f6rsnamn f\u00f6r destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"l\u00f6senord f\u00f6r destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of("typ av destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("unikt namn"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509-till\u00e4gg"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"namn p\u00e5 utdatafil"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"namn p\u00e5 indatafil"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"namn p\u00e5 nyckelalgoritm"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"nyckell\u00f6senord"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of("nyckelbitstorlek"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"namn p\u00e5 nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"\u00e5tkomst till nyckellagret cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Varning: anv\u00e4nd alternativet -cacerts f\u00f6r att f\u00e5 \u00e5tkomst till nyckellagret cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"nytt l\u00f6senord"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"fr\u00e5ga inte"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"l\u00f6senord med skyddad mekanism"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"l\u00e4gg till s\u00e4kerhetsleverant\u00f6r per namn (t.ex. SunPKCS11)\nkonfigurera argument f\u00f6r -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"l\u00e4gg till s\u00e4kerhetsleverant\u00f6r per fullt kvalificerat klassnamn\nkonfigurera argument f\u00f6r -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"leverant\u00f6rsnamn"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"leverant\u00f6rsklass\u00f6kv\u00e4g"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("utdata i RFC-format"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"namn p\u00e5 signaturalgoritm"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"k\u00e4llalias"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"l\u00f6senord f\u00f6r k\u00e4llnyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"namn p\u00e5 k\u00e4llnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"skyddat l\u00f6senord f\u00f6r k\u00e4llnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"leverant\u00f6rsnamn f\u00f6r k\u00e4llnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"l\u00f6senord f\u00f6r k\u00e4llnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"typ av k\u00e4llnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL-serverv\u00e4rd och -port"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("signerad jar-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"startdatum/-tid f\u00f6r certifikatets giltighet"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"l\u00f6senord f\u00f6r nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of("nyckellagertyp"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"tillf\u00f6rlitliga certifikat fr\u00e5n cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"utf\u00f6rliga utdata"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"antal dagar f\u00f6r giltighet"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"Serienummer p\u00e5 certifikat som ska \u00e5terkallas"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("nyckelverktygsfel: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"Otill\u00e5tet alternativ:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"Otill\u00e5tet v\u00e4rde: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"Ok\u00e4nd l\u00f6senordstyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"Hittar inte milj\u00f6variabel: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Hittar inte fil: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"Kommandoalternativet {0} beh\u00f6ver ett argument."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Varning!  PKCS12-nyckellager har inte st\u00f6d f\u00f6r olika l\u00f6senord f\u00f6r lagret och nyckeln. Det anv\u00e4ndarspecificerade {0}-v\u00e4rdet ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"Alternativen -keystore och -storetype kan inte anv\u00e4ndas med alternativet -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-keystore m\u00e5ste vara NONE om -storetype \u00e4r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"F\u00f6r m\u00e5nga f\u00f6rs\u00f6k. Programmet avslutas"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storepasswd- och -keypasswd-kommandon st\u00f6ds inte om -storetype \u00e4r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-keypasswd-kommandon st\u00f6ds inte om -storetype \u00e4r PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-keypass och -new kan inte anges om -storetype \u00e4r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"om -protected har angetts f\u00e5r inte -storepass, -keypass och -new anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"om -srcprotected anges f\u00e5r -srcstorepass och -srckeypass inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"om nyckellagret inte \u00e4r l\u00f6senordsskyddat f\u00e5r -storepass, -keypass och -new inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"om k\u00e4llnyckellagret inte \u00e4r l\u00f6senordsskyddat f\u00e5r -srcstorepass och -srckeypass inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"Otill\u00e5tet v\u00e4rde f\u00f6r startdatum"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"Giltigheten m\u00e5ste vara st\u00f6rre \u00e4n noll"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s \u00e4r inte en leverant\u00f6r"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"Leverant\u00f6ren med namnet \"%s\" hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"Leverant\u00f6ren \"%s\" hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Syntaxfel: inget kommando angivet"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"Nyckellagrets k\u00e4llfil finns, men \u00e4r tom: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Ange -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"Kan inte specificera b\u00e5de -v och -rfc med \'list\'-kommandot"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"Nyckell\u00f6senordet m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"Det nya l\u00f6senordet m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"Nyckellagerfilen finns, men \u00e4r tom: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of("Nyckellagerfilen finns inte: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"Du m\u00e5ste ange destinationsalias"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"Du m\u00e5ste ange alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"Nyckellagerl\u00f6senordet m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"Ange det l\u00f6senord som ska lagras:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"Ange nyckellagerl\u00f6senord:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"Ange l\u00f6senord f\u00f6r k\u00e4llnyckellagret:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"Ange nyckellagerl\u00f6senord f\u00f6r destination:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Nyckellagerl\u00f6senordet \u00e4r f\u00f6r kort - det m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"Ok\u00e4nd posttyp"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"F\u00f6r m\u00e5nga fel. Alias har inte \u00e4ndrats"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"Posten f\u00f6r alias {0} har importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"Posten f\u00f6r alias {0} har inte importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Ett problem uppstod vid importen av posten f\u00f6r alias {0}: {1}.\nPosten {0} har inte importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Kommandoimporten slutf\u00f6rd: {0} poster har importerats, {1} poster var felaktiga eller annullerades"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Varning! Det befintliga aliaset {0} i destinationsnyckellagret skrivs \u00f6ver"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"Aliaset {0} finns redan. Vill du skriva \u00f6ver det? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"F\u00f6r m\u00e5nga fel - f\u00f6rs\u00f6k igen senare"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"Certifikatbeg\u00e4ran har lagrats i filen <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"Skicka detta till certifikatutf\u00e4rdaren"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of("om alias inte angivits ska inte heller destalias och srckeypass anges"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"Destinationsnyckellagret pkcs12 har olika storepass och keypass. F\u00f6rs\u00f6k igen med -destkeypass angivet."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of("Certifikatet har lagrats i filen <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of("Certifikatsvaret har installerats i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of("Certifikatsvaret har inte installerats i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of("Certifikatet har lagts till i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of("Certifikatet har inte lagts till i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Lagrar {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} saknar \u00f6ppen nyckel (certifikat)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"Kan inte h\u00e4rleda signaturalgoritm"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("Aliaset <{0}> finns inte"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of("Aliaset <{0}> saknar certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of("Nyckelparet genererades inte. Aliaset <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"Genererar {0} bitars {1}-nyckelpar och sj\u00e4lvsignerat certifikat ({2}) med en giltighet p\u00e5 {3} dagar\n\tf\u00f6r: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"Ange nyckell\u00f6senord f\u00f6r <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(RETURN om det \u00e4r identiskt med nyckellagerl\u00f6senordet):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Nyckell\u00f6senordet \u00e4r f\u00f6r kort - det m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"F\u00f6r m\u00e5nga fel - nyckeln lades inte till i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of("Destinationsaliaset <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"L\u00f6senordet \u00e4r f\u00f6r kort - det m\u00e5ste inneh\u00e5lla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"F\u00f6r m\u00e5nga fel. Nyckelposten har inte klonats"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"nyckell\u00f6senord f\u00f6r <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"Nyckellagerpost f\u00f6r <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Skapar nyckellagerpost f\u00f6r <{0}> ..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"Inga poster fr\u00e5n identitetsdatabasen har lagts till"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Aliasnamn: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of("Skapat den: {0,date}"_s)
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
			$of("Posttyp: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"L\u00e4ngd p\u00e5 certifikatskedja: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certifikat[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Certifikatfingeravtryck (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of("Nyckellagertyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"Nyckellagerleverant\u00f6r: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Nyckellagret inneh\u00e5ller {0,number,integer} post"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Nyckellagret inneh\u00e5ller {0,number,integer} poster"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Kunde inte tolka indata"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of("Inga indata"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of("Inte ett X.509-certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} saknar \u00f6ppen nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} saknar X.509-certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"Nytt certifikat (sj\u00e4lvsignerat):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of("Svaret saknar certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of("Certifikatet importerades inte. Aliaset <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"Indata \u00e4r inte ett X.509-certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of("Certifikatet finns redan i nyckellagerfilen under aliaset <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"Vill du fortfarande l\u00e4gga till det? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"Certifikatet finns redan i den systemomsp\u00e4nnande CA-nyckellagerfilen under aliaset <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"Vill du fortfarande l\u00e4gga till det i ditt eget nyckellagret? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"Litar du p\u00e5 det h\u00e4r certifikatet? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of("JA"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Nytt {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"L\u00f6senorden m\u00e5ste vara olika"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Ange nytt {0} igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"Ange l\u00f6senord igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"Ange det nya l\u00f6senordet igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"De matchar inte. F\u00f6rs\u00f6k igen"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"Ange aliasnamn f\u00f6r {0}:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"Ange ett nytt aliasnamn\t(skriv RETURN f\u00f6r att avbryta importen av denna post):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Ange aliasnamn:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(RETURN om det \u00e4r det samma som f\u00f6r <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"Vad heter du i f\u00f6r- och efternamn?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of("Vad heter din avdelning inom organisationen?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of("Vad heter din organisation?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of("Vad heter din ort eller plats?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of("Vad heter ditt land eller din provins?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"Vilken \u00e4r den tv\u00e5st\u00e4lliga landskoden?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"\u00c4r {0} korrekt?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("nej"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("j"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of("Aliaset <{0}> saknar nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"Aliaset <{0}> refererar till en posttyp som inte \u00e4r n\u00e5gon privat nyckelpost. Kommandot -keyclone har endast st\u00f6d f\u00f6r kloning av privata nyckelposter"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of("Undertecknare %d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"Tidsst\u00e4mpel:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Signatur:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:er:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"Certifikat\u00e4gare: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of("Ingen signerad jar-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"Inget certifikat fr\u00e5n SSL-servern"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* Integriteten f\u00f6r den information som lagras i nyckellagerfilen  *\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* m\u00e5ste du ange l\u00f6senordet f\u00f6r nyckellagret.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* Integriteten f\u00f6r den information som lagras i srckeystore*\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* m\u00e5ste du ange l\u00f6senordet f\u00f6r srckeystore.                *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"Certifikatsvaret inneh\u00e5ller inte n\u00e5gon \u00f6ppen nyckel f\u00f6r <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"Ofullst\u00e4ndig certifikatskedja i svaret"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"Certifikatskedjan i svaret g\u00e5r inte att verifiera: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"Toppniv\u00e5certifikatet i svaret:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... \u00e4r inte betrott. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"Vill du installera svaret \u00e4nd\u00e5? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("NEJ"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of("De offentliga nycklarna i svaret och nyckellagret matchar inte varandra"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"Certifikatsvaret och certifikatet i nyckellagret \u00e4r identiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"Kunde inte uppr\u00e4tta kedja fr\u00e5n svaret"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"Fel svar. F\u00f6rs\u00f6k p\u00e5 nytt."_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of("Den hemliga nyckeln har inte genererats eftersom aliaset <{0}> redan finns"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"Ange -keysize f\u00f6r att skapa hemlig nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"VARNING: ej verifierad. Se till att -nyckellager \u00e4r korrekt."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"Till\u00e4gg: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(Tomt v\u00e4rde)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"Till\u00e4ggsbeg\u00e4ran:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"Ok\u00e4nd keyUsage-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"Ok\u00e4nd extendedkeyUsage-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"Ok\u00e4nd AccessDescription-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"Ok\u00e4nd GeneralName-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"Detta till\u00e4gg kan inte markeras som kritiskt. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"Udda antal hex-siffror p\u00e5tr\u00e4ffades: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"Ok\u00e4nd till\u00e4ggstyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"kommandot {0} \u00e4r tvetydigt:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"Certifikatbeg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"Utf\u00e4rdaren"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("Det genererade certifikatet"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"Den genererade listan \u00f6ver \u00e5terkallade certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"Den genererade certifikatbeg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("Certifikatet"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of(u"Listan \u00f6ver \u00e5terkallade certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("TSA-certifikatet"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("Indata"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Svar"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d av %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"Utf\u00e4rdaren <%s> i cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"Utf\u00e4rdaren <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (svag)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("%1$d-bitars %2$s-nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of("%1$d-bitars %2$s-nyckel (svag)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"ok\u00e4nd storlek p\u00e5 nyckeln %s"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"\u00c4gare: {0}\nUtf\u00e4rdare: {1}\nSerienummer: {2}\nGiltigt fr\u00e5n: {3}, till: {4}\nCertifikatfingeravtryck:\n\t SHA1: {5}\n\t SHA256: {6}\nSignaturalgoritmnamn: {7}\nAlgoritm f\u00f6r \u00f6ppen nyckel f\u00f6r \u00e4mne: {8}\nVersion: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10-certifikatbeg\u00e4ran (version 1.0)\n\u00c4mne: %1$s\nFormat: %2$s\n\u00d6ppen nyckel: %3$s\nSignaturalgoritm: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verifierades av %1$s i %2$s med en %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s anv\u00e4nder signaturalgoritmen %2$s, vilket anses utg\u00f6ra en s\u00e4kerhetsrisk."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s anv\u00e4nder en %2$s, vilket anses utg\u00f6ra en s\u00e4kerhetsrisk."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"Nyckellagret %1$s anv\u00e4nder ett propriet\u00e4rt format. Du b\u00f6r migrera till PKCS12, som \u00e4r ett branschstandardformat, med \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"Migrerade \"%1$s\" till %4$s. Nyckellagret %2$s s\u00e4kerhetskopierades som \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"Det ursprungliga nyckellagret, \"%1$s\", s\u00e4kerhetskopieras som \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of("Importerar nyckellagret %1$s till %2$s..."_s)
		})
	}));
}

Resources_sv::Resources_sv() {
}

$Class* Resources_sv::load$($String* name, bool initialize) {
	$loadClass(Resources_sv, name, initialize, &_Resources_sv_ClassInfo_, clinit$Resources_sv, allocate$Resources_sv);
	return class$;
}

$Class* Resources_sv::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun