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

$ObjectArray2* Resources_it::contents = nullptr;

void Resources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_it::getContents() {
	return Resources_it::contents;
}

void Resources_it::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_it::contents, $new($ObjectArray2, {
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
			"Opzioni:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"L\'opzione %s è specificata più volte. Tutte le ricorrenze verranno ignorate tranne l\'ultima."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"È consentito un solo comando: è stato specificato sia %1$s che %2$s."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			"Utilizzare \"keytool -help\" per visualizzare tutti i comandi disponibili"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			"Strumento di gestione di chiavi e certificati"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Comandi:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			"Utilizzare \"keytool -command_name -help\" per informazioni sull\'uso di command_name.\nUtilizzare l\'opzione -conf <url> per specificare un file di opzioni preconfigurato."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			"Genera una richiesta di certificato"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			"Modifica l\'alias di una voce"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			"Elimina una voce"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Esporta il certificato"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			"Genera una coppia di chiavi"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Genera una chiave segreta"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			"Genera un certificato da una richiesta di certificato"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Genera CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"Generata chiave segreta {0}"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"Generata chiave segreta {1} a {0} bit"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"Importa le voci da un database delle identità di tipo JDK 1.1.x"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Importa un certificato o una catena di certificati"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			"Importa una password"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			"Importa una o tutte le voci da un altro keystore"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			"Duplica una voce di chiave"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			"Modifica la password della chiave per una voce"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			"Elenca le voci in un keystore"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			"Visualizza i contenuti di un certificato"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			"Visualizza i contenuti di una richiesta di certificato"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			"Visualizza i contenuti di un file CRL"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			"Genera certificato con firma automatica"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			"Modifica la password di area di memorizzazione di un keystore"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			"nome alias della voce da elaborare"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"alias di destinazione"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			"password chiave di destinazione"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			"nome keystore di destinazione"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			"password keystore di destinazione protetta"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			"nome provider keystore di destinazione"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			"password keystore di destinazione"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			"tipo keystore di destinazione"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"nome distinto"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			"estensione X.509"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			"nome file di output"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			"nome file di input"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			"nome algoritmo chiave"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			"password chiave"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			"dimensione bit chiave"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			"nome keystore"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			"accedi al keystore cacerts"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			"Avvertenza: utilizzare l\'opzione -cacerts per accedere al keystore cacerts"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			"nuova password"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			"non richiedere"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			"password mediante meccanismo protetto"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			"aggiunge il provider di sicurezza in base al nome (ad esempio SunPKCS11)\nconfigura l\'argomento per -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			"aggiunge il provider di sicurezza in base al nome di classe completamente qualificato\nconfigura l\'argomento per -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"nome provider"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"classpath provider"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"output in stile RFC"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"nome algoritmo firma"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"alias origine"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			"password chiave di origine"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			"nome keystore di origine"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			"password keystore di origine protetta"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			"nome provider keystore di origine"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			"password keystore di origine"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			"tipo keystore di origine"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			"host e porta server SSL"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"file jar firmato"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"data/ora di inizio validità certificato"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			"password keystore"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			"tipo keystore"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			"considera sicuri i certificati da cacerts"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			"output descrittivo"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"numero di giorni di validità"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			"ID seriale del certificato da revocare"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"Errore keytool: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			"Opzione non valida:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			"Valore non valido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Tipo di password sconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"Impossibile trovare la variabile di ambiente: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Impossibile trovare il file: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"È necessario specificare un argomento per l\'\'opzione di comando {0}."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Avvertenza: non sono supportate password diverse di chiave e di archivio per i keystore PKCS12. Il valore {0} specificato dall\'\'utente verrà ignorato."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"L\'opzione -keystore o -storetype non può essere utilizzata con l\'opzione -cacerts"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"Se -storetype è impostato su {0}, -keystore deve essere impostato su NONE"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			u"Il numero dei tentativi consentiti è stato superato. Il programma verrà terminato."_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"Se -storetype è impostato su {0}, i comandi -storepasswd e -keypasswd non sono supportati"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"Se -storetype è impostato su PKCS12 i comandi -keypasswd non vengono supportati"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"Se -storetype è impostato su {0}, non è possibile specificare un valore per -keypass e -new"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Se è specificata l\'opzione -protected, le opzioni -storepass, -keypass e -new non possono essere specificate"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			"Se viene specificato -srcprotected, -srcstorepass e -srckeypass non dovranno essere specificati"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Se il file keystore non è protetto da password, non deve essere specificato alcun valore per -storepass, -keypass e -new"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Se il file keystore non è protetto da password, non deve essere specificato alcun valore per -srcstorepass e -srckeypass"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			"Valore di data di inizio non valido"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"La validità deve essere maggiore di zero"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%s non è un provider"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			"Provider denominato \"%s\" non trovato"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"Provider \"%s\" non trovato"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			"Errore di utilizzo: nessun comando specificato"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"Il file keystore di origine esiste, ma è vuoto: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Specificare -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			"Impossibile specificare sia -v sia -rfc con il comando \'list\'"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			"La password della chiave deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			"La nuova password deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"Il file keystore esiste ma è vuoto: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			"Il file keystore non esiste: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"È necessario specificare l\'alias di destinazione"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"È necessario specificare l\'alias"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			"La password del keystore deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			"Immettere la password da memorizzare:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			"Immettere la password del keystore:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			"Immettere la password del keystore di origine:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			"Immettere la password del keystore di destinazione:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"La password del keystore è troppo corta - deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			"Tipo di voce sconosciuto"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"Numero eccessivo di errori. L\'alias non è stato modificato."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"La voce dell\'\'alias {0} è stata importata."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"La voce dell\'\'alias {0} non è stata importata."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"Si è verificato un problema durante l\'\'importazione della voce dell\'\'alias {0}: {1}.\nLa voce dell\'\'alias {0} non è stata importata."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			"Comando di importazione completato: {0} voce/i importata/e, {1} voce/i non importata/e o annullata/e"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			"Avvertenza: sovrascrittura in corso dell\'\'alias {0} nel file keystore di destinazione"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"La voce dell\'\'alias {0} esiste già. Sovrascrivere? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			"Troppi errori - riprovare"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"La richiesta di certificazione è memorizzata nel file <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			"Sottomettere alla propria CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"Se l\'alias non è specificato, destalias e srckeypass non dovranno essere specificati"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			"Keystore pkcs12 di destinazione con storepass e keypass differenti. Riprovare con -destkeypass specificato."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			u"Il certificato è memorizzato nel file <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"La risposta del certificato è stata installata nel keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"La risposta del certificato non è stata installata nel keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"Il certificato è stato aggiunto al keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"Il certificato non è stato aggiunto al keystore"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Memorizzazione di {0}] in corso"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			"{0} non dispone di chiave pubblica (certificato)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			"Impossibile derivare l\'algoritmo di firma"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"L\'\'alias <{0}> non esiste"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			"L\'\'alias <{0}> non dispone di certificato"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"Non è stata generata la coppia di chiavi, l\'\'alias <{0}> è già esistente"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"Generazione in corso di una coppia di chiavi {1} da {0} bit e di un certificato autofirmato ({2}) con una validità di {3} giorni\n\tper: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			"Immettere la password della chiave per <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			"\t(INVIO se corrisponde alla password del keystore):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"La password della chiave è troppo corta - deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"Troppi errori - la chiave non è stata aggiunta al keystore"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			u"L\'\'alias di destinazione <{0}> è già esistente"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"La password è troppo corta - deve contenere almeno 6 caratteri"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"Numero eccessivo di errori. Il valore della chiave non è stato copiato."_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			"password della chiave per <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"La voce del keystore per <{0}> esiste già"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			"Creazione della voce del keystore per <{0}> in corso..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"Nessuna voce aggiunta dal database delle identità"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Nome alias: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			"Data di creazione: {0,date}"_s
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
			"Tipo di voce: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			"Lunghezza catena certificati: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certificato[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Copia di certificato (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			"Tipo keystore: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			"Provider keystore: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			"Il keystore contiene {0,number,integer} voce"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			"Il keystore contiene {0,number,integer} voci"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Impossibile analizzare l\'input"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			"Input vuoto"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			u"Il certificato non è X.509"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			"{0} non dispone di chiave pubblica"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			"{0} non dispone di certificato X.509"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			"Nuovo certificato (autofirmato):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			"La risposta non dispone di certificati"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			u"Impossibile importare il certificato, l\'\'alias <{0}> è già esistente"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"L\'input non è un certificato X.509"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"Il certificato esiste già nel keystore con alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			"Aggiungerlo ugualmente? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"Il certificato esiste già nel keystore CA con alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			"Aggiungerlo al proprio keystore? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			"Considerare sicuro questo certificato? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			u"Sì"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Nuova {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			"Le password non devono coincidere"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Reimmettere un nuovo valore per {0}: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			"Reimmettere la password: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			"Immettere nuovamente la nuova password: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			"Non corrispondono. Riprovare."_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"Immettere nome alias {0}:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			"Immettere un nuovo nome alias\t(premere INVIO per annullare l\'importazione della voce):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Immettere nome alias:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			"\t(INVIO se corrisponde al nome di <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			"Specificare nome e cognome"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"Specificare il nome dell\'unità organizzativa"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			"Specificare il nome dell\'organizzazione"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"Specificare la località"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			"Specificare la provincia"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"Specificare il codice a due lettere del paese in cui si trova l\'unità"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"Il dato {0} è corretto?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"no"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			u"sì"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"s"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			u"All\'\'alias <{0}> non è associata alcuna chiave"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"L\'\'alias <{0}> fa riferimento a un tipo di voce che non è una voce di chiave privata. Il comando -keyclone supporta solo la copia delle voci di chiave private."_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			"Firmatario #%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Indicatore orario:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Firma:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRL:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			"Proprietario certificato: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			u"Non è un file jar firmato"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			"Nessun certificato dal server SSL"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* L\'integrità delle informazioni memorizzate nel keystore *\n* NON è stata verificata. Per verificarne l\'integrità *\n* è necessario fornire la password del keystore.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* L\'integrità delle informazioni memorizzate nel srckeystore *\n* NON è stata verificata. Per verificarne l\'integrità *\n* è necessario fornire la password del srckeystore.                  *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			"La risposta del certificato non contiene la chiave pubblica per <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			"Catena dei certificati incompleta nella risposta"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			"La catena dei certificati nella risposta non verifica: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			"Certificato di primo livello nella risposta:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"...non è considerato sicuro. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			"Installare la risposta? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"NO"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			"Le chiavi pubbliche nella risposta e nel keystore non corrispondono"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			"La risposta del certificato e il certificato nel keystore sono identici"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			"Impossibile stabilire la catena dalla risposta"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			"Risposta errata, riprovare"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			u"La chiave segreta non è stata generata; l\'\'alias <{0}> esiste già"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			"Specificare il valore -keysize per la generazione della chiave segreta"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			"AVVERTENZA: non verificato. Assicurarsi che -keystore sia corretto."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			"Estensioni: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			"(valore vuoto)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			"Richiesta di estensione:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Tipo keyUsage sconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Tipo extendedkeyUsage sconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			"Tipo AccessDescription sconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			"Tipo GeneralName non riconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			"Impossibile contrassegnare questa estensione come critica. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"È stato trovato un numero dispari di cifre esadecimali: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			"Tipo di estensione sconosciuto: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"il comando {0} è ambiguo:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			"La richiesta di certificato"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"L\'emittente"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"Il certificato generato"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			"La CRL generata"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			"La richiesta di certificato generata"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"Il certificato"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"La CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"Il certificato TSA"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"L\'input"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Rispondi"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d di %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Emittente <%s> in cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Emittente <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (debole)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"Chiave %2$s a %1$d bit"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			"Chiave %2$s a %1$d bit (debole)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			"chiave %s di dimensione sconosciuta"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			"Proprietario: {0}\nEmittente: {1}\nNumero di serie: {2}\nValido da: {3} a: {4}\nImpronte digitali certificato:\n\t SHA1: {5}\n\t SHA256: {6}\nNome algoritmo firma: {7}\nAlgoritmo di chiave pubblica oggetto: {8}\nVersione: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			"Richiesta di certificato PKCS #10 (versione 1.0)\nOggetto: %1$s\nFormato: %2$s\nChiave pubblica: %3$s\nAlgoritmo firma: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Verificato da %1$s in %2$s con un %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			u"%1$s utilizza l\'algoritmo firma %2$s che è considerato un rischio per la sicurezza."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			u"%1$s utilizza un %2$s che è considerato un rischio per la sicurezza."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			"Il keystore %1$s utilizza un formato proprietario. Si consiglia di eseguire la migrazione a PKCS12, un formato standard di settore, utilizzando il comando \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			"Migrazione di \"%1$s\" in %4$s eseguita. Backup del keystore %2$s eseguito con il nome \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			"Backup del keystore originale \"%1$s\" eseguito con il nome \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			"Importazione del keystore %1$s in %2$s in corso..."_s
		})
	}));
}

Resources_it::Resources_it() {
}

$Class* Resources_it::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_it, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_it",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_it, name, initialize, &classInfo$$, Resources_it::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_it);
	});
	return class$;
}

$Class* Resources_it::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun