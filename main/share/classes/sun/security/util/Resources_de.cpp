#include <sun/security/util/Resources_de.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace util {

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
			"invalid.null.input.s."_s,
			u"Ungültige Nulleingabe(n)"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"Aktionen können nur \"lesen\" sein"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"Syntax für Berechtigungsnamen [{0}] ungültig: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			"Nach Zugangsdatenklasse folgt keine Principal-Klasse und kein Name"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			"Nach Principal-Klasse folgt kein Principal-Name"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"Principal-Name muss in Anführungszeichen stehen"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			u"Abschließendes Anführungszeichen für Principal-Name fehlt"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			"Principal-Klasse PrivateCredentialPermission kann kein Platzhalterwert (*) sein, wenn der Principal-Name kein Platzhalterwert (*) ist"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tPrincipal-Klasse = {0}\n\tPrincipal-Name = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"Nullname angegeben"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"Null-Schlüsselwortzuordnung angegeben"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"Null-OID-Zuordnung angegeben"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"Ungültiger Nullwert für AccessControlContext angegeben"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"Ungültige Nullaktion angegeben"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"Ungültige Nullklasse angegeben"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Subjekt:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\tÖffentliche Zugangsdaten: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			"\tKein Zugriff auf private Zugangsdaten\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tPrivate Zugangsdaten: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			"\tKein Zugriff auf private Zugangsdaten\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"Subjekt ist schreibgeschützt"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"Es wird versucht, ein Objekt hinzuzufügen, das keine Instanz von java.security.Principal für eine Principal-Gruppe eines Subjekts ist"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"Es wird versucht, ein Objekt hinzuzufügen, das keine Instanz von {0} ist"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"Ungültige Nulleingabe: Name"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"Für {0} sind keine LoginModules konfiguriert"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"Ungültiges Nullsubjekt angegeben"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"Ungültiger Nullwert für CallbackHandler angegeben"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			"Nullsubjekt - Abmeldung vor Anmeldung aufgerufen"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			"LoginModule {0} kann nicht instanziiert werden, da es keinen argumentlosen Constructor angibt"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			"LoginModule kann nicht instanziiert werden"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			"LoginModule kann nicht instanziiert werden: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			"LoginModule-Klasse kann nicht gefunden werden: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"Kein Zugriff auf LoginModule möglich: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			"Anmeldefehler: Alle Module werden ignoriert"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy: Fehler beim Parsen von {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: Fehler beim Hinzufügen von Berechtigung, {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: Fehler beim Hinzufügen von Eintrag:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"Aliasname nicht angegeben ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"Substitution für Alias {0} kann nicht ausgeführt werden"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"Substitutionswert {0} nicht unterstützt"_s
		}),
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"LPARAM"_s,
			"("_s
		}),
		$$new($ObjectArray, {
			"RPARAM"_s,
			")"_s
		}),
		$$new($ObjectArray, {
			"type.can.t.be.null"_s,
			"Typ kann nicht null sein"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			"keystorePasswordURL kann nicht ohne Keystore angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			"Keystore-Typ erwartet"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			"Keystore-Provider erwartet"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"mehrere Codebase-Ausdrücke"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"mehrere SignedBy-Ausdrücke"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			"Keystore-Domainname doppelt vorhanden: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			"Keystore-Name doppelt vorhanden: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			"Leerer Alias in SignedBy"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			"Principal kann nicht mit einer Platzhalterklasse ohne Platzhalternamen angegeben werden"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"codeBase oder SignedBy oder Principal erwartet"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			"Berechtigungseintrag erwartet"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			"Nummer "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			"[{0}] erwartet, [Dateiende] gelesen"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			"[;] erwartet, [Dateiende] gelesen"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"Zeile {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			"Zeile {0}: [{1}] erwartet, [{2}] gefunden"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"principalClass oder principalName null"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"Kennwort für PKCS11-Token [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			"Subjektbasierte Policy kann nicht instanziiert werden"_s
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
		"sun.security.util.Resources_de",
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

		} // util
	} // security
} // sun