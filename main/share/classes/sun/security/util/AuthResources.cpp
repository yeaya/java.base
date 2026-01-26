#include <sun/security/util/AuthResources.h>

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

$FieldInfo _AuthResources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources, contents)},
	{}
};

$MethodInfo _AuthResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _AuthResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_FieldInfo_,
	_AuthResources_MethodInfo_
};

$Object* allocate$AuthResources($Class* clazz) {
	return $of($alloc(AuthResources));
}

$ObjectArray2* AuthResources::contents = nullptr;

void AuthResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources::getContents() {
	return AuthResources::contents;
}

void clinit$AuthResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of("invalid null input: {0}"_s)
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
			$of("Invalid NTSid value"_s)
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
			$of("UnixNumericGroupPrincipal [Primary Group]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Supplementary Group]: {0}"_s)
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
			$of("Unable to properly expand {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of("{0} (No such file or directory)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of("Configuration Error:\n\tNo such file or directory"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of("Configuration Error:\n\tInvalid control flag, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of("Configuration Error:\n\tCan not specify multiple entries for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of("Configuration Error:\n\texpected [{0}], read [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of("Configuration Error:\n\tLine {0}: expected [{1}], found [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of("Configuration Error:\n\tLine {0}: expected [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of("Configuration Error:\n\tLine {0}: system property [{1}] expanded to empty value"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of("username: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of("password: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of("Please enter keystore information"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of("Keystore alias: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of("Keystore password: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of("Private key password (optional): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of("Kerberos username [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of("Kerberos password for {0}: "_s)
		})
	}));
}

AuthResources::AuthResources() {
}

$Class* AuthResources::load$($String* name, bool initialize) {
	$loadClass(AuthResources, name, initialize, &_AuthResources_ClassInfo_, clinit$AuthResources, allocate$AuthResources);
	return class$;
}

$Class* AuthResources::class$ = nullptr;

		} // util
	} // security
} // sun