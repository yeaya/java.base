#include <sun/security/tools/keytool/Resources_de.h>

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

$FieldInfo _Resources_de_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_de, contents)},
	{}
};

$MethodInfo _Resources_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_de::*)()>(&Resources_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_de",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_de_FieldInfo_,
	_Resources_de_MethodInfo_
};

$Object* allocate$Resources_de($Class* clazz) {
	return $of($alloc(Resources_de));
}

$ObjectArray2* Resources_de::contents = nullptr;

void Resources_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_de::getContents() {
	return Resources_de::contents;
}

void clinit$Resources_de($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_de::contents, $new($ObjectArray2, {
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
			$of("Optionen:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of("Die Option %s wurde mehrmals angegeben. Alle Angaben bis auf die letzte werden ignoriert."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"Nur ein Befehl ist zul\u00e4ssig: Sowohl %1$s als auch %2$s wurden angegeben."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"\"keytool -help\" f\u00fcr alle verf\u00fcgbaren Befehle verwenden"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"Schl\u00fcssel- und Zertifikatsverwaltungstool"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Befehle:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Verwenden Sie \"keytool -command_name -help\" f\u00fcr die Verwendung von command_name.\nVerwenden Sie die Option -conf <url>, um eine vorkonfigurierte Optionsdatei anzugeben."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of("Generiert eine Zertifikatanforderung"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"\u00c4ndert den Alias eines Eintrags"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"L\u00f6scht einen Eintrag"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exportiert ein Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"Generiert ein Schl\u00fcsselpaar"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Generiert einen Secret Key"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of("Generiert ein Zertifikat aus einer Zertifikatanforderung"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Generiert eine CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("{0} Secret Key generiert"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("{0}-Bit {1} Secret Key generiert"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"Importiert Eintr\u00e4ge aus einer Identity-Datenbank im JDK 1.1.x-Stil"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importiert ein Zertifikat oder eine Zertifikatskette"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of("Importiert ein Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importiert einen oder alle Eintr\u00e4ge aus einem anderen Keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"Clont einen Schl\u00fcsseleintrag"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"\u00c4ndert das Schl\u00fcsselkennwort eines Eintrags"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"Listet die Eintr\u00e4ge in einem Keystore auf"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of("Druckt den Content eines Zertifikats"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of("Druckt den Content einer Zertifikatanforderung"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of("Druckt den Content einer CRL-Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of("Generiert ein selbst signiertes Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"\u00c4ndert das Speicherkennwort eines Keystores"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of("Aliasname des zu verarbeitenden Eintrags"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("Zielalias"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"Zielschl\u00fcssel-Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of("Ziel-Keystore-Name"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"Ziel-Keystore kennwortgesch\u00fctzt"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of("Ziel-Keystore-Providername"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of("Ziel-Keystore-Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of("Ziel-Keystore-Typ"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("Distinguished Name"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of("X.509-Erweiterung"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of("Ausgabedateiname"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of("Eingabedateiname"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"Schl\u00fcsselalgorithmusname"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"Schl\u00fcsselkennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"Schl\u00fcsselbitgr\u00f6\u00dfe"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of("Keystore-Name"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of("Zugriff auf den cacerts Keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Warnung: Verwenden Sie die Option -cacerts f\u00fcr den Zugriff auf den cacerts Keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of("Neues Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of("Kein Prompt"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"Kennwort \u00fcber gesch\u00fctzten Mechanismus"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"Sicherheitsprovider nach Name hinzuf\u00fcgen (z.B. SunPKCS11)\nArgument f\u00fcr -addprovider konfigurieren"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"Sicherheitsprovider nach vollst\u00e4ndig angegebenem Klassennamen hinzuf\u00fcgen\nArgument f\u00fcr -providerclass konfigurieren"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("Providername"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("Provider-Classpath"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("Ausgabe in RFC-Stil"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("Signaturalgorithmusname"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("Quellalias"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"Quellschl\u00fcssel-Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of("Quell-Keystore-Name"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"Quell-Keystore kennwortgesch\u00fctzt"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of("Quell-Keystore-Providername"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of("Quell-Keystore-Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of("Quell-Keystore-Typ"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of("SSL-Serverhost und -port"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("Signierte JAR-Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"Anfangsdatum/-zeit f\u00fcr Zertifikatsg\u00fcltigkeit"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of("Keystore-Kennwort"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of("Keystore-Typ"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of("Zertifikaten aus cacerts vertrauen"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of("Verbose-Ausgabe"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"G\u00fcltigkeitsdauer (Tage)"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of("Serielle ID des zu entziehenden Certs"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("Keytool-Fehler: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"Ung\u00fcltige Option:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"Ung\u00fcltiger Wert: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Unbekannter Kennworttyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("Umgebungsvariable kann nicht gefunden werden: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Datei kann nicht gefunden werden: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"Befehlsoption {0} ben\u00f6tigt ein Argument."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Warnung: Keine Unterst\u00fctzung f\u00fcr unterschiedliche Speicher- und Schl\u00fcsselkennw\u00f6rter bei PKCS12 KeyStores. Der benutzerdefinierte Wert {0} wird ignoriert."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of("Die Option -keystore oder -storetype kann nicht mit der Option -cacerts verwendet werden"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of("-keystore muss NONE sein, wenn -storetype {0} ist"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of("Zu viele erneute Versuche. Programm wird beendet"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"Befehle -storepasswd und -keypasswd werden nicht unterst\u00fctzt, wenn -storetype {0} ist"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"Befehle des Typs -keypasswd werden nicht unterst\u00fctzt, wenn -storetype PKCS12 ist"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-keypass und -new k\u00f6nnen nicht angegeben werden, wenn -storetype {0} ist"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Wenn -protected angegeben ist, d\u00fcrfen -storepass, -keypass und -new nicht angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Wenn -srcprotected angegeben ist, d\u00fcrfen -srcstorepass und -srckeypass nicht angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Wenn der Keystore nicht kennwortgesch\u00fctzt ist, d\u00fcrfen -storepass, -keypass und -new nicht angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Wenn der Quell-Keystore nicht kennwortgesch\u00fctzt ist, d\u00fcrfen -srcstorepass und -srckeypass nicht angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"Ung\u00fcltiger Wert f\u00fcr Anfangsdatum"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"G\u00fcltigkeit muss gr\u00f6\u00dfer als null sein"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of("%s kein Provider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of("Provider namens \"%s\" nicht gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("Provider \"%s\" nicht gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Verwendungsfehler: Kein Befehl angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of("Quell-Keystore-Datei ist zwar vorhanden, ist aber leer: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Geben Sie -srckeystore an"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"-v und -rfc d\u00fcrfen bei Befehl \"list\" nicht beide angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"Schl\u00fcsselkennwort muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of("Neues Kennwort muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of("Keystore-Datei ist vorhanden, ist aber leer: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of("Keystore-Datei ist nicht vorhanden: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"Sie m\u00fcssen einen Zielalias angeben"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"Sie m\u00fcssen einen Alias angeben"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of("Keystore-Kennwort muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of("Geben Sie das Kennwort ein, das gespeichert werden soll:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of("Keystore-Kennwort eingeben:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of("Quell-Keystore-Kennwort eingeben:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of("Ziel-Keystore-Kennwort eingeben:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of("Keystore-Kennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of("Unbekannter Eintragstyp"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"Zu viele Fehler. Alias nicht ge\u00e4ndert"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"Eintrag f\u00fcr Alias {0} erfolgreich importiert."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"Eintrag f\u00fcr Alias {0} nicht importiert."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Problem beim Importieren des Eintrags f\u00fcr Alias {0}: {1}.\nEintrag f\u00fcr Alias {0} nicht importiert."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Importbefehl abgeschlossen: {0} Eintr\u00e4ge erfolgreich importiert, {1} Eintr\u00e4ge nicht erfolgreich oder abgebrochen"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Warnung: Vorhandener Alias {0} in Ziel-Keystore wird \u00fcberschrieben"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"Eintragsalias {0} ist bereits vorhanden. \u00dcberschreiben? [Nein]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"Zu viele Fehler. Versuchen Sie es sp\u00e4ter erneut"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of("Zertifizierungsanforderung in Datei <{0}> gespeichert"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of("Leiten Sie dies an die CA weiter"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"Wenn kein Alias angegeben ist, d\u00fcrfen destalias und srckeypass nicht angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"Der Ziel-Keystore pkcs12 hat unterschiedliche Kennw\u00f6rter f\u00fcr storepass und keypass. Wiederholen Sie den Vorgang, indem Sie -destkeypass angeben."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of("Zertifikat in Datei <{0}> gespeichert"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of("Zertifikatantwort wurde in Keystore installiert"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of("Zertifikatantwort wurde nicht in Keystore installiert"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"Zertifikat wurde Keystore hinzugef\u00fcgt"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"Zertifikat wurde nicht zu Keystore hinzugef\u00fcgt"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[{0} wird gesichert]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of("{0} hat keinen Public Key (Zertifikat)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of("Signaturalgorithmus kann nicht abgeleitet werden"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("Alias <{0}> ist nicht vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of("Alias <{0}> hat kein Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"Schl\u00fcsselpaar wurde nicht generiert. Alias <{0}> ist bereits vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"Generieren von Schl\u00fcsselpaar (Typ {1}, {0} Bit) und selbst signiertem Zertifikat ({2}) mit einer G\u00fcltigkeit von {3} Tagen\n\tf\u00fcr: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"Schl\u00fcsselkennwort f\u00fcr <{0}> eingeben"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of("\t(RETURN, wenn identisch mit Keystore-Kennwort):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Schl\u00fcsselkennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"Zu viele Fehler. Schl\u00fcssel wurde nicht zu Keystore hinzugef\u00fcgt"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of("Zielalias <{0}> bereits vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of("Kennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"Zu viele Fehler. Schl\u00fcsseleintrag wurde nicht geclont"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"Schl\u00fcsselkennwort f\u00fcr <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"Keystore-Eintrag f\u00fcr <{0}> bereits vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Keystore-Eintrag f\u00fcr <{0}> wird erstellt..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"Keine Eintr\u00e4ge aus Identity-Datenbank hinzugef\u00fcgt"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Aliasname: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of("Erstellungsdatum: {0,date}"_s)
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
			$of("Eintragstyp: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"Zertifikatskettenl\u00e4nge: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Zertifikat[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Zertifikat-Fingerprint (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of("Keystore-Typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of("Keystore-Provider: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Keystore enth\u00e4lt {0,number,integer} Eintrag"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Keystore enth\u00e4lt {0,number,integer} Eintr\u00e4ge"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Eingabe konnte nicht geparst werden"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of("Leere Eingabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of("Kein X.509-Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of("{0} hat keinen Public Key"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} hat kein X.509-Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of("Neues Zertifikat (selbst signiert):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of("Antwort hat keine Zertifikate"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of("Zertifikat nicht importiert. Alias <{0}> ist bereits vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of("Eingabe kein X.509-Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of("Zertifikat ist bereits unter Alias <{0}> im Keystore vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"M\u00f6chten Sie es trotzdem hinzuf\u00fcgen? [Nein]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of("Zertifikat ist bereits unter Alias <{0}> im systemweiten CA-Keystore vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"M\u00f6chten Sie es trotzdem zu Ihrem eigenen Keystore hinzuf\u00fcgen? [Nein]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of("Diesem Zertifikat vertrauen? [Nein]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of("JA"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Neues {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"Kennw\u00f6rter m\u00fcssen sich unterscheiden"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Neues {0} erneut eingeben: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of("Geben Sie das Kennwort erneut ein: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of("Neues Kennwort erneut eingeben: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"Keine \u00dcbereinstimmung. Wiederholen Sie den Vorgang"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("{0}-Aliasnamen eingeben:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of("Geben Sie einen neuen Aliasnamen ein\t(RETURN, um den Import dieses Eintrags abzubrechen):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Aliasnamen eingeben:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of("\t(RETURN, wenn identisch mit <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of("Wie lautet Ihr Vor- und Nachname?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of("Wie lautet der Name Ihrer organisatorischen Einheit?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of("Wie lautet der Name Ihrer Organisation?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of("Wie lautet der Name Ihrer Stadt oder Gemeinde?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of("Wie lautet der Name Ihres Bundeslands?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"Wie lautet der L\u00e4ndercode (zwei Buchstaben) f\u00fcr diese Einheit?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of("Ist {0} richtig?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Nein"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("Ja"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("J"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of(u"Alias <{0}> verf\u00fcgt \u00fcber keinen Schl\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"Alias <{0}> verweist auf einen Eintragstyp, der kein Private Key-Eintrag ist. Der Befehl -keyclone unterst\u00fctzt nur das Klonen von Private Key-Eintr\u00e4gen"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of("Signaturgeber #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Zeitstempel:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Signatur:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRLs:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"Zertifikateigent\u00fcmer: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of("Keine signierte JAR-Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of("Kein Zertifikat vom SSL-Server"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* Die Integrit\u00e4t der Informationen, die in Ihrem Keystore gespeichert sind, *\n* wurde NICHT gepr\u00fcft. Um die Integrit\u00e4t zu pr\u00fcfen, *\n* m\u00fcssen Sie Ihr Keystore-Kennwort angeben.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* Die Integrit\u00e4t der Informationen, die in Ihrem Srckeystore gespeichert sind, *\n* wurde NICHT gepr\u00fcft. Um die Integrit\u00e4t zu pr\u00fcfen, *\n* m\u00fcssen Sie Ihr Srckeystore-Kennwort angeben.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"Zertifikatantwort enth\u00e4lt keinen Public Key f\u00fcr <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"Unvollst\u00e4ndige Zertifikatskette in Antwort"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of("Zertifikatskette in Antwort verifiziert nicht: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of("Zertifikat der obersten Ebene in Antwort:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... ist nicht vertrauensw\u00fcrdig. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of("Antwort trotzdem installieren? [Nein]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("NEIN"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"Public Keys in Antwort und Keystore stimmen nicht \u00fcberein"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of("Zertifikatantwort und Zertifikat in Keystore sind identisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of("Kette konnte der Antwort nicht entnommen werden"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("N"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of("Falsche Antwort. Wiederholen Sie den Vorgang"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of("Secret Key wurde nicht generiert. Alias <{0}> ist bereits vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of("Geben Sie -keysize zum Erstellen eines Secret Keys an"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"WARNUNG: Nicht gepr\u00fcft. Stellen Sie sicher, dass -keystore korrekt ist."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of("Erweiterungen: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of("(Leerer Wert)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of("Erweiterungsanforderung:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Unbekannter keyUsage-Typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Unbekannter extendedkeyUsage-Typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of("Unbekannter AccessDescription-Typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of("Unbekannter GeneralName-Typ: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of("Erweiterung kann nicht als \"Kritisch\" markiert werden. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of("Ungerade Anzahl hexadezimaler Ziffern gefunden: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of("Unbekannter Erweiterungstyp: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of("Befehl {0} ist mehrdeutig:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of("Die Zertifikatanforderung"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("Der Aussteller"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("Das generierte Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of("Die generierte CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of("Die generierte Zertifikatanforderung"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("Das Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("Die CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("Das TSA-Zertifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("Die Eingabe"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Antwort"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d von %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Aussteller <%s> in cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Aussteller <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (schwach)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$d-Bit-%2$s-Schl\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$d-Bit-%2$s-Schl\u00fcssel (schwach)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"unbekannte Gr\u00f6\u00dfe: %s-Schl\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"Eigent\u00fcmer: {0}\nAussteller: {1}\nSeriennummer: {2}\nG\u00fcltig von: {3} bis: {4}\nZertifikatsfingerprints:\n\t SHA1: {5}\n\t SHA256: {6}\nSignaturalgorithmusname: {7}\nPublic Key-Algorithmus von Subject: {8}\nVersion: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of("PKCS #10-Zertifikatanforderung (Version 1.0)\nSubject: %1$s\nFormat: %2$s\nPublic Key: %3$s\nSignaturalgorithmus: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Von %1$s in %2$s mit %3$s verifiziert"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of("%1$s verwendet den Signaturalgorithmus %2$s. Dies gilt als Sicherheitsrisiko."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of("%1$s verwendet %2$s. Dies gilt als Sicherheitsrisiko."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"Der %1$s-Keystore verwendet ein propriet\u00e4res Format. Es wird empfohlen, auf PKCS12 zu migrieren, das ein Industriestandardformat mit \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\" ist."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of("\"%1$s\" zu %4$s migriert. Der %2$s-Keystore wurde als \"%3$s\" gesichert."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"Der urspr\u00fcngliche Keystore \"%1$s\" wird als \"%3$s\" gesichert..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of("Keystore %1$s wird in %2$s importiert..."_s)
		})
	}));
}

Resources_de::Resources_de() {
}

$Class* Resources_de::load$($String* name, bool initialize) {
	$loadClass(Resources_de, name, initialize, &_Resources_de_ClassInfo_, clinit$Resources_de, allocate$Resources_de);
	return class$;
}

$Class* Resources_de::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun