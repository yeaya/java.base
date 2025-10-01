#include <sun/security/util/AuthResources_ja.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AuthResources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ja, contents)},
	{}
};

$MethodInfo _AuthResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_ja::*)()>(&AuthResources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_ja_FieldInfo_,
	_AuthResources_ja_MethodInfo_
};

$Object* allocate$AuthResources_ja($Class* clazz) {
	return $of($alloc(AuthResources_ja));
}

$ObjectArray2* AuthResources_ja::contents = nullptr;

void AuthResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ja::getContents() {
	return AuthResources_ja::contents;
}

void clinit$AuthResources_ja($Class* class$) {
	$assignStatic(AuthResources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"\u7121\u52b9\u306anull\u306e\u5165\u529b: {0}"_s)
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
			$of(u"\u7121\u52b9\u306aNTSid\u5024"_s)
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
			$of(u"UnixNumericGroupPrincipal [\u4e3b\u30b0\u30eb\u30fc\u30d7]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [\u88dc\u52a9\u30b0\u30eb\u30fc\u30d7]: {0}"_s)
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
			$of(u"{0}\u3092\u6b63\u3057\u304f\u5c55\u958b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0}(\u6307\u5b9a\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5b58\u5728\u3057\u307e\u305b\u3093)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t\u6307\u5b9a\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t\u7121\u52b9\u306a\u5236\u5fa1\u30d5\u30e9\u30b0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t{0}\u306b\u8907\u6570\u306e\u30a8\u30f3\u30c8\u30ea\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t[{0}]\u3067\u306f\u306a\u304f\u3001[\u30d5\u30a1\u30a4\u30eb\u306e\u7d42\u308f\u308a]\u304c\u8aad\u307f\u8fbc\u307e\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t\u884c{0}: [{1}]\u3067\u306f\u306a\u304f\u3001[{2}]\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t\u884c{0}: [{1}]\u304c\u8981\u6c42\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"\u69cb\u6210\u30a8\u30e9\u30fc:\n\t\u884c{0}: \u30b7\u30b9\u30c6\u30e0\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3[{1}]\u304c\u7a7a\u306e\u5024\u306b\u5c55\u958b\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"\u30e6\u30fc\u30b6\u30fc\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u60c5\u5831\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u5225\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"\u79d8\u5bc6\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9(\u30aa\u30d7\u30b7\u30e7\u30f3): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos\u30e6\u30fc\u30b6\u30fc\u540d[{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"{0}\u306eKerberos\u30d1\u30b9\u30ef\u30fc\u30c9: "_s)
		})
	}));
}

AuthResources_ja::AuthResources_ja() {
}

$Class* AuthResources_ja::load$($String* name, bool initialize) {
	$loadClass(AuthResources_ja, name, initialize, &_AuthResources_ja_ClassInfo_, clinit$AuthResources_ja, allocate$AuthResources_ja);
	return class$;
}

$Class* AuthResources_ja::class$ = nullptr;

		} // util
	} // security
} // sun