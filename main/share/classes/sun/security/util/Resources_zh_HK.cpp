#include <sun/security/util/Resources_zh_HK.h>

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

$FieldInfo _Resources_zh_HK_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_HK, contents)},
	{}
};

$MethodInfo _Resources_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_zh_HK::*)()>(&Resources_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_zh_HK_FieldInfo_,
	_Resources_zh_HK_MethodInfo_
};

$Object* allocate$Resources_zh_HK($Class* clazz) {
	return $of($alloc(Resources_zh_HK));
}

$ObjectArray2* Resources_zh_HK::contents = nullptr;

void Resources_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_HK::getContents() {
	return Resources_zh_HK::contents;
}

void clinit$Resources_zh_HK($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_zh_HK::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"\u7121\u6548\u7a7a\u503c\u8f38\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"\u52d5\u4f5c\u53ea\u80fd\u88ab\u300c\u8b80\u53d6\u300d"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"\u6b0a\u9650\u540d\u7a31 [{0}] \u662f\u7121\u6548\u7684\u8a9e\u6cd5: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"Credential \u985e\u5225\u5f8c\u9762\u4e0d\u662f Principal \u985e\u5225\u53ca\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"Principal \u985e\u5225\u5f8c\u9762\u4e0d\u662f Principal \u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"Principal \u540d\u7a31\u5fc5\u9808\u4ee5\u5f15\u865f\u5708\u4f4f"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"Principal \u540d\u7a31\u7f3a\u5c11\u4e0b\u5f15\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"\u5982\u679c Principal \u540d\u7a31\u4e0d\u662f\u4e00\u500b\u842c\u7528\u5b57\u5143 (*) \u503c\uff0c\u90a3\u9ebc PrivateCredentialPermission Principal \u985e\u5225\u5c31\u4e0d\u80fd\u662f\u842c\u7528\u5b57\u5143 (*) \u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\tPrincipal \u985e\u5225 = {0}\n\tPrincipal \u540d\u7a31 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"\u63d0\u4f9b\u7a7a\u503c\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"\u63d0\u4f9b\u7a7a\u503c\u95dc\u9375\u5b57\u5c0d\u6620"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"\u63d0\u4f9b\u7a7a\u503c OID \u5c0d\u6620"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"\u63d0\u4f9b\u7121\u6548\u7684\u7a7a\u503c AccessControlContext"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"\u63d0\u4f9b\u7121\u6548\u7684\u7a7a\u503c\u52d5\u4f5c"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"\u63d0\u4f9b\u7121\u6548\u7684\u7a7a\u503c\u985e\u5225"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"\u4e3b\u984c:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t\u516c\u7528\u8b49\u660e\u8cc7\u6599: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t\u79c1\u4eba\u8b49\u660e\u8cc7\u6599\u7121\u6cd5\u5b58\u53d6\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t\u79c1\u4eba\u8b49\u660e\u8cc7\u6599: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t\u79c1\u4eba\u8b49\u660e\u8cc7\u6599\u7121\u6cd5\u5b58\u53d6\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"\u4e3b\u984c\u70ba\u552f\u8b80"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"\u8a66\u5716\u65b0\u589e\u4e00\u500b\u975e java.security.Principal \u57f7\u884c\u8655\u7406\u7684\u7269\u4ef6\u81f3\u4e3b\u984c\u7684 Principal \u7fa4\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"\u8a66\u5716\u65b0\u589e\u4e00\u500b\u975e {0} \u57f7\u884c\u8655\u7406\u7684\u7269\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"\u7121\u6548\u7a7a\u503c\u8f38\u5165: \u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"\u7121\u91dd\u5c0d {0} \u8a2d\u5b9a\u7684 LoginModules"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"\u63d0\u4f9b\u7121\u6548\u7a7a\u503c\u4e3b\u984c"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"\u63d0\u4f9b\u7121\u6548\u7a7a\u503c CallbackHandler"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"\u7a7a\u503c\u4e3b\u984c - \u5728\u767b\u5165\u4e4b\u524d\u5373\u547c\u53eb\u767b\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"\u7121\u6cd5\u5275\u8a2d LoginModule\uff0c{0}\uff0c\u56e0\u70ba\u5b83\u4e26\u672a\u63d0\u4f9b\u975e\u5f15\u6578\u7684\u5efa\u69cb\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"\u627e\u4e0d\u5230 LoginModule \u985e\u5225: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"\u7121\u6cd5\u5b58\u53d6 LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"\u767b\u5165\u5931\u6557: \u5ffd\u7565\u6240\u6709\u6a21\u7d44"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: \u5256\u6790\u932f\u8aa4 {0}: \n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: \u65b0\u589e\u6b0a\u9650\u932f\u8aa4 {0}: \n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: \u65b0\u589e\u9805\u76ee\u932f\u8aa4: \n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"\u672a\u63d0\u4f9b\u5225\u540d\u540d\u7a31 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"\u7121\u6cd5\u5c0d\u5225\u540d\u57f7\u884c\u66ff\u63db\uff0c{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"\u4e0d\u652f\u63f4\u7684\u66ff\u63db\u503c\uff0c{0}"_s)
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
			$of(u"\u8f38\u5165\u4e0d\u80fd\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"\u6307\u5b9a keystorePasswordURL \u9700\u8981\u540c\u6642\u6307\u5b9a\u91d1\u9470\u5132\u5b58\u5eab"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"\u9810\u671f\u7684\u91d1\u9470\u5132\u5b58\u5eab\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"\u9810\u671f\u7684\u91d1\u9470\u5132\u5b58\u5eab\u63d0\u4f9b\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"\u591a\u91cd Codebase \u8868\u793a\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"\u591a\u91cd SignedBy \u8868\u793a\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"\u91cd\u8907\u7684\u91d1\u9470\u5132\u5b58\u5eab\u7db2\u57df\u540d\u7a31: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"\u91cd\u8907\u7684\u91d1\u9470\u5132\u5b58\u5eab\u540d\u7a31: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy \u6709\u7a7a\u5225\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"\u6c92\u6709\u842c\u7528\u5b57\u5143\u540d\u7a31\uff0c\u7121\u6cd5\u6307\u5b9a\u542b\u6709\u842c\u7528\u5b57\u5143\u985e\u5225\u7684 Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"\u9810\u671f\u7684 codeBase \u6216 SignedBy \u6216 Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"\u9810\u671f\u7684\u6b0a\u9650\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"\u865f\u78bc "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"\u9810\u671f\u7684 [{0}], \u8b80\u53d6 [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"\u9810\u671f\u7684 [;], \u8b80\u53d6 [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"\u884c {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"\u884c {0}: \u9810\u671f\u7684 [{1}]\uff0c\u767c\u73fe [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"\u7a7a\u503c principalClass \u6216 principalName"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11 \u8a18\u865f [{0}] \u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb\u4e3b\u984c\u5f0f\u7684\u539f\u5247"_s)
		})
	}));
}

Resources_zh_HK::Resources_zh_HK() {
}

$Class* Resources_zh_HK::load$($String* name, bool initialize) {
	$loadClass(Resources_zh_HK, name, initialize, &_Resources_zh_HK_ClassInfo_, clinit$Resources_zh_HK, allocate$Resources_zh_HK);
	return class$;
}

$Class* Resources_zh_HK::class$ = nullptr;

		} // util
	} // security
} // sun