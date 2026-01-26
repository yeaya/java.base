#include <sun/security/util/AuthResources_de.h>

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

$FieldInfo _AuthResources_de_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_de, contents)},
	{}
};

$MethodInfo _AuthResources_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _AuthResources_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_de",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_de_FieldInfo_,
	_AuthResources_de_MethodInfo_
};

$Object* allocate$AuthResources_de($Class* clazz) {
	return $of($alloc(AuthResources_de));
}

$ObjectArray2* AuthResources_de::contents = nullptr;

void AuthResources_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_de::getContents() {
	return AuthResources_de::contents;
}

void clinit$AuthResources_de($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_de::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"Ungültige Nulleingabe: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"Ungültiger NTSid-Wert"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [Primärgruppe]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Zusatzgruppe]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"{0} kann nicht ordnungsgemäß erweitert werden"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of("{0} (Datei oder Verzeichnis nicht vorhanden)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of("Konfigurationsfehler:\n\tDatei oder Verzeichnis nicht vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"Konfigurationsfehler:\n\tUngültiges Steuerkennzeichen {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Konfigurationsfehler:\n\tEs können nicht mehrere Angaben für {0} gemacht werden."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of("Konfigurationsfehler:\n\t[{0}] erwartet, [Dateiende] gelesen"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of("Konfigurationsfehler:\n\tZeile {0}: [{1}] erwartet, [{2}] gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of("Konfigurationsfehler:\n\tZeile {0}: [{1}] erwartet"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of("Konfigurationsfehler:\n\tZeile {0}: Systemeigenschaft [{1}] auf leeren Wert erweitert"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of("Benutzername: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of("Kennwort: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of("Geben Sie die Keystore-Informationen ein"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of("Keystore-Alias: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of("Keystore-Kennwort: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of("Private Key-Kennwort (optional): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of("Kerberos-Benutzername [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"Kerberos-Kennwort für {0}: "_s)
		})
	}));
}

AuthResources_de::AuthResources_de() {
}

$Class* AuthResources_de::load$($String* name, bool initialize) {
	$loadClass(AuthResources_de, name, initialize, &_AuthResources_de_ClassInfo_, clinit$AuthResources_de, allocate$AuthResources_de);
	return class$;
}

$Class* AuthResources_de::class$ = nullptr;

		} // util
	} // security
} // sun