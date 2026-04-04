#include <sun/security/util/AuthResources_sv.h>
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

$ObjectArray2* AuthResources_sv::contents = nullptr;

void AuthResources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_sv::getContents() {
	return AuthResources_sv::contents;
}

void AuthResources_sv::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_sv::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			"ogiltiga null-indata: {0}"_s
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
			u"Ogiltigt NTSid-värde"_s
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
			u"UnixNumericGroupPrincipal [primär grupp]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [tilläggsgrupp]: {0}"_s
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
			u"Kan inte utöka korrekt {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0} (det finns ingen sådan fil eller katalog)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			"Konfigurationsfel:\n\tFilen eller katalogen finns inte"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			"Konfigurationsfel:\n\tOgiltig kontrollflagga, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Konfigurationsfel:\n\tKan inte ange flera poster för {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"Konfigurationsfel:\n\tförväntade [{0}], läste [filslut]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"Konfigurationsfel:\n\tRad {0}: förväntade [{1}], hittade [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"Konfigurationsfel:\n\tRad {0}: förväntade [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"Konfigurationsfel:\n\tRad {0}: systemegenskapen [{1}] utökad till tomt värde"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"användarnamn: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"lösenord: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			"Ange nyckellagerinformation"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			"Nyckellageralias: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"Nyckellagerlösenord: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"Lösenord för personlig nyckel (valfritt): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Kerberos-användarnamn [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"Kerberos-lösenord för {0}: "_s
		})
	}));
}

AuthResources_sv::AuthResources_sv() {
}

$Class* AuthResources_sv::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_sv, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_sv",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_sv, name, initialize, &classInfo$$, AuthResources_sv::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_sv);
	});
	return class$;
}

$Class* AuthResources_sv::class$ = nullptr;

		} // util
	} // security
} // sun