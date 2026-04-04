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

$ObjectArray2* Resources_de::contents = nullptr;

void Resources_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_de::getContents() {
	return Resources_de::contents;
}

void Resources_de::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_de::contents, $new($ObjectArray2, {
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
			"Optionen:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			"Die Option %s wurde mehrmals angegeben. Alle Angaben bis auf die letzte werden ignoriert."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"Nur ein Befehl ist zulässig: Sowohl %1$s als auch %2$s wurden angegeben."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			u"\"keytool -help\" für alle verfügbaren Befehle verwenden"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"Schlüssel- und Zertifikatsverwaltungstool"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Befehle:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"Verwenden Sie \"keytool -command_name -help\" für die Verwendung von command_name.\nVerwenden Sie die Option -conf <url>, um eine vorkonfigurierte Optionsdatei anzugeben."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			"Generiert eine Zertifikatanforderung"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			u"Ändert den Alias eines Eintrags"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			u"Löscht einen Eintrag"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exportiert ein Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			u"Generiert ein Schlüsselpaar"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Generiert einen Secret Key"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			"Generiert ein Zertifikat aus einer Zertifikatanforderung"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Generiert eine CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"{0} Secret Key generiert"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"{0}-Bit {1} Secret Key generiert"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"Importiert Einträge aus einer Identity-Datenbank im JDK 1.1.x-Stil"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Importiert ein Zertifikat oder eine Zertifikatskette"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			"Importiert ein Kennwort"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"Importiert einen oder alle Einträge aus einem anderen Keystore"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			u"Clont einen Schlüsseleintrag"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"Ändert das Schlüsselkennwort eines Eintrags"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"Listet die Einträge in einem Keystore auf"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			"Druckt den Content eines Zertifikats"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			"Druckt den Content einer Zertifikatanforderung"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			"Druckt den Content einer CRL-Datei"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			"Generiert ein selbst signiertes Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"Ändert das Speicherkennwort eines Keystores"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			"Aliasname des zu verarbeitenden Eintrags"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"Zielalias"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"Zielschlüssel-Kennwort"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			"Ziel-Keystore-Name"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"Ziel-Keystore kennwortgeschützt"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			"Ziel-Keystore-Providername"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			"Ziel-Keystore-Kennwort"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			"Ziel-Keystore-Typ"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"Distinguished Name"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			"X.509-Erweiterung"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			"Ausgabedateiname"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			"Eingabedateiname"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			u"Schlüsselalgorithmusname"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"Schlüsselkennwort"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			u"Schlüsselbitgröße"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			"Keystore-Name"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			"Zugriff auf den cacerts Keystore"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"Warnung: Verwenden Sie die Option -cacerts für den Zugriff auf den cacerts Keystore"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			"Neues Kennwort"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			"Kein Prompt"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"Kennwort über geschützten Mechanismus"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"Sicherheitsprovider nach Name hinzufügen (z.B. SunPKCS11)\nArgument für -addprovider konfigurieren"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"Sicherheitsprovider nach vollständig angegebenem Klassennamen hinzufügen\nArgument für -providerclass konfigurieren"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"Providername"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"Provider-Classpath"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"Ausgabe in RFC-Stil"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"Signaturalgorithmusname"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"Quellalias"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"Quellschlüssel-Kennwort"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			"Quell-Keystore-Name"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"Quell-Keystore kennwortgeschützt"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			"Quell-Keystore-Providername"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			"Quell-Keystore-Kennwort"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			"Quell-Keystore-Typ"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			"SSL-Serverhost und -port"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"Signierte JAR-Datei"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"Anfangsdatum/-zeit für Zertifikatsgültigkeit"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			"Keystore-Kennwort"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			"Keystore-Typ"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			"Zertifikaten aus cacerts vertrauen"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			"Verbose-Ausgabe"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"Gültigkeitsdauer (Tage)"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			"Serielle ID des zu entziehenden Certs"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"Keytool-Fehler: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"Ungültige Option:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			u"Ungültiger Wert: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Unbekannter Kennworttyp: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"Umgebungsvariable kann nicht gefunden werden: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Datei kann nicht gefunden werden: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"Befehlsoption {0} benötigt ein Argument."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Warnung: Keine Unterstützung für unterschiedliche Speicher- und Schlüsselkennwörter bei PKCS12 KeyStores. Der benutzerdefinierte Wert {0} wird ignoriert."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			"Die Option -keystore oder -storetype kann nicht mit der Option -cacerts verwendet werden"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			"-keystore muss NONE sein, wenn -storetype {0} ist"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			"Zu viele erneute Versuche. Programm wird beendet"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"Befehle -storepasswd und -keypasswd werden nicht unterstützt, wenn -storetype {0} ist"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"Befehle des Typs -keypasswd werden nicht unterstützt, wenn -storetype PKCS12 ist"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"-keypass und -new können nicht angegeben werden, wenn -storetype {0} ist"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Wenn -protected angegeben ist, dürfen -storepass, -keypass und -new nicht angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Wenn -srcprotected angegeben ist, dürfen -srcstorepass und -srckeypass nicht angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Wenn der Keystore nicht kennwortgeschützt ist, dürfen -storepass, -keypass und -new nicht angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Wenn der Quell-Keystore nicht kennwortgeschützt ist, dürfen -srcstorepass und -srckeypass nicht angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"Ungültiger Wert für Anfangsdatum"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"Gültigkeit muss größer als null sein"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			"%s kein Provider"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			"Provider namens \"%s\" nicht gefunden"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"Provider \"%s\" nicht gefunden"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			"Verwendungsfehler: Kein Befehl angegeben"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			"Quell-Keystore-Datei ist zwar vorhanden, ist aber leer: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Geben Sie -srckeystore an"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"-v und -rfc dürfen bei Befehl \"list\" nicht beide angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"Schlüsselkennwort muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			"Neues Kennwort muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			"Keystore-Datei ist vorhanden, ist aber leer: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			"Keystore-Datei ist nicht vorhanden: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"Sie müssen einen Zielalias angeben"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"Sie müssen einen Alias angeben"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			"Keystore-Kennwort muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			"Geben Sie das Kennwort ein, das gespeichert werden soll:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			"Keystore-Kennwort eingeben:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			"Quell-Keystore-Kennwort eingeben:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			"Ziel-Keystore-Kennwort eingeben:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			"Keystore-Kennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			"Unbekannter Eintragstyp"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"Zu viele Fehler. Alias nicht geändert"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"Eintrag für Alias {0} erfolgreich importiert."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"Eintrag für Alias {0} nicht importiert."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"Problem beim Importieren des Eintrags für Alias {0}: {1}.\nEintrag für Alias {0} nicht importiert."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"Importbefehl abgeschlossen: {0} Einträge erfolgreich importiert, {1} Einträge nicht erfolgreich oder abgebrochen"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"Warnung: Vorhandener Alias {0} in Ziel-Keystore wird überschrieben"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"Eintragsalias {0} ist bereits vorhanden. Überschreiben? [Nein]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"Zu viele Fehler. Versuchen Sie es später erneut"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			"Zertifizierungsanforderung in Datei <{0}> gespeichert"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			"Leiten Sie dies an die CA weiter"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"Wenn kein Alias angegeben ist, dürfen destalias und srckeypass nicht angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"Der Ziel-Keystore pkcs12 hat unterschiedliche Kennwörter für storepass und keypass. Wiederholen Sie den Vorgang, indem Sie -destkeypass angeben."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			"Zertifikat in Datei <{0}> gespeichert"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			"Zertifikatantwort wurde in Keystore installiert"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			"Zertifikatantwort wurde nicht in Keystore installiert"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"Zertifikat wurde Keystore hinzugefügt"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"Zertifikat wurde nicht zu Keystore hinzugefügt"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[{0} wird gesichert]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			"{0} hat keinen Public Key (Zertifikat)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			"Signaturalgorithmus kann nicht abgeleitet werden"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"Alias <{0}> ist nicht vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			"Alias <{0}> hat kein Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"Schlüsselpaar wurde nicht generiert. Alias <{0}> ist bereits vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"Generieren von Schlüsselpaar (Typ {1}, {0} Bit) und selbst signiertem Zertifikat ({2}) mit einer Gültigkeit von {3} Tagen\n\tfür: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"Schlüsselkennwort für <{0}> eingeben"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			"\t(RETURN, wenn identisch mit Keystore-Kennwort):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"Schlüsselkennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"Zu viele Fehler. Schlüssel wurde nicht zu Keystore hinzugefügt"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			"Zielalias <{0}> bereits vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			"Kennwort ist zu kurz. Es muss mindestens sechs Zeichen lang sein"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"Zu viele Fehler. Schlüsseleintrag wurde nicht geclont"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"Schlüsselkennwort für <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"Keystore-Eintrag für <{0}> bereits vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"Keystore-Eintrag für <{0}> wird erstellt..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"Keine Einträge aus Identity-Datenbank hinzugefügt"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Aliasname: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			"Erstellungsdatum: {0,date}"_s
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
			"Eintragstyp: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			u"Zertifikatskettenlänge: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Zertifikat[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Zertifikat-Fingerprint (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			"Keystore-Typ: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			"Keystore-Provider: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"Keystore enthält {0,number,integer} Eintrag"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"Keystore enthält {0,number,integer} Einträge"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Eingabe konnte nicht geparst werden"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			"Leere Eingabe"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			"Kein X.509-Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			"{0} hat keinen Public Key"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			"{0} hat kein X.509-Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			"Neues Zertifikat (selbst signiert):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			"Antwort hat keine Zertifikate"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			"Zertifikat nicht importiert. Alias <{0}> ist bereits vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			"Eingabe kein X.509-Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			"Zertifikat ist bereits unter Alias <{0}> im Keystore vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"Möchten Sie es trotzdem hinzufügen? [Nein]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			"Zertifikat ist bereits unter Alias <{0}> im systemweiten CA-Keystore vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"Möchten Sie es trotzdem zu Ihrem eigenen Keystore hinzufügen? [Nein]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			"Diesem Zertifikat vertrauen? [Nein]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			"JA"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Neues {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"Kennwörter müssen sich unterscheiden"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Neues {0} erneut eingeben: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			"Geben Sie das Kennwort erneut ein: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			"Neues Kennwort erneut eingeben: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"Keine Übereinstimmung. Wiederholen Sie den Vorgang"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"{0}-Aliasnamen eingeben:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			"Geben Sie einen neuen Aliasnamen ein\t(RETURN, um den Import dieses Eintrags abzubrechen):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Aliasnamen eingeben:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			"\t(RETURN, wenn identisch mit <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			"Wie lautet Ihr Vor- und Nachname?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			"Wie lautet der Name Ihrer organisatorischen Einheit?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			"Wie lautet der Name Ihrer Organisation?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			"Wie lautet der Name Ihrer Stadt oder Gemeinde?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			"Wie lautet der Name Ihres Bundeslands?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"Wie lautet der Ländercode (zwei Buchstaben) für diese Einheit?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			"Ist {0} richtig?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"Nein"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"Ja"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"J"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			u"Alias <{0}> verfügt über keinen Schlüssel"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"Alias <{0}> verweist auf einen Eintragstyp, der kein Private Key-Eintrag ist. Der Befehl -keyclone unterstützt nur das Klonen von Private Key-Einträgen"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			"Signaturgeber #%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Zeitstempel:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Signatur:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRLs:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"Zertifikateigentümer: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			"Keine signierte JAR-Datei"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			"Kein Zertifikat vom SSL-Server"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* Die Integrität der Informationen, die in Ihrem Keystore gespeichert sind, *\n* wurde NICHT geprüft. Um die Integrität zu prüfen, *\n* müssen Sie Ihr Keystore-Kennwort angeben.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* Die Integrität der Informationen, die in Ihrem Srckeystore gespeichert sind, *\n* wurde NICHT geprüft. Um die Integrität zu prüfen, *\n* müssen Sie Ihr Srckeystore-Kennwort angeben.                  *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"Zertifikatantwort enthält keinen Public Key für <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			u"Unvollständige Zertifikatskette in Antwort"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			"Zertifikatskette in Antwort verifiziert nicht: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			"Zertifikat der obersten Ebene in Antwort:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... ist nicht vertrauenswürdig. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			"Antwort trotzdem installieren? [Nein]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"NEIN"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"Public Keys in Antwort und Keystore stimmen nicht überein"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			"Zertifikatantwort und Zertifikat in Keystore sind identisch"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			"Kette konnte der Antwort nicht entnommen werden"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"N"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			"Falsche Antwort. Wiederholen Sie den Vorgang"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			"Secret Key wurde nicht generiert. Alias <{0}> ist bereits vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			"Geben Sie -keysize zum Erstellen eines Secret Keys an"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"WARNUNG: Nicht geprüft. Stellen Sie sicher, dass -keystore korrekt ist."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			"Erweiterungen: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			"(Leerer Wert)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			"Erweiterungsanforderung:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Unbekannter keyUsage-Typ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Unbekannter extendedkeyUsage-Typ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			"Unbekannter AccessDescription-Typ: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			"Unbekannter GeneralName-Typ: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			"Erweiterung kann nicht als \"Kritisch\" markiert werden. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			"Ungerade Anzahl hexadezimaler Ziffern gefunden: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			"Unbekannter Erweiterungstyp: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			"Befehl {0} ist mehrdeutig:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			"Die Zertifikatanforderung"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"Der Aussteller"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"Das generierte Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			"Die generierte CRL"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			"Die generierte Zertifikatanforderung"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"Das Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"Die CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"Das TSA-Zertifikat"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"Die Eingabe"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Antwort"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d von %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Aussteller <%s> in cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Aussteller <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (schwach)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"%1$d-Bit-%2$s-Schlüssel"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"%1$d-Bit-%2$s-Schlüssel (schwach)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"unbekannte Größe: %s-Schlüssel"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"Eigentümer: {0}\nAussteller: {1}\nSeriennummer: {2}\nGültig von: {3} bis: {4}\nZertifikatsfingerprints:\n\t SHA1: {5}\n\t SHA256: {6}\nSignaturalgorithmusname: {7}\nPublic Key-Algorithmus von Subject: {8}\nVersion: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			"PKCS #10-Zertifikatanforderung (Version 1.0)\nSubject: %1$s\nFormat: %2$s\nPublic Key: %3$s\nSignaturalgorithmus: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Von %1$s in %2$s mit %3$s verifiziert"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			"%1$s verwendet den Signaturalgorithmus %2$s. Dies gilt als Sicherheitsrisiko."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			"%1$s verwendet %2$s. Dies gilt als Sicherheitsrisiko."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"Der %1$s-Keystore verwendet ein proprietäres Format. Es wird empfohlen, auf PKCS12 zu migrieren, das ein Industriestandardformat mit \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\" ist."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			"\"%1$s\" zu %4$s migriert. Der %2$s-Keystore wurde als \"%3$s\" gesichert."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"Der ursprüngliche Keystore \"%1$s\" wird als \"%3$s\" gesichert..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			"Keystore %1$s wird in %2$s importiert..."_s
		})
	}));
}

Resources_de::Resources_de() {
}

$Class* Resources_de::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_de, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_de",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_de, name, initialize, &classInfo$$, Resources_de::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_de);
	});
	return class$;
}

$Class* Resources_de::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun