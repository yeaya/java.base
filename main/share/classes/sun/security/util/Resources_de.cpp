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
	"sun.security.util.Resources_de",
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
			$of("invalid.null.input.s."_s),
			$of(u"Ungültige Nulleingabe(n)"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"Aktionen können nur \"lesen\" sein"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"Syntax für Berechtigungsnamen [{0}] ungültig: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of("Nach Zugangsdatenklasse folgt keine Principal-Klasse und kein Name"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of("Nach Principal-Klasse folgt kein Principal-Name"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"Principal-Name muss in Anführungszeichen stehen"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"Abschließendes Anführungszeichen für Principal-Name fehlt"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of("Principal-Klasse PrivateCredentialPermission kann kein Platzhalterwert (*) sein, wenn der Principal-Name kein Platzhalterwert (*) ist"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tPrincipal-Klasse = {0}\n\tPrincipal-Name = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("Nullname angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"Null-Schlüsselwortzuordnung angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("Null-OID-Zuordnung angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"Ungültiger Nullwert für AccessControlContext angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"Ungültige Nullaktion angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"Ungültige Nullklasse angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Subjekt:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\tÖffentliche Zugangsdaten: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of("\tKein Zugriff auf private Zugangsdaten\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tPrivate Zugangsdaten: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of("\tKein Zugriff auf private Zugangsdaten\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"Subjekt ist schreibgeschützt"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"Es wird versucht, ein Objekt hinzuzufügen, das keine Instanz von java.security.Principal für eine Principal-Gruppe eines Subjekts ist"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"Es wird versucht, ein Objekt hinzuzufügen, das keine Instanz von {0} ist"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"Ungültige Nulleingabe: Name"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"Für {0} sind keine LoginModules konfiguriert"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"Ungültiges Nullsubjekt angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"Ungültiger Nullwert für CallbackHandler angegeben"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of("Nullsubjekt - Abmeldung vor Anmeldung aufgerufen"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of("LoginModule {0} kann nicht instanziiert werden, da es keinen argumentlosen Constructor angibt"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of("LoginModule kann nicht instanziiert werden"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of("LoginModule kann nicht instanziiert werden: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of("LoginModule-Klasse kann nicht gefunden werden: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"Kein Zugriff auf LoginModule möglich: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of("Anmeldefehler: Alle Module werden ignoriert"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy: Fehler beim Parsen von {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: Fehler beim Hinzufügen von Berechtigung, {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: Fehler beim Hinzufügen von Eintrag:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("Aliasname nicht angegeben ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"Substitution für Alias {0} kann nicht ausgeführt werden"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"Substitutionswert {0} nicht unterstützt"_s)
		}),
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("LPARAM"_s),
			$of("("_s)
		}),
		$$new($ObjectArray, {
			$of("RPARAM"_s),
			$of(")"_s)
		}),
		$$new($ObjectArray, {
			$of("type.can.t.be.null"_s),
			$of("Typ kann nicht null sein"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of("keystorePasswordURL kann nicht ohne Keystore angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of("Keystore-Typ erwartet"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of("Keystore-Provider erwartet"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"mehrere Codebase-Ausdrücke"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"mehrere SignedBy-Ausdrücke"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of("Keystore-Domainname doppelt vorhanden: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of("Keystore-Name doppelt vorhanden: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of("Leerer Alias in SignedBy"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of("Principal kann nicht mit einer Platzhalterklasse ohne Platzhalternamen angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("codeBase oder SignedBy oder Principal erwartet"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of("Berechtigungseintrag erwartet"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of("Nummer "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of("[{0}] erwartet, [Dateiende] gelesen"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of("[;] erwartet, [Dateiende] gelesen"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("Zeile {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of("Zeile {0}: [{1}] erwartet, [{2}] gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("principalClass oder principalName null"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"Kennwort für PKCS11-Token [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of("Subjektbasierte Policy kann nicht instanziiert werden"_s)
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

		} // util
	} // security
} // sun