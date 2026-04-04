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

$ObjectArray2* AuthResources::contents = nullptr;

void AuthResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources::getContents() {
	return AuthResources::contents;
}

void AuthResources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			"invalid null input: {0}"_s
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
			"Invalid NTSid value"_s
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
			"UnixNumericGroupPrincipal [Primary Group]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			"UnixNumericGroupPrincipal [Supplementary Group]: {0}"_s
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
			"Unable to properly expand {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			"{0} (No such file or directory)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			"Configuration Error:\n\tNo such file or directory"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			"Configuration Error:\n\tInvalid control flag, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			"Configuration Error:\n\tCan not specify multiple entries for {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			"Configuration Error:\n\texpected [{0}], read [end of file]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			"Configuration Error:\n\tLine {0}: expected [{1}], found [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			"Configuration Error:\n\tLine {0}: expected [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			"Configuration Error:\n\tLine {0}: system property [{1}] expanded to empty value"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			"username: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			"password: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			"Please enter keystore information"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			"Keystore alias: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			"Keystore password: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			"Private key password (optional): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			"Kerberos username [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			"Kerberos password for {0}: "_s
		})
	}));
}

AuthResources::AuthResources() {
}

$Class* AuthResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources, name, initialize, &classInfo$$, AuthResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources);
	});
	return class$;
}

$Class* AuthResources::class$ = nullptr;

		} // util
	} // security
} // sun