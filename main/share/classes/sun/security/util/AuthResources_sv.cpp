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

$FieldInfo _AuthResources_sv_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_sv, contents)},
	{}
};

$MethodInfo _AuthResources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_sv::*)()>(&AuthResources_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_sv_FieldInfo_,
	_AuthResources_sv_MethodInfo_
};

$Object* allocate$AuthResources_sv($Class* clazz) {
	return $of($alloc(AuthResources_sv));
}

$ObjectArray2* AuthResources_sv::contents = nullptr;

void AuthResources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_sv::getContents() {
	return AuthResources_sv::contents;
}

void clinit$AuthResources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_sv::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of("ogiltiga null-indata: {0}"_s)
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
			$of(u"Ogiltigt NTSid-v\u00e4rde"_s)
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
			$of(u"UnixNumericGroupPrincipal [prim\u00e4r grupp]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [till\u00e4ggsgrupp]: {0}"_s)
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
			$of(u"Kan inte ut\u00f6ka korrekt {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (det finns ingen s\u00e5dan fil eller katalog)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of("Konfigurationsfel:\n\tFilen eller katalogen finns inte"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of("Konfigurationsfel:\n\tOgiltig kontrollflagga, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Konfigurationsfel:\n\tKan inte ange flera poster f\u00f6r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"Konfigurationsfel:\n\tf\u00f6rv\u00e4ntade [{0}], l\u00e4ste [filslut]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"Konfigurationsfel:\n\tRad {0}: f\u00f6rv\u00e4ntade [{1}], hittade [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"Konfigurationsfel:\n\tRad {0}: f\u00f6rv\u00e4ntade [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"Konfigurationsfel:\n\tRad {0}: systemegenskapen [{1}] ut\u00f6kad till tomt v\u00e4rde"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"anv\u00e4ndarnamn: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"l\u00f6senord: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of("Ange nyckellagerinformation"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of("Nyckellageralias: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"Nyckellagerl\u00f6senord: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"L\u00f6senord f\u00f6r personlig nyckel (valfritt): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos-anv\u00e4ndarnamn [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"Kerberos-l\u00f6senord f\u00f6r {0}: "_s)
		})
	}));
}

AuthResources_sv::AuthResources_sv() {
}

$Class* AuthResources_sv::load$($String* name, bool initialize) {
	$loadClass(AuthResources_sv, name, initialize, &_AuthResources_sv_ClassInfo_, clinit$AuthResources_sv, allocate$AuthResources_sv);
	return class$;
}

$Class* AuthResources_sv::class$ = nullptr;

		} // util
	} // security
} // sun