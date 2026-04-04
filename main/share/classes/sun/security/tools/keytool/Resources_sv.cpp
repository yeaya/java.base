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

$ObjectArray2* Resources_sv::contents = nullptr;

void Resources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_sv::getContents() {
	return Resources_sv::contents;
}

void Resources_sv::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_sv::contents, $new($ObjectArray2, {
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
			"Alternativ:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"Du har angett alternativet %s flera gånger. Alla förutom det sista ignoreras."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"Endast ett kommando är tillåtet: du har angett både %1$s och %2$s."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			u"Läs \"Hjälp - Nyckelverktyg\" för alla tillgängliga kommandon"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"Hanteringsverktyg för nycklar och certifikat"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Kommandon:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"Använd \"keytool -command_name -help\" för syntax för command_name.\nAnvänd alternativet -conf <url> för att ange en förkonfigurerad alternativfil."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			u"Genererar certifikatbegäran"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			u"Ändrar postalias"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			"Tar bort en post"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exporterar certifikat"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			"Genererar nyckelpar"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Genererar hemlig nyckel"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			u"Genererar certifikat från certifikatbegäran"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Genererar CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"Genererade {0} hemlig nyckel"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"Genererade {0}-bitars {1} hemlig nyckel"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"Importerar poster från identitetsdatabas i JDK 1.1.x-format"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Importerar ett certifikat eller en certifikatkedja"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			u"Importerar ett lösenord"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"Importerar en eller alla poster från annat nyckellager"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			"Klonar en nyckelpost"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"Ändrar nyckellösenordet för en post"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"Visar lista över poster i nyckellager"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			u"Skriver ut innehållet i ett certifikat"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			u"Skriver ut innehållet i en certifikatbegäran"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			u"Skriver ut innehållet i en CRL-fil"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			u"Genererar ett självsignerat certifikat"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"Ändrar lagerlösenordet för ett nyckellager"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			u"aliasnamn för post som ska bearbetas"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"destinationsalias"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"lösenord för destinationsnyckel"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"namn på destinationsnyckellager"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"skyddat lösenord för destinationsnyckellager"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"leverantörsnamn för destinationsnyckellager"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"lösenord för destinationsnyckellager"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			"typ av destinationsnyckellager"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"unikt namn"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			u"X.509-tillägg"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			u"namn på utdatafil"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			u"namn på indatafil"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			u"namn på nyckelalgoritm"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"nyckellösenord"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			"nyckelbitstorlek"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"namn på nyckellager"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"åtkomst till nyckellagret cacerts"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"Varning: använd alternativet -cacerts för att få åtkomst till nyckellagret cacerts"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			u"nytt lösenord"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			u"fråga inte"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"lösenord med skyddad mekanism"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"lägg till säkerhetsleverantör per namn (t.ex. SunPKCS11)\nkonfigurera argument för -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"lägg till säkerhetsleverantör per fullt kvalificerat klassnamn\nkonfigurera argument för -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			u"leverantörsnamn"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			u"leverantörsklassökväg"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"utdata i RFC-format"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			u"namn på signaturalgoritm"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			u"källalias"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"lösenord för källnyckel"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"namn på källnyckellager"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"skyddat lösenord för källnyckellager"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"leverantörsnamn för källnyckellager"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"lösenord för källnyckellager"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"typ av källnyckellager"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			u"SSL-servervärd och -port"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"signerad jar-fil"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"startdatum/-tid för certifikatets giltighet"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"lösenord för nyckellager"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			"nyckellagertyp"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"tillförlitliga certifikat från cacerts"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			u"utförliga utdata"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"antal dagar för giltighet"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			u"Serienummer på certifikat som ska återkallas"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"nyckelverktygsfel: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"Otillåtet alternativ:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			u"Otillåtet värde: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"Okänd lösenordstyp: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"Hittar inte miljövariabel: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Hittar inte fil: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"Kommandoalternativet {0} behöver ett argument."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Varning!  PKCS12-nyckellager har inte stöd för olika lösenord för lagret och nyckeln. Det användarspecificerade {0}-värdet ignoreras."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"Alternativen -keystore och -storetype kan inte användas med alternativet -cacerts"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"-keystore måste vara NONE om -storetype är {0}"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			u"För många försök. Programmet avslutas"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"-storepasswd- och -keypasswd-kommandon stöds inte om -storetype är {0}"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"-keypasswd-kommandon stöds inte om -storetype är PKCS12"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"-keypass och -new kan inte anges om -storetype är {0}"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"om -protected har angetts får inte -storepass, -keypass och -new anges"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"om -srcprotected anges får -srcstorepass och -srckeypass inte anges"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"om nyckellagret inte är lösenordsskyddat får -storepass, -keypass och -new inte anges"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"om källnyckellagret inte är lösenordsskyddat får -srcstorepass och -srckeypass inte anges"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"Otillåtet värde för startdatum"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"Giltigheten måste vara större än noll"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%s är inte en leverantör"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"Leverantören med namnet \"%s\" hittades inte"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"Leverantören \"%s\" hittades inte"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			"Syntaxfel: inget kommando angivet"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"Nyckellagrets källfil finns, men är tom: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Ange -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"Kan inte specificera både -v och -rfc med \'list\'-kommandot"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"Nyckellösenordet måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"Det nya lösenordet måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"Nyckellagerfilen finns, men är tom: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			"Nyckellagerfilen finns inte: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"Du måste ange destinationsalias"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"Du måste ange alias"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"Nyckellagerlösenordet måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			u"Ange det lösenord som ska lagras:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"Ange nyckellagerlösenord:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"Ange lösenord för källnyckellagret:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"Ange nyckellagerlösenord för destination:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"Nyckellagerlösenordet är för kort - det måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			u"Okänd posttyp"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"För många fel. Alias har inte ändrats"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"Posten för alias {0} har importerats."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"Posten för alias {0} har inte importerats."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"Ett problem uppstod vid importen av posten för alias {0}: {1}.\nPosten {0} har inte importerats."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"Kommandoimporten slutförd: {0} poster har importerats, {1} poster var felaktiga eller annullerades"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"Varning! Det befintliga aliaset {0} i destinationsnyckellagret skrivs över"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"Aliaset {0} finns redan. Vill du skriva över det? [nej]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"För många fel - försök igen senare"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"Certifikatbegäran har lagrats i filen <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			u"Skicka detta till certifikatutfärdaren"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			"om alias inte angivits ska inte heller destalias och srckeypass anges"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"Destinationsnyckellagret pkcs12 har olika storepass och keypass. Försök igen med -destkeypass angivet."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			"Certifikatet har lagrats i filen <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			"Certifikatsvaret har installerats i nyckellagret"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			"Certifikatsvaret har inte installerats i nyckellagret"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			"Certifikatet har lagts till i nyckellagret"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			"Certifikatet har inte lagts till i nyckellagret"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Lagrar {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0} saknar öppen nyckel (certifikat)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			u"Kan inte härleda signaturalgoritm"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"Aliaset <{0}> finns inte"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			"Aliaset <{0}> saknar certifikat"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			"Nyckelparet genererades inte. Aliaset <{0}> finns redan"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"Genererar {0} bitars {1}-nyckelpar och självsignerat certifikat ({2}) med en giltighet på {3} dagar\n\tför: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"Ange nyckellösenord för <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(RETURN om det är identiskt med nyckellagerlösenordet):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"Nyckellösenordet är för kort - det måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"För många fel - nyckeln lades inte till i nyckellagret"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			"Destinationsaliaset <{0}> finns redan"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"Lösenordet är för kort - det måste innehålla minst 6 tecken"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"För många fel. Nyckelposten har inte klonats"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"nyckellösenord för <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"Nyckellagerpost för <{0}> finns redan"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"Skapar nyckellagerpost för <{0}> ..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"Inga poster från identitetsdatabasen har lagts till"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Aliasnamn: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			"Skapat den: {0,date}"_s
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
			"Posttyp: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			u"Längd på certifikatskedja: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certifikat[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Certifikatfingeravtryck (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			"Nyckellagertyp: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"Nyckellagerleverantör: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"Nyckellagret innehåller {0,number,integer} post"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"Nyckellagret innehåller {0,number,integer} poster"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Kunde inte tolka indata"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			"Inga indata"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			"Inte ett X.509-certifikat"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0} saknar öppen nyckel"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			"{0} saknar X.509-certifikat"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			u"Nytt certifikat (självsignerat):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			"Svaret saknar certifikat"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			"Certifikatet importerades inte. Aliaset <{0}> finns redan"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"Indata är inte ett X.509-certifikat"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			"Certifikatet finns redan i nyckellagerfilen under aliaset <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"Vill du fortfarande lägga till det? [nej]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"Certifikatet finns redan i den systemomspännande CA-nyckellagerfilen under aliaset <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"Vill du fortfarande lägga till det i ditt eget nyckellagret? [nej]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"Litar du på det här certifikatet? [nej]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			"JA"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Nytt {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"Lösenorden måste vara olika"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Ange nytt {0} igen: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			u"Ange lösenord igen: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			u"Ange det nya lösenordet igen: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"De matchar inte. Försök igen"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			u"Ange aliasnamn för {0}:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"Ange ett nytt aliasnamn\t(skriv RETURN för att avbryta importen av denna post):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Ange aliasnamn:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			u"\t(RETURN om det är det samma som för <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"Vad heter du i för- och efternamn?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			"Vad heter din avdelning inom organisationen?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			"Vad heter din organisation?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			"Vad heter din ort eller plats?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			"Vad heter ditt land eller din provins?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"Vilken är den tvåställiga landskoden?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"Är {0} korrekt?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"nej"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"ja"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"j"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			"Aliaset <{0}> saknar nyckel"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"Aliaset <{0}> refererar till en posttyp som inte är någon privat nyckelpost. Kommandot -keyclone har endast stöd för kloning av privata nyckelposter"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			"Undertecknare %d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			u"Tidsstämpel:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Signatur:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRL:er:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"Certifikatägare: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			"Ingen signerad jar-fil"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			u"Inget certifikat från SSL-servern"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* Integriteten för den information som lagras i nyckellagerfilen  *\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* måste du ange lösenordet för nyckellagret.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* Integriteten för den information som lagras i srckeystore*\n* har INTE verifierats!  Om du vill verifiera dess integritet *\n* måste du ange lösenordet för srckeystore.                *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"Certifikatsvaret innehåller inte någon öppen nyckel för <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			u"Ofullständig certifikatskedja i svaret"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			u"Certifikatskedjan i svaret går inte att verifiera: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			u"Toppnivåcertifikatet i svaret:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... är inte betrott. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"Vill du installera svaret ändå? [nej]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"NEJ"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			"De offentliga nycklarna i svaret och nyckellagret matchar inte varandra"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"Certifikatsvaret och certifikatet i nyckellagret är identiska"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			u"Kunde inte upprätta kedja från svaret"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			u"Fel svar. Försök på nytt."_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			"Den hemliga nyckeln har inte genererats eftersom aliaset <{0}> redan finns"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"Ange -keysize för att skapa hemlig nyckel"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"VARNING: ej verifierad. Se till att -nyckellager är korrekt."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			u"Tillägg: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			u"(Tomt värde)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			u"Tilläggsbegäran:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			u"Okänd keyUsage-typ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			u"Okänd extendedkeyUsage-typ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			u"Okänd AccessDescription-typ: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			u"Okänd GeneralName-typ: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"Detta tillägg kan inte markeras som kritiskt. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"Udda antal hex-siffror påträffades: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			u"Okänd tilläggstyp: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"kommandot {0} är tvetydigt:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			u"Certifikatbegäran"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			u"Utfärdaren"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"Det genererade certifikatet"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			u"Den genererade listan över återkallade certifikat"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			u"Den genererade certifikatbegäran"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"Certifikatet"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			u"Listan över återkallade certifikat"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"TSA-certifikatet"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"Indata"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Svar"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d av %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			u"Utfärdaren <%s> i cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			u"Utfärdaren <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (svag)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"%1$d-bitars %2$s-nyckel"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			"%1$d-bitars %2$s-nyckel (svag)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"okänd storlek på nyckeln %s"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"Ägare: {0}\nUtfärdare: {1}\nSerienummer: {2}\nGiltigt från: {3}, till: {4}\nCertifikatfingeravtryck:\n\t SHA1: {5}\n\t SHA256: {6}\nSignaturalgoritmnamn: {7}\nAlgoritm för öppen nyckel för ämne: {8}\nVersion: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"PKCS #10-certifikatbegäran (version 1.0)\nÄmne: %1$s\nFormat: %2$s\nÖppen nyckel: %3$s\nSignaturalgoritm: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Verifierades av %1$s i %2$s med en %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			u"%1$s använder signaturalgoritmen %2$s, vilket anses utgöra en säkerhetsrisk."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			u"%1$s använder en %2$s, vilket anses utgöra en säkerhetsrisk."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"Nyckellagret %1$s använder ett proprietärt format. Du bör migrera till PKCS12, som är ett branschstandardformat, med \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"Migrerade \"%1$s\" till %4$s. Nyckellagret %2$s säkerhetskopierades som \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"Det ursprungliga nyckellagret, \"%1$s\", säkerhetskopieras som \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			"Importerar nyckellagret %1$s till %2$s..."_s
		})
	}));
}

Resources_sv::Resources_sv() {
}

$Class* Resources_sv::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_sv, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_sv",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_sv, name, initialize, &classInfo$$, Resources_sv::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_sv);
	});
	return class$;
}

$Class* Resources_sv::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun