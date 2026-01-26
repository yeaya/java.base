#include <sun/security/tools/keytool/Resources_it.h>

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

$FieldInfo _Resources_it_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_it, contents)},
	{}
};

$MethodInfo _Resources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _Resources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_it",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_it_FieldInfo_,
	_Resources_it_MethodInfo_
};

$Object* allocate$Resources_it($Class* clazz) {
	return $of($alloc(Resources_it));
}

$ObjectArray2* Resources_it::contents = nullptr;

void Resources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_it::getContents() {
	return Resources_it::contents;
}

void clinit$Resources_it($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_it::contents, $new($ObjectArray2, {
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
			$of("Opzioni:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"L\'opzione %s è specificata più volte. Tutte le ricorrenze verranno ignorate tranne l\'ultima."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"È consentito un solo comando: è stato specificato sia %1$s che %2$s."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of("Utilizzare \"keytool -help\" per visualizzare tutti i comandi disponibili"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of("Strumento di gestione di chiavi e certificati"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Comandi:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of("Utilizzare \"keytool -command_name -help\" per informazioni sull\'uso di command_name.\nUtilizzare l\'opzione -conf <url> per specificare un file di opzioni preconfigurato."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of("Genera una richiesta di certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of("Modifica l\'alias di una voce"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of("Elimina una voce"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Esporta il certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of("Genera una coppia di chiavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Genera una chiave segreta"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of("Genera un certificato da una richiesta di certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Genera CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("Generata chiave segreta {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("Generata chiave segreta {1} a {0} bit"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"Importa le voci da un database delle identità di tipo JDK 1.1.x"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importa un certificato o una catena di certificati"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of("Importa una password"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of("Importa una o tutte le voci da un altro keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Duplica una voce di chiave"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of("Modifica la password della chiave per una voce"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of("Elenca le voci in un keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of("Visualizza i contenuti di un certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of("Visualizza i contenuti di una richiesta di certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of("Visualizza i contenuti di un file CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of("Genera certificato con firma automatica"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of("Modifica la password di area di memorizzazione di un keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of("nome alias della voce da elaborare"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("alias di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of("password chiave di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of("nome keystore di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of("password keystore di destinazione protetta"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of("nome provider keystore di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of("password keystore di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of("tipo keystore di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("nome distinto"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of("estensione X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of("nome file di output"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of("nome file di input"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of("nome algoritmo chiave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of("password chiave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of("dimensione bit chiave"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of("nome keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of("accedi al keystore cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of("Avvertenza: utilizzare l\'opzione -cacerts per accedere al keystore cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of("nuova password"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of("non richiedere"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of("password mediante meccanismo protetto"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of("aggiunge il provider di sicurezza in base al nome (ad esempio SunPKCS11)\nconfigura l\'argomento per -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of("aggiunge il provider di sicurezza in base al nome di classe completamente qualificato\nconfigura l\'argomento per -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("nome provider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("classpath provider"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("output in stile RFC"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("nome algoritmo firma"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("alias origine"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of("password chiave di origine"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of("nome keystore di origine"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of("password keystore di origine protetta"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of("nome provider keystore di origine"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of("password keystore di origine"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of("tipo keystore di origine"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of("host e porta server SSL"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("file jar firmato"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"data/ora di inizio validità certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of("password keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of("tipo keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of("considera sicuri i certificati da cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of("output descrittivo"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"numero di giorni di validità"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of("ID seriale del certificato da revocare"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("Errore keytool: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of("Opzione non valida:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of("Valore non valido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Tipo di password sconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("Impossibile trovare la variabile di ambiente: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Impossibile trovare il file: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"È necessario specificare un argomento per l\'\'opzione di comando {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Avvertenza: non sono supportate password diverse di chiave e di archivio per i keystore PKCS12. Il valore {0} specificato dall\'\'utente verrà ignorato."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"L\'opzione -keystore o -storetype non può essere utilizzata con l\'opzione -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"Se -storetype è impostato su {0}, -keystore deve essere impostato su NONE"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"Il numero dei tentativi consentiti è stato superato. Il programma verrà terminato."_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"Se -storetype è impostato su {0}, i comandi -storepasswd e -keypasswd non sono supportati"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"Se -storetype è impostato su PKCS12 i comandi -keypasswd non vengono supportati"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"Se -storetype è impostato su {0}, non è possibile specificare un valore per -keypass e -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Se è specificata l\'opzione -protected, le opzioni -storepass, -keypass e -new non possono essere specificate"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of("Se viene specificato -srcprotected, -srcstorepass e -srckeypass non dovranno essere specificati"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Se il file keystore non è protetto da password, non deve essere specificato alcun valore per -storepass, -keypass e -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Se il file keystore non è protetto da password, non deve essere specificato alcun valore per -srcstorepass e -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of("Valore di data di inizio non valido"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"La validità deve essere maggiore di zero"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s non è un provider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of("Provider denominato \"%s\" non trovato"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("Provider \"%s\" non trovato"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Errore di utilizzo: nessun comando specificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"Il file keystore di origine esiste, ma è vuoto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Specificare -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of("Impossibile specificare sia -v sia -rfc con il comando \'list\'"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of("La password della chiave deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of("La nuova password deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"Il file keystore esiste ma è vuoto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of("Il file keystore non esiste: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"È necessario specificare l\'alias di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"È necessario specificare l\'alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of("La password del keystore deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of("Immettere la password da memorizzare:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of("Immettere la password del keystore:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of("Immettere la password del keystore di origine:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of("Immettere la password del keystore di destinazione:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La password del keystore è troppo corta - deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of("Tipo di voce sconosciuto"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"Numero eccessivo di errori. L\'alias non è stato modificato."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"La voce dell\'\'alias {0} è stata importata."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"La voce dell\'\'alias {0} non è stata importata."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Si è verificato un problema durante l\'\'importazione della voce dell\'\'alias {0}: {1}.\nLa voce dell\'\'alias {0} non è stata importata."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of("Comando di importazione completato: {0} voce/i importata/e, {1} voce/i non importata/e o annullata/e"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of("Avvertenza: sovrascrittura in corso dell\'\'alias {0} nel file keystore di destinazione"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"La voce dell\'\'alias {0} esiste già. Sovrascrivere? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of("Troppi errori - riprovare"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"La richiesta di certificazione è memorizzata nel file <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of("Sottomettere alla propria CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"Se l\'alias non è specificato, destalias e srckeypass non dovranno essere specificati"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of("Keystore pkcs12 di destinazione con storepass e keypass differenti. Riprovare con -destkeypass specificato."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"Il certificato è memorizzato nel file <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"La risposta del certificato è stata installata nel keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"La risposta del certificato non è stata installata nel keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"Il certificato è stato aggiunto al keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"Il certificato non è stato aggiunto al keystore"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Memorizzazione di {0}] in corso"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of("{0} non dispone di chiave pubblica (certificato)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of("Impossibile derivare l\'algoritmo di firma"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("L\'\'alias <{0}> non esiste"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of("L\'\'alias <{0}> non dispone di certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"Non è stata generata la coppia di chiavi, l\'\'alias <{0}> è già esistente"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"Generazione in corso di una coppia di chiavi {1} da {0} bit e di un certificato autofirmato ({2}) con una validità di {3} giorni\n\tper: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of("Immettere la password della chiave per <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of("\t(INVIO se corrisponde alla password del keystore):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La password della chiave è troppo corta - deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"Troppi errori - la chiave non è stata aggiunta al keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"L\'\'alias di destinazione <{0}> è già esistente"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La password è troppo corta - deve contenere almeno 6 caratteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"Numero eccessivo di errori. Il valore della chiave non è stato copiato."_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of("password della chiave per <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"La voce del keystore per <{0}> esiste già"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of("Creazione della voce del keystore per <{0}> in corso..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"Nessuna voce aggiunta dal database delle identità"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Nome alias: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of("Data di creazione: {0,date}"_s)
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
			$of("Tipo di voce: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of("Lunghezza catena certificati: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certificato[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Copia di certificato (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of("Tipo keystore: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of("Provider keystore: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of("Il keystore contiene {0,number,integer} voce"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of("Il keystore contiene {0,number,integer} voci"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Impossibile analizzare l\'input"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of("Input vuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"Il certificato non è X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of("{0} non dispone di chiave pubblica"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} non dispone di certificato X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of("Nuovo certificato (autofirmato):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of("La risposta non dispone di certificati"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"Impossibile importare il certificato, l\'\'alias <{0}> è già esistente"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"L\'input non è un certificato X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"Il certificato esiste già nel keystore con alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of("Aggiungerlo ugualmente? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"Il certificato esiste già nel keystore CA con alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of("Aggiungerlo al proprio keystore? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of("Considerare sicuro questo certificato? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"Sì"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Nuova {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of("Le password non devono coincidere"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Reimmettere un nuovo valore per {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of("Reimmettere la password: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of("Immettere nuovamente la nuova password: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of("Non corrispondono. Riprovare."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("Immettere nome alias {0}:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of("Immettere un nuovo nome alias\t(premere INVIO per annullare l\'importazione della voce):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Immettere nome alias:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of("\t(INVIO se corrisponde al nome di <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of("Specificare nome e cognome"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"Specificare il nome dell\'unità organizzativa"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of("Specificare il nome dell\'organizzazione"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"Specificare la località"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of("Specificare la provincia"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"Specificare il codice a due lettere del paese in cui si trova l\'unità"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"Il dato {0} è corretto?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("no"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"sì"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("s"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of(u"All\'\'alias <{0}> non è associata alcuna chiave"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"L\'\'alias <{0}> fa riferimento a un tipo di voce che non è una voce di chiave privata. Il comando -keyclone supporta solo la copia delle voci di chiave private."_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of("Firmatario #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Indicatore orario:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Firma:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of("Proprietario certificato: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"Non è un file jar firmato"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of("Nessun certificato dal server SSL"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* L\'integrità delle informazioni memorizzate nel keystore *\n* NON è stata verificata. Per verificarne l\'integrità *\n* è necessario fornire la password del keystore.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* L\'integrità delle informazioni memorizzate nel srckeystore *\n* NON è stata verificata. Per verificarne l\'integrità *\n* è necessario fornire la password del srckeystore.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of("La risposta del certificato non contiene la chiave pubblica per <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of("Catena dei certificati incompleta nella risposta"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of("La catena dei certificati nella risposta non verifica: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of("Certificato di primo livello nella risposta:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"...non è considerato sicuro. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of("Installare la risposta? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("NO"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of("Le chiavi pubbliche nella risposta e nel keystore non corrispondono"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of("La risposta del certificato e il certificato nel keystore sono identici"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of("Impossibile stabilire la catena dalla risposta"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of("Risposta errata, riprovare"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"La chiave segreta non è stata generata; l\'\'alias <{0}> esiste già"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of("Specificare il valore -keysize per la generazione della chiave segreta"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of("AVVERTENZA: non verificato. Assicurarsi che -keystore sia corretto."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of("Estensioni: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of("(valore vuoto)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of("Richiesta di estensione:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Tipo keyUsage sconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Tipo extendedkeyUsage sconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of("Tipo AccessDescription sconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of("Tipo GeneralName non riconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of("Impossibile contrassegnare questa estensione come critica. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"È stato trovato un numero dispari di cifre esadecimali: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of("Tipo di estensione sconosciuto: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"il comando {0} è ambiguo:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of("La richiesta di certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("L\'emittente"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("Il certificato generato"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of("La CRL generata"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of("La richiesta di certificato generata"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("Il certificato"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("La CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("Il certificato TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("L\'input"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Rispondi"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d di %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Emittente <%s> in cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Emittente <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (debole)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("Chiave %2$s a %1$d bit"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of("Chiave %2$s a %1$d bit (debole)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of("chiave %s di dimensione sconosciuta"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of("Proprietario: {0}\nEmittente: {1}\nNumero di serie: {2}\nValido da: {3} a: {4}\nImpronte digitali certificato:\n\t SHA1: {5}\n\t SHA256: {6}\nNome algoritmo firma: {7}\nAlgoritmo di chiave pubblica oggetto: {8}\nVersione: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of("Richiesta di certificato PKCS #10 (versione 1.0)\nOggetto: %1$s\nFormato: %2$s\nChiave pubblica: %3$s\nAlgoritmo firma: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verificato da %1$s in %2$s con un %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s utilizza l\'algoritmo firma %2$s che è considerato un rischio per la sicurezza."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s utilizza un %2$s che è considerato un rischio per la sicurezza."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of("Il keystore %1$s utilizza un formato proprietario. Si consiglia di eseguire la migrazione a PKCS12, un formato standard di settore, utilizzando il comando \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of("Migrazione di \"%1$s\" in %4$s eseguita. Backup del keystore %2$s eseguito con il nome \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of("Backup del keystore originale \"%1$s\" eseguito con il nome \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of("Importazione del keystore %1$s in %2$s in corso..."_s)
		})
	}));
}

Resources_it::Resources_it() {
}

$Class* Resources_it::load$($String* name, bool initialize) {
	$loadClass(Resources_it, name, initialize, &_Resources_it_ClassInfo_, clinit$Resources_it, allocate$Resources_it);
	return class$;
}

$Class* Resources_it::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun