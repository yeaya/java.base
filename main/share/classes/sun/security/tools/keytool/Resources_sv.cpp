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
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_sv, getContents, $ObjectArray2*)},
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
			$of(u"Du har angett alternativet %s flera gånger. Alla förutom det sista ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"Endast ett kommando är tillåtet: du har angett både %1$s och %2$s."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"Läs \"Hjälp - Nyckelverktyg\" för alla tillgängliga kommandon"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"Hanteringsverktyg för nycklar och certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Kommandon:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Använd \"keytool -command_name -help\" för syntax för command_name.\nAnvänd alternativet -conf <url> för att ange en förkonfigurerad alternativfil."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"Genererar certifikatbegäran"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"Ändrar postalias"_s)
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
			$of(u"Genererar certifikat från certifikatbegäran"_s)
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
			$of(u"Importerar poster från identitetsdatabas i JDK 1.1.x-format"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importerar ett certifikat eller en certifikatkedja"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"Importerar ett lösenord"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importerar en eller alla poster från annat nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Klonar en nyckelpost"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"Ändrar nyckellösenordet för en post"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"Visar lista över poster i nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"Skriver ut innehållet i ett certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"Skriver ut innehållet i en certifikatbegäran"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"Skriver ut innehållet i en CRL-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"Genererar ett självsignerat certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"Ändrar lagerlösenordet för ett nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"aliasnamn för post som ska bearbetas"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("destinationsalias"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"lösenord för destinationsnyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"namn på destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"skyddat lösenord för destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"leverantörsnamn för destinationsnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"lösenord för destinationsnyckellager"_s)
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
			$of(u"X.509-tillägg"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"namn på utdatafil"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"namn på indatafil"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"namn på nyckelalgoritm"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"nyckellösenord"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of("nyckelbitstorlek"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"namn på nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"åtkomst till nyckellagret cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Varning: använd alternativet -cacerts för att få åtkomst till nyckellagret cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"nytt lösenord"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"fråga inte"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"lösenord med skyddad mekanism"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"lägg till säkerhetsleverantör per namn (t.ex. SunPKCS11)\nkonfigurera argument för -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"lägg till säkerhetsleverantör per fullt kvalificerat klassnamn\nkonfigurera argument för -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"leverantörsnamn"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"leverantörsklassökväg"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("utdata i RFC-format"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"namn på signaturalgoritm"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"källalias"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"lösenord för källnyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"namn på källnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"skyddat lösenord för källnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"leverantörsnamn för källnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"lösenord för källnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"typ av källnyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSL-servervärd och -port"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("signerad jar-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"startdatum/-tid för certifikatets giltighet"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"lösenord för nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of("nyckellagertyp"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"tillförlitliga certifikat från cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"utförliga utdata"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"antal dagar för giltighet"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"Serienummer på certifikat som ska återkallas"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("nyckelverktygsfel: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"Otillåtet alternativ:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"Otillåtet värde: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"Okänd lösenordstyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"Hittar inte miljövariabel: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Hittar inte fil: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"Kommandoalternativet {0} behöver ett argument."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Varning!  PKCS12-nyckellager har inte stöd för olika lösenord för lagret och nyckeln. Det användarspecificerade {0}-värdet ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"Alternativen -keystore och -storetype kan inte användas med alternativet -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-keystore måste vara NONE om -storetype är {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"För många försök. Programmet avslutas"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storepasswd- och -keypasswd-kommandon stöds inte om -storetype är {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-keypasswd-kommandon stöds inte om -storetype är PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-keypass och -new kan inte anges om -storetype är {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"om -protected har angetts får inte -storepass, -keypass och -new anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"om -srcprotected anges får -srcstorepass och -srckeypass inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"om nyckellagret inte är lösenordsskyddat får -storepass, -keypass och -new inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"om källnyckellagret inte är lösenordsskyddat får -srcstorepass och -srckeypass inte anges"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"Otillåtet värde för startdatum"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"Giltigheten måste vara större än noll"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s är inte en leverantör"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"Leverantören med namnet \"%s\" hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"Leverantören \"%s\" hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Syntaxfel: inget kommando angivet"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"Nyckellagrets källfil finns, men är tom: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Ange -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"Kan inte specificera både -v och -rfc med \'list\'-kommandot"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"Nyckellösenordet måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"Det nya lösenordet måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"Nyckellagerfilen finns, men är tom: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of("Nyckellagerfilen finns inte: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"Du måste ange destinationsalias"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"Du måste ange alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"Nyckellagerlösenordet måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"Ange det lösenord som ska lagras:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"Ange nyckellagerlösenord:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"Ange lösenord för källnyckellagret:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"Ange nyckellagerlösenord för destination:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Nyckellagerlösenordet är för kort - det måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"Okänd posttyp"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"För många fel. Alias har inte ändrats"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"Posten för alias {0} har importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"Posten för alias {0} har inte importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Ett problem uppstod vid importen av posten för alias {0}: {1}.\nPosten {0} har inte importerats."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Kommandoimporten slutförd: {0} poster har importerats, {1} poster var felaktiga eller annullerades"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Varning! Det befintliga aliaset {0} i destinationsnyckellagret skrivs över"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"Aliaset {0} finns redan. Vill du skriva över det? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"För många fel - försök igen senare"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"Certifikatbegäran har lagrats i filen <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"Skicka detta till certifikatutfärdaren"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of("om alias inte angivits ska inte heller destalias och srckeypass anges"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"Destinationsnyckellagret pkcs12 har olika storepass och keypass. Försök igen med -destkeypass angivet."_s)
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
			$of(u"{0} saknar öppen nyckel (certifikat)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"Kan inte härleda signaturalgoritm"_s)
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
			$of(u"Genererar {0} bitars {1}-nyckelpar och självsignerat certifikat ({2}) med en giltighet på {3} dagar\n\tför: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"Ange nyckellösenord för <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(RETURN om det är identiskt med nyckellagerlösenordet):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Nyckellösenordet är för kort - det måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"För många fel - nyckeln lades inte till i nyckellagret"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of("Destinationsaliaset <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Lösenordet är för kort - det måste innehålla minst 6 tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"För många fel. Nyckelposten har inte klonats"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"nyckellösenord för <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"Nyckellagerpost för <{0}> finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Skapar nyckellagerpost för <{0}> ..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"Inga poster från identitetsdatabasen har lagts till"_s)
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
			$of(u"Längd på certifikatskedja: "_s)
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
			$of(u"Nyckellagerleverantör: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Nyckellagret innehåller {0,number,integer} post"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Nyckellagret innehåller {0,number,integer} poster"_s)
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
			$of(u"{0} saknar öppen nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} saknar X.509-certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"Nytt certifikat (självsignerat):"_s)
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
			$of(u"Indata är inte ett X.509-certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of("Certifikatet finns redan i nyckellagerfilen under aliaset <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"Vill du fortfarande lägga till det? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"Certifikatet finns redan i den systemomspännande CA-nyckellagerfilen under aliaset <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"Vill du fortfarande lägga till det i ditt eget nyckellagret? [nej]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"Litar du på det här certifikatet? [nej]:  "_s)
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
			$of(u"Lösenorden måste vara olika"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Ange nytt {0} igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"Ange lösenord igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"Ange det nya lösenordet igen: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"De matchar inte. Försök igen"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"Ange aliasnamn för {0}:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"Ange ett nytt aliasnamn\t(skriv RETURN för att avbryta importen av denna post):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Ange aliasnamn:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(RETURN om det är det samma som för <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"Vad heter du i för- och efternamn?"_s)
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
			$of(u"Vilken är den tvåställiga landskoden?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"Är {0} korrekt?"_s)
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
			$of(u"Aliaset <{0}> refererar till en posttyp som inte är någon privat nyckelpost. Kommandot -keyclone har endast stöd för kloning av privata nyckelposter"_s)
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
			$of(u"Tidsstämpel:"_s)
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
			$of(u"Certifikatägare: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of("Ingen signerad jar-fil"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"Inget certifikat från SSL-servern"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* Integriteten för den information som lagras i nyckellagerfilen  *\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* måste du ange lösenordet för nyckellagret.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* Integriteten för den information som lagras i srckeystore*\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* måste du ange lösenordet för srckeystore.                *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"Certifikatsvaret innehåller inte någon öppen nyckel för <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"Ofullständig certifikatskedja i svaret"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"Certifikatskedjan i svaret går inte att verifiera: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"Toppnivåcertifikatet i svaret:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... är inte betrott. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"Vill du installera svaret ändå? [nej]:  "_s)
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
			$of(u"Certifikatsvaret och certifikatet i nyckellagret är identiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"Kunde inte upprätta kedja från svaret"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"Fel svar. Försök på nytt."_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of("Den hemliga nyckeln har inte genererats eftersom aliaset <{0}> redan finns"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"Ange -keysize för att skapa hemlig nyckel"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"VARNING: ej verifierad. Se till att -nyckellager är korrekt."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"Tillägg: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(Tomt värde)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"Tilläggsbegäran:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"Okänd keyUsage-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"Okänd extendedkeyUsage-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"Okänd AccessDescription-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"Okänd GeneralName-typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"Detta tillägg kan inte markeras som kritiskt. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"Udda antal hex-siffror påträffades: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"Okänd tilläggstyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"kommandot {0} är tvetydigt:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"Certifikatbegäran"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"Utfärdaren"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("Det genererade certifikatet"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"Den genererade listan över återkallade certifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"Den genererade certifikatbegäran"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("Certifikatet"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of(u"Listan över återkallade certifikat"_s)
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
			$of(u"Utfärdaren <%s> i cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"Utfärdaren <%s>"_s)
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
			$of(u"okänd storlek på nyckeln %s"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"Ägare: {0}\nUtfärdare: {1}\nSerienummer: {2}\nGiltigt från: {3}, till: {4}\nCertifikatfingeravtryck:\n\t SHA1: {5}\n\t SHA256: {6}\nSignaturalgoritmnamn: {7}\nAlgoritm för öppen nyckel för ämne: {8}\nVersion: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10-certifikatbegäran (version 1.0)\nÄmne: %1$s\nFormat: %2$s\nÖppen nyckel: %3$s\nSignaturalgoritm: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verifierades av %1$s i %2$s med en %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s använder signaturalgoritmen %2$s, vilket anses utgöra en säkerhetsrisk."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s använder en %2$s, vilket anses utgöra en säkerhetsrisk."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"Nyckellagret %1$s använder ett proprietärt format. Du bör migrera till PKCS12, som är ett branschstandardformat, med \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"Migrerade \"%1$s\" till %4$s. Nyckellagret %2$s säkerhetskopierades som \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"Det ursprungliga nyckellagret, \"%1$s\", säkerhetskopieras som \"%3$s\"..."_s)
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