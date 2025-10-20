#include <sun/security/util/Resources_ja.h>

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

$FieldInfo _Resources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
	{}
};

$MethodInfo _Resources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ja::*)()>(&Resources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ja_FieldInfo_,
	_Resources_ja_MethodInfo_
};

$Object* allocate$Resources_ja($Class* clazz) {
	return $of($alloc(Resources_ja));
}

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void clinit$Resources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"null\u306e\u5165\u529b\u306f\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"\u30a2\u30af\u30b7\u30e7\u30f3\u306f\'\u8aad\u8fbc\u307f\'\u306e\u307f\u53ef\u80fd\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"\u30a2\u30af\u30bb\u30b9\u6a29\u540d[{0}]\u306e\u69cb\u6587\u304c\u7121\u52b9\u3067\u3059: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"Credential\u30af\u30e9\u30b9\u306e\u6b21\u306bPrincipal\u30af\u30e9\u30b9\u304a\u3088\u3073\u540d\u524d\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"Principal\u30af\u30e9\u30b9\u306e\u6b21\u306b\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u540d\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u540d\u306f\u5f15\u7528\u7b26\u3067\u56f2\u3080\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u540d\u306e\u6700\u5f8c\u306b\u5f15\u7528\u7b26\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u540d\u304c\u30ef\u30a4\u30eb\u30c9\u30ab\u30fc\u30c9(*)\u5024\u3067\u306a\u3044\u5834\u5408\u3001PrivateCredentialPermission\u306ePrincipal\u30af\u30e9\u30b9\u3092\u30ef\u30a4\u30eb\u30c9\u30ab\u30fc\u30c9(*)\u5024\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\tPrincipal\u30af\u30e9\u30b9={0}\n\t\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u540d={1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"null\u306e\u540d\u524d\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"null\u306e\u30ad\u30fc\u30ef\u30fc\u30c9\u30fb\u30de\u30c3\u30d7\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"null\u306eOID\u30de\u30c3\u30d7\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"\u7121\u52b9\u306anull AccessControlContext\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"\u7121\u52b9\u306anull\u30a2\u30af\u30b7\u30e7\u30f3\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"\u7121\u52b9\u306anull\u30af\u30e9\u30b9\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"\u30b5\u30d6\u30b8\u30a7\u30af\u30c8:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of(u"\t\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t\u516c\u958b\u8cc7\u683c: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t\u975e\u516c\u958b\u8cc7\u683c\u306b\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t\u975e\u516c\u958b\u8cc7\u683c: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t\u975e\u516c\u958b\u8cc7\u683c\u306b\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"\u30b5\u30d6\u30b8\u30a7\u30af\u30c8\u306f\u8aad\u53d6\u308a\u5c02\u7528\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"java.security.Principal\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3067\u306f\u306a\u3044\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u3092\u3001\u30b5\u30d6\u30b8\u30a7\u30af\u30c8\u306e\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u30fb\u30bb\u30c3\u30c8\u306b\u8ffd\u52a0\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"{0}\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3067\u306f\u306a\u3044\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u3092\u8ffd\u52a0\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"\u7121\u52b9\u306anull\u5165\u529b: \u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"{0}\u7528\u306b\u69cb\u6210\u3055\u308c\u305fLoginModules\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"\u7121\u52b9\u306anull\u30b5\u30d6\u30b8\u30a7\u30af\u30c8\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"\u7121\u52b9\u306anull CallbackHandler\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"null\u30b5\u30d6\u30b8\u30a7\u30af\u30c8 - \u30ed\u30b0\u30a4\u30f3\u3059\u308b\u524d\u306b\u30ed\u30b0\u30a2\u30a6\u30c8\u304c\u547c\u3073\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"LoginModule {0}\u306f\u5f15\u6570\u3092\u53d6\u3089\u306a\u3044\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3092\u6307\u5b9a\u3067\u304d\u306a\u3044\u305f\u3081\u3001\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"LoginModule\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"LoginModule\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"LoginModule\u30af\u30e9\u30b9\u3092\u691c\u51fa\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"LoginModule\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"\u30ed\u30b0\u30a4\u30f3\u5931\u6557: \u3059\u3079\u3066\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u306f\u7121\u8996\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: {0}\u306e\u69cb\u6587\u89e3\u6790\u30a8\u30e9\u30fc:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: \u30a2\u30af\u30bb\u30b9\u6a29{0}\u306e\u8ffd\u52a0\u30a8\u30e9\u30fc:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: \u30a8\u30f3\u30c8\u30ea\u306e\u8ffd\u52a0\u30a8\u30e9\u30fc:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"\u5225\u540d\u306e\u6307\u5b9a\u304c\u3042\u308a\u307e\u305b\u3093({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"\u5225\u540d{0}\u306b\u5bfe\u3057\u3066\u7f6e\u63db\u64cd\u4f5c\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"\u7f6e\u63db\u5024{0}\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
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
			$of(u"\u5165\u529b\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u3092\u6307\u5b9a\u3057\u306a\u3044\u5834\u5408\u3001keystorePasswordURL\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"\u4e88\u60f3\u3055\u308c\u305f\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"\u4e88\u60f3\u3055\u308c\u305f\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"\u8907\u6570\u306eCodebase\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"\u8907\u6570\u306eSignedBy\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"\u91cd\u8907\u3059\u308b\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30c9\u30e1\u30a4\u30f3\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"\u91cd\u8907\u3059\u308b\u30ad\u30fc\u30b9\u30c8\u30a2\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy\u306f\u7a7a\u306e\u5225\u540d\u3092\u4fdd\u6301\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"\u30ef\u30a4\u30eb\u30c9\u30ab\u30fc\u30c9\u540d\u306e\u306a\u3044\u30ef\u30a4\u30eb\u30c9\u30ab\u30fc\u30c9\u30fb\u30af\u30e9\u30b9\u3092\u4f7f\u7528\u3057\u3066\u3001\u30d7\u30ea\u30f3\u30b7\u30d1\u30eb\u3092\u6307\u5b9a\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"\u4e88\u60f3\u3055\u308c\u305fcodeBase\u3001SignedBy\u307e\u305f\u306fPrincipal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"\u4e88\u60f3\u3055\u308c\u305f\u30a2\u30af\u30bb\u30b9\u6a29\u30a8\u30f3\u30c8\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"\u6570 "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"[{0}]\u3067\u306f\u306a\u304f[\u30d5\u30a1\u30a4\u30eb\u306e\u7d42\u308f\u308a]\u304c\u8aad\u307f\u8fbc\u307e\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"[;]\u3067\u306f\u306a\u304f[\u30d5\u30a1\u30a4\u30eb\u306e\u7d42\u308f\u308a]\u304c\u8aad\u307f\u8fbc\u307e\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"\u884c{0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"\u884c{0}: [{1}]\u3067\u306f\u306a\u304f[{2}]\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"null\u306eprincipalClass\u307e\u305f\u306fprincipalName"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11\u30c8\u30fc\u30af\u30f3[{0}]\u30d1\u30b9\u30ef\u30fc\u30c9: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"\u30b5\u30d6\u30b8\u30a7\u30af\u30c8\u30fb\u30d9\u30fc\u30b9\u306e\u30dd\u30ea\u30b7\u30fc\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$loadClass(Resources_ja, name, initialize, &_Resources_ja_ClassInfo_, clinit$Resources_ja, allocate$Resources_ja);
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

		} // util
	} // security
} // sun