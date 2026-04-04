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

$ObjectArray2* AuthResources_de::contents = nullptr;

void AuthResources_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_de::getContents() {
	return AuthResources_de::contents;
}

void AuthResources_de::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_de::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"Ungültige Nulleingabe: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential: {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			u"Ungültiger NTSid-Wert"_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			u"UnixNumericGroupPrincipal [Primärgruppe]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			"UnixNumericGroupPrincipal [Zusatzgruppe]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			u"{0} kann nicht ordnungsgemäß erweitert werden"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			"{0} (Datei oder Verzeichnis nicht vorhanden)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			"Konfigurationsfehler:\n\tDatei oder Verzeichnis nicht vorhanden"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"Konfigurationsfehler:\n\tUngültiges Steuerkennzeichen {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Konfigurationsfehler:\n\tEs können nicht mehrere Angaben für {0} gemacht werden."_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			"Konfigurationsfehler:\n\t[{0}] erwartet, [Dateiende] gelesen"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			"Konfigurationsfehler:\n\tZeile {0}: [{1}] erwartet, [{2}] gefunden"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			"Konfigurationsfehler:\n\tZeile {0}: [{1}] erwartet"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			"Konfigurationsfehler:\n\tZeile {0}: Systemeigenschaft [{1}] auf leeren Wert erweitert"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			"Benutzername: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			"Kennwort: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			"Geben Sie die Keystore-Informationen ein"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			"Keystore-Alias: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			"Keystore-Kennwort: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			"Private Key-Kennwort (optional): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			"Kerberos-Benutzername [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"Kerberos-Kennwort für {0}: "_s
		})
	}));
}

AuthResources_de::AuthResources_de() {
}

$Class* AuthResources_de::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_de, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_de",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_de, name, initialize, &classInfo$$, AuthResources_de::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_de);
	});
	return class$;
}

$Class* AuthResources_de::class$ = nullptr;

		} // util
	} // security
} // sun